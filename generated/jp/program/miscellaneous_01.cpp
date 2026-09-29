// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/misc/atm_deposit.asm (source_named).
bool execute_miscellaneous_atm_deposit_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/atm_deposit.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC226E9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    case 0xC226EB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    case 0xC226EC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    case 0xC226ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC226ED.
    case 0xC226EF: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    case 0xC226F0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:9 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC226F1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:9 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC226F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:9 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC226F5: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:9 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC226F7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC226F9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC226FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC226FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC226FF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:11 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22701: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:11 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22703: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:11 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22705: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:11 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22707: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:12 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL0A
    case 0xC22709: cpu.execute_instruction<0xAD>(0x009AE6, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:12 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL0A
    case 0xC2270C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:12 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL0A
    case 0xC2270E: cpu.execute_instruction<0xAD>(0x009AE8, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:12 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL0A
    case 0xC22711: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/atm_deposit.asm:13 CLC
    case 0xC22713: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22714: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22716: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22718: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2271A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2271C: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2271E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    case 0xC22720: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00967F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC22720.
    case 0xC22722: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    case 0xC22723: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC22722.
    case 0xC22724: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    case 0xC22725: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x000098, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC22724.
    case 0xC22726: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC22725.
    case 0xC22727: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    case 0xC22728: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/atm_deposit.asm:16 CLC
    case 0xC2272A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/atm_deposit.asm:17 LDA @VIRTUAL0A
    case 0xC2272B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/misc/atm_deposit.asm:18 SBC @VIRTUAL06
    case 0xC2272D: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/misc/atm_deposit.asm:19 LDA @VIRTUAL0A+2
    case 0xC2272F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/misc/atm_deposit.asm:20 SBC @VIRTUAL06+2
    case 0xC22731: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/atm_deposit.asm:21 BRANCHGTS @UNKNOWN2
    case 0xC22733: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/atm_deposit.asm:21 BRANCHGTS @UNKNOWN2
    case 0xC22735: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/atm_deposit.asm:21 BRANCHGTS @UNKNOWN2
    case 0xC22737: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/atm_deposit.asm:21 BRANCHGTS @UNKNOWN2
    case 0xC22739: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2273B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2273D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2273F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC22741: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:24 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::bank_balance
    case 0xC22743: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:24 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::bank_balance
    case 0xC22745: cpu.execute_instruction<0x8D>(0x009AE6, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:24 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::bank_balance
    case 0xC22748: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:24 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::bank_balance
    case 0xC2274A: cpu.execute_instruction<0x8D>(0x009AE8, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:25 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC2274D: cpu.execute_instruction<0xAD>(0x009AE6, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:25 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC22750: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:25 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC22752: cpu.execute_instruction<0xAD>(0x009AE8, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:25 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC22755: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/atm_deposit.asm:26 SEC
    case 0xC22757: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22758: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2275A: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2275C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2275E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22760: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22762: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:28 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22764: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:28 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22766: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:28 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22768: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:28 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC2276A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/atm_deposit.asm:29 SEC
    case 0xC2276C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2276D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2276F: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC22771: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC22773: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC22775: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC22777: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:31 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22779: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:31 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2277B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:31 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2277D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:31 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2277F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/atm_deposit.asm:32 END_C_FUNCTION
    case 0xC22781: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/atm_deposit.asm:32 END_C_FUNCTION
    case 0xC22782: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/atm_withdraw.asm (source_named).
bool execute_miscellaneous_atm_withdraw_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/atm_withdraw.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC22783: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    case 0xC22785: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    case 0xC22786: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    case 0xC22787: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC22787.
    case 0xC22789: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    case 0xC2278A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_withdraw.asm:7 MOVE_INT @PARAM00, $0A
    case 0xC2278B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_withdraw.asm:7 MOVE_INT @PARAM00, $0A
    case 0xC2278D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_withdraw.asm:7 MOVE_INT @PARAM00, $0A
    case 0xC2278F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_withdraw.asm:7 MOVE_INT @PARAM00, $0A
    case 0xC22791: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/atm_withdraw.asm:8 LDY #.LOWORD(GAME_STATE) + game_state::bank_balance
    case 0xC22793: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E6, 2); else cpu.execute_instruction<0xA0>(0x009AE6, 3); return true;
    // src/misc/atm_withdraw.asm:8 LDY #.LOWORD(GAME_STATE) + game_state::bank_balance
    // Overlapping static entry reached from 0xC22793.
    case 0xC22795: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/atm_withdraw.asm:9 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC22796: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/atm_withdraw.asm:9 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC22799: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/atm_withdraw.asm:9 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC2279B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/atm_withdraw.asm:9 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC2279E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/atm_withdraw.asm:10 CLC
    case 0xC227A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/atm_withdraw.asm:11 LDA $0A
    case 0xC227A1: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/misc/atm_withdraw.asm:12 SBC $06
    case 0xC227A3: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/misc/atm_withdraw.asm:13 LDA $0C
    case 0xC227A5: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/misc/atm_withdraw.asm:14 SBC $08
    case 0xC227A7: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // src/misc/atm_withdraw.asm:15 BCS WITHDRAW_FROM_ATM_INSUFFICIENT_FUNDS
    case 0xC227A9: cpu.execute_instruction<0xB0>(0x000017, 2); return true;
    // src/misc/atm_withdraw.asm:16 SEC
    case 0xC227AB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC227AC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC227AE: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC227B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC227B2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC227B4: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC227B6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/atm_withdraw.asm:18 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC227B8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/atm_withdraw.asm:18 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC227BA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/atm_withdraw.asm:18 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC227BD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/atm_withdraw.asm:18 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC227BF: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/atm_withdraw.asm:20 PLD
    case 0xC227C2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/atm_withdraw.asm:21 RTL
    case 0xC227C3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/do_battlebg_dma.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_do_battlebg_dma_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/battlebgs/do_battlebg_dma.asm:3 PHY
    case 0xC0AD91: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:4 TAY
    case 0xC0AD92: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:5 LDA f:DMA_TARGET_REGISTERS,X
    case 0xC0AD93: cpu.execute_instruction<0xBF>(0xC0ADFC, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:6 PHA
    case 0xC0AD97: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:7 TYA
    case 0xC0AD98: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:8 ASL
    case 0xC0AD99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:9 ASL
    case 0xC0AD9A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:10 ASL
    case 0xC0AD9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:11 ASL
    case 0xC0AD9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:12 TAX
    case 0xC0AD9D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AD9E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:14 LDA #^__BSS_START__
    case 0xC0ADA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009F7E, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:15 STA f:A1B0,X
    case 0xC0ADA2: cpu.execute_instruction<0x9F>(0x004304, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:15 STA f:A1B0,X
    // Overlapping static entry reached from 0xC0ADA0.
    case 0xC0ADA3: cpu.execute_instruction<0x04>(0x000043, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:15 STA f:A1B0,X
    // Overlapping static entry reached from 0xC0ADA3.
    case 0xC0ADA5: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:16 STA f:DASB0,X
    case 0xC0ADA6: cpu.execute_instruction<0x9F>(0x004307, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:17 PLA
    case 0xC0ADAA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:18 STA f:BBAD0,X
    case 0xC0ADAB: cpu.execute_instruction<0x9F>(0x004301, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:19 PLA
    case 0xC0ADAF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:20 LDA #$42
    case 0xC0ADB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000042, 2); else cpu.execute_instruction<0xA9>(0x009F42, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:21 STA f:DMAP0,X
    case 0xC0ADB2: cpu.execute_instruction<0x9F>(0x004300, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:21 STA f:DMAP0,X
    // Overlapping static entry reached from 0xC0ADB0.
    case 0xC0ADB3: cpu.execute_instruction<0x00>(0x000043, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC0ADB6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:23 PLA
    case 0xC0ADB8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:24 PHX
    case 0xC0ADB9: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:25 BNE @UNKNOWN1
    case 0xC0ADBA: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:26 LDX #$0006
    case 0xC0ADBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:26 LDX #$0006
    // Overlapping static entry reached from 0xC0ADBC.
    case 0xC0ADBE: cpu.execute_instruction<0x00>(0x0000BF, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:28 LDA f:UNKNOWN_C0AE26,X
    case 0xC0ADBF: cpu.execute_instruction<0xBF>(0xC0AE05, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:29 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_TABLE,X
    case 0xC0ADC3: cpu.execute_instruction<0x9D>(0x003FB8, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:30 DEX
    case 0xC0ADC6: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:31 DEX
    case 0xC0ADC7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:32 BPL @UNKNOWN0
    case 0xC0ADC8: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:33 LDA #.LOWORD(ANIMATED_BACKGROUND_LAYER_1_HDMA_TABLE)
    case 0xC0ADCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x003FB8, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:33 LDA #.LOWORD(ANIMATED_BACKGROUND_LAYER_1_HDMA_TABLE)
    // Overlapping static entry reached from 0xC0ADCA.
    case 0xC0ADCC: cpu.execute_instruction<0x3F>(0xA21180, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:34 BRA @UNKNOWN3
    case 0xC0ADCD: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:36 LDX #6
    case 0xC0ADCF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:36 LDX #6
    // Overlapping static entry reached from 0xC0ADCC.
    case 0xC0ADD0: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:36 LDX #6
    // Overlapping static entry reached from 0xC0ADCF.
    case 0xC0ADD1: cpu.execute_instruction<0x00>(0x0000BF, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:38 LDA f:UNKNOWN_C0AE2D,X
    case 0xC0ADD2: cpu.execute_instruction<0xBF>(0xC0AE0C, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:39 STA ANIMATED_BACKGROUND_LAYER_2_HDMA_TABLE,X
    case 0xC0ADD6: cpu.execute_instruction<0x9D>(0x003FC2, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:40 DEX
    case 0xC0ADD9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:41 DEX
    case 0xC0ADDA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:42 BPL @UNKNOWN2
    case 0xC0ADDB: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:43 LDA #.LOWORD(ANIMATED_BACKGROUND_LAYER_2_HDMA_TABLE)
    case 0xC0ADDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x003FC2, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:43 LDA #.LOWORD(ANIMATED_BACKGROUND_LAYER_2_HDMA_TABLE)
    // Overlapping static entry reached from 0xC0ADDD.
    case 0xC0ADDF: cpu.execute_instruction<0x3F>(0x029FFA, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:45 PLX
    case 0xC0ADE0: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:46 STA f:A1T0L,X
    case 0xC0ADE1: cpu.execute_instruction<0x9F>(0x004302, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:46 STA f:A1T0L,X
    // Overlapping static entry reached from 0xC0ADDF.
    case 0xC0ADE3: cpu.execute_instruction<0x43>(0x000000, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ADE5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:48 TYX
    case 0xC0ADE7: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:49 LDA HDMAEN_MIRROR
    case 0xC0ADE8: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:50 ORA f:DMA_FLAGS,X
    case 0xC0ADEB: cpu.execute_instruction<0x1F>(0xC0ADF5, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:51 STA HDMAEN_MIRROR
    case 0xC0ADEF: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC0ADF2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:53 RTL
    case 0xC0ADF4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/generate_frame.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_generate_frame_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/battlebgs/generate_frame.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC2C8E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C8E9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C8EA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C8EB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C8EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E1, 2); else cpu.execute_instruction<0x69>(0x00FFE1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C8EC.
    case 0xC2C8EE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C8EF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C8F0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:18 STX @LOCAL08
    case 0xC2C8F1: cpu.execute_instruction<0x86>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:18 STX @LOCAL08
    // Overlapping static entry reached from 0xC2C8EE.
    case 0xC2C8F2: cpu.execute_instruction<0x1D>(0x001B85, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:19 STA @LOCAL07
    case 0xC2C8F3: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:20 LDA (@LOCAL07)
    case 0xC2C8F5: cpu.execute_instruction<0xB2>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:21 AND #$00FF
    case 0xC2C8F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2C8F7.
    case 0xC2C8F9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:22 STA @LOCAL06
    case 0xC2C8FA: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:23 LDY #loaded_bg_data::freeze_palette_scrolling
    case 0xC2C8FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:23 LDY #loaded_bg_data::freeze_palette_scrolling
    // Overlapping static entry reached from 0xC2C8FC.
    case 0xC2C8FE: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:24 LDA (@LOCAL07),Y
    case 0xC2C8FF: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:25 AND #$00FF
    case 0xC2C901: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC2C901.
    case 0xC2C903: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:26 BNEL @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2C904: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:26 BNEL @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2C906: cpu.execute_instruction<0x4C>(0x00CD40, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:27 LDA @LOCAL07
    case 0xC2C909: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:28 CLC
    case 0xC2C90B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:29 ADC #loaded_bg_data::palette_change_duration_left
    case 0xC2C90C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:29 ADC #loaded_bg_data::palette_change_duration_left
    // Overlapping static entry reached from 0xC2C90C.
    case 0xC2C90E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:30 TAX
    case 0xC2C90F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C910: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:32 LDA __BSS_START__,X
    case 0xC2C912: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:33 STA @LOCAL05
    case 0xC2C915: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC2C917: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:35 AND #$00FF
    case 0xC2C919: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC2C919.
    case 0xC2C91B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:36 BEQL @UNKNOWN23
    case 0xC2C91C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:36 BEQL @UNKNOWN23
    case 0xC2C91E: cpu.execute_instruction<0x4C>(0x00CB68, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C921: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:38 LDA @LOCAL05
    case 0xC2C923: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:39 DEC
    case 0xC2C925: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:40 STA __BSS_START__,X
    case 0xC2C926: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC2C929: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:42 AND #$00FF
    case 0xC2C92B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC2C92B.
    case 0xC2C92D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:43 BNEL @UNKNOWN23
    case 0xC2C92E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:43 BNEL @UNKNOWN23
    case 0xC2C930: cpu.execute_instruction<0x4C>(0x00CB68, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:44 LDY #loaded_bg_data::palette_change_speed
    case 0xC2C933: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:44 LDY #loaded_bg_data::palette_change_speed
    // Overlapping static entry reached from 0xC2C933.
    case 0xC2C935: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C936: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:46 LDA (@LOCAL07),Y
    case 0xC2C938: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:47 STA __BSS_START__,X
    case 0xC2C93A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:48 LDY #loaded_bg_data::palette_shifting_style
    case 0xC2C93D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:48 LDY #loaded_bg_data::palette_shifting_style
    // Overlapping static entry reached from 0xC2C93D.
    case 0xC2C93F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC2C940: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:50 LDA (@LOCAL07),Y
    case 0xC2C942: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:51 AND #$00FF
    case 0xC2C944: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC2C944.
    case 0xC2C946: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:52 CMP #2
    case 0xC2C947: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:52 CMP #2
    // Overlapping static entry reached from 0xC2C947.
    case 0xC2C949: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:53 BEQ @PALETTE_SHIFTING_STYLE2
    case 0xC2C94A: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:54 CMP #1
    case 0xC2C94C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:54 CMP #1
    // Overlapping static entry reached from 0xC2C94C.
    case 0xC2C94E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:55 BEQL @PALETTE_SHIFTING_STYLE1
    case 0xC2C94F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:55 BEQL @PALETTE_SHIFTING_STYLE1
    case 0xC2C951: cpu.execute_instruction<0x4C>(0x00C9F5, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:56 CMP #3
    case 0xC2C954: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:56 CMP #3
    // Overlapping static entry reached from 0xC2C954.
    case 0xC2C956: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:57 BEQL @PALETTE_SHIFTING_STYLE3
    case 0xC2C957: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:57 BEQL @PALETTE_SHIFTING_STYLE3
    case 0xC2C959: cpu.execute_instruction<0x4C>(0x00CA93, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:58 JMP @PALETTE_SHIFTING_DONE
    case 0xC2C95C: cpu.execute_instruction<0x4C>(0x00CB5F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:60 LDY #loaded_bg_data::palette_cycle_2_last
    case 0xC2C95F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:60 LDY #loaded_bg_data::palette_cycle_2_last
    // Overlapping static entry reached from 0xC2C95F.
    case 0xC2C961: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C962: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:62 LDA (@LOCAL07),Y
    case 0xC2C964: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:63 LDY #loaded_bg_data::palette_cycle_2_first
    case 0xC2C966: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:63 LDY #loaded_bg_data::palette_cycle_2_first
    // Overlapping static entry reached from 0xC2C966.
    case 0xC2C968: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:64 SEC
    case 0xC2C969: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:65 SBC (@LOCAL07),Y
    case 0xC2C96A: cpu.execute_instruction<0xF1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC2C96C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:67 AND #$00FF
    case 0xC2C96E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC2C96E.
    case 0xC2C970: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:68 STA @VIRTUAL02
    case 0xC2C971: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:69 INC @VIRTUAL02
    case 0xC2C973: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:70 LDX #0
    case 0xC2C975: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:70 LDX #0
    // Overlapping static entry reached from 0xC2C975.
    case 0xC2C977: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:71 STX @LOCAL04
    case 0xC2C978: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:72 BRA @UNKNOWN9
    case 0xC2C97A: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:74 LDY #loaded_bg_data::palette_cycle_2_step
    case 0xC2C97C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:74 LDY #loaded_bg_data::palette_cycle_2_step
    // Overlapping static entry reached from 0xC2C97C.
    case 0xC2C97E: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:75 LDA (@LOCAL07),Y
    case 0xC2C97F: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:76 AND #$00FF
    case 0xC2C981: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC2C981.
    case 0xC2C983: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:77 STA @VIRTUAL04
    case 0xC2C984: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:78 TXA
    case 0xC2C986: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:79 CMP @VIRTUAL04
    case 0xC2C987: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:80 BCS @UNKNOWN7
    case 0xC2C989: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:81 TXA
    case 0xC2C98B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:82 CLC
    case 0xC2C98C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:83 ADC @VIRTUAL02
    case 0xC2C98D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:84 SEC
    case 0xC2C98F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:85 SBC @VIRTUAL04
    case 0xC2C990: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:86 STA @LOCAL03
    case 0xC2C992: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:87 BRA @UNKNOWN8
    case 0xC2C994: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:89 TXA
    case 0xC2C996: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:90 SEC
    case 0xC2C997: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:91 SBC @VIRTUAL04
    case 0xC2C998: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:92 STA @LOCAL03
    case 0xC2C99A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:94 LDY #loaded_bg_data::palette_cycle_2_first
    case 0xC2C99C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:94 LDY #loaded_bg_data::palette_cycle_2_first
    // Overlapping static entry reached from 0xC2C99C.
    case 0xC2C99E: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:95 LDA (@LOCAL07),Y
    case 0xC2C99F: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:96 AND #$00FF
    case 0xC2C9A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC2C9A1.
    case 0xC2C9A3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:97 TAY
    case 0xC2C9A4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:98 STY @LOCAL02
    case 0xC2C9A5: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:99 STX @VIRTUAL04
    case 0xC2C9A7: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:100 TYA
    case 0xC2C9A9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:101 CLC
    case 0xC2C9AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:102 ADC @VIRTUAL04
    case 0xC2C9AB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:103 ASL
    case 0xC2C9AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:104 LDY #loaded_bg_data::palette_pointer
    case 0xC2C9AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:104 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2C9AE.
    case 0xC2C9B0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:105 CLC
    case 0xC2C9B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:106 ADC (@LOCAL07),Y
    case 0xC2C9B2: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:107 PHA
    case 0xC2C9B4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:108 LDA @LOCAL03
    case 0xC2C9B5: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:109 STA @VIRTUAL04
    case 0xC2C9B7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:110 LDY @LOCAL02
    case 0xC2C9B9: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:111 TYA
    case 0xC2C9BB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:112 CLC
    case 0xC2C9BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:113 ADC @VIRTUAL04
    case 0xC2C9BD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:114 ASL
    case 0xC2C9BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:115 CLC
    case 0xC2C9C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:116 ADC @LOCAL07
    case 0xC2C9C1: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:117 TAX
    case 0xC2C9C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:118 LDA __BSS_START__+12,X
    case 0xC2C9C4: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:119 PLX
    case 0xC2C9C7: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:120 STA __BSS_START__,X
    case 0xC2C9C8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:121 LDX @LOCAL04
    case 0xC2C9CB: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:122 INX
    case 0xC2C9CD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:123 STX @LOCAL04
    case 0xC2C9CE: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:125 TXA
    case 0xC2C9D0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:126 CMP @VIRTUAL02
    case 0xC2C9D1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:127 BCC @UNKNOWN6
    case 0xC2C9D3: cpu.execute_instruction<0x90>(0x0000A7, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:128 LDA @LOCAL07
    case 0xC2C9D5: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:129 CLC
    case 0xC2C9D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:130 ADC #loaded_bg_data::palette_cycle_2_step
    case 0xC2C9D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:130 ADC #loaded_bg_data::palette_cycle_2_step
    // Overlapping static entry reached from 0xC2C9D8.
    case 0xC2C9DA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:131 TAX
    case 0xC2C9DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:132 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C9DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:133 LDA __BSS_START__,X
    case 0xC2C9DE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:134 INC
    case 0xC2C9E1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:135 STA __BSS_START__,X
    case 0xC2C9E2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC2C9E5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:137 AND #$00FF
    case 0xC2C9E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:137 AND #$00FF
    // Overlapping static entry reached from 0xC2C9E7.
    case 0xC2C9E9: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:138 CMP @VIRTUAL02
    case 0xC2C9EA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:139 BCC @PALETTE_SHIFTING_STYLE1
    case 0xC2C9EC: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:140 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C9EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:141 LDA #0
    case 0xC2C9F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:142 STA __BSS_START__,X
    case 0xC2C9F2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:142 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2C9F0.
    case 0xC2C9F3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:144 LDY #loaded_bg_data::palette_cycle_1_last
    case 0xC2C9F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:144 LDY #loaded_bg_data::palette_cycle_1_last
    // Overlapping static entry reached from 0xC2C9F5.
    case 0xC2C9F7: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:145 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C9F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:146 LDA (@LOCAL07),Y
    case 0xC2C9FA: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:147 LDY #loaded_bg_data::palette_cycle_1_first
    case 0xC2C9FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:147 LDY #loaded_bg_data::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2C9FC.
    case 0xC2C9FE: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:148 SEC
    case 0xC2C9FF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:149 SBC (@LOCAL07),Y
    case 0xC2CA00: cpu.execute_instruction<0xF1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC2CA02: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:151 AND #$00FF
    case 0xC2CA04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC2CA04.
    case 0xC2CA06: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:152 STA @VIRTUAL02
    case 0xC2CA07: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:153 INC @VIRTUAL02
    case 0xC2CA09: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:154 LDX #0
    case 0xC2CA0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:154 LDX #0
    // Overlapping static entry reached from 0xC2CA0B.
    case 0xC2CA0D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:155 STX @LOCAL04
    case 0xC2CA0E: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:156 BRA @UNKNOWN14
    case 0xC2CA10: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:158 LDY #loaded_bg_data::palette_cycle_1_step
    case 0xC2CA12: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:158 LDY #loaded_bg_data::palette_cycle_1_step
    // Overlapping static entry reached from 0xC2CA12.
    case 0xC2CA14: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:159 LDA (@LOCAL07),Y
    case 0xC2CA15: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:160 AND #$00FF
    case 0xC2CA17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:160 AND #$00FF
    // Overlapping static entry reached from 0xC2CA17.
    case 0xC2CA19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:161 STA @VIRTUAL04
    case 0xC2CA1A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:162 TXA
    case 0xC2CA1C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:163 CMP @VIRTUAL04
    case 0xC2CA1D: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:164 BCS @UNKNOWN12
    case 0xC2CA1F: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:165 TXA
    case 0xC2CA21: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:166 CLC
    case 0xC2CA22: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:167 ADC @VIRTUAL02
    case 0xC2CA23: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:168 SEC
    case 0xC2CA25: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:169 SBC @VIRTUAL04
    case 0xC2CA26: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:170 STA @LOCAL03
    case 0xC2CA28: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:171 BRA @UNKNOWN13
    case 0xC2CA2A: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:173 TXA
    case 0xC2CA2C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:174 SEC
    case 0xC2CA2D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:175 SBC @VIRTUAL04
    case 0xC2CA2E: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:176 STA @LOCAL03
    case 0xC2CA30: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:178 LDY #loaded_bg_data::palette_cycle_1_first
    case 0xC2CA32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:178 LDY #loaded_bg_data::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2CA32.
    case 0xC2CA34: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:179 LDA (@LOCAL07),Y
    case 0xC2CA35: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:180 AND #$00FF
    case 0xC2CA37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:180 AND #$00FF
    // Overlapping static entry reached from 0xC2CA37.
    case 0xC2CA39: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:181 TAY
    case 0xC2CA3A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:182 STY @LOCAL02
    case 0xC2CA3B: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:183 STX @VIRTUAL04
    case 0xC2CA3D: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:184 TYA
    case 0xC2CA3F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:185 CLC
    case 0xC2CA40: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:186 ADC @VIRTUAL04
    case 0xC2CA41: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:187 ASL
    case 0xC2CA43: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:188 LDY #loaded_bg_data::palette_pointer
    case 0xC2CA44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:188 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2CA44.
    case 0xC2CA46: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:189 CLC
    case 0xC2CA47: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:190 ADC (@LOCAL07),Y
    case 0xC2CA48: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:191 PHA
    case 0xC2CA4A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:192 LDA @LOCAL03
    case 0xC2CA4B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:193 STA @VIRTUAL04
    case 0xC2CA4D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:194 LDY @LOCAL02
    case 0xC2CA4F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:195 TYA
    case 0xC2CA51: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:196 CLC
    case 0xC2CA52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:197 ADC @VIRTUAL04
    case 0xC2CA53: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:198 ASL
    case 0xC2CA55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:199 CLC
    case 0xC2CA56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:200 ADC @LOCAL07
    case 0xC2CA57: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:201 TAX
    case 0xC2CA59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:202 LDA __BSS_START__+12,X
    case 0xC2CA5A: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:203 PLX
    case 0xC2CA5D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:204 STA __BSS_START__,X
    case 0xC2CA5E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:205 LDX @LOCAL04
    case 0xC2CA61: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:206 INX
    case 0xC2CA63: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:207 STX @LOCAL04
    case 0xC2CA64: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:209 TXA
    case 0xC2CA66: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:210 CMP @VIRTUAL02
    case 0xC2CA67: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:211 BCC @UNKNOWN11
    case 0xC2CA69: cpu.execute_instruction<0x90>(0x0000A7, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:212 LDA @LOCAL07
    case 0xC2CA6B: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:213 CLC
    case 0xC2CA6D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:214 ADC #loaded_bg_data::palette_cycle_1_step
    case 0xC2CA6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:214 ADC #loaded_bg_data::palette_cycle_1_step
    // Overlapping static entry reached from 0xC2CA6E.
    case 0xC2CA70: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:215 TAX
    case 0xC2CA71: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:216 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CA72: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:217 LDA __BSS_START__,X
    case 0xC2CA74: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:218 INC
    case 0xC2CA77: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:219 STA __BSS_START__,X
    case 0xC2CA78: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC2CA7B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:221 AND #$00FF
    case 0xC2CA7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC2CA7D.
    case 0xC2CA7F: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:222 CMP @VIRTUAL02
    case 0xC2CA80: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:223 BCCL @PALETTE_SHIFTING_DONE
    case 0xC2CA82: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:223 BCCL @PALETTE_SHIFTING_DONE
    case 0xC2CA84: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:223 BCCL @PALETTE_SHIFTING_DONE
    case 0xC2CA86: cpu.execute_instruction<0x4C>(0x00CB5F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:224 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CA89: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:225 LDA #0
    case 0xC2CA8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:226 STA __BSS_START__,X
    case 0xC2CA8D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:226 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CA8B.
    case 0xC2CA8E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:227 JMP @PALETTE_SHIFTING_DONE
    case 0xC2CA90: cpu.execute_instruction<0x4C>(0x00CB5F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:229 LDY #loaded_bg_data::palette_cycle_1_last
    case 0xC2CA93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:229 LDY #loaded_bg_data::palette_cycle_1_last
    // Overlapping static entry reached from 0xC2CA93.
    case 0xC2CA95: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:230 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CA96: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:231 LDA (@LOCAL07),Y
    case 0xC2CA98: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:232 LDY #loaded_bg_data::palette_cycle_1_first
    case 0xC2CA9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:232 LDY #loaded_bg_data::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2CA9A.
    case 0xC2CA9C: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:233 SEC
    case 0xC2CA9D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:234 SBC (@LOCAL07),Y
    case 0xC2CA9E: cpu.execute_instruction<0xF1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:235 REP #PROC_FLAGS::ACCUM8
    case 0xC2CAA0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:236 AND #$00FF
    case 0xC2CAA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC2CAA2.
    case 0xC2CAA4: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:237 INC
    case 0xC2CAA5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:238 STA @LOCAL01
    case 0xC2CAA6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:239 LDY #0
    case 0xC2CAA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:239 LDY #0
    // Overlapping static entry reached from 0xC2CAA8.
    case 0xC2CAAA: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:240 STY @LOCAL00
    case 0xC2CAAB: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:241 BRA @UNKNOWN20
    case 0xC2CAAD: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:243 LDY #loaded_bg_data::palette_cycle_1_step
    case 0xC2CAAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:243 LDY #loaded_bg_data::palette_cycle_1_step
    // Overlapping static entry reached from 0xC2CAAF.
    case 0xC2CAB1: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:244 LDA (@LOCAL07),Y
    case 0xC2CAB2: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:245 AND #$00FF
    case 0xC2CAB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:245 AND #$00FF
    // Overlapping static entry reached from 0xC2CAB4.
    case 0xC2CAB6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:246 STA @VIRTUAL04
    case 0xC2CAB7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:247 LDY @LOCAL00
    case 0xC2CAB9: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:248 TYA
    case 0xC2CABB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:249 CLC
    case 0xC2CABC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:250 ADC @VIRTUAL04
    case 0xC2CABD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:251 STA @VIRTUAL02
    case 0xC2CABF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:252 STA @LOCAL03
    case 0xC2CAC1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:253 LDA @LOCAL01
    case 0xC2CAC3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:254 ASL
    case 0xC2CAC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:255 STA @VIRTUAL04
    case 0xC2CAC6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:256 LDA @VIRTUAL02
    case 0xC2CAC8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:257 CMP @VIRTUAL04
    case 0xC2CACA: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:258 BCC @UNKNOWN18
    case 0xC2CACC: cpu.execute_instruction<0x90>(0x00000B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:259 LDA @VIRTUAL02
    case 0xC2CACE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:260 SEC
    case 0xC2CAD0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:261 SBC @VIRTUAL04
    case 0xC2CAD1: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:262 STA @VIRTUAL02
    case 0xC2CAD3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:263 STA @LOCAL03
    case 0xC2CAD5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:264 BRA @UNKNOWN19
    case 0xC2CAD7: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:266 LDA @LOCAL01
    case 0xC2CAD9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:267 PHA
    case 0xC2CADB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:268 LDA @VIRTUAL02
    case 0xC2CADC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:269 PLY
    case 0xC2CADE: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:270 STY @VIRTUAL02
    case 0xC2CADF: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:271 CMP @VIRTUAL02
    case 0xC2CAE1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:272 BCC @UNKNOWN19
    case 0xC2CAE3: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:273 LDA @LOCAL03
    case 0xC2CAE5: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:274 STA @VIRTUAL02
    case 0xC2CAE7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:275 LDA @VIRTUAL04
    case 0xC2CAE9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:276 DEC
    case 0xC2CAEB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:277 SEC
    case 0xC2CAEC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:278 SBC @VIRTUAL02
    case 0xC2CAED: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:279 STA @VIRTUAL02
    case 0xC2CAEF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:280 STA @LOCAL03
    case 0xC2CAF1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:282 LDY #loaded_bg_data::palette_cycle_1_first
    case 0xC2CAF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:282 LDY #loaded_bg_data::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2CAF3.
    case 0xC2CAF5: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:283 LDA (@LOCAL07),Y
    case 0xC2CAF6: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:284 AND #$00FF
    case 0xC2CAF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:284 AND #$00FF
    // Overlapping static entry reached from 0xC2CAF8.
    case 0xC2CAFA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:285 TAX
    case 0xC2CAFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:286 LDY @LOCAL00
    case 0xC2CAFC: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:287 STY @VIRTUAL02
    case 0xC2CAFE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:288 TXA
    case 0xC2CB00: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:289 CLC
    case 0xC2CB01: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:290 ADC @VIRTUAL02
    case 0xC2CB02: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:291 ASL
    case 0xC2CB04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:292 LDY #loaded_bg_data::palette_pointer
    case 0xC2CB05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:292 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2CB05.
    case 0xC2CB07: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:293 CLC
    case 0xC2CB08: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:294 ADC (@LOCAL07),Y
    case 0xC2CB09: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:295 PHA
    case 0xC2CB0B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:296 LDA @LOCAL03
    case 0xC2CB0C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:297 STA @VIRTUAL02
    case 0xC2CB0E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:298 TXA
    case 0xC2CB10: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:299 CLC
    case 0xC2CB11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:300 ADC @VIRTUAL02
    case 0xC2CB12: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:301 ASL
    case 0xC2CB14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:302 CLC
    case 0xC2CB15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:303 ADC @LOCAL07
    case 0xC2CB16: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:304 TAX
    case 0xC2CB18: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:305 LDA __BSS_START__+12,X
    case 0xC2CB19: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:306 PLX
    case 0xC2CB1C: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:307 STA __BSS_START__,X
    case 0xC2CB1D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:308 LDY @LOCAL00
    case 0xC2CB20: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:309 INY
    case 0xC2CB22: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:310 STY @LOCAL00
    case 0xC2CB23: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:312 LDA @LOCAL01
    case 0xC2CB25: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:313 STA @VIRTUAL02
    case 0xC2CB27: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:314 TYA
    case 0xC2CB29: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:315 CMP @VIRTUAL02
    case 0xC2CB2A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:316 BCCL @UNKNOWN17
    case 0xC2CB2C: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:316 BCCL @UNKNOWN17
    case 0xC2CB2E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:316 BCCL @UNKNOWN17
    case 0xC2CB30: cpu.execute_instruction<0x4C>(0x00CAAF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:317 LDA @LOCAL07
    case 0xC2CB33: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:318 CLC
    case 0xC2CB35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:319 ADC #loaded_bg_data::palette_cycle_1_step
    case 0xC2CB36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:319 ADC #loaded_bg_data::palette_cycle_1_step
    // Overlapping static entry reached from 0xC2CB36.
    case 0xC2CB38: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:320 TAX
    case 0xC2CB39: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:321 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CB3A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:322 LDA __BSS_START__,X
    case 0xC2CB3C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:323 STA @VIRTUAL00
    case 0xC2CB3F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:324 INC @VIRTUAL00
    case 0xC2CB41: cpu.execute_instruction<0xE6>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:325 LDA @VIRTUAL00
    case 0xC2CB43: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:326 STA __BSS_START__,X
    case 0xC2CB45: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:327 REP #PROC_FLAGS::ACCUM8
    case 0xC2CB48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:328 LDA @LOCAL01
    case 0xC2CB4A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:329 ASL
    case 0xC2CB4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:330 STA @VIRTUAL02
    case 0xC2CB4D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:331 LDA @VIRTUAL00
    case 0xC2CB4F: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:332 AND #$00FF
    case 0xC2CB51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:332 AND #$00FF
    // Overlapping static entry reached from 0xC2CB51.
    case 0xC2CB53: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:333 CMP @VIRTUAL02
    case 0xC2CB54: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:334 BCC @PALETTE_SHIFTING_DONE
    case 0xC2CB56: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:335 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CB58: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:336 LDA #0
    case 0xC2CB5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:337 STA __BSS_START__,X
    case 0xC2CB5C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:337 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CB5A.
    case 0xC2CB5D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:339 REP #PROC_FLAGS::ACCUM8
    case 0xC2CB5F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:340 LDA #24
    case 0xC2CB61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:340 LDA #24
    // Overlapping static entry reached from 0xC2CB61.
    case 0xC2CB63: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:341 JSL UNKNOWN_C0856B
    case 0xC2CB64: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:343 LDA GIYGAS_PHASE
    case 0xC2CB68: cpu.execute_instruction<0xAD>(0x00AB7C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:344 CMP #GIYGAS_PHASES::DEFEATED
    case 0xC2CB6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:344 CMP #GIYGAS_PHASES::DEFEATED
    // Overlapping static entry reached from 0xC2CB6B.
    case 0xC2CB6D: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:345 BEQL @RETURN
    case 0xC2CB6E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:345 BEQL @RETURN
    case 0xC2CB70: cpu.execute_instruction<0x4C>(0x00CF9D, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:345 BEQL @RETURN
    // Overlapping static entry reached from 0xC2CB6D.
    case 0xC2CB71: cpu.execute_instruction<0x9D>(0x00A5CF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:346 LDA @LOCAL07
    case 0xC2CB73: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:346 LDA @LOCAL07
    // Overlapping static entry reached from 0xC2CB71.
    case 0xC2CB74: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:347 CLC
    case 0xC2CB75: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:348 ADC #loaded_bg_data::scrolling_duration_left
    case 0xC2CB76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000053, 2); else cpu.execute_instruction<0x69>(0x000053, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:348 ADC #loaded_bg_data::scrolling_duration_left
    // Overlapping static entry reached from 0xC2CB76.
    case 0xC2CB78: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:349 TAX
    case 0xC2CB79: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:350 LDA __BSS_START__,X
    case 0xC2CB7A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:351 BEQL @UNKNOWN29
    case 0xC2CB7D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:351 BEQL @UNKNOWN29
    case 0xC2CB7F: cpu.execute_instruction<0x4C>(0x00CC56, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:352 DEC
    case 0xC2CB82: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:353 STA __BSS_START__,X
    case 0xC2CB83: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:354 BNEL @UNKNOWN29
    case 0xC2CB86: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:354 BNEL @UNKNOWN29
    case 0xC2CB88: cpu.execute_instruction<0x4C>(0x00CC56, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:355 LDA @LOCAL07
    case 0xC2CB8B: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:356 CLC
    case 0xC2CB8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:357 ADC #loaded_bg_data::current_scrolling_movement
    case 0xC2CB8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000052, 2); else cpu.execute_instruction<0x69>(0x000052, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:357 ADC #loaded_bg_data::current_scrolling_movement
    // Overlapping static entry reached from 0xC2CB8E.
    case 0xC2CB90: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:358 TAX
    case 0xC2CB91: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:359 STX @LOCAL00
    case 0xC2CB92: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:360 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CB94: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:361 LDA __BSS_START__,X
    case 0xC2CB96: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:362 INC
    case 0xC2CB99: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:363 AND #$0003
    case 0xC2CB9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x009D03, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:364 STA __BSS_START__,X
    case 0xC2CB9C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:364 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CB9A.
    case 0xC2CB9D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:365 REP #PROC_FLAGS::ACCUM8
    case 0xC2CB9F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:366 AND #$00FF
    case 0xC2CBA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:366 AND #$00FF
    // Overlapping static entry reached from 0xC2CBA1.
    case 0xC2CBA3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:367 CLC
    case 0xC2CBA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:368 ADC @LOCAL07
    case 0xC2CBA5: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:369 TAX
    case 0xC2CBA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:370 LDA __BSS_START__+78,X
    case 0xC2CBA8: cpu.execute_instruction<0xBD>(0x00004E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:371 AND #$00FF
    case 0xC2CBAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:371 AND #$00FF
    // Overlapping static entry reached from 0xC2CBAB.
    case 0xC2CBAD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:372 STA @LOCAL01
    case 0xC2CBAE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:373 BNE @UNKNOWN27
    case 0xC2CBB0: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:374 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CBB2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:375 LDA #0
    case 0xC2CBB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A600, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:376 LDX @LOCAL00
    case 0xC2CBB6: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:376 LDX @LOCAL00
    // Overlapping static entry reached from 0xC2CBB4.
    case 0xC2CBB7: cpu.execute_instruction<0x0E>(0x00009D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:377 STA __BSS_START__,X
    case 0xC2CBB8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:377 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CBB7.
    case 0xC2CBBA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:379 LDX @LOCAL07
    case 0xC2CBBB: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:380 REP #PROC_FLAGS::ACCUM8
    case 0xC2CBBD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:381 LDA a:loaded_bg_data::scrolling_movements,X
    case 0xC2CBBF: cpu.execute_instruction<0xBD>(0x00004E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:387 AND #$00FF
    case 0xC2CBC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC2CBC2.
    case 0xC2CBC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:388 STA @LOCAL01
    case 0xC2CBC5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:390 CMP #0
    case 0xC2CBC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:390 CMP #0
    // Overlapping static entry reached from 0xC2CBC7.
    case 0xC2CBC9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:391 BEQL @UNKNOWN29
    case 0xC2CBCA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:391 BEQL @UNKNOWN29
    case 0xC2CBCC: cpu.execute_instruction<0x4C>(0x00CC56, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    case 0xC2CBCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x00F258, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CBCF.
    case 0xC2CBD1: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    case 0xC2CBD2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CBD1.
    case 0xC2CBD3: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    case 0xC2CBD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CBD3.
    case 0xC2CBD5: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CBD4.
    case 0xC2CBD6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    case 0xC2CBD7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:393 LDA @LOCAL01
    case 0xC2CBD9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CBDB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CBDD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CBDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CBDF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CBE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:395 STA @LOCAL02
    case 0xC2CBE2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:396 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CBE4: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:396 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CBE6: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:396 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CBE8: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:396 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CBEA: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:397 CLC
    case 0xC2CBEC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:398 ADC @VIRTUAL0A
    case 0xC2CBED: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:399 STA @VIRTUAL0A
    case 0xC2CBEF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:400 LDA [@VIRTUAL0A]
    case 0xC2CBF1: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:401 LDY #loaded_bg_data::scrolling_duration_left
    case 0xC2CBF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000053, 2); else cpu.execute_instruction<0xA0>(0x000053, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:401 LDY #loaded_bg_data::scrolling_duration_left
    // Overlapping static entry reached from 0xC2CBF3.
    case 0xC2CBF5: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:402 STA (@LOCAL07),Y
    case 0xC2CBF6: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:403 LDA @LOCAL02
    case 0xC2CBF8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:405 INC
    case 0xC2CBFA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:406 INC
    case 0xC2CBFB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:407 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CBFC: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:407 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CBFE: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:407 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC00: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:407 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC02: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:408 CLC
    case 0xC2CC04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:409 ADC @VIRTUAL0A
    case 0xC2CC05: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:410 STA @VIRTUAL0A
    case 0xC2CC07: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:411 LDA [@VIRTUAL0A]
    case 0xC2CC09: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:412 LDY #loaded_bg_data::horizontal_velocity
    case 0xC2CC0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000059, 2); else cpu.execute_instruction<0xA0>(0x000059, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:412 LDY #loaded_bg_data::horizontal_velocity
    // Overlapping static entry reached from 0xC2CC0B.
    case 0xC2CC0D: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:413 STA (@LOCAL07),Y
    case 0xC2CC0E: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:414 LDA @LOCAL02
    case 0xC2CC10: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:416 INC
    case 0xC2CC12: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:417 INC
    case 0xC2CC13: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:418 INC
    case 0xC2CC14: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:419 INC
    case 0xC2CC15: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:420 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC16: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:420 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC18: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:420 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC1A: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:420 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC1C: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:421 CLC
    case 0xC2CC1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:422 ADC @VIRTUAL0A
    case 0xC2CC1F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:423 STA @VIRTUAL0A
    case 0xC2CC21: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:424 LDA [@VIRTUAL0A]
    case 0xC2CC23: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:425 LDY #loaded_bg_data::vertical_velocity
    case 0xC2CC25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005B, 2); else cpu.execute_instruction<0xA0>(0x00005B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:425 LDY #loaded_bg_data::vertical_velocity
    // Overlapping static entry reached from 0xC2CC25.
    case 0xC2CC27: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:426 STA (@LOCAL07),Y
    case 0xC2CC28: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:427 LDA @LOCAL02
    case 0xC2CC2A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:428 CLC
    case 0xC2CC2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:429 ADC #bg_scrolling_entry::horizontal_acceleration
    case 0xC2CC2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:429 ADC #bg_scrolling_entry::horizontal_acceleration
    // Overlapping static entry reached from 0xC2CC2D.
    case 0xC2CC2F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:430 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC30: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:430 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC32: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:430 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC34: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:430 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC36: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:431 CLC
    case 0xC2CC38: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:432 ADC @VIRTUAL0A
    case 0xC2CC39: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:433 STA @VIRTUAL0A
    case 0xC2CC3B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:434 LDA [@VIRTUAL0A]
    case 0xC2CC3D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:435 LDY #loaded_bg_data::horizontal_acceleration
    case 0xC2CC3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005D, 2); else cpu.execute_instruction<0xA0>(0x00005D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:435 LDY #loaded_bg_data::horizontal_acceleration
    // Overlapping static entry reached from 0xC2CC3F.
    case 0xC2CC41: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:436 STA (@LOCAL07),Y
    case 0xC2CC42: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:437 LDA @LOCAL02
    case 0xC2CC44: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:438 CLC
    case 0xC2CC46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:439 ADC #bg_scrolling_entry::vertical_acceleration
    case 0xC2CC47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:439 ADC #bg_scrolling_entry::vertical_acceleration
    // Overlapping static entry reached from 0xC2CC47.
    case 0xC2CC49: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:440 CLC
    case 0xC2CC4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:441 ADC @VIRTUAL06
    case 0xC2CC4B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:442 STA @VIRTUAL06
    case 0xC2CC4D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:443 LDA [@VIRTUAL06]
    case 0xC2CC4F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:444 LDY #loaded_bg_data::vertical_acceleration
    case 0xC2CC51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:444 LDY #loaded_bg_data::vertical_acceleration
    // Overlapping static entry reached from 0xC2CC51.
    case 0xC2CC53: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:445 STA (@LOCAL07),Y
    case 0xC2CC54: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:447 LDA @LOCAL07
    case 0xC2CC56: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:448 CLC
    case 0xC2CC58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:449 ADC #loaded_bg_data::horizontal_position
    case 0xC2CC59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000055, 2); else cpu.execute_instruction<0x69>(0x000055, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:449 ADC #loaded_bg_data::horizontal_position
    // Overlapping static entry reached from 0xC2CC59.
    case 0xC2CC5B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:450 STA @VIRTUAL02
    case 0xC2CC5C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:451 LDA @LOCAL07
    case 0xC2CC5E: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:452 CLC
    case 0xC2CC60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:453 ADC #loaded_bg_data::horizontal_velocity
    case 0xC2CC61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000059, 2); else cpu.execute_instruction<0x69>(0x000059, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:453 ADC #loaded_bg_data::horizontal_velocity
    // Overlapping static entry reached from 0xC2CC61.
    case 0xC2CC63: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:454 TAX
    case 0xC2CC64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:455 LDY #loaded_bg_data::horizontal_acceleration
    case 0xC2CC65: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005D, 2); else cpu.execute_instruction<0xA0>(0x00005D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:455 LDY #loaded_bg_data::horizontal_acceleration
    // Overlapping static entry reached from 0xC2CC65.
    case 0xC2CC67: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:456 LDA __BSS_START__,X
    case 0xC2CC68: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:457 CLC
    case 0xC2CC6B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:458 ADC (@LOCAL07),Y
    case 0xC2CC6C: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:459 STA __BSS_START__,X
    case 0xC2CC6E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:460 STA @VIRTUAL04
    case 0xC2CC71: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:461 LDX @VIRTUAL02
    case 0xC2CC73: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:462 LDA __BSS_START__,X
    case 0xC2CC75: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:463 CLC
    case 0xC2CC78: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:464 ADC @VIRTUAL04
    case 0xC2CC79: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:465 LDX @VIRTUAL02
    case 0xC2CC7B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:466 STA __BSS_START__,X
    case 0xC2CC7D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:467 LDA @LOCAL07
    case 0xC2CC80: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:468 CLC
    case 0xC2CC82: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:469 ADC #loaded_bg_data::vertical_position
    case 0xC2CC83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000057, 2); else cpu.execute_instruction<0x69>(0x000057, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:469 ADC #loaded_bg_data::vertical_position
    // Overlapping static entry reached from 0xC2CC83.
    case 0xC2CC85: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:470 TAY
    case 0xC2CC86: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:471 STY @LOCAL04
    case 0xC2CC87: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:472 LDA @LOCAL07
    case 0xC2CC89: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:473 CLC
    case 0xC2CC8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:474 ADC #loaded_bg_data::vertical_velocity
    case 0xC2CC8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005B, 2); else cpu.execute_instruction<0x69>(0x00005B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:474 ADC #loaded_bg_data::vertical_velocity
    // Overlapping static entry reached from 0xC2CC8C.
    case 0xC2CC8E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:475 TAX
    case 0xC2CC8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:476 LDY #loaded_bg_data::vertical_acceleration
    case 0xC2CC90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:476 LDY #loaded_bg_data::vertical_acceleration
    // Overlapping static entry reached from 0xC2CC90.
    case 0xC2CC92: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:477 LDA __BSS_START__,X
    case 0xC2CC93: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:478 CLC
    case 0xC2CC96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:479 ADC (@LOCAL07),Y
    case 0xC2CC97: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:480 STA __BSS_START__,X
    case 0xC2CC99: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:481 STA @VIRTUAL04
    case 0xC2CC9C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:482 LDY @LOCAL04
    case 0xC2CC9E: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:483 LDA __BSS_START__,Y
    case 0xC2CCA0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:484 CLC
    case 0xC2CCA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:485 ADC @VIRTUAL04
    case 0xC2CCA4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:486 STA __BSS_START__,Y
    case 0xC2CCA6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:487 LDA @LOCAL06
    case 0xC2CCA9: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:488 CMP #BG_LAYER::LAYER_1
    case 0xC2CCAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:488 CMP #BG_LAYER::LAYER_1
    // Overlapping static entry reached from 0xC2CCAB.
    case 0xC2CCAD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:489 BEQ @AFFECT_LAYER_1
    case 0xC2CCAE: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:490 CMP #BG_LAYER::LAYER_2
    case 0xC2CCB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:490 CMP #BG_LAYER::LAYER_2
    // Overlapping static entry reached from 0xC2CCB0.
    case 0xC2CCB2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:491 BEQ @AFFECT_LAYER_2
    case 0xC2CCB3: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:492 CMP #BG_LAYER::LAYER_3
    case 0xC2CCB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:492 CMP #BG_LAYER::LAYER_3
    // Overlapping static entry reached from 0xC2CCB5.
    case 0xC2CCB7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:493 BEQ @AFFECT_LAYER_3
    case 0xC2CCB8: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:494 CMP #BG_LAYER::LAYER_4
    case 0xC2CCBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:494 CMP #BG_LAYER::LAYER_4
    // Overlapping static entry reached from 0xC2CCBA.
    case 0xC2CCBC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:495 BEQ @AFFECT_LAYER_4
    case 0xC2CCBD: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:496 JMP @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2CCBF: cpu.execute_instruction<0x4C>(0x00CD40, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:498 LDX @VIRTUAL02
    case 0xC2CCC2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:499 LDA __BSS_START__,X
    case 0xC2CCC4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:500 XBA
    case 0xC2CCC7: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:501 AND #$00FF
    case 0xC2CCC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:501 AND #$00FF
    // Overlapping static entry reached from 0xC2CCC8.
    case 0xC2CCCA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:502 CLC
    case 0xC2CCCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:503 ADC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2CCCC: cpu.execute_instruction<0x6D>(0x00AF6B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:504 STA BG1_X_POS
    case 0xC2CCCF: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:505 LDA __BSS_START__,Y
    case 0xC2CCD2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:506 XBA
    case 0xC2CCD5: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:507 AND #$00FF
    case 0xC2CCD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:507 AND #$00FF
    // Overlapping static entry reached from 0xC2CCD6.
    case 0xC2CCD8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:508 CLC
    case 0xC2CCD9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:509 ADC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2CCDA: cpu.execute_instruction<0x6D>(0x00AF6D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:510 STA BG1_Y_POS
    case 0xC2CCDD: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:511 BRA @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2CCE0: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:513 LDX @VIRTUAL02
    case 0xC2CCE2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:514 LDA __BSS_START__,X
    case 0xC2CCE4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:515 XBA
    case 0xC2CCE7: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:516 AND #$00FF
    case 0xC2CCE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:516 AND #$00FF
    // Overlapping static entry reached from 0xC2CCE8.
    case 0xC2CCEA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:517 CLC
    case 0xC2CCEB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:518 ADC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2CCEC: cpu.execute_instruction<0x6D>(0x00AF6B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:519 STA BG2_X_POS
    case 0xC2CCEF: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:520 LDA __BSS_START__,Y
    case 0xC2CCF2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:521 XBA
    case 0xC2CCF5: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:522 AND #$00FF
    case 0xC2CCF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:522 AND #$00FF
    // Overlapping static entry reached from 0xC2CCF6.
    case 0xC2CCF8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:523 CLC
    case 0xC2CCF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:524 ADC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2CCFA: cpu.execute_instruction<0x6D>(0x00AF6D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:525 STA BG2_Y_POS
    case 0xC2CCFD: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:526 BRA @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2CD00: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:528 LDX @VIRTUAL02
    case 0xC2CD02: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:529 LDA __BSS_START__,X
    case 0xC2CD04: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:530 XBA
    case 0xC2CD07: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:531 AND #$00FF
    case 0xC2CD08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:531 AND #$00FF
    // Overlapping static entry reached from 0xC2CD08.
    case 0xC2CD0A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:532 CLC
    case 0xC2CD0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:533 ADC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2CD0C: cpu.execute_instruction<0x6D>(0x00AF6B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:534 STA BG3_X_POS
    case 0xC2CD0F: cpu.execute_instruction<0x8D>(0x000039, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:535 LDA __BSS_START__,Y
    case 0xC2CD12: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:536 XBA
    case 0xC2CD15: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:537 AND #$00FF
    case 0xC2CD16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:537 AND #$00FF
    // Overlapping static entry reached from 0xC2CD16.
    case 0xC2CD18: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:538 CLC
    case 0xC2CD19: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:539 ADC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2CD1A: cpu.execute_instruction<0x6D>(0x00AF6D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:540 STA BG3_Y_POS
    case 0xC2CD1D: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:541 BRA @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2CD20: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:543 LDX @VIRTUAL02
    case 0xC2CD22: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:544 LDA __BSS_START__,X
    case 0xC2CD24: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:545 XBA
    case 0xC2CD27: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:546 AND #$00FF
    case 0xC2CD28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:546 AND #$00FF
    // Overlapping static entry reached from 0xC2CD28.
    case 0xC2CD2A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:547 CLC
    case 0xC2CD2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:548 ADC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2CD2C: cpu.execute_instruction<0x6D>(0x00AF6B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:549 STA BG4_X_POS
    case 0xC2CD2F: cpu.execute_instruction<0x8D>(0x00003D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:550 LDA __BSS_START__,Y
    case 0xC2CD32: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:551 XBA
    case 0xC2CD35: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:552 AND #$00FF
    case 0xC2CD36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:552 AND #$00FF
    // Overlapping static entry reached from 0xC2CD36.
    case 0xC2CD38: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:553 CLC
    case 0xC2CD39: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:554 ADC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2CD3A: cpu.execute_instruction<0x6D>(0x00AF6D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:555 STA BG4_Y_POS
    case 0xC2CD3D: cpu.execute_instruction<0x8D>(0x00003F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:557 LDA @LOCAL07
    case 0xC2CD40: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:558 CLC
    case 0xC2CD42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:559 ADC #loaded_bg_data::distortion_duration_left
    case 0xC2CD43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000066, 2); else cpu.execute_instruction<0x69>(0x000066, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:559 ADC #loaded_bg_data::distortion_duration_left
    // Overlapping static entry reached from 0xC2CD43.
    case 0xC2CD45: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:560 TAX
    case 0xC2CD46: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:561 LDA __BSS_START__,X
    case 0xC2CD47: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:562 BEQL @DISTORTION_DMA_DONE
    case 0xC2CD4A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:562 BEQL @DISTORTION_DMA_DONE
    case 0xC2CD4C: cpu.execute_instruction<0x4C>(0x00CEE3, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:563 DEC
    case 0xC2CD4F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:564 STA __BSS_START__,X
    case 0xC2CD50: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:565 BNEL @DISTORTION_DMA_DONE
    case 0xC2CD53: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:565 BNEL @DISTORTION_DMA_DONE
    case 0xC2CD55: cpu.execute_instruction<0x4C>(0x00CEE3, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:566 LDA @LOCAL07
    case 0xC2CD58: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:567 CLC
    case 0xC2CD5A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:568 ADC #loaded_bg_data::current_distortion_style_index
    case 0xC2CD5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000065, 2); else cpu.execute_instruction<0x69>(0x000065, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:568 ADC #loaded_bg_data::current_distortion_style_index
    // Overlapping static entry reached from 0xC2CD5B.
    case 0xC2CD5D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:569 TAX
    case 0xC2CD5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:570 STX @LOCAL00
    case 0xC2CD5F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:571 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CD61: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:572 LDA __BSS_START__,X
    case 0xC2CD63: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:573 INC
    case 0xC2CD66: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:574 AND #$0003
    case 0xC2CD67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x009D03, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:575 STA __BSS_START__,X
    case 0xC2CD69: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:575 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CD67.
    case 0xC2CD6A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:576 REP #PROC_FLAGS::ACCUM8
    case 0xC2CD6C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:577 AND #$00FF
    case 0xC2CD6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:577 AND #$00FF
    // Overlapping static entry reached from 0xC2CD6E.
    case 0xC2CD70: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:578 CLC
    case 0xC2CD71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:579 ADC @LOCAL07
    case 0xC2CD72: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:580 TAX
    case 0xC2CD74: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:581 LDA a:loaded_bg_data::distortion_styles,X
    case 0xC2CD75: cpu.execute_instruction<0xBD>(0x000061, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:582 AND #$00FF
    case 0xC2CD78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:582 AND #$00FF
    // Overlapping static entry reached from 0xC2CD78.
    case 0xC2CD7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:583 STA @LOCAL01
    case 0xC2CD7B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:584 BNE @UNKNOWN37
    case 0xC2CD7D: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:585 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CD7F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:586 LDA #0
    case 0xC2CD81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A600, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:587 LDX @LOCAL00
    case 0xC2CD83: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:587 LDX @LOCAL00
    // Overlapping static entry reached from 0xC2CD81.
    case 0xC2CD84: cpu.execute_instruction<0x0E>(0x00009D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:588 STA __BSS_START__,X
    case 0xC2CD85: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:588 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CD84.
    case 0xC2CD87: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:590 LDX @LOCAL07
    case 0xC2CD88: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:591 REP #PROC_FLAGS::ACCUM8
    case 0xC2CD8A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:592 LDA a:loaded_bg_data::distortion_styles,X
    case 0xC2CD8C: cpu.execute_instruction<0xBD>(0x000061, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:598 AND #$00FF
    case 0xC2CD8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:598 AND #$00FF
    // Overlapping static entry reached from 0xC2CD8F.
    case 0xC2CD91: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:599 STA @LOCAL01
    case 0xC2CD92: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:601 CMP #0
    case 0xC2CD94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:601 CMP #0
    // Overlapping static entry reached from 0xC2CD94.
    case 0xC2CD96: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:602 BEQL @DISTORTION_DMA_DONE
    case 0xC2CD97: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:602 BEQL @DISTORTION_DMA_DONE
    case 0xC2CD99: cpu.execute_instruction<0x4C>(0x00CEE3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    case 0xC2CD9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00F708, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CD9C.
    case 0xC2CD9E: cpu.execute_instruction<0xF7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    case 0xC2CD9F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CD9E.
    case 0xC2CDA0: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    case 0xC2CDA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CDA0.
    case 0xC2CDA2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CDA1.
    case 0xC2CDA3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    case 0xC2CDA4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:604 LDA @LOCAL01
    case 0xC2CDA6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDA8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDAE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:606 STA @LOCAL01
    case 0xC2CDB0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:607 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDB2: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:607 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDB4: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:607 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDB6: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:607 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDB8: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:608 CLC
    case 0xC2CDBA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:609 ADC @VIRTUAL0A
    case 0xC2CDBB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:610 STA @VIRTUAL0A
    case 0xC2CDBD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:611 LDA [@VIRTUAL0A]
    case 0xC2CDBF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:612 LDY #loaded_bg_data::distortion_duration_left
    case 0xC2CDC1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000066, 2); else cpu.execute_instruction<0xA0>(0x000066, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:612 LDY #loaded_bg_data::distortion_duration_left
    // Overlapping static entry reached from 0xC2CDC1.
    case 0xC2CDC3: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:613 STA (@LOCAL07),Y
    case 0xC2CDC4: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:614 LDA @LOCAL07
    case 0xC2CDC6: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:615 CLC
    case 0xC2CDC8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:616 ADC #loaded_bg_data::distortion_type
    case 0xC2CDC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000068, 2); else cpu.execute_instruction<0x69>(0x000068, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:616 ADC #loaded_bg_data::distortion_type
    // Overlapping static entry reached from 0xC2CDC9.
    case 0xC2CDCB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:617 TAX
    case 0xC2CDCC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:618 LDA @LOCAL01
    case 0xC2CDCD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:620 INC
    case 0xC2CDCF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:621 INC
    case 0xC2CDD0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:622 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDD1: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:622 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDD3: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:622 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDD5: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:622 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDD7: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:623 CLC
    case 0xC2CDD9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:624 ADC @VIRTUAL0A
    case 0xC2CDDA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:625 STA @VIRTUAL0A
    case 0xC2CDDC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:626 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CDDE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:627 LDA [@VIRTUAL0A]
    case 0xC2CDE0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:628 STA __BSS_START__,X
    case 0xC2CDE2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:629 REP #PROC_FLAGS::ACCUM8
    case 0xC2CDE5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:630 LDA @LOCAL01
    case 0xC2CDE7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:632 INC
    case 0xC2CDE9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:633 INC
    case 0xC2CDEA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:634 INC
    case 0xC2CDEB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:635 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDEC: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:635 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDEE: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:635 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDF0: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:635 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDF2: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:636 CLC
    case 0xC2CDF4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:637 ADC @VIRTUAL0A
    case 0xC2CDF5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:638 STA @VIRTUAL0A
    case 0xC2CDF7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:639 LDA [@VIRTUAL0A]
    case 0xC2CDF9: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:640 LDY #loaded_bg_data::distortion_ripple_frequency
    case 0xC2CDFB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000069, 2); else cpu.execute_instruction<0xA0>(0x000069, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:640 LDY #loaded_bg_data::distortion_ripple_frequency
    // Overlapping static entry reached from 0xC2CDFB.
    case 0xC2CDFD: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:641 STA (@LOCAL07),Y
    case 0xC2CDFE: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:642 LDA @LOCAL01
    case 0xC2CE00: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:643 CLC
    case 0xC2CE02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:644 ADC #distortion_entry::ripple_amplitude
    case 0xC2CE03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:644 ADC #distortion_entry::ripple_amplitude
    // Overlapping static entry reached from 0xC2CE03.
    case 0xC2CE05: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:645 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE06: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:645 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE08: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:645 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE0A: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:645 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE0C: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:646 CLC
    case 0xC2CE0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:647 ADC @VIRTUAL0A
    case 0xC2CE0F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:648 STA @VIRTUAL0A
    case 0xC2CE11: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:649 LDA [@VIRTUAL0A]
    case 0xC2CE13: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:650 LDY #loaded_bg_data::distortion_ripple_amplitude
    case 0xC2CE15: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006B, 2); else cpu.execute_instruction<0xA0>(0x00006B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:650 LDY #loaded_bg_data::distortion_ripple_amplitude
    // Overlapping static entry reached from 0xC2CE15.
    case 0xC2CE17: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:651 STA (@LOCAL07),Y
    case 0xC2CE18: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:652 LDA @LOCAL01
    case 0xC2CE1A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:653 CLC
    case 0xC2CE1C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:654 ADC #distortion_entry::speed
    case 0xC2CE1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:654 ADC #distortion_entry::speed
    // Overlapping static entry reached from 0xC2CE1D.
    case 0xC2CE1F: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:655 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE20: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:655 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE22: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:655 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE24: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:655 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE26: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:656 CLC
    case 0xC2CE28: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:657 ADC @VIRTUAL0A
    case 0xC2CE29: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:658 STA @VIRTUAL0A
    case 0xC2CE2B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:659 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CE2D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:660 LDA [@VIRTUAL0A]
    case 0xC2CE2F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:661 LDY #loaded_bg_data::distortion_speed
    case 0xC2CE31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006D, 2); else cpu.execute_instruction<0xA0>(0x00006D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:661 LDY #loaded_bg_data::distortion_speed
    // Overlapping static entry reached from 0xC2CE31.
    case 0xC2CE33: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:662 STA (@LOCAL07),Y
    case 0xC2CE34: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:663 REP #PROC_FLAGS::ACCUM8
    case 0xC2CE36: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:664 LDA @LOCAL01
    case 0xC2CE38: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:665 CLC
    case 0xC2CE3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:666 ADC #distortion_entry::compression_rate
    case 0xC2CE3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:666 ADC #distortion_entry::compression_rate
    // Overlapping static entry reached from 0xC2CE3B.
    case 0xC2CE3D: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:667 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE3E: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:667 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE40: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:667 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE42: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:667 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE44: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:668 CLC
    case 0xC2CE46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:669 ADC @VIRTUAL0A
    case 0xC2CE47: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:670 STA @VIRTUAL0A
    case 0xC2CE49: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:671 LDA [@VIRTUAL0A]
    case 0xC2CE4B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:672 LDY #loaded_bg_data::distortion_compression_rate
    case 0xC2CE4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006E, 2); else cpu.execute_instruction<0xA0>(0x00006E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:672 LDY #loaded_bg_data::distortion_compression_rate
    // Overlapping static entry reached from 0xC2CE4D.
    case 0xC2CE4F: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:673 STA (@LOCAL07),Y
    case 0xC2CE50: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:674 LDA @LOCAL01
    case 0xC2CE52: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:675 CLC
    case 0xC2CE54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:676 ADC #distortion_entry::ripple_frequency_acceleration
    case 0xC2CE55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:676 ADC #distortion_entry::ripple_frequency_acceleration
    // Overlapping static entry reached from 0xC2CE55.
    case 0xC2CE57: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:677 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE58: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:677 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE5A: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:677 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE5C: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:677 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE5E: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:678 CLC
    case 0xC2CE60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:679 ADC @VIRTUAL0A
    case 0xC2CE61: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:680 STA @VIRTUAL0A
    case 0xC2CE63: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:681 LDA [@VIRTUAL0A]
    case 0xC2CE65: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:682 LDY #loaded_bg_data::distortion_ripple_frequency_acceleration
    case 0xC2CE67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000070, 2); else cpu.execute_instruction<0xA0>(0x000070, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:682 LDY #loaded_bg_data::distortion_ripple_frequency_acceleration
    // Overlapping static entry reached from 0xC2CE67.
    case 0xC2CE69: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:683 STA (@LOCAL07),Y
    case 0xC2CE6A: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:684 LDA @LOCAL01
    case 0xC2CE6C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:685 CLC
    case 0xC2CE6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:686 ADC #distortion_entry::ripple_amplitude_acceleration
    case 0xC2CE6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:686 ADC #distortion_entry::ripple_amplitude_acceleration
    // Overlapping static entry reached from 0xC2CE6F.
    case 0xC2CE71: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:687 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE72: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:687 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE74: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:687 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE76: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:687 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE78: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:688 CLC
    case 0xC2CE7A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:689 ADC @VIRTUAL0A
    case 0xC2CE7B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:690 STA @VIRTUAL0A
    case 0xC2CE7D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:691 LDA [@VIRTUAL0A]
    case 0xC2CE7F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:692 LDY #loaded_bg_data::distortion_ripple_amplitude_acceleration
    case 0xC2CE81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000072, 2); else cpu.execute_instruction<0xA0>(0x000072, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:692 LDY #loaded_bg_data::distortion_ripple_amplitude_acceleration
    // Overlapping static entry reached from 0xC2CE81.
    case 0xC2CE83: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:693 STA (@LOCAL07),Y
    case 0xC2CE84: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:694 LDA @LOCAL01
    case 0xC2CE86: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:695 CLC
    case 0xC2CE88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:696 ADC #distortion_entry::speed_acceleration
    case 0xC2CE89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:696 ADC #distortion_entry::speed_acceleration
    // Overlapping static entry reached from 0xC2CE89.
    case 0xC2CE8B: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:697 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE8C: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:697 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE8E: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:697 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE90: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:697 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE92: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:698 CLC
    case 0xC2CE94: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:699 ADC @VIRTUAL0A
    case 0xC2CE95: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:700 STA @VIRTUAL0A
    case 0xC2CE97: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:701 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CE99: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:702 LDA [@VIRTUAL0A]
    case 0xC2CE9B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:703 LDY #loaded_bg_data::distortion_speed_acceleration
    case 0xC2CE9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000074, 2); else cpu.execute_instruction<0xA0>(0x000074, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:703 LDY #loaded_bg_data::distortion_speed_acceleration
    // Overlapping static entry reached from 0xC2CE9D.
    case 0xC2CE9F: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:704 STA (@LOCAL07),Y
    case 0xC2CEA0: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:705 REP #PROC_FLAGS::ACCUM8
    case 0xC2CEA2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:706 LDA @LOCAL01
    case 0xC2CEA4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:707 CLC
    case 0xC2CEA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:708 ADC #distortion_entry::compression_acceleration
    case 0xC2CEA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:708 ADC #distortion_entry::compression_acceleration
    // Overlapping static entry reached from 0xC2CEA7.
    case 0xC2CEA9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:709 CLC
    case 0xC2CEAA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:710 ADC @VIRTUAL06
    case 0xC2CEAB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:711 STA @VIRTUAL06
    case 0xC2CEAD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:712 LDA [@VIRTUAL06]
    case 0xC2CEAF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:713 LDY #loaded_bg_data::distortion_compression_acceleration
    case 0xC2CEB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000075, 2); else cpu.execute_instruction<0xA0>(0x000075, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:713 LDY #loaded_bg_data::distortion_compression_acceleration
    // Overlapping static entry reached from 0xC2CEB1.
    case 0xC2CEB3: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:714 STA (@LOCAL07),Y
    case 0xC2CEB4: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:715 LDA __BSS_START__,X
    case 0xC2CEB6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:716 AND #$00FF
    case 0xC2CEB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:716 AND #$00FF
    // Overlapping static entry reached from 0xC2CEB9.
    case 0xC2CEBB: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:717 CMP #DISTORTION_STYLE::VERTICAL_SMOOTH
    case 0xC2CEBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:717 CMP #DISTORTION_STYLE::VERTICAL_SMOOTH
    // Overlapping static entry reached from 0xC2CEBC.
    case 0xC2CEBE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:718 BNE @HORIZONTAL_DISTORTION
    case 0xC2CEBF: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:719 LDY @LOCAL08
    case 0xC2CEC1: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:720 LDX @LOCAL06
    case 0xC2CEC3: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:721 INX
    case 0xC2CEC5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:722 INX
    case 0xC2CEC6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:723 INX
    case 0xC2CEC7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:724 INX
    case 0xC2CEC8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:725 LDA @LOCAL08
    case 0xC2CEC9: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:726 CLC
    case 0xC2CECB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:727 ADC #5
    case 0xC2CECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:727 ADC #5
    // Overlapping static entry reached from 0xC2CECC.
    case 0xC2CECE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:728 JSL DO_BATTLEBG_DMA
    case 0xC2CECF: cpu.execute_instruction<0x22>(0xC0AD91, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:729 BRA @DISTORTION_DMA_DONE
    case 0xC2CED3: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:731 LDY @LOCAL08
    case 0xC2CED5: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:732 LDX @LOCAL06
    case 0xC2CED7: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:733 LDA @LOCAL08
    case 0xC2CED9: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:734 CLC
    case 0xC2CEDB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:735 ADC #5
    case 0xC2CEDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:735 ADC #5
    // Overlapping static entry reached from 0xC2CEDC.
    case 0xC2CEDE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:736 JSL DO_BATTLEBG_DMA
    case 0xC2CEDF: cpu.execute_instruction<0x22>(0xC0AD91, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:738 LDA @LOCAL07
    case 0xC2CEE3: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:739 CLC
    case 0xC2CEE5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:740 ADC #loaded_bg_data::distortion_type
    case 0xC2CEE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000068, 2); else cpu.execute_instruction<0x69>(0x000068, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:740 ADC #loaded_bg_data::distortion_type
    // Overlapping static entry reached from 0xC2CEE6.
    case 0xC2CEE8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:741 STA @LOCAL00
    case 0xC2CEE9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:742 TAX
    case 0xC2CEEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:743 LDA __BSS_START__,X
    case 0xC2CEEC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:744 AND #$00FF
    case 0xC2CEEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:744 AND #$00FF
    // Overlapping static entry reached from 0xC2CEEF.
    case 0xC2CEF1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:745 BEQL @RETURN
    case 0xC2CEF2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:745 BEQL @RETURN
    case 0xC2CEF4: cpu.execute_instruction<0x4C>(0x00CF9D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:746 LDA @LOCAL07
    case 0xC2CEF7: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:747 CLC
    case 0xC2CEF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:748 ADC #loaded_bg_data::distortion_ripple_frequency
    case 0xC2CEFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000069, 2); else cpu.execute_instruction<0x69>(0x000069, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:748 ADC #loaded_bg_data::distortion_ripple_frequency
    // Overlapping static entry reached from 0xC2CEFA.
    case 0xC2CEFC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:749 TAX
    case 0xC2CEFD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:750 LDY #loaded_bg_data::distortion_ripple_frequency_acceleration
    case 0xC2CEFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000070, 2); else cpu.execute_instruction<0xA0>(0x000070, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:750 LDY #loaded_bg_data::distortion_ripple_frequency_acceleration
    // Overlapping static entry reached from 0xC2CEFE.
    case 0xC2CF00: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:751 LDA __BSS_START__,X
    case 0xC2CF01: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:752 CLC
    case 0xC2CF04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:753 ADC (@LOCAL07),Y
    case 0xC2CF05: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:754 STA __BSS_START__,X
    case 0xC2CF07: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:755 LDA @LOCAL07
    case 0xC2CF0A: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:756 CLC
    case 0xC2CF0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:757 ADC #loaded_bg_data::distortion_ripple_amplitude
    case 0xC2CF0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006B, 2); else cpu.execute_instruction<0x69>(0x00006B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:757 ADC #loaded_bg_data::distortion_ripple_amplitude
    // Overlapping static entry reached from 0xC2CF0D.
    case 0xC2CF0F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:758 TAX
    case 0xC2CF10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:759 LDY #loaded_bg_data::distortion_ripple_amplitude_acceleration
    case 0xC2CF11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000072, 2); else cpu.execute_instruction<0xA0>(0x000072, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:759 LDY #loaded_bg_data::distortion_ripple_amplitude_acceleration
    // Overlapping static entry reached from 0xC2CF11.
    case 0xC2CF13: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:760 LDA __BSS_START__,X
    case 0xC2CF14: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:761 CLC
    case 0xC2CF17: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:762 ADC (@LOCAL07),Y
    case 0xC2CF18: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:763 STA __BSS_START__,X
    case 0xC2CF1A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:764 LDA @LOCAL07
    case 0xC2CF1D: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:765 CLC
    case 0xC2CF1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:766 ADC #loaded_bg_data::distortion_speed
    case 0xC2CF20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006D, 2); else cpu.execute_instruction<0x69>(0x00006D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:766 ADC #loaded_bg_data::distortion_speed
    // Overlapping static entry reached from 0xC2CF20.
    case 0xC2CF22: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:767 TAX
    case 0xC2CF23: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:768 LDY #loaded_bg_data::distortion_speed_acceleration
    case 0xC2CF24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000074, 2); else cpu.execute_instruction<0xA0>(0x000074, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:768 LDY #loaded_bg_data::distortion_speed_acceleration
    // Overlapping static entry reached from 0xC2CF24.
    case 0xC2CF26: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:769 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CF27: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:770 LDA __BSS_START__,X
    case 0xC2CF29: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:771 CLC
    case 0xC2CF2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:772 ADC (@LOCAL07),Y
    case 0xC2CF2D: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:773 STA __BSS_START__,X
    case 0xC2CF2F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:774 REP #PROC_FLAGS::ACCUM8
    case 0xC2CF32: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:775 LDA @LOCAL07
    case 0xC2CF34: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:776 CLC
    case 0xC2CF36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:777 ADC #loaded_bg_data::distortion_compression_rate
    case 0xC2CF37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006E, 2); else cpu.execute_instruction<0x69>(0x00006E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:777 ADC #loaded_bg_data::distortion_compression_rate
    // Overlapping static entry reached from 0xC2CF37.
    case 0xC2CF39: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:778 STA @VIRTUAL02
    case 0xC2CF3A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:779 LDY #loaded_bg_data::distortion_compression_acceleration
    case 0xC2CF3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000075, 2); else cpu.execute_instruction<0xA0>(0x000075, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:779 LDY #loaded_bg_data::distortion_compression_acceleration
    // Overlapping static entry reached from 0xC2CF3C.
    case 0xC2CF3E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:780 LDX @VIRTUAL02
    case 0xC2CF3F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:781 LDA __BSS_START__,X
    case 0xC2CF41: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:782 CLC
    case 0xC2CF44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:783 ADC (@LOCAL07),Y
    case 0xC2CF45: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:784 LDX @VIRTUAL02
    case 0xC2CF47: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:785 STA __BSS_START__,X
    case 0xC2CF49: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:786 LDY @LOCAL08
    case 0xC2CF4C: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:787 LDX @LOCAL06
    case 0xC2CF4E: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:788 STX @LOCAL03
    case 0xC2CF50: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:789 LDA @LOCAL00
    case 0xC2CF52: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:790 TAX
    case 0xC2CF54: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:791 LDA __BSS_START__,X
    case 0xC2CF55: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:792 AND #$00FF
    case 0xC2CF58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:792 AND #$00FF
    // Overlapping static entry reached from 0xC2CF58.
    case 0xC2CF5A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:793 DEC
    case 0xC2CF5B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:794 LDX @LOCAL03
    case 0xC2CF5C: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:795 JSL LOAD_BG_OFFSET_PARAMETERS
    case 0xC2CF5E: cpu.execute_instruction<0x22>(0xC0AE2B, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:796 LDX @VIRTUAL02
    case 0xC2CF62: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:797 LDA __BSS_START__,X
    case 0xC2CF64: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:798 JSL LOAD_BG_OFFSET_PARAMETERS2
    case 0xC2CF67: cpu.execute_instruction<0x22>(0xC0AE35, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:799 LDA FRAME_COUNTER
    case 0xC2CF6B: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:800 AND #$00FF
    case 0xC2CF6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:800 AND #$00FF
    // Overlapping static entry reached from 0xC2CF6E.
    case 0xC2CF70: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:801 AND #$0001
    case 0xC2CF71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:801 AND #$0001
    // Overlapping static entry reached from 0xC2CF71.
    case 0xC2CF73: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:802 CMP @LOCAL08
    case 0xC2CF74: cpu.execute_instruction<0xC5>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:803 BEQ @PREPARE_BG_OFFSETS
    case 0xC2CF76: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:804 LDA DISTORT_30FPS
    case 0xC2CF78: cpu.execute_instruction<0xAD>(0x00AF81, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:805 BNE @RETURN
    case 0xC2CF7B: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:807 LDY #loaded_bg_data::distortion_speed
    case 0xC2CF7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006D, 2); else cpu.execute_instruction<0xA0>(0x00006D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:807 LDY #loaded_bg_data::distortion_speed
    // Overlapping static entry reached from 0xC2CF7D.
    case 0xC2CF7F: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:808 LDA (@LOCAL07),Y
    case 0xC2CF80: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:809 AND #$00FF
    case 0xC2CF82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:809 AND #$00FF
    // Overlapping static entry reached from 0xC2CF82.
    case 0xC2CF84: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:810 TAY
    case 0xC2CF85: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:811 STY @LOCAL01
    case 0xC2CF86: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:812 LDY #loaded_bg_data::distortion_ripple_amplitude
    case 0xC2CF88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006B, 2); else cpu.execute_instruction<0xA0>(0x00006B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:812 LDY #loaded_bg_data::distortion_ripple_amplitude
    // Overlapping static entry reached from 0xC2CF88.
    case 0xC2CF8A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:813 LDA (@LOCAL07),Y
    case 0xC2CF8B: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:814 XBA
    case 0xC2CF8D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:815 AND #$00FF
    case 0xC2CF8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:815 AND #$00FF
    // Overlapping static entry reached from 0xC2CF8E.
    case 0xC2CF90: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:816 TAX
    case 0xC2CF91: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:817 LDY #loaded_bg_data::distortion_ripple_frequency
    case 0xC2CF92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000069, 2); else cpu.execute_instruction<0xA0>(0x000069, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:817 LDY #loaded_bg_data::distortion_ripple_frequency
    // Overlapping static entry reached from 0xC2CF92.
    case 0xC2CF94: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:818 LDA (@LOCAL07),Y
    case 0xC2CF95: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:819 LDY @LOCAL01
    case 0xC2CF97: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:820 JSL PREPARE_BG_OFFSET_TABLES
    case 0xC2CF99: cpu.execute_instruction<0x22>(0xC0AE39, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/battlebgs/generate_frame.asm:822 END_C_FUNCTION
    case 0xC2CF9D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:822 END_C_FUNCTION
    case 0xC2CF9E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/load_bg_offset_parameters.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/battlebgs/load_bg_offset_parameters.asm:3 STA BACKGROUND_DISTORTION_STYLE
    case 0xC0AE2B: cpu.execute_instruction<0x8D>(0x001B3A, 3); return true;
    // src/misc/battlebgs/load_bg_offset_parameters.asm:4 STX BACKGROUND_DISTORTION_TARGET_LAYER
    case 0xC0AE2E: cpu.execute_instruction<0x8E>(0x001B3C, 3); return true;
    // src/misc/battlebgs/load_bg_offset_parameters.asm:5 STY BACKGROUND_DISTORTION_IS_SECONDARY_LAYER
    case 0xC0AE31: cpu.execute_instruction<0x8C>(0x001B40, 3); return true;
    // src/misc/battlebgs/load_bg_offset_parameters.asm:6 RTL
    case 0xC0AE34: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/load_bg_offset_parameters2.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/battlebgs/load_bg_offset_parameters2.asm:3 STA BACKGROUND_DISTORTION_COMPRESSION_RATE
    case 0xC0AE35: cpu.execute_instruction<0x8D>(0x001B42, 3); return true;
    // src/misc/battlebgs/load_bg_offset_parameters2.asm:4 RTL
    case 0xC0AE38: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/prepare_bg_offset_tables.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_prepare_bg_offset_tables_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:3 PHD
    case 0xC0AE39: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:4 PHA
    case 0xC0AE3A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:5 TDC
    case 0xC0AE3B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:6 SEC
    case 0xC0AE3C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:7 SBC #$000B
    case 0xC0AE3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000B, 2); else cpu.execute_instruction<0xE9>(0x00000B, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:7 SBC #$000B
    // Overlapping static entry reached from 0xC0AE3D.
    case 0xC0AE3F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:8 AND #$FF00
    case 0xC0AE40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:8 AND #$FF00
    // Overlapping static entry reached from 0xC0AE40.
    case 0xC0AE42: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:9 TCD
    case 0xC0AE43: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:10 PLA
    case 0xC0AE44: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:11 STA $00
    case 0xC0AE45: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:11 STA $00
    // Overlapping static entry reached from 0xC0AE42.
    case 0xC0AE46: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:12 TXA
    case 0xC0AE47: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AE48: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:14 STA f:M7A
    case 0xC0AE4A: cpu.execute_instruction<0x8F>(0x00211B, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:15 XBA
    case 0xC0AE4E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:16 STA f:M7A
    case 0xC0AE4F: cpu.execute_instruction<0x8F>(0x00211B, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:17 STZ $02
    case 0xC0AE53: cpu.execute_instruction<0x64>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:18 STY $03
    case 0xC0AE55: cpu.execute_instruction<0x84>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:19 STZ $04
    case 0xC0AE57: cpu.execute_instruction<0x64>(0x000004, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC0AE59: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:21 LDA #$0000
    case 0xC0AE5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:21 LDA #$0000
    // Overlapping static entry reached from 0xC0AE5B.
    case 0xC0AE5D: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:22 LDX #$01C0 ;buffer size for 1 layer
    case 0xC0AE5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0001C0, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:22 LDX #$01C0 ;buffer size for 1 layer
    // Overlapping static entry reached from 0xC0AE5E.
    case 0xC0AE60: cpu.execute_instruction<0x01>(0x0000AC, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:23 LDY BACKGROUND_DISTORTION_IS_SECONDARY_LAYER
    case 0xC0AE61: cpu.execute_instruction<0xAC>(0x001B40, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:23 LDY BACKGROUND_DISTORTION_IS_SECONDARY_LAYER
    // Overlapping static entry reached from 0xC0AE60.
    case 0xC0AE62: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:24 BEQ @UNKNOWN0
    case 0xC0AE64: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:25 TXA
    case 0xC0AE66: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:26 LDX #$0380 ;buffer size for 2 layers
    case 0xC0AE67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000380, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:26 LDX #$0380 ;buffer size for 2 layers
    // Overlapping static entry reached from 0xC0AE67.
    case 0xC0AE69: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:28 STA $07
    case 0xC0AE6A: cpu.execute_instruction<0x85>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:28 STA $07
    // Overlapping static entry reached from 0xC0AE69.
    case 0xC0AE6B: cpu.execute_instruction<0x07>(0x000086, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:29 STX $09
    case 0xC0AE6C: cpu.execute_instruction<0x86>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:29 STX $09
    // Overlapping static entry reached from 0xC0AE6B.
    case 0xC0AE6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000AD, 2); else cpu.execute_instruction<0x09>(0x003AAD, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:30 LDA BACKGROUND_DISTORTION_STYLE
    case 0xC0AE6E: cpu.execute_instruction<0xAD>(0x001B3A, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:30 LDA BACKGROUND_DISTORTION_STYLE
    // Overlapping static entry reached from 0xC0AE6D.
    case 0xC0AE6F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:30 LDA BACKGROUND_DISTORTION_STYLE
    // Overlapping static entry reached from 0xC0AE6D.
    case 0xC0AE70: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:31 CMP #$0002
    case 0xC0AE71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:31 CMP #$0002
    // Overlapping static entry reached from 0xC0AE71.
    case 0xC0AE73: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:32 BCC @UNKNOWN2
    case 0xC0AE74: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/prepare_bg_offset_tables.asm:33 BEQL @UNKNOWN7
    case 0xC0AE76: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/prepare_bg_offset_tables.asm:33 BEQL @UNKNOWN7
    case 0xC0AE78: cpu.execute_instruction<0x4C>(0x00AF03, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:34 JMP @UNKNOWN10
    case 0xC0AE7B: cpu.execute_instruction<0x4C>(0x00AF44, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:36 LDA BACKGROUND_DISTORTION_TARGET_LAYER
    case 0xC0AE7E: cpu.execute_instruction<0xAD>(0x001B3C, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:37 BEQ @UNKNOWN3
    case 0xC0AE81: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:38 DEC
    case 0xC0AE83: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:39 ASL
    case 0xC0AE84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:40 ASL
    case 0xC0AE85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:41 TAX
    case 0xC0AE86: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:42 LDA __BSS_START__+51,X
    case 0xC0AE87: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:43 CLC
    case 0xC0AE8A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:44 ADC $03
    case 0xC0AE8B: cpu.execute_instruction<0x65>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:45 AND #$00FF
    case 0xC0AE8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC0AE8D.
    case 0xC0AE8F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:46 STA $03
    case 0xC0AE90: cpu.execute_instruction<0x85>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:47 LDA __BSS_START__+49,X
    case 0xC0AE92: cpu.execute_instruction<0xBD>(0x000031, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:49 STA $05
    case 0xC0AE95: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:50 LDA BACKGROUND_DISTORTION_STYLE
    case 0xC0AE97: cpu.execute_instruction<0xAD>(0x001B3A, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:51 BNE @UNKNOWN5
    case 0xC0AE9A: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:52 LDY $07
    case 0xC0AE9C: cpu.execute_instruction<0xA4>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:54 LDX $03
    case 0xC0AE9E: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:55 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AEA0: cpu.execute_instruction<0xBF>(0xC0B404, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:56 STA f:M7B
    case 0xC0AEA4: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:57 LDA f:MPYM
    case 0xC0AEA8: cpu.execute_instruction<0xAF>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:58 CLC
    case 0xC0AEAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:59 ADC $05
    case 0xC0AEAD: cpu.execute_instruction<0x65>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:60 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER,Y
    case 0xC0AEAF: cpu.execute_instruction<0x99>(0x003FCC, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:61 LDA $02
    case 0xC0AEB2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:62 CLC
    case 0xC0AEB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:63 ADC $00
    case 0xC0AEB5: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:64 STA $02
    case 0xC0AEB7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:65 INY
    case 0xC0AEB9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:66 INY
    case 0xC0AEBA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:67 CPY $09
    case 0xC0AEBB: cpu.execute_instruction<0xC4>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:68 BCC @UNKNOWN4
    case 0xC0AEBD: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:69 PLD
    case 0xC0AEBF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:70 RTL
    case 0xC0AEC0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:72 LDY $07
    case 0xC0AEC1: cpu.execute_instruction<0xA4>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:74 LDX $03
    case 0xC0AEC3: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:75 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AEC5: cpu.execute_instruction<0xBF>(0xC0B404, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:76 STA f:M7B
    case 0xC0AEC9: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:77 LDA f:MPYM
    case 0xC0AECD: cpu.execute_instruction<0xAF>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:78 CLC
    case 0xC0AED1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:79 ADC $05
    case 0xC0AED2: cpu.execute_instruction<0x65>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:80 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER,Y
    case 0xC0AED4: cpu.execute_instruction<0x99>(0x003FCC, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:81 LDA $02
    case 0xC0AED7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:82 CLC
    case 0xC0AED9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:83 ADC $00
    case 0xC0AEDA: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:84 STA $02
    case 0xC0AEDC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:85 LDX $03
    case 0xC0AEDE: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:86 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AEE0: cpu.execute_instruction<0xBF>(0xC0B404, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:87 STA f:M7B
    case 0xC0AEE4: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:88 LDA $05
    case 0xC0AEE8: cpu.execute_instruction<0xA5>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:89 SEC
    case 0xC0AEEA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:90 SBC f:MPYM
    case 0xC0AEEB: cpu.execute_instruction<0xEF>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:91 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER + 2,Y
    case 0xC0AEEF: cpu.execute_instruction<0x99>(0x003FCE, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:92 LDA $02
    case 0xC0AEF2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:93 CLC
    case 0xC0AEF4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:94 ADC $00
    case 0xC0AEF5: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:95 STA $02
    case 0xC0AEF7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:96 INY
    case 0xC0AEF9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:97 INY
    case 0xC0AEFA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:98 INY
    case 0xC0AEFB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:99 INY
    case 0xC0AEFC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:100 CPY $09
    case 0xC0AEFD: cpu.execute_instruction<0xC4>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:101 BCC @UNKNOWN6
    case 0xC0AEFF: cpu.execute_instruction<0x90>(0x0000C2, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:102 PLD
    case 0xC0AF01: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:103 RTL
    case 0xC0AF02: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:105 LDA BACKGROUND_DISTORTION_TARGET_LAYER
    case 0xC0AF03: cpu.execute_instruction<0xAD>(0x001B3C, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:106 BEQ @UNKNOWN8
    case 0xC0AF06: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:107 DEC
    case 0xC0AF08: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:108 ASL
    case 0xC0AF09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:109 ASL
    case 0xC0AF0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:110 TAX
    case 0xC0AF0B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:111 LDA __BSS_START__+51,X
    case 0xC0AF0C: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:113 XBA
    case 0xC0AF0F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:114 AND #$FF00
    case 0xC0AF10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:114 AND #$FF00
    // Overlapping static entry reached from 0xC0AF10.
    case 0xC0AF12: cpu.execute_instruction<0xFF>(0xA40585, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:115 STA $05
    case 0xC0AF13: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:116 LDY $07
    case 0xC0AF15: cpu.execute_instruction<0xA4>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:116 LDY $07
    // Overlapping static entry reached from 0xC0AF12.
    case 0xC0AF16: cpu.execute_instruction<0x07>(0x0000A6, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:118 LDX $03
    case 0xC0AF17: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:118 LDX $03
    // Overlapping static entry reached from 0xC0AF16.
    case 0xC0AF18: cpu.execute_instruction<0x03>(0x0000BF, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:119 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AF19: cpu.execute_instruction<0xBF>(0xC0B404, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:119 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC0AF18.
    case 0xC0AF1A: cpu.execute_instruction<0x04>(0x0000B4, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:119 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC0AF1A.
    case 0xC0AF1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00008F, 2); else cpu.execute_instruction<0xC0>(0x001C8F, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:120 STA f:M7B
    case 0xC0AF1D: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:120 STA f:M7B
    // Overlapping static entry reached from 0xC0AF1C.
    case 0xC0AF1E: cpu.execute_instruction<0x1C>(0x000021, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:120 STA f:M7B
    // Overlapping static entry reached from 0xC0AF1C.
    case 0xC0AF1F: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:121 LDA $05
    case 0xC0AF21: cpu.execute_instruction<0xA5>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:122 CLC
    case 0xC0AF23: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:123 ADC BACKGROUND_DISTORTION_COMPRESSION_RATE
    case 0xC0AF24: cpu.execute_instruction<0x6D>(0x001B42, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:124 STA $05
    case 0xC0AF27: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:125 XBA
    case 0xC0AF29: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:126 AND #$00FF
    case 0xC0AF2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC0AF2A.
    case 0xC0AF2C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:127 CLC
    case 0xC0AF2D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:128 ADC f:MPYM
    case 0xC0AF2E: cpu.execute_instruction<0x6F>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:129 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER,Y
    case 0xC0AF32: cpu.execute_instruction<0x99>(0x003FCC, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:130 LDA $02
    case 0xC0AF35: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:131 CLC
    case 0xC0AF37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:132 ADC $00
    case 0xC0AF38: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:133 STA $02
    case 0xC0AF3A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:134 INY
    case 0xC0AF3C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:135 INY
    case 0xC0AF3D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:136 CPY $09
    case 0xC0AF3E: cpu.execute_instruction<0xC4>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:137 BCC @UNKNOWN9
    case 0xC0AF40: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:138 PLD
    case 0xC0AF42: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:139 RTL
    case 0xC0AF43: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:141 LDA BACKGROUND_DISTORTION_TARGET_LAYER
    case 0xC0AF44: cpu.execute_instruction<0xAD>(0x001B3C, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:142 BEQ @UNKNOWN11
    case 0xC0AF47: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:143 DEC
    case 0xC0AF49: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:144 ASL
    case 0xC0AF4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:145 ASL
    case 0xC0AF4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:146 TAX
    case 0xC0AF4C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:147 LDA __BSS_START__+51,X
    case 0xC0AF4D: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:149 XBA
    case 0xC0AF50: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:150 AND #$FF00
    case 0xC0AF51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:150 AND #$FF00
    // Overlapping static entry reached from 0xC0AF51.
    case 0xC0AF53: cpu.execute_instruction<0xFF>(0xA40585, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:151 STA $05
    case 0xC0AF54: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:152 LDY $07
    case 0xC0AF56: cpu.execute_instruction<0xA4>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:152 LDY $07
    // Overlapping static entry reached from 0xC0AF53.
    case 0xC0AF57: cpu.execute_instruction<0x07>(0x0000A6, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:154 LDX $03
    case 0xC0AF58: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:154 LDX $03
    // Overlapping static entry reached from 0xC0AF57.
    case 0xC0AF59: cpu.execute_instruction<0x03>(0x0000BF, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:155 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AF5A: cpu.execute_instruction<0xBF>(0xC0B404, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:155 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC0AF59.
    case 0xC0AF5B: cpu.execute_instruction<0x04>(0x0000B4, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:155 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC0AF5B.
    case 0xC0AF5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00008F, 2); else cpu.execute_instruction<0xC0>(0x001C8F, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:156 STA f:M7B
    case 0xC0AF5E: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:156 STA f:M7B
    // Overlapping static entry reached from 0xC0AF5D.
    case 0xC0AF5F: cpu.execute_instruction<0x1C>(0x000021, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:156 STA f:M7B
    // Overlapping static entry reached from 0xC0AF5D.
    case 0xC0AF60: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:157 LDA $05
    case 0xC0AF62: cpu.execute_instruction<0xA5>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:158 CLC
    case 0xC0AF64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:159 ADC BACKGROUND_DISTORTION_COMPRESSION_RATE
    case 0xC0AF65: cpu.execute_instruction<0x6D>(0x001B42, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:160 STA $05
    case 0xC0AF68: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:161 XBA
    case 0xC0AF6A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:162 AND #$00FF
    case 0xC0AF6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC0AF6B.
    case 0xC0AF6D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:163 CLC
    case 0xC0AF6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:164 ADC f:MPYM
    case 0xC0AF6F: cpu.execute_instruction<0x6F>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:165 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER,Y
    case 0xC0AF73: cpu.execute_instruction<0x99>(0x003FCC, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:166 LDA $02
    case 0xC0AF76: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:167 CLC
    case 0xC0AF78: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:168 ADC $00
    case 0xC0AF79: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:169 STA $02
    case 0xC0AF7B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:170 LDX $03
    case 0xC0AF7D: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:171 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AF7F: cpu.execute_instruction<0xBF>(0xC0B404, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:172 STA f:M7B
    case 0xC0AF83: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:173 LDA $05
    case 0xC0AF87: cpu.execute_instruction<0xA5>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:174 CLC
    case 0xC0AF89: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:175 ADC BACKGROUND_DISTORTION_COMPRESSION_RATE
    case 0xC0AF8A: cpu.execute_instruction<0x6D>(0x001B42, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:176 STA $05
    case 0xC0AF8D: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:177 XBA
    case 0xC0AF8F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:178 AND #$00FF
    case 0xC0AF90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC0AF90.
    case 0xC0AF92: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:179 SEC
    case 0xC0AF93: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:180 SBC f:MPYM
    case 0xC0AF94: cpu.execute_instruction<0xEF>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:181 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER + 2,Y
    case 0xC0AF98: cpu.execute_instruction<0x99>(0x003FCE, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:182 LDA $02
    case 0xC0AF9B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:183 CLC
    case 0xC0AF9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:184 ADC $00
    case 0xC0AF9E: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:185 STA $02
    case 0xC0AFA0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:185 STA $02
    // Overlapping static entry reached from 0xC0B010.
    case 0xC0AFA1: cpu.execute_instruction<0x02>(0x0000C8, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:186 INY
    case 0xC0AFA2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:187 INY
    case 0xC0AFA3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:188 INY
    case 0xC0AFA4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:189 INY
    case 0xC0AFA5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:190 CPY $09
    case 0xC0AFA6: cpu.execute_instruction<0xC4>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:191 BCC @UNKNOWN12
    case 0xC0AFA8: cpu.execute_instruction<0x90>(0x0000AE, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:192 PLD
    case 0xC0AFAA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:193 RTL
    case 0xC0AFAB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/change_equipped_arms.asm (source_named).
bool execute_miscellaneous_change_equipped_arms_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/change_equipped_arms.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43613: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC43615: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC43616: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC43617: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC43618: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC43618.
    case 0xC4361A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC4361B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC4361C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:10 STX @VIRTUAL02
    case 0xC4361D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/change_equipped_arms.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4361A.
    case 0xC4361E: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/change_equipped_arms.asm:11 TAY
    case 0xC4361F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:12 STY @LOCAL00
    case 0xC43620: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/change_equipped_arms.asm:13 TYA
    case 0xC43622: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:14 DEC
    case 0xC43623: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/change_equipped_arms.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC43624: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/change_equipped_arms.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC43624.
    case 0xC43626: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/change_equipped_arms.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC43627: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/change_equipped_arms.asm:16 CLC
    case 0xC4362B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:17 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    case 0xC4362C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B1, 2); else cpu.execute_instruction<0x69>(0x009CB1, 3); return true;
    // src/misc/change_equipped_arms.asm:17 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC4362C.
    case 0xC4362E: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/misc/change_equipped_arms.asm:18 TAX
    case 0xC4362F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:19 LDA __BSS_START__,X
    case 0xC43630: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/change_equipped_arms.asm:19 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4362E.
    case 0xC43631: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/change_equipped_arms.asm:20 AND #$00FF
    case 0xC43633: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/change_equipped_arms.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC43633.
    case 0xC43635: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/change_equipped_arms.asm:21 STA @VIRTUAL04
    case 0xC43636: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/change_equipped_arms.asm:22 LDA @VIRTUAL02
    case 0xC43638: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/change_equipped_arms.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC4363A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/change_equipped_arms.asm:24 STA __BSS_START__,X
    case 0xC4363C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/change_equipped_arms.asm:25 LDY @LOCAL00
    case 0xC4363F: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_arms.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC43641: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_arms.asm:27 TYA
    case 0xC43643: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:28 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC43644: cpu.execute_instruction<0x22>(0xC217D9, 4); return true;
    // src/misc/change_equipped_arms.asm:29 LDY @LOCAL00
    case 0xC43648: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_arms.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC4364A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_arms.asm:31 TYA
    case 0xC4364C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:32 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC4364D: cpu.execute_instruction<0x22>(0xC21AFA, 4); return true;
    // src/misc/change_equipped_arms.asm:33 LDY @LOCAL00
    case 0xC43651: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_arms.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC43653: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_arms.asm:35 TYA
    case 0xC43655: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:36 JSL CALC_RESISTANCES
    case 0xC43656: cpu.execute_instruction<0x22>(0xC21C99, 4); return true;
    // src/misc/change_equipped_arms.asm:37 LDA @VIRTUAL04
    case 0xC4365A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/change_equipped_arms.asm:38 END_C_FUNCTION
    case 0xC4365C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/change_equipped_arms.asm:38 END_C_FUNCTION
    case 0xC4365D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/change_equipped_body.asm (source_named).
bool execute_miscellaneous_change_equipped_body_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/change_equipped_body.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC435C8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC435CA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC435CB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC435CC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC435CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC435CD.
    case 0xC435CF: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC435D0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC435D1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:10 STX @VIRTUAL02
    case 0xC435D2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/change_equipped_body.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC435CF.
    case 0xC435D3: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/change_equipped_body.asm:11 TAY
    case 0xC435D4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:12 STY @LOCAL00
    case 0xC435D5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/change_equipped_body.asm:13 TYA
    case 0xC435D7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:14 DEC
    case 0xC435D8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:15 LDY #.SIZEOF(char_struct)
    case 0xC435D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/change_equipped_body.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC435D9.
    case 0xC435DB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/change_equipped_body.asm:16 JSL MULT168
    case 0xC435DC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/change_equipped_body.asm:17 CLC
    case 0xC435E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    case 0xC435E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x009CB0, 3); return true;
    // src/misc/change_equipped_body.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC435E1.
    case 0xC435E3: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/misc/change_equipped_body.asm:19 TAX
    case 0xC435E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:20 LDA __BSS_START__,X
    case 0xC435E5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/change_equipped_body.asm:20 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC435E3.
    case 0xC435E6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/change_equipped_body.asm:21 AND #$00FF
    case 0xC435E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/change_equipped_body.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC435E8.
    case 0xC435EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/change_equipped_body.asm:22 STA @VIRTUAL04
    case 0xC435EB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/change_equipped_body.asm:23 LDA @VIRTUAL02
    case 0xC435ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/change_equipped_body.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC435EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/change_equipped_body.asm:25 STA __BSS_START__,X
    case 0xC435F1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/change_equipped_body.asm:26 LDY @LOCAL00
    case 0xC435F4: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_body.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC435F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_body.asm:28 TYA
    case 0xC435F8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:29 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC435F9: cpu.execute_instruction<0x22>(0xC217D9, 4); return true;
    // src/misc/change_equipped_body.asm:30 LDY @LOCAL00
    case 0xC435FD: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_body.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC435FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_body.asm:32 TYA
    case 0xC43601: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:33 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC43602: cpu.execute_instruction<0x22>(0xC21996, 4); return true;
    // src/misc/change_equipped_body.asm:34 LDY @LOCAL00
    case 0xC43606: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_body.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC43608: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_body.asm:36 TYA
    case 0xC4360A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:37 JSL CALC_RESISTANCES
    case 0xC4360B: cpu.execute_instruction<0x22>(0xC21C99, 4); return true;
    // src/misc/change_equipped_body.asm:38 LDA @VIRTUAL04
    case 0xC4360F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/change_equipped_body.asm:39 END_C_FUNCTION
    case 0xC43611: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/change_equipped_body.asm:39 END_C_FUNCTION
    case 0xC43612: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/change_equipped_other.asm (source_named).
bool execute_miscellaneous_change_equipped_other_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/change_equipped_other.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4365E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC43660: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC43661: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC43662: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC43663: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC43663.
    case 0xC43665: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC43666: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC43667: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:10 STX @VIRTUAL02
    case 0xC43668: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/change_equipped_other.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC43665.
    case 0xC43669: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/change_equipped_other.asm:11 TAY
    case 0xC4366A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:12 STY @LOCAL00
    case 0xC4366B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/change_equipped_other.asm:13 TYA
    case 0xC4366D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:14 DEC
    case 0xC4366E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:15 LDY #.SIZEOF(char_struct)
    case 0xC4366F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/change_equipped_other.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4366F.
    case 0xC43671: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/change_equipped_other.asm:16 JSL MULT168
    case 0xC43672: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/change_equipped_other.asm:17 CLC
    case 0xC43676: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    case 0xC43677: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x009CB2, 3); return true;
    // src/misc/change_equipped_other.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC43677.
    case 0xC43679: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/misc/change_equipped_other.asm:19 TAX
    case 0xC4367A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:20 LDA __BSS_START__,X
    case 0xC4367B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/change_equipped_other.asm:20 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC43679.
    case 0xC4367C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/change_equipped_other.asm:21 AND #$00FF
    case 0xC4367E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/change_equipped_other.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC4367E.
    case 0xC43680: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/change_equipped_other.asm:22 STA @VIRTUAL04
    case 0xC43681: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/change_equipped_other.asm:23 LDA @VIRTUAL02
    case 0xC43683: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/change_equipped_other.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC43685: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/change_equipped_other.asm:25 STA __BSS_START__,X
    case 0xC43687: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/change_equipped_other.asm:26 LDY @LOCAL00
    case 0xC4368A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_other.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC4368C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_other.asm:28 TYA
    case 0xC4368E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:29 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC4368F: cpu.execute_instruction<0x22>(0xC217D9, 4); return true;
    // src/misc/change_equipped_other.asm:30 LDY @LOCAL00
    case 0xC43693: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_other.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC43695: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_other.asm:32 TYA
    case 0xC43697: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:33 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC43698: cpu.execute_instruction<0x22>(0xC21AFA, 4); return true;
    // src/misc/change_equipped_other.asm:34 LDY @LOCAL00
    case 0xC4369C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_other.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC4369E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_other.asm:36 TYA
    case 0xC436A0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:37 JSL CALC_RESISTANCES
    case 0xC436A1: cpu.execute_instruction<0x22>(0xC21C99, 4); return true;
    // src/misc/change_equipped_other.asm:38 LDA @VIRTUAL04
    case 0xC436A5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/change_equipped_other.asm:39 END_C_FUNCTION
    case 0xC436A7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/change_equipped_other.asm:39 END_C_FUNCTION
    case 0xC436A8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/change_equipped_weapon.asm (source_named).
bool execute_miscellaneous_change_equipped_weapon_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/change_equipped_weapon.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4357B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC4357D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC4357E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC4357F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC43580: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC43580.
    case 0xC43582: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC43583: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC43584: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:10 STX @VIRTUAL02
    case 0xC43585: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/change_equipped_weapon.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC43582.
    case 0xC43586: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/change_equipped_weapon.asm:11 TAY
    case 0xC43587: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:12 STY @LOCAL00
    case 0xC43588: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/change_equipped_weapon.asm:13 TYA
    case 0xC4358A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:14 DEC
    case 0xC4358B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:15 LDY #.SIZEOF(char_struct)
    case 0xC4358C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/change_equipped_weapon.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4358C.
    case 0xC4358E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/change_equipped_weapon.asm:16 JSL MULT168
    case 0xC4358F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/change_equipped_weapon.asm:17 CLC
    case 0xC43593: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::WEAPON
    case 0xC43594: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AF, 2); else cpu.execute_instruction<0x69>(0x009CAF, 3); return true;
    // src/misc/change_equipped_weapon.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC43594.
    case 0xC43596: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/misc/change_equipped_weapon.asm:19 TAX
    case 0xC43597: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:20 LDA __BSS_START__,X
    case 0xC43598: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/change_equipped_weapon.asm:20 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC43596.
    case 0xC43599: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/change_equipped_weapon.asm:21 AND #$00FF
    case 0xC4359B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/change_equipped_weapon.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC4359B.
    case 0xC4359D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/change_equipped_weapon.asm:22 STA @VIRTUAL04
    case 0xC4359E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/change_equipped_weapon.asm:23 LDA @VIRTUAL02
    case 0xC435A0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/change_equipped_weapon.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC435A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:25 STA __BSS_START__,X
    case 0xC435A4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/change_equipped_weapon.asm:26 LDY @LOCAL00
    case 0xC435A7: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_weapon.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC435A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:28 TYA
    case 0xC435AB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:29 JSL RECALC_CHARACTER_POSTMATH_OFFENSE
    case 0xC435AC: cpu.execute_instruction<0x22>(0xC21706, 4); return true;
    // src/misc/change_equipped_weapon.asm:30 LDY @LOCAL00
    case 0xC435B0: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_weapon.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC435B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:32 TYA
    case 0xC435B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:33 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC435B5: cpu.execute_instruction<0x22>(0xC21A48, 4); return true;
    // src/misc/change_equipped_weapon.asm:34 LDY @LOCAL00
    case 0xC435B9: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_weapon.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC435BB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:36 TYA
    case 0xC435BD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:37 JSL RECALC_CHARACTER_MISS_RATE
    case 0xC435BE: cpu.execute_instruction<0x22>(0xC21C2A, 4); return true;
    // src/misc/change_equipped_weapon.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC435C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:39 LDA @VIRTUAL04
    case 0xC435C4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/change_equipped_weapon.asm:40 END_C_FUNCTION
    case 0xC435C6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/change_equipped_weapon.asm:40 END_C_FUNCTION
    case 0xC435C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/check_if_psi_known.asm (source_named).
bool execute_miscellaneous_check_if_psi_known_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/check_if_psi_known.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43C1C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC43C1E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC43C1F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC43C20: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC43C21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC43C21.
    case 0xC43C23: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC43C24: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC43C25: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:11 STA @LOCAL02
    case 0xC43C26: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/check_if_psi_known.asm:11 STA @LOCAL02
    // Overlapping static entry reached from 0xC43C23.
    case 0xC43C27: cpu.execute_instruction<0x11>(0x0000C9, 2); return true;
    // src/misc/check_if_psi_known.asm:12 CMP #PARTY_MEMBER::NESS
    case 0xC43C28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/check_if_psi_known.asm:12 CMP #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC43C27.
    case 0xC43C29: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:12 CMP #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC43C28.
    case 0xC43C2A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_if_psi_known.asm:13 BEQ @UNKNOWN0
    case 0xC43C2B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/misc/check_if_psi_known.asm:14 CMP #PARTY_MEMBER::PAULA
    case 0xC43C2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/check_if_psi_known.asm:14 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC43C2D.
    case 0xC43C2F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_if_psi_known.asm:15 BEQ @UNKNOWN1
    case 0xC43C30: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/check_if_psi_known.asm:16 CMP #PARTY_MEMBER::POO
    case 0xC43C32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/check_if_psi_known.asm:16 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC43C32.
    case 0xC43C34: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_if_psi_known.asm:17 BEQ @UNKNOWN2
    case 0xC43C35: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/misc/check_if_psi_known.asm:18 BRA @UNKNOWN3
    case 0xC43C37: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/misc/check_if_psi_known.asm:20 TXA
    case 0xC43C39: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C3A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C3C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C3D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C40: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C42: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C43: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/check_if_psi_known.asm:22 CLC
    case 0xC43C45: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:23 ADC #psi_ability::ness_level
    case 0xC43C46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/misc/check_if_psi_known.asm:23 ADC #psi_ability::ness_level
    // Overlapping static entry reached from 0xC43C46.
    case 0xC43C48: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/check_if_psi_known.asm:24 TAX
    case 0xC43C49: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC43C4A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:26 LDA f:PSI_ABILITY_TABLE,X
    case 0xC43C4C: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // src/misc/check_if_psi_known.asm:27 STA @VIRTUAL00
    case 0xC43C50: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:28 STA @LOCAL01
    case 0xC43C52: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/check_if_psi_known.asm:29 BRA @UNKNOWN3
    case 0xC43C54: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/misc/check_if_psi_known.asm:32 TXA
    case 0xC43C56: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C57: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C5A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C5C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C5D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C60: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/check_if_psi_known.asm:34 CLC
    case 0xC43C62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:35 ADC #psi_ability::paula_level
    case 0xC43C63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/misc/check_if_psi_known.asm:35 ADC #psi_ability::paula_level
    // Overlapping static entry reached from 0xC43C63.
    case 0xC43C65: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/check_if_psi_known.asm:36 TAX
    case 0xC43C66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC43C67: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:38 LDA f:PSI_ABILITY_TABLE,X
    case 0xC43C69: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // src/misc/check_if_psi_known.asm:39 STA @VIRTUAL00
    case 0xC43C6D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:40 STA @LOCAL01
    case 0xC43C6F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/check_if_psi_known.asm:41 BRA @UNKNOWN3
    case 0xC43C71: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/misc/check_if_psi_known.asm:44 TXA
    case 0xC43C73: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C74: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C77: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C7A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC43C7D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/check_if_psi_known.asm:46 CLC
    case 0xC43C7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:47 ADC #psi_ability::poo_level
    case 0xC43C80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/check_if_psi_known.asm:47 ADC #psi_ability::poo_level
    // Overlapping static entry reached from 0xC43C80.
    case 0xC43C82: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/check_if_psi_known.asm:48 TAX
    case 0xC43C83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC43C84: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:50 LDA f:PSI_ABILITY_TABLE,X
    case 0xC43C86: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // src/misc/check_if_psi_known.asm:51 STA @VIRTUAL00
    case 0xC43C8A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:52 STA @LOCAL01
    case 0xC43C8C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/check_if_psi_known.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC43C8E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:55 LDA @LOCAL01
    case 0xC43C90: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/check_if_psi_known.asm:56 STA @VIRTUAL00
    case 0xC43C92: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC43C94: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:58 LDA @VIRTUAL00
    case 0xC43C96: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:59 AND #$00FF
    case 0xC43C98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_if_psi_known.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC43C98.
    case 0xC43C9A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_if_psi_known.asm:60 BEQ @UNKNOWN6
    case 0xC43C9B: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/misc/check_if_psi_known.asm:61 LDX #0
    case 0xC43C9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/check_if_psi_known.asm:61 LDX #0
    // Overlapping static entry reached from 0xC43C9D.
    case 0xC43C9F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/check_if_psi_known.asm:62 STX @LOCAL00
    case 0xC43CA0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/check_if_psi_known.asm:63 LDA @LOCAL02
    case 0xC43CA2: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/check_if_psi_known.asm:64 DEC
    case 0xC43CA4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:65 LDY #.SIZEOF(char_struct)
    case 0xC43CA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/check_if_psi_known.asm:65 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC43CA5.
    case 0xC43CA7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/check_if_psi_known.asm:66 JSL MULT168
    case 0xC43CA8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/check_if_psi_known.asm:67 TAX
    case 0xC43CAC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC43CAD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:69 LDA @VIRTUAL00
    case 0xC43CAF: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:70 CMP PARTY_CHARACTERS+char_struct::level,X
    case 0xC43CB1: cpu.execute_instruction<0xDD>(0x009C83, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/misc/check_if_psi_known.asm:71 BGT @UNKNOWN5
    case 0xC43CB4: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/misc/check_if_psi_known.asm:71 BGT @UNKNOWN5
    case 0xC43CB6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/misc/check_if_psi_known.asm:72 LDX #1
    case 0xC43CB8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/check_if_psi_known.asm:72 LDX #1
    // Overlapping static entry reached from 0xC43CB8.
    case 0xC43CBA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/check_if_psi_known.asm:73 STX @LOCAL00
    case 0xC43CBB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/check_if_psi_known.asm:75 LDX @LOCAL00
    case 0xC43CBD: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/check_if_psi_known.asm:76 REP #PROC_FLAGS::ACCUM8
    case 0xC43CBF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:77 TXA
    case 0xC43CC1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:78 BRA @UNKNOWN7
    case 0xC43CC2: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/check_if_psi_known.asm:80 LDA #0
    case 0xC43CC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/check_if_psi_known.asm:80 LDA #0
    // Overlapping static entry reached from 0xC43CC4.
    case 0xC43CC6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/check_if_psi_known.asm:82 END_C_FUNCTION
    case 0xC43CC7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/check_if_psi_known.asm:82 END_C_FUNCTION
    case 0xC43CC8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/check_item_equipped.asm (source_named).
bool execute_miscellaneous_check_item_equipped_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/check_item_equipped.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3E560: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E562: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E563: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E564: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E565: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E565.
    case 0xC3E567: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E568: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E569: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:8 STX @VIRTUAL02
    case 0xC3E56A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E567.
    case 0xC3E56B: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/check_item_equipped.asm:9 TAX
    case 0xC3E56C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:10 DEC
    case 0xC3E56D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:11 LDY #.SIZEOF(char_struct)
    case 0xC3E56E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/check_item_equipped.asm:11 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E56E.
    case 0xC3E570: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/check_item_equipped.asm:12 JSL MULT168
    case 0xC3E571: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/check_item_equipped.asm:13 TAX
    case 0xC3E575: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:14 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC3E576: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/misc/check_item_equipped.asm:15 AND #$00FF
    case 0xC3E579: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC3E579.
    case 0xC3E57B: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:16 CMP @VIRTUAL02
    case 0xC3E57C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:17 BNE @UNKNOWN0
    case 0xC3E57E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:18 LDA #$0001
    case 0xC3E580: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:18 LDA #$0001
    // Overlapping static entry reached from 0xC3E580.
    case 0xC3E582: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:19 BRA @UNKNOWN4
    case 0xC3E583: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/misc/check_item_equipped.asm:21 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC3E585: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/misc/check_item_equipped.asm:22 AND #$00FF
    case 0xC3E588: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC3E588.
    case 0xC3E58A: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:23 CMP @VIRTUAL02
    case 0xC3E58B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:24 BNE @UNKNOWN1
    case 0xC3E58D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:25 LDA #$0001
    case 0xC3E58F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:25 LDA #$0001
    // Overlapping static entry reached from 0xC3E58F.
    case 0xC3E591: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:26 BRA @UNKNOWN4
    case 0xC3E592: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/misc/check_item_equipped.asm:28 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC3E594: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/misc/check_item_equipped.asm:29 AND #$00FF
    case 0xC3E597: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC3E597.
    case 0xC3E599: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:30 CMP @VIRTUAL02
    case 0xC3E59A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:31 BNE @UNKNOWN2
    case 0xC3E59C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:32 LDA #$0001
    case 0xC3E59E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:32 LDA #$0001
    // Overlapping static entry reached from 0xC3E59E.
    case 0xC3E5A0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:33 BRA @UNKNOWN4
    case 0xC3E5A1: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/misc/check_item_equipped.asm:35 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC3E5A3: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/misc/check_item_equipped.asm:36 AND #$00FF
    case 0xC3E5A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC3E5A6.
    case 0xC3E5A8: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:37 CMP @VIRTUAL02
    case 0xC3E5A9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:38 BNE @UNKNOWN3
    case 0xC3E5AB: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:39 LDA #$0001
    case 0xC3E5AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:39 LDA #$0001
    // Overlapping static entry reached from 0xC3E5AD.
    case 0xC3E5AF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:40 BRA @UNKNOWN4
    case 0xC3E5B0: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/check_item_equipped.asm:42 LDA #$0000
    case 0xC3E5B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/check_item_equipped.asm:42 LDA #$0000
    // Overlapping static entry reached from 0xC3E5B2.
    case 0xC3E5B4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/misc/check_item_equipped.asm:44 PLD
    case 0xC3E5B5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:45 RTL
    case 0xC3E5B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/check_status_group.asm (source_named).
bool execute_miscellaneous_check_status_group_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/check_status_group.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC436AD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC436AF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC436B0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC436B1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC436B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC436B2.
    case 0xC436B4: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC436B5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC436B6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:11 TXY
    case 0xC436B7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:12 STY @LOCAL01
    case 0xC436B8: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/check_status_group.asm:13 TAX
    case 0xC436BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:14 STX @LOCAL00
    case 0xC436BB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/check_status_group.asm:15 CPY #8
    case 0xC436BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/misc/check_status_group.asm:15 CPY #8
    // Overlapping static entry reached from 0xC436BD.
    case 0xC436BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/check_status_group.asm:16 BNE @UNKNOWN0
    case 0xC436C0: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/misc/check_status_group.asm:17 LDA GAME_STATE + game_state::party_status
    case 0xC436C2: cpu.execute_instruction<0xAD>(0x009AF1, 3); return true;
    // src/misc/check_status_group.asm:18 AND #$00FF
    case 0xC436C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_status_group.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC436C5.
    case 0xC436C7: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/misc/check_status_group.asm:19 INC
    case 0xC436C8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:20 BRA @UNKNOWN2
    case 0xC436C9: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/misc/check_status_group.asm:22 TXA
    case 0xC436CB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:23 JSL UNKNOWN_C2239D
    case 0xC436CC: cpu.execute_instruction<0x22>(0xC2223B, 4); return true;
    // src/misc/check_status_group.asm:24 CMP #0
    case 0xC436D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/check_status_group.asm:24 CMP #0
    // Overlapping static entry reached from 0xC436D0.
    case 0xC436D2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_status_group.asm:25 BEQ @UNKNOWN1
    case 0xC436D3: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/misc/check_status_group.asm:26 LDY @LOCAL01
    case 0xC436D5: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/check_status_group.asm:27 TYA
    case 0xC436D7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:28 DEC
    case 0xC436D8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:29 STA @VIRTUAL02
    case 0xC436D9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/check_status_group.asm:30 LDX @LOCAL00
    case 0xC436DB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/check_status_group.asm:31 TXA
    case 0xC436DD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:32 DEC
    case 0xC436DE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC436DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/check_status_group.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC436DF.
    case 0xC436E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/check_status_group.asm:34 JSL MULT168
    case 0xC436E2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/check_status_group.asm:35 CLC
    case 0xC436E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC436E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/misc/check_status_group.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC436E7.
    case 0xC436E9: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/check_status_group.asm:37 CLC
    case 0xC436EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:38 ADC @VIRTUAL02
    case 0xC436EB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/check_status_group.asm:38 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC436E9.
    case 0xC436EC: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/check_status_group.asm:39 TAX
    case 0xC436ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:40 LDA __BSS_START__,X
    case 0xC436EE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/check_status_group.asm:41 AND #$00FF
    case 0xC436F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_status_group.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC436F1.
    case 0xC436F3: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/misc/check_status_group.asm:42 INC
    case 0xC436F4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:43 BRA @UNKNOWN2
    case 0xC436F5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/check_status_group.asm:45 LDA #0
    case 0xC436F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/check_status_group.asm:45 LDA #0
    // Overlapping static entry reached from 0xC436F7.
    case 0xC436F9: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/check_status_group.asm:47 END_C_FUNCTION
    case 0xC436FA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/check_status_group.asm:47 END_C_FUNCTION
    case 0xC436FB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/decrease_wallet_balance.asm (source_named).
bool execute_miscellaneous_decrease_wallet_balance_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/decrease_wallet_balance.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC22111: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    case 0xC22113: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    case 0xC22114: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    case 0xC22115: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC22115.
    case 0xC22117: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    case 0xC22118: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/decrease_wallet_balance.asm:7 MOVE_INT @PARAM00, $06
    case 0xC22119: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:7 MOVE_INT @PARAM00, $06
    case 0xC2211B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:7 MOVE_INT @PARAM00, $06
    case 0xC2211D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:7 MOVE_INT @PARAM00, $06
    case 0xC2211F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/decrease_wallet_balance.asm:8 LDY #.LOWORD(GAME_STATE)+game_state::money_carried
    case 0xC22121: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E2, 2); else cpu.execute_instruction<0xA0>(0x009AE2, 3); return true;
    // src/misc/decrease_wallet_balance.asm:8 LDY #.LOWORD(GAME_STATE)+game_state::money_carried
    // Overlapping static entry reached from 0xC22121.
    case 0xC22123: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/decrease_wallet_balance.asm:9 MOVE_INT $06, $0A
    case 0xC22124: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:9 MOVE_INT $06, $0A
    case 0xC22126: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:9 MOVE_INT $06, $0A
    case 0xC22128: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:9 MOVE_INT $06, $0A
    case 0xC2212A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/decrease_wallet_balance.asm:10 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC2212C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:10 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC2212F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/decrease_wallet_balance.asm:10 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC22131: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:10 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC22134: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/decrease_wallet_balance.asm:11 SEC
    case 0xC22136: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC22137: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC22139: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC2213B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC2213D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC2213F: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC22141: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    case 0xC22143: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    // Overlapping static entry reached from 0xC22143.
    case 0xC22145: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    case 0xC22146: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    case 0xC22148: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    // Overlapping static entry reached from 0xC22148.
    case 0xC2214A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    case 0xC2214B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/decrease_wallet_balance.asm:14 CLC
    case 0xC2214D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/decrease_wallet_balance.asm:15 LDA $0A
    case 0xC2214E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/misc/decrease_wallet_balance.asm:16 SBC $06
    case 0xC22150: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/misc/decrease_wallet_balance.asm:17 LDA $0C
    case 0xC22152: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/misc/decrease_wallet_balance.asm:18 SBC $08
    case 0xC22154: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/decrease_wallet_balance.asm:19 BRANCHLTEQS @UNKNOWN2
    case 0xC22156: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:19 BRANCHLTEQS @UNKNOWN2
    case 0xC22158: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/decrease_wallet_balance.asm:19 BRANCHLTEQS @UNKNOWN2
    case 0xC2215A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:19 BRANCHLTEQS @UNKNOWN2
    case 0xC2215C: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/decrease_wallet_balance.asm:20 LDA #$0001
    case 0xC2215E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/decrease_wallet_balance.asm:20 LDA #$0001
    // Overlapping static entry reached from 0xC2215E.
    case 0xC22160: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/decrease_wallet_balance.asm:21 BRA @UNKNOWN3
    case 0xC22161: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/decrease_wallet_balance.asm:23 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC22163: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/decrease_wallet_balance.asm:23 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC22165: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:23 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC22168: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/decrease_wallet_balance.asm:23 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC2216A: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/decrease_wallet_balance.asm:24 LDA #$0000
    case 0xC2216D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/decrease_wallet_balance.asm:24 LDA #$0000
    // Overlapping static entry reached from 0xC2216D.
    case 0xC2216F: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/misc/decrease_wallet_balance.asm:26 PLD
    case 0xC22170: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/decrease_wallet_balance.asm:27 RTL
    case 0xC22171: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/equip_item.asm (source_named).
bool execute_miscellaneous_equip_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/equip_item.asm:3 BEGIN_C_FUNCTION
    case 0xC1911F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC19121: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC19122: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC19123: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC19124: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC19124.
    case 0xC19126: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC19127: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC19128: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/equip_item.asm:11 STX @LOCAL01
    case 0xC19129: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/equip_item.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC19126.
    case 0xC1912A: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/misc/equip_item.asm:12 STA @LOCAL00
    case 0xC1912B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:12 STA @LOCAL00
    // Overlapping static entry reached from 0xC1912A.
    case 0xC1912C: cpu.execute_instruction<0x0E>(0x003A8A, 3); return true;
    // src/misc/equip_item.asm:13 TXA
    case 0xC1912D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/equip_item.asm:14 DEC
    case 0xC1912E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/equip_item.asm:15 STA @VIRTUAL02
    case 0xC1912F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/equip_item.asm:16 LDA @LOCAL00
    case 0xC19131: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:17 DEC
    case 0xC19133: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/equip_item.asm:18 LDY #.SIZEOF(char_struct)
    case 0xC19134: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/equip_item.asm:18 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19134.
    case 0xC19136: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/equip_item.asm:19 JSL MULT168
    case 0xC19137: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/equip_item.asm:20 CLC
    case 0xC1913B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/equip_item.asm:21 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1913C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/equip_item.asm:21 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1913C.
    case 0xC1913E: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/equip_item.asm:22 CLC
    case 0xC1913F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/equip_item.asm:23 ADC @VIRTUAL02
    case 0xC19140: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/equip_item.asm:23 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1913E.
    case 0xC19141: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/equip_item.asm:24 TAX
    case 0xC19142: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/equip_item.asm:25 LDA __BSS_START__,X
    case 0xC19143: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/equip_item.asm:26 AND #$00FF
    case 0xC19146: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/equip_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC19146.
    case 0xC19148: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/equip_item.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19149: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/equip_item.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1914B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/equip_item.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1914C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/equip_item.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1914E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/equip_item.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1914F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/equip_item.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19150: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/equip_item.asm:28 CLC
    case 0xC19151: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/equip_item.asm:29 ADC #item::type
    case 0xC19152: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/misc/equip_item.asm:29 ADC #item::type
    // Overlapping static entry reached from 0xC19152.
    case 0xC19154: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/equip_item.asm:30 TAX
    case 0xC19155: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/equip_item.asm:31 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19156: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/equip_item.asm:32 AND #$00FF
    case 0xC1915A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/equip_item.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC1915A.
    case 0xC1915C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/equip_item.asm:33 AND #EQUIPMENT_SLOT::ALL<<2
    case 0xC1915D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/misc/equip_item.asm:33 AND #EQUIPMENT_SLOT::ALL<<2
    // Overlapping static entry reached from 0xC1915D.
    case 0xC1915F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/equip_item.asm:34 BEQ @UNKNOWN0
    case 0xC19160: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/equip_item.asm:35 CMP #EQUIPMENT_SLOT::BODY<<2
    case 0xC19162: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/equip_item.asm:35 CMP #EQUIPMENT_SLOT::BODY<<2
    // Overlapping static entry reached from 0xC19162.
    case 0xC19164: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/equip_item.asm:36 BEQ @UNKNOWN1
    case 0xC19165: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/misc/equip_item.asm:37 CMP #EQUIPMENT_SLOT::ARMS<<2
    case 0xC19167: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/misc/equip_item.asm:37 CMP #EQUIPMENT_SLOT::ARMS<<2
    // Overlapping static entry reached from 0xC19167.
    case 0xC19169: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/equip_item.asm:38 BEQ @UNKNOWN2
    case 0xC1916A: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/misc/equip_item.asm:39 CMP #EQUIPMENT_SLOT::OTHER<<2
    case 0xC1916C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/misc/equip_item.asm:39 CMP #EQUIPMENT_SLOT::OTHER<<2
    // Overlapping static entry reached from 0xC1916C.
    case 0xC1916E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/equip_item.asm:40 BEQ @UNKNOWN3
    case 0xC1916F: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/misc/equip_item.asm:41 BRA @UNKNOWN4
    case 0xC19171: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/misc/equip_item.asm:43 LDX @LOCAL01
    case 0xC19173: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/equip_item.asm:44 LDA @LOCAL00
    case 0xC19175: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:45 JSL CHANGE_EQUIPPED_WEAPON
    case 0xC19177: cpu.execute_instruction<0x22>(0xC4357B, 4); return true;
    // src/misc/equip_item.asm:46 BRA @UNKNOWN5
    case 0xC1917B: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/misc/equip_item.asm:48 LDX @LOCAL01
    case 0xC1917D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/equip_item.asm:49 LDA @LOCAL00
    case 0xC1917F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:50 JSL CHANGE_EQUIPPED_BODY
    case 0xC19181: cpu.execute_instruction<0x22>(0xC435C8, 4); return true;
    // src/misc/equip_item.asm:51 BRA @UNKNOWN5
    case 0xC19185: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/misc/equip_item.asm:53 LDX @LOCAL01
    case 0xC19187: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/equip_item.asm:54 LDA @LOCAL00
    case 0xC19189: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:55 JSL CHANGE_EQUIPPED_ARMS
    case 0xC1918B: cpu.execute_instruction<0x22>(0xC43613, 4); return true;
    // src/misc/equip_item.asm:56 BRA @UNKNOWN5
    case 0xC1918F: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/misc/equip_item.asm:58 LDX @LOCAL01
    case 0xC19191: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/equip_item.asm:59 LDA @LOCAL00
    case 0xC19193: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:60 JSL CHANGE_EQUIPPED_OTHER
    case 0xC19195: cpu.execute_instruction<0x22>(0xC4365E, 4); return true;
    // src/misc/equip_item.asm:61 BRA @UNKNOWN5
    case 0xC19199: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/equip_item.asm:63 LDA #0
    case 0xC1919B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/equip_item.asm:63 LDA #0
    // Overlapping static entry reached from 0xC1919B.
    case 0xC1919D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/equip_item.asm:65 END_C_FUNCTION
    case 0xC1919E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/equip_item.asm:65 END_C_FUNCTION
    case 0xC1919F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/escargo_express_move.asm (source_named).
bool execute_miscellaneous_escargo_express_move_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/escargo_express_move.asm:3 BEGIN_C_FUNCTION
    case 0xC1925E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19260: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19261: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19262: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19263: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC19263.
    case 0xC19265: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19266: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19267: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/escargo_express_move.asm:10 STX @VIRTUAL02
    case 0xC19268: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/escargo_express_move.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC19265.
    case 0xC19269: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/escargo_express_move.asm:11 TAY
    case 0xC1926A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/escargo_express_move.asm:12 STY @LOCAL00
    case 0xC1926B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/escargo_express_move.asm:13 LDX @VIRTUAL02
    case 0xC1926D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/escargo_express_move.asm:14 TYA
    case 0xC1926F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/escargo_express_move.asm:15 JSL GET_CHARACTER_ITEM
    case 0xC19270: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/misc/escargo_express_move.asm:16 JSR ESCARGO_EXPRESS_STORE
    case 0xC19274: cpu.execute_instruction<0x20>(0x009214, 3); return true;
    // src/misc/escargo_express_move.asm:17 CMP #FALSE
    case 0xC19277: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/escargo_express_move.asm:17 CMP #FALSE
    // Overlapping static entry reached from 0xC19277.
    case 0xC19279: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/escargo_express_move.asm:18 BEQ @RETURN_ZERO
    case 0xC1927A: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/escargo_express_move.asm:19 LDX @VIRTUAL02
    case 0xC1927C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/escargo_express_move.asm:20 LDY @LOCAL00
    case 0xC1927E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/escargo_express_move.asm:21 TYA
    case 0xC19280: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/escargo_express_move.asm:22 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC19281: cpu.execute_instruction<0x20>(0x008CCE, 3); return true;
    // src/misc/escargo_express_move.asm:23 BRA @RETURN
    case 0xC19284: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/escargo_express_move.asm:25 LDA #FALSE
    case 0xC19286: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/escargo_express_move.asm:25 LDA #FALSE
    // Overlapping static entry reached from 0xC19286.
    case 0xC19288: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/escargo_express_move.asm:27 END_C_FUNCTION
    case 0xC19289: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/escargo_express_move.asm:27 END_C_FUNCTION
    case 0xC1928A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/escargo_express_store.asm (source_named).
bool execute_miscellaneous_escargo_express_store_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/escargo_express_store.asm:3 BEGIN_C_FUNCTION
    case 0xC19214: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC19216: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC19217: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC19218: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC19219: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC19219.
    case 0xC1921B: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC1921C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC1921D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:9 TAY
    case 0xC1921E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:10 LDA #0
    case 0xC1921F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/escargo_express_store.asm:10 LDA #0
    // Overlapping static entry reached from 0xC1921F.
    case 0xC19221: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/escargo_express_store.asm:11 STA @LOCAL00
    case 0xC19222: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/escargo_express_store.asm:12 BRA @LOOP_ENTRY
    case 0xC19224: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/misc/escargo_express_store.asm:14 LDA @LOCAL00
    case 0xC19226: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/escargo_express_store.asm:15 CLC
    case 0xC19228: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:17 ADC #.LOWORD(GAME_STATE)
    case 0xC19229: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/escargo_express_store.asm:17 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC19229.
    case 0xC1922B: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:18 CLC
    case 0xC1922C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:19 ADC #game_state::escargo_express_items
    case 0xC1922D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000053, 2); else cpu.execute_instruction<0x69>(0x000053, 3); return true;
    // src/misc/escargo_express_store.asm:19 ADC #game_state::escargo_express_items
    // Overlapping static entry reached from 0xC1922D.
    case 0xC1922F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/escargo_express_store.asm:23 TAX
    case 0xC19230: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:24 LDA __BSS_START__,X
    case 0xC19231: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/escargo_express_store.asm:25 AND #$00FF
    case 0xC19234: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/escargo_express_store.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC19234.
    case 0xC19236: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/escargo_express_store.asm:26 BNE @ENTRY_FILLED
    case 0xC19237: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/misc/escargo_express_store.asm:27 TYA
    case 0xC19239: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC1923A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/escargo_express_store.asm:29 STA __BSS_START__,X
    case 0xC1923C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/escargo_express_store.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC1923F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/escargo_express_store.asm:31 TYA
    case 0xC19241: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:32 BRA @RETURN
    case 0xC19242: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/misc/escargo_express_store.asm:34 LDA @LOCAL00
    case 0xC19244: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/escargo_express_store.asm:35 INC
    case 0xC19246: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:36 STA @LOCAL00
    case 0xC19247: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/escargo_express_store.asm:38 STA @VIRTUAL02
    case 0xC19249: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/escargo_express_store.asm:39 LDA #.SIZEOF(game_state::escargo_express_items)
    case 0xC1924B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/misc/escargo_express_store.asm:39 LDA #.SIZEOF(game_state::escargo_express_items)
    // Overlapping static entry reached from 0xC1924B.
    case 0xC1924D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/escargo_express_store.asm:40 CLC
    case 0xC1924E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:41 SBC @VIRTUAL02
    case 0xC1924F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/escargo_express_store.asm:42 BRANCHGTS @LOOP_BEGIN
    case 0xC19251: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/escargo_express_store.asm:42 BRANCHGTS @LOOP_BEGIN
    case 0xC19253: cpu.execute_instruction<0x10>(0x0000D1, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/escargo_express_store.asm:42 BRANCHGTS @LOOP_BEGIN
    case 0xC19255: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/escargo_express_store.asm:42 BRANCHGTS @LOOP_BEGIN
    case 0xC19257: cpu.execute_instruction<0x30>(0x0000CD, 2); return true;
    // src/misc/escargo_express_store.asm:43 LDA #FALSE
    case 0xC19259: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/escargo_express_store.asm:43 LDA #FALSE
    // Overlapping static entry reached from 0xC19259.
    case 0xC1925B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/escargo_express_store.asm:45 END_C_FUNCTION
    case 0xC1925C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/escargo_express_store.asm:45 END_C_FUNCTION
    case 0xC1925D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_condiment.asm (source_named).
bool execute_miscellaneous_find_condiment_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_condiment.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1D92E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1D930: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1D931: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1D932: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1D933: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D933.
    case 0xC1D935: cpu.execute_instruction<0xFF>(0x29685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1D936: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1D937: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:11 AND #$00FF
    case 0xC1D938: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC1D935.
    case 0xC1D939: cpu.execute_instruction<0xFF>(0x048500, 4); return true;
    // src/misc/find_condiment.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC1D938.
    case 0xC1D93A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/find_condiment.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D93B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/find_condiment.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D93D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/find_condiment.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D93E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/find_condiment.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D940: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/find_condiment.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D941: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/find_condiment.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D942: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:13 CLC
    case 0xC1D943: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:14 ADC #item::type
    case 0xC1D944: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/misc/find_condiment.asm:14 ADC #item::type
    // Overlapping static entry reached from 0xC1D944.
    case 0xC1D946: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/find_condiment.asm:15 TAX
    case 0xC1D947: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:16 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1D948: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/find_condiment.asm:17 AND #$00FF
    case 0xC1D94C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC1D94C.
    case 0xC1D94E: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/find_condiment.asm:18 AND #$003C
    case 0xC1D94F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003C, 2); else cpu.execute_instruction<0x29>(0x00003C, 3); return true;
    // src/misc/find_condiment.asm:18 AND #$003C
    // Overlapping static entry reached from 0xC1D94F.
    case 0xC1D951: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/find_condiment.asm:19 CMP #$0020
    case 0xC1D952: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/misc/find_condiment.asm:19 CMP #$0020
    // Overlapping static entry reached from 0xC1D952.
    case 0xC1D954: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_condiment.asm:20 BNE @UNKNOWN3
    case 0xC1D955: cpu.execute_instruction<0xD0>(0x00005C, 2); return true;
    // src/misc/find_condiment.asm:21 LDX CURRENT_ATTACKER
    case 0xC1D957: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/misc/find_condiment.asm:22 LDA __BSS_START__,X
    case 0xC1D95A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_condiment.asm:23 TAY
    case 0xC1D95D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:24 DEY
    case 0xC1D95E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:25 STY @LOCAL02
    case 0xC1D95F: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/find_condiment.asm:26 LDX #0
    case 0xC1D961: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/find_condiment.asm:26 LDX #0
    // Overlapping static entry reached from 0xC1D961.
    case 0xC1D963: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/find_condiment.asm:27 STX @LOCAL01
    case 0xC1D964: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/find_condiment.asm:28 BRA @UNKNOWN2
    case 0xC1D966: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/misc/find_condiment.asm:30 AND #$00FF
    case 0xC1D968: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1D968.
    case 0xC1D96A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_condiment.asm:31 STA @LOCAL00
    case 0xC1D96B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/find_condiment.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D96D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/find_condiment.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D96F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/find_condiment.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D970: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/find_condiment.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D972: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/find_condiment.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D973: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/find_condiment.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D974: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:33 CLC
    case 0xC1D975: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:34 ADC #item::type
    case 0xC1D976: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/misc/find_condiment.asm:34 ADC #item::type
    // Overlapping static entry reached from 0xC1D976.
    case 0xC1D978: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/find_condiment.asm:35 TAX
    case 0xC1D979: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:36 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1D97A: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/find_condiment.asm:37 AND #$00FF
    case 0xC1D97E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC1D97E.
    case 0xC1D980: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/find_condiment.asm:38 AND #$003C
    case 0xC1D981: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003C, 2); else cpu.execute_instruction<0x29>(0x00003C, 3); return true;
    // src/misc/find_condiment.asm:38 AND #$003C
    // Overlapping static entry reached from 0xC1D981.
    case 0xC1D983: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/find_condiment.asm:39 CMP #$0028
    case 0xC1D984: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000028, 3); return true;
    // src/misc/find_condiment.asm:39 CMP #$0028
    // Overlapping static entry reached from 0xC1D984.
    case 0xC1D986: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_condiment.asm:40 BNE @UNKNOWN1
    case 0xC1D987: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/misc/find_condiment.asm:41 LDA @LOCAL00
    case 0xC1D989: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_condiment.asm:42 BRA @UNKNOWN4
    case 0xC1D98B: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/misc/find_condiment.asm:44 LDX @LOCAL01
    case 0xC1D98D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/find_condiment.asm:45 INX
    case 0xC1D98F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:46 STX @LOCAL01
    case 0xC1D990: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/find_condiment.asm:48 CPX #.SIZEOF(char_struct::items)
    case 0xC1D992: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000E, 2); else cpu.execute_instruction<0xE0>(0x00000E, 3); return true;
    // src/misc/find_condiment.asm:48 CPX #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC1D992.
    case 0xC1D994: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/misc/find_condiment.asm:49 BCS @UNKNOWN3
    case 0xC1D995: cpu.execute_instruction<0xB0>(0x00001C, 2); return true;
    // src/misc/find_condiment.asm:50 STX @VIRTUAL02
    case 0xC1D997: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/find_condiment.asm:51 LDY @LOCAL02
    case 0xC1D999: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/find_condiment.asm:52 TYA
    case 0xC1D99B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:53 LDY #.SIZEOF(char_struct)
    case 0xC1D99C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/find_condiment.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D99C.
    case 0xC1D99E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/find_condiment.asm:54 JSL MULT168
    case 0xC1D99F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/find_condiment.asm:55 CLC
    case 0xC1D9A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1D9A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/find_condiment.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1D9A4.
    case 0xC1D9A6: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/find_condiment.asm:57 CLC
    case 0xC1D9A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:58 ADC @VIRTUAL02
    case 0xC1D9A8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/find_condiment.asm:58 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1D9A6.
    case 0xC1D9A9: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/find_condiment.asm:59 TAX
    case 0xC1D9AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:60 LDA __BSS_START__,X
    case 0xC1D9AB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_condiment.asm:61 AND #$00FF
    case 0xC1D9AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC1D9AE.
    case 0xC1D9B0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_condiment.asm:62 BNE @UNKNOWN0
    case 0xC1D9B1: cpu.execute_instruction<0xD0>(0x0000B5, 2); return true;
    // src/misc/find_condiment.asm:64 LDA #FALSE
    case 0xC1D9B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_condiment.asm:64 LDA #FALSE
    // Overlapping static entry reached from 0xC1D9B3.
    case 0xC1D9B5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_condiment.asm:66 END_C_FUNCTION
    case 0xC1D9B6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/find_condiment.asm:66 END_C_FUNCTION
    case 0xC1D9B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_inventory_space.asm (source_named).
bool execute_miscellaneous_find_inventory_space_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_inventory_space.asm:3 BEGIN_C_FUNCTION
    case 0xC434DE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC434E0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC434E1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC434E2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC434E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC434E3.
    case 0xC434E5: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC434E6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC434E7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:9 DEC
    case 0xC434E8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:10 STA @LOCAL00
    case 0xC434E9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/find_inventory_space.asm:11 LDA #0
    case 0xC434EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_inventory_space.asm:11 LDA #0
    // Overlapping static entry reached from 0xC434EB.
    case 0xC434ED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_inventory_space.asm:12 STA @VIRTUAL02
    case 0xC434EE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_inventory_space.asm:13 BRA @UNKNOWN2
    case 0xC434F0: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/misc/find_inventory_space.asm:15 LDA @LOCAL00
    case 0xC434F2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_inventory_space.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC434F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/find_inventory_space.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC434F4.
    case 0xC434F6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/find_inventory_space.asm:17 JSL MULT168
    case 0xC434F7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/find_inventory_space.asm:18 CLC
    case 0xC434FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:19 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC434FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/find_inventory_space.asm:19 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC434FC.
    case 0xC434FE: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/find_inventory_space.asm:20 CLC
    case 0xC434FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:21 ADC @VIRTUAL02
    case 0xC43500: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/find_inventory_space.asm:21 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC434FE.
    case 0xC43501: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/find_inventory_space.asm:22 TAX
    case 0xC43502: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:23 LDA __BSS_START__,X
    case 0xC43503: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_inventory_space.asm:24 AND #$00FF
    case 0xC43506: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC43506.
    case 0xC43508: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_inventory_space.asm:25 BNE @UNKNOWN1
    case 0xC43509: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/find_inventory_space.asm:26 LDA @LOCAL00
    case 0xC4350B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_inventory_space.asm:27 INC
    case 0xC4350D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:28 BRA @UNKNOWN5
    case 0xC4350E: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/misc/find_inventory_space.asm:30 INC @VIRTUAL02
    case 0xC43510: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/find_inventory_space.asm:32 LDA #.SIZEOF(char_struct::items)
    case 0xC43512: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/find_inventory_space.asm:32 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC43512.
    case 0xC43514: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/find_inventory_space.asm:33 CLC
    case 0xC43515: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:34 SBC @VIRTUAL02
    case 0xC43516: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/find_inventory_space.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC43518: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/find_inventory_space.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC4351A: cpu.execute_instruction<0x10>(0x0000D6, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/find_inventory_space.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC4351C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/find_inventory_space.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC4351E: cpu.execute_instruction<0x30>(0x0000D2, 2); return true;
    // src/misc/find_inventory_space.asm:36 LDA #FALSE
    case 0xC43520: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_inventory_space.asm:36 LDA #FALSE
    // Overlapping static entry reached from 0xC43520.
    case 0xC43522: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_inventory_space.asm:38 END_C_FUNCTION
    case 0xC43523: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/find_inventory_space.asm:38 END_C_FUNCTION
    case 0xC43524: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_inventory_space2.asm (source_named).
bool execute_miscellaneous_find_inventory_space2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_inventory_space2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43525: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC43527: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC43528: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC43529: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC4352A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4352A.
    case 0xC4352C: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC4352D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC4352E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:10 CMP #$00FF
    case 0xC4352F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space2.asm:10 CMP #$00FF
    // Overlapping static entry reached from 0xC4352C.
    case 0xC43530: cpu.execute_instruction<0xFF>(0x42D000, 4); return true;
    // src/misc/find_inventory_space2.asm:10 CMP #$00FF
    // Overlapping static entry reached from 0xC4352F.
    case 0xC43531: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_inventory_space2.asm:11 BNE @UNKNOWN3
    case 0xC43532: cpu.execute_instruction<0xD0>(0x000042, 2); return true;
    // src/misc/find_inventory_space2.asm:12 LDY #0
    case 0xC43534: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:12 LDY #0
    // Overlapping static entry reached from 0xC43534.
    case 0xC43536: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/misc/find_inventory_space2.asm:13 STY @LOCAL01
    case 0xC43537: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/find_inventory_space2.asm:14 BRA @UNKNOWN2
    case 0xC43539: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/misc/find_inventory_space2.asm:16 TYA
    case 0xC4353B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:17 CLC
    case 0xC4353C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:19 ADC #.LOWORD(GAME_STATE)
    case 0xC4353D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/find_inventory_space2.asm:19 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4353D.
    case 0xC4353F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:20 CLC
    case 0xC43540: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:21 ADC #game_state::party_members
    case 0xC43541: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000077, 2); else cpu.execute_instruction<0x69>(0x000077, 3); return true;
    // src/misc/find_inventory_space2.asm:21 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC43541.
    case 0xC43543: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/find_inventory_space2.asm:25 TAX
    case 0xC43544: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:26 STX @LOCAL00
    case 0xC43545: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/find_inventory_space2.asm:27 LDA __BSS_START__,X
    case 0xC43547: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:28 AND #$00FF
    case 0xC4354A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space2.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC4354A.
    case 0xC4354C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/find_inventory_space2.asm:29 JSR FIND_INVENTORY_SPACE
    case 0xC4354D: cpu.execute_instruction<0x20>(0x0034DE, 3); return true;
    // src/misc/find_inventory_space2.asm:30 CMP #$0000
    case 0xC43550: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:30 CMP #$0000
    // Overlapping static entry reached from 0xC43550.
    case 0xC43552: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/find_inventory_space2.asm:31 BEQ @UNKNOWN1
    case 0xC43553: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/find_inventory_space2.asm:32 LDX @LOCAL00
    case 0xC43555: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/find_inventory_space2.asm:33 LDA __BSS_START__,X
    case 0xC43557: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:34 AND #$00FF
    case 0xC4355A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space2.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC4355A.
    case 0xC4355C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/find_inventory_space2.asm:35 BRA @UNKNOWN4
    case 0xC4355D: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/misc/find_inventory_space2.asm:37 LDY @LOCAL01
    case 0xC4355F: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/find_inventory_space2.asm:38 INY
    case 0xC43561: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:39 STY @LOCAL01
    case 0xC43562: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/find_inventory_space2.asm:41 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC43564: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/find_inventory_space2.asm:42 AND #$00FF
    case 0xC43567: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space2.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC43567.
    case 0xC43569: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_inventory_space2.asm:43 STA @VIRTUAL02
    case 0xC4356A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_inventory_space2.asm:44 TYA
    case 0xC4356C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:45 CMP @VIRTUAL02
    case 0xC4356D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/find_inventory_space2.asm:46 BCC @UNKNOWN0
    case 0xC4356F: cpu.execute_instruction<0x90>(0x0000CA, 2); return true;
    // src/misc/find_inventory_space2.asm:47 LDA #0
    case 0xC43571: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:47 LDA #0
    // Overlapping static entry reached from 0xC43571.
    case 0xC43573: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/find_inventory_space2.asm:48 BRA @UNKNOWN4
    case 0xC43574: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/find_inventory_space2.asm:50 JSR FIND_INVENTORY_SPACE
    case 0xC43576: cpu.execute_instruction<0x20>(0x0034DE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_inventory_space2.asm:52 END_C_FUNCTION
    case 0xC43579: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/find_inventory_space2.asm:52 END_C_FUNCTION
    case 0xC4357A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_item_in_inventory.asm (source_named).
bool execute_miscellaneous_find_item_in_inventory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_item_in_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC4342D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC4342F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC43430: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC43431: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC43432: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC43432.
    case 0xC43434: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC43435: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC43436: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:10 STX @VIRTUAL04
    case 0xC43437: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory.asm:10 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC43434.
    case 0xC43438: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/find_item_in_inventory.asm:11 TAX
    case 0xC43439: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:12 DEC
    case 0xC4343A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:13 STA @LOCAL00
    case 0xC4343B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory.asm:14 LDA #0
    case 0xC4343D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory.asm:14 LDA #0
    // Overlapping static entry reached from 0xC4343D.
    case 0xC4343F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_item_in_inventory.asm:15 STA @VIRTUAL02
    case 0xC43440: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory.asm:16 BRA @UNKNOWN2
    case 0xC43442: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/misc/find_item_in_inventory.asm:18 LDA @LOCAL00
    case 0xC43444: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC43446: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/find_item_in_inventory.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC43446.
    case 0xC43448: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/find_item_in_inventory.asm:20 JSL MULT168
    case 0xC43449: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/find_item_in_inventory.asm:21 CLC
    case 0xC4344D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:22 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC4344E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/find_item_in_inventory.asm:22 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC4344E.
    case 0xC43450: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/find_item_in_inventory.asm:23 CLC
    case 0xC43451: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:24 ADC @VIRTUAL02
    case 0xC43452: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory.asm:24 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC43450.
    case 0xC43453: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/find_item_in_inventory.asm:25 TAX
    case 0xC43454: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:26 LDA __BSS_START__,X
    case 0xC43455: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory.asm:27 AND #$00FF
    case 0xC43458: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC43458.
    case 0xC4345A: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/find_item_in_inventory.asm:28 CMP @VIRTUAL04
    case 0xC4345B: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory.asm:29 BNE @UNKNOWN1
    case 0xC4345D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/find_item_in_inventory.asm:30 LDA @LOCAL00
    case 0xC4345F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory.asm:31 INC
    case 0xC43461: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:32 BRA @UNKNOWN5
    case 0xC43462: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/misc/find_item_in_inventory.asm:34 INC @VIRTUAL02
    case 0xC43464: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory.asm:36 LDA #.SIZEOF(char_struct::items)
    case 0xC43466: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/find_item_in_inventory.asm:36 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC43466.
    case 0xC43468: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/find_item_in_inventory.asm:37 CLC
    case 0xC43469: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:38 SBC @VIRTUAL02
    case 0xC4346A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/find_item_in_inventory.asm:39 BRANCHGTS @UNKNOWN0
    case 0xC4346C: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/find_item_in_inventory.asm:39 BRANCHGTS @UNKNOWN0
    case 0xC4346E: cpu.execute_instruction<0x10>(0x0000D4, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/find_item_in_inventory.asm:39 BRANCHGTS @UNKNOWN0
    case 0xC43470: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/find_item_in_inventory.asm:39 BRANCHGTS @UNKNOWN0
    case 0xC43472: cpu.execute_instruction<0x30>(0x0000D0, 2); return true;
    // src/misc/find_item_in_inventory.asm:40 LDA #FALSE
    case 0xC43474: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory.asm:40 LDA #FALSE
    // Overlapping static entry reached from 0xC43474.
    case 0xC43476: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_item_in_inventory.asm:42 END_C_FUNCTION
    case 0xC43477: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/find_item_in_inventory.asm:42 END_C_FUNCTION
    case 0xC43478: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_item_in_inventory2.asm (source_named).
bool execute_miscellaneous_find_item_in_inventory2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_item_in_inventory2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43479: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC4347B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC4347C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC4347D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC4347E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4347E.
    case 0xC43480: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC43481: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC43482: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:11 STX @VIRTUAL04
    case 0xC43483: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory2.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC43480.
    case 0xC43484: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/find_item_in_inventory2.asm:12 CMP #$00FF
    case 0xC43485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory2.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC43484.
    case 0xC43486: cpu.execute_instruction<0xFF>(0x4DD000, 4); return true;
    // src/misc/find_item_in_inventory2.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC43485.
    case 0xC43487: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_item_in_inventory2.asm:13 BNE @UNKNOWN3
    case 0xC43488: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/misc/find_item_in_inventory2.asm:14 LDA #0
    case 0xC4348A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:14 LDA #0
    // Overlapping static entry reached from 0xC4348A.
    case 0xC4348C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_item_in_inventory2.asm:15 STA @VIRTUAL02
    case 0xC4348D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:16 STA @LOCAL01
    case 0xC4348F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/find_item_in_inventory2.asm:17 BRA @UNKNOWN2
    case 0xC43491: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/misc/find_item_in_inventory2.asm:19 LDA @LOCAL01
    case 0xC43493: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/find_item_in_inventory2.asm:20 STA @VIRTUAL02
    case 0xC43495: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:21 CLC
    case 0xC43497: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC43498: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/find_item_in_inventory2.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC43498.
    case 0xC4349A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:24 CLC
    case 0xC4349B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:25 ADC #game_state::party_members
    case 0xC4349C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000077, 2); else cpu.execute_instruction<0x69>(0x000077, 3); return true;
    // src/misc/find_item_in_inventory2.asm:25 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC4349C.
    case 0xC4349E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/find_item_in_inventory2.asm:29 TAY
    case 0xC4349F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:30 STY @LOCAL00
    case 0xC434A0: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory2.asm:31 LDX @VIRTUAL04
    case 0xC434A2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory2.asm:32 LDA __BSS_START__,Y
    case 0xC434A4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:33 AND #$00FF
    case 0xC434A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory2.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC434A7.
    case 0xC434A9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/find_item_in_inventory2.asm:34 JSR FIND_ITEM_IN_INVENTORY
    case 0xC434AA: cpu.execute_instruction<0x20>(0x00342D, 3); return true;
    // src/misc/find_item_in_inventory2.asm:35 CMP #0
    case 0xC434AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:35 CMP #0
    // Overlapping static entry reached from 0xC434AD.
    case 0xC434AF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/find_item_in_inventory2.asm:36 BEQ @UNKNOWN1
    case 0xC434B0: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/find_item_in_inventory2.asm:37 LDY @LOCAL00
    case 0xC434B2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory2.asm:38 LDA __BSS_START__,Y
    case 0xC434B4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:39 AND #$00FF
    case 0xC434B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory2.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC434B7.
    case 0xC434B9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/find_item_in_inventory2.asm:40 BRA @UNKNOWN4
    case 0xC434BA: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/misc/find_item_in_inventory2.asm:42 INC @VIRTUAL02
    case 0xC434BC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:43 LDA @VIRTUAL02
    case 0xC434BE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:44 STA @LOCAL01
    case 0xC434C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/find_item_in_inventory2.asm:46 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC434C2: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/find_item_in_inventory2.asm:47 AND #$00FF
    case 0xC434C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory2.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC434C5.
    case 0xC434C7: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/find_item_in_inventory2.asm:48 PHA
    case 0xC434C8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:49 LDA @VIRTUAL02
    case 0xC434C9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:50 PLY
    case 0xC434CB: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:51 STY @VIRTUAL02
    case 0xC434CC: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:52 CMP @VIRTUAL02
    case 0xC434CE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:53 BCC @UNKNOWN0
    case 0xC434D0: cpu.execute_instruction<0x90>(0x0000C1, 2); return true;
    // src/misc/find_item_in_inventory2.asm:54 LDA #0
    case 0xC434D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:54 LDA #0
    // Overlapping static entry reached from 0xC434D2.
    case 0xC434D4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/find_item_in_inventory2.asm:55 BRA @UNKNOWN4
    case 0xC434D5: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/misc/find_item_in_inventory2.asm:57 LDX @VIRTUAL04
    case 0xC434D7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory2.asm:58 JSR FIND_ITEM_IN_INVENTORY
    case 0xC434D9: cpu.execute_instruction<0x20>(0x00342D, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_item_in_inventory2.asm:60 END_C_FUNCTION
    case 0xC434DC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/find_item_in_inventory2.asm:60 END_C_FUNCTION
    case 0xC434DD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_path_to_party.asm (source_named).
bool execute_miscellaneous_find_path_to_party_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_path_to_party.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0BC53: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC55: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC56: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC57: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x00FFD4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC0BC58.
    case 0xC0BC5A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC5B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC5C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:27 STA @LOCAL0C
    case 0xC0BC5D: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/misc/find_path_to_party.asm:27 STA @LOCAL0C
    // Overlapping static entry reached from 0xC0BC5A.
    case 0xC0BC5E: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:28 LDA GAME_STATE+game_state::current_party_members
    case 0xC0BC5F: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/misc/find_path_to_party.asm:29 STA @LOCAL0B
    case 0xC0BC62: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/misc/find_path_to_party.asm:30 LDA #.LOWORD(PATHFINDING_STATE)
    case 0xC0BC64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F200, 3); return true;
    // src/misc/find_path_to_party.asm:30 LDA #.LOWORD(PATHFINDING_STATE)
    // Overlapping static entry reached from 0xC0BC64.
    case 0xC0BC66: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // src/misc/find_path_to_party.asm:31 STA @LOCAL0A
    case 0xC0BC67: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/misc/find_path_to_party.asm:31 STA @LOCAL0A
    // Overlapping static entry reached from 0xC0BC66.
    case 0xC0BC68: cpu.execute_instruction<0x26>(0x00008E, 2); return true;
    // src/misc/find_path_to_party.asm:32 STX PATHFINDING_STATE + pathfinding::radius
    case 0xC0BC69: cpu.execute_instruction<0x8E>(0x00F278, 3); return true;
    // src/misc/find_path_to_party.asm:32 STX PATHFINDING_STATE + pathfinding::radius
    // Overlapping static entry reached from 0xC0BC68.
    case 0xC0BC6A: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:32 STX PATHFINDING_STATE + pathfinding::radius
    // Overlapping static entry reached from 0xC0BC6A.
    case 0xC0BC6B: cpu.execute_instruction<0xF2>(0x00008C, 2); return true;
    // src/misc/find_path_to_party.asm:33 STY PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BC6C: cpu.execute_instruction<0x8C>(0x00F27A, 3); return true;
    // src/misc/find_path_to_party.asm:33 STY PATHFINDING_STATE + pathfinding::radius + 2
    // Overlapping static entry reached from 0xC0BC6B.
    case 0xC0BC6D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:33 STY PATHFINDING_STATE + pathfinding::radius + 2
    // Overlapping static entry reached from 0xC0BC6D.
    case 0xC0BC6E: cpu.execute_instruction<0xF2>(0x0000AD, 2); return true;
    // src/misc/find_path_to_party.asm:34 LDA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BC6F: cpu.execute_instruction<0xAD>(0x00F278, 3); return true;
    // src/misc/find_path_to_party.asm:34 LDA PATHFINDING_STATE + pathfinding::radius
    // Overlapping static entry reached from 0xC0BC6E.
    case 0xC0BC70: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:34 LDA PATHFINDING_STATE + pathfinding::radius
    // Overlapping static entry reached from 0xC0BC70.
    case 0xC0BC71: cpu.execute_instruction<0xF2>(0x00004A, 2); return true;
    // src/misc/find_path_to_party.asm:35 LSR
    case 0xC0BC72: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:36 STA @VIRTUAL04
    case 0xC0BC73: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:37 STA PATHFINDING_TARGET_WIDTH
    case 0xC0BC75: cpu.execute_instruction<0x8D>(0x004E18, 3); return true;
    // src/misc/find_path_to_party.asm:38 LDA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BC78: cpu.execute_instruction<0xAD>(0x00F27A, 3); return true;
    // src/misc/find_path_to_party.asm:39 LSR
    case 0xC0BC7B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:40 STA @VIRTUAL02
    case 0xC0BC7C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:41 STA @LOCAL09
    case 0xC0BC7E: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/misc/find_path_to_party.asm:42 LDA @VIRTUAL02
    case 0xC0BC80: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:43 STA PATHFINDING_TARGET_HEIGHT
    case 0xC0BC82: cpu.execute_instruction<0x8D>(0x004E1A, 3); return true;
    // src/misc/find_path_to_party.asm:44 LDA @LOCAL0B
    case 0xC0BC85: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/misc/find_path_to_party.asm:45 ASL
    case 0xC0BC87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:46 STA @LOCAL0BALT
    case 0xC0BC88: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/misc/find_path_to_party.asm:47 CLC
    case 0xC0BC8A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:48 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0BC8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x000B84, 3); return true;
    // src/misc/find_path_to_party.asm:48 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0BC8B.
    case 0xC0BC8D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:49 TAY
    case 0xC0BC8E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:50 STY @LOCAL08ALT
    case 0xC0BC8F: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    case 0xC0BC91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00295D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BC91.
    case 0xC0BC93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    case 0xC0BC94: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BC93.
    case 0xC0BC95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    case 0xC0BC96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BC96.
    case 0xC0BC98: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    case 0xC0BC99: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/find_path_to_party.asm:52 LDA @LOCAL0BALT
    case 0xC0BC9B: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/misc/find_path_to_party.asm:53 CLC
    case 0xC0BC9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:54 ADC #.LOWORD(ENTITY_SIZES)
    case 0xC0BC9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006C, 2); else cpu.execute_instruction<0x69>(0x002F6C, 3); return true;
    // src/misc/find_path_to_party.asm:54 ADC #.LOWORD(ENTITY_SIZES)
    // Overlapping static entry reached from 0xC0BC9E.
    case 0xC0BCA0: cpu.execute_instruction<0x2F>(0xB22085, 4); return true;
    // src/misc/find_path_to_party.asm:55 STA @LOCAL07
    case 0xC0BCA1: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/misc/find_path_to_party.asm:56 LDA (@LOCAL07)
    case 0xC0BCA3: cpu.execute_instruction<0xB2>(0x000020, 2); return true;
    // src/misc/find_path_to_party.asm:56 LDA (@LOCAL07)
    // Overlapping static entry reached from 0xC0BCA0.
    case 0xC0BCA4: cpu.execute_instruction<0x20>(0x00A60A, 3); return true;
    // src/misc/find_path_to_party.asm:57 ASL
    case 0xC0BCA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/find_path_to_party.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0BCA6: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/find_path_to_party.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BCA4.
    case 0xC0BCA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/find_path_to_party.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0BCA8: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/find_path_to_party.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0BCAA: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/find_path_to_party.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0BCAC: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/misc/find_path_to_party.asm:59 CLC
    case 0xC0BCAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:60 ADC @VIRTUAL06
    case 0xC0BCAF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:61 STA @VIRTUAL06
    case 0xC0BCB1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:62 LDA [@VIRTUAL06]
    case 0xC0BCB3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:63 STA @VIRTUAL02
    case 0xC0BCB5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:64 LDA __BSS_START__,Y
    case 0xC0BCB7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/find_path_to_party.asm:65 SEC
    case 0xC0BCBA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:66 SBC @VIRTUAL02
    case 0xC0BCBB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:67 LSR
    case 0xC0BCBD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:68 LSR
    case 0xC0BCBE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:69 LSR
    case 0xC0BCBF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:70 STA PATHFINDING_TARGET_CENTRE_X
    case 0xC0BCC0: cpu.execute_instruction<0x8D>(0x004E14, 3); return true;
    // src/misc/find_path_to_party.asm:71 LDA @LOCAL0BALT
    case 0xC0BCC3: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/misc/find_path_to_party.asm:72 CLC
    case 0xC0BCC5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:73 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0BCC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C0, 2); else cpu.execute_instruction<0x69>(0x000BC0, 3); return true;
    // src/misc/find_path_to_party.asm:73 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0BCC6.
    case 0xC0BCC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:74 TAX
    case 0xC0BCC9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    case 0xC0BCCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00297F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BCCA.
    case 0xC0BCCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    case 0xC0BCCD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BCCC.
    case 0xC0BCCE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    case 0xC0BCCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BCCE.
    case 0xC0BCD0: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BCCF.
    case 0xC0BCD1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    case 0xC0BCD2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/find_path_to_party.asm:76 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC0BCD4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/find_path_to_party.asm:76 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC0BCD6: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/find_path_to_party.asm:76 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC0BCD8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/find_path_to_party.asm:76 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC0BCDA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/misc/find_path_to_party.asm:77 LDA (@LOCAL07)
    case 0xC0BCDC: cpu.execute_instruction<0xB2>(0x000020, 2); return true;
    // src/misc/find_path_to_party.asm:78 ASL
    case 0xC0BCDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:79 STA @LOCAL05
    case 0xC0BCDF: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    case 0xC0BCE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x002A29, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    // Overlapping static entry reached from 0xC0BCE1.
    case 0xC0BCE3: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    case 0xC0BCE4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    case 0xC0BCE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    // Overlapping static entry reached from 0xC0BCE6.
    case 0xC0BCE8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    case 0xC0BCE9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/misc/find_path_to_party.asm:81 LDA @LOCAL05
    case 0xC0BCEB: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/misc/find_path_to_party.asm:82 TAY
    case 0xC0BCED: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:83 CLC
    case 0xC0BCEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:84 ADC @VIRTUAL06
    case 0xC0BCEF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:85 STA @VIRTUAL06
    case 0xC0BCF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:86 LDA [@VIRTUAL06]
    case 0xC0BCF3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:87 STA @VIRTUAL02
    case 0xC0BCF5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:88 LDA __BSS_START__,X
    case 0xC0BCF7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_path_to_party.asm:89 SEC
    case 0xC0BCFA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:90 SBC @VIRTUAL02
    case 0xC0BCFB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:91 CLC
    case 0xC0BCFD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:92 ADC [@LOCAL04],Y
    case 0xC0BCFE: cpu.execute_instruction<0x77>(0x000016, 2); return true;
    // src/misc/find_path_to_party.asm:93 LSR
    case 0xC0BD00: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:94 LSR
    case 0xC0BD01: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:95 LSR
    case 0xC0BD02: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:96 STA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0BD03: cpu.execute_instruction<0x8D>(0x004E16, 3); return true;
    // src/misc/find_path_to_party.asm:97 LDA (@LOCAL07)
    case 0xC0BD06: cpu.execute_instruction<0xB2>(0x000020, 2); return true;
    // src/misc/find_path_to_party.asm:98 ASL
    case 0xC0BD08: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:99 STA @LOCAL05
    case 0xC0BD09: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/misc/find_path_to_party.asm:100 CLC
    case 0xC0BD0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:101 ADC @VIRTUAL0A
    case 0xC0BD0C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/find_path_to_party.asm:102 STA @VIRTUAL0A
    case 0xC0BD0E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/find_path_to_party.asm:103 LDA [@VIRTUAL0A]
    case 0xC0BD10: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/find_path_to_party.asm:104 STA @VIRTUAL02
    case 0xC0BD12: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:105 LDY @LOCAL08ALT
    case 0xC0BD14: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/misc/find_path_to_party.asm:106 LDA __BSS_START__,Y
    case 0xC0BD16: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/find_path_to_party.asm:107 SEC
    case 0xC0BD19: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:108 SBC @VIRTUAL02
    case 0xC0BD1A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:109 LSR
    case 0xC0BD1C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:110 LSR
    case 0xC0BD1D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:111 LSR
    case 0xC0BD1E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:112 SEC
    case 0xC0BD1F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:113 SBC @VIRTUAL04
    case 0xC0BD20: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:114 STA @VIRTUAL04
    case 0xC0BD22: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:115 LDA @LOCAL05
    case 0xC0BD24: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/misc/find_path_to_party.asm:116 TAY
    case 0xC0BD26: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:117 PHA
    case 0xC0BD27: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/find_path_to_party.asm:118 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0BD28: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/find_path_to_party.asm:118 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0BD2A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/find_path_to_party.asm:118 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0BD2C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/find_path_to_party.asm:118 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0BD2E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/find_path_to_party.asm:119 PLA
    case 0xC0BD30: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:120 CLC
    case 0xC0BD31: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:121 ADC @VIRTUAL06
    case 0xC0BD32: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:122 STA @VIRTUAL06
    case 0xC0BD34: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:123 LDA [@VIRTUAL06]
    case 0xC0BD36: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:124 STA @VIRTUAL02
    case 0xC0BD38: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:125 LDA __BSS_START__,X
    case 0xC0BD3A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_path_to_party.asm:126 SEC
    case 0xC0BD3D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:127 SBC @VIRTUAL02
    case 0xC0BD3E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:128 CLC
    case 0xC0BD40: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:129 ADC [@LOCAL04],Y
    case 0xC0BD41: cpu.execute_instruction<0x77>(0x000016, 2); return true;
    // src/misc/find_path_to_party.asm:130 LSR
    case 0xC0BD43: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:131 LSR
    case 0xC0BD44: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:132 LSR
    case 0xC0BD45: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:133 LDX @LOCAL09
    case 0xC0BD46: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/misc/find_path_to_party.asm:134 STX @VIRTUAL02
    case 0xC0BD48: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:135 SEC
    case 0xC0BD4A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:136 SBC @VIRTUAL02
    case 0xC0BD4B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:137 STA @VIRTUAL02
    case 0xC0BD4D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:138 STA @LOCAL00
    case 0xC0BD4F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/find_path_to_party.asm:139 LDY @VIRTUAL04
    case 0xC0BD51: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:140 LDX @LOCAL0C
    case 0xC0BD53: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/misc/find_path_to_party.asm:141 LDA @LOCAL0A
    case 0xC0BD55: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/misc/find_path_to_party.asm:142 JSR UNKNOWN_C0B9BC
    case 0xC0BD57: cpu.execute_instruction<0x20>(0x00B997, 3); return true;
    // src/misc/find_path_to_party.asm:143 LDA @VIRTUAL02
    case 0xC0BD5A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:144 STA @LOCAL00
    case 0xC0BD5C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/misc/find_path_to_party.asm:145 STZ_BADOPT @LOCAL01
    case 0xC0BD5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/misc/find_path_to_party.asm:145 STZ_BADOPT @LOCAL01
    // Overlapping static entry reached from 0xC0BD5E.
    case 0xC0BD60: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/misc/find_path_to_party.asm:145 STZ_BADOPT @LOCAL01
    case 0xC0BD61: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/find_path_to_party.asm:146 LDA #64
    case 0xC0BD63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/misc/find_path_to_party.asm:146 LDA #64
    // Overlapping static entry reached from 0xC0BD63.
    case 0xC0BD65: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_path_to_party.asm:147 STA @LOCAL02
    case 0xC0BD66: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/find_path_to_party.asm:148 LDA #50
    case 0xC0BD68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/misc/find_path_to_party.asm:148 LDA #50
    // Overlapping static entry reached from 0xC0BD68.
    case 0xC0BD6A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_path_to_party.asm:149 STA @LOCAL03
    case 0xC0BD6B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/find_path_to_party.asm:150 LDY @VIRTUAL04
    case 0xC0BD6D: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:151 LDX @LOCAL0C
    case 0xC0BD6F: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/misc/find_path_to_party.asm:152 LDA @LOCAL0A
    case 0xC0BD71: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/misc/find_path_to_party.asm:153 JSR UNKNOWN_C0BA35
    case 0xC0BD73: cpu.execute_instruction<0x20>(0x00BA14, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_path_to_party.asm:154 END_C_FUNCTION
    case 0xC0BD76: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/find_path_to_party.asm:154 END_C_FUNCTION
    case 0xC0BD77: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/gain_exp.asm (source_named).
bool execute_miscellaneous_gain_exp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/gain_exp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1D7E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D7E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D7E7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D7E8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D7E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D7E9.
    case 0xC1D7EB: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D7EC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D7ED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:11 STX @VIRTUAL02
    case 0xC1D7EE: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/gain_exp.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1D7EB.
    case 0xC1D7EF: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/gain_exp.asm:12 TAX
    case 0xC1D7F0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/gain_exp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1D7F1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/gain_exp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1D7F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/gain_exp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1D7F5: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1D7F7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:14 TXY
    case 0xC1D7F9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:15 DEY
    case 0xC1D7FA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:16 STY @LOCAL01
    case 0xC1D7FB: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:17 TYA
    case 0xC1D7FD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:18 LDY #.SIZEOF(char_struct)
    case 0xC1D7FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/gain_exp.asm:18 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D7FE.
    case 0xC1D800: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:19 JSL MULT168
    case 0xC1D801: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/gain_exp.asm:20 STA @LOCAL00
    case 0xC1D805: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/gain_exp.asm:21 CLC
    case 0xC1D807: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:22 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::exp
    case 0xC1D808: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x009C84, 3); return true;
    // src/misc/gain_exp.asm:22 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::exp
    // Overlapping static entry reached from 0xC1D808.
    case 0xC1D80A: cpu.execute_instruction<0x9C>(0x00A5AA, 3); return true;
    // src/misc/gain_exp.asm:23 TAX
    case 0xC1D80B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1D80C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1D80A.
    case 0xC1D80D: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1D80E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1D80D.
    case 0xC1D80F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1D810: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1D812: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/gain_exp.asm:25 TXY
    case 0xC1D814: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/gain_exp.asm:26 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1D815: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/gain_exp.asm:26 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1D818: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/gain_exp.asm:26 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1D81A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:26 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1D81D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:27 CLC
    case 0xC1D81F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1D820: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1D822: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1D824: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1D826: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1D828: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1D82A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:29 TXY
    case 0xC1D82C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/gain_exp.asm:30 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D82D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/gain_exp.asm:30 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D82F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/gain_exp.asm:30 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D832: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/gain_exp.asm:30 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D834: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/gain_exp.asm:31 LDA @LOCAL00
    case 0xC1D837: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/gain_exp.asm:32 TAX
    case 0xC1D839: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:33 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC1D83A: cpu.execute_instruction<0xBD>(0x009C83, 3); return true;
    // src/misc/gain_exp.asm:34 AND #$00FF
    case 0xC1D83D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/gain_exp.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC1D83D.
    case 0xC1D83F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/gain_exp.asm:35 STA @LOCAL00
    case 0xC1D840: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/gain_exp.asm:36 STA @VIRTUAL04
    case 0xC1D842: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:37 LDA #MAX_LEVEL
    case 0xC1D844: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x000063, 3); return true;
    // src/misc/gain_exp.asm:37 LDA #MAX_LEVEL
    // Overlapping static entry reached from 0xC1D844.
    case 0xC1D846: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/gain_exp.asm:38 CLC
    case 0xC1D847: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:39 SBC @VIRTUAL04
    case 0xC1D848: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1D84A: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1D84C: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1D84E: cpu.execute_instruction<0x4C>(0x00D92C, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1D851: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1D853: cpu.execute_instruction<0x4C>(0x00D92C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/gain_exp.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1D856: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/gain_exp.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1D858: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/gain_exp.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1D85A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1D85C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1D85E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009E00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D85E.
    case 0xC1D860: cpu.execute_instruction<0x9E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1D861: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1D863: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D863.
    case 0xC1D865: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1D866: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:43 LDA @LOCAL00
    case 0xC1D868: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/misc/gain_exp.asm:44 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1D86A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/misc/gain_exp.asm:44 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1D86B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:45 STA @VIRTUAL04
    case 0xC1D86C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:46 INC @VIRTUAL04
    case 0xC1D86E: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:47 INC @VIRTUAL04
    case 0xC1D870: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:48 INC @VIRTUAL04
    case 0xC1D872: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:49 INC @VIRTUAL04
    case 0xC1D874: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:50 LDY @LOCAL01
    case 0xC1D876: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:51 TYA
    case 0xC1D878: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:52 LDY #4 * 100
    case 0xC1D879: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000090, 2); else cpu.execute_instruction<0xA0>(0x000190, 3); return true;
    // src/misc/gain_exp.asm:52 LDY #4 * 100
    // Overlapping static entry reached from 0xC1D879.
    case 0xC1D87B: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:53 JSL MULT16
    case 0xC1D87C: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/misc/gain_exp.asm:53 JSL MULT16
    // Overlapping static entry reached from 0xC1D87B.
    case 0xC1D87D: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/misc/gain_exp.asm:53 JSL MULT16
    // Overlapping static entry reached from 0xC1D87D.
    case 0xC1D87F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006518, 3); return true;
    // src/misc/gain_exp.asm:54 CLC
    case 0xC1D880: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:55 ADC @VIRTUAL04
    case 0xC1D881: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:55 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1D87F.
    case 0xC1D882: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/misc/gain_exp.asm:56 CLC
    case 0xC1D883: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:57 ADC @VIRTUAL06
    case 0xC1D884: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/gain_exp.asm:58 STA @VIRTUAL06
    case 0xC1D886: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1D888: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D888.
    case 0xC1D88A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1D88B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1D88D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1D88E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1D890: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1D892: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:60 CLC
    case 0xC1D894: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:61 LDA @VIRTUAL06
    case 0xC1D895: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/misc/gain_exp.asm:62 SBC @VIRTUAL0A
    case 0xC1D897: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/misc/gain_exp.asm:63 LDA @VIRTUAL06+2
    case 0xC1D899: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:64 SBC @VIRTUAL0A+2
    case 0xC1D89B: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/misc/gain_exp.asm:65 BCC @UNKNOWN2
    case 0xC1D89D: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/misc/gain_exp.asm:66 JMP @UNKNOWN6
    case 0xC1D89F: cpu.execute_instruction<0x4C>(0x00D92C, 3); return true;
    // src/misc/gain_exp.asm:68 LDA @VIRTUAL02
    case 0xC1D8A2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/gain_exp.asm:69 BEQ @UNKNOWN3
    case 0xC1D8A4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/gain_exp.asm:70 LDA #MUSIC::LEVEL_UP
    case 0xC1D8A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/misc/gain_exp.asm:70 LDA #MUSIC::LEVEL_UP
    // Overlapping static entry reached from 0xC1D8A6.
    case 0xC1D8A8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:71 JSL CHANGE_MUSIC
    case 0xC1D8A9: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/misc/gain_exp.asm:73 LDX @VIRTUAL02
    case 0xC1D8AD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/gain_exp.asm:74 LDY @LOCAL01
    case 0xC1D8AF: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:75 TYA
    case 0xC1D8B1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:76 INC
    case 0xC1D8B2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:77 JSR LEVEL_UP_CHAR
    case 0xC1D8B3: cpu.execute_instruction<0x20>(0x00CEF2, 3); return true;
    // src/misc/gain_exp.asm:78 LDY @LOCAL01
    case 0xC1D8B6: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:79 TYA
    case 0xC1D8B8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:80 LDY #.SIZEOF(char_struct)
    case 0xC1D8B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/gain_exp.asm:80 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D8B9.
    case 0xC1D8BB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:81 JSL MULT168
    case 0xC1D8BC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/gain_exp.asm:82 TAX
    case 0xC1D8C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:83 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC1D8C1: cpu.execute_instruction<0xBD>(0x009C83, 3); return true;
    // src/misc/gain_exp.asm:84 AND #$00FF
    case 0xC1D8C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/gain_exp.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC1D8C4.
    case 0xC1D8C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/gain_exp.asm:85 STA @LOCAL00
    case 0xC1D8C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/gain_exp.asm:86 STA @VIRTUAL04
    case 0xC1D8C9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:87 LDA #MAX_LEVEL
    case 0xC1D8CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x000063, 3); return true;
    // src/misc/gain_exp.asm:87 LDA #MAX_LEVEL
    // Overlapping static entry reached from 0xC1D8CB.
    case 0xC1D8CD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/gain_exp.asm:88 CLC
    case 0xC1D8CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:89 SBC @VIRTUAL04
    case 0xC1D8CF: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/gain_exp.asm:90 BRANCHLTEQS @UNKNOWN6
    case 0xC1D8D1: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/gain_exp.asm:90 BRANCHLTEQS @UNKNOWN6
    case 0xC1D8D3: cpu.execute_instruction<0x10>(0x000057, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/gain_exp.asm:90 BRANCHLTEQS @UNKNOWN6
    case 0xC1D8D5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/gain_exp.asm:90 BRANCHLTEQS @UNKNOWN6
    case 0xC1D8D7: cpu.execute_instruction<0x30>(0x000053, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1D8D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009E00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D8D9.
    case 0xC1D8DB: cpu.execute_instruction<0x9E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1D8DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1D8DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D8DE.
    case 0xC1D8E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1D8E1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:92 LDA @LOCAL00
    case 0xC1D8E3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/misc/gain_exp.asm:93 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1D8E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/misc/gain_exp.asm:93 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1D8E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:94 STA @VIRTUAL04
    case 0xC1D8E7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:95 INC @VIRTUAL04
    case 0xC1D8E9: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:96 INC @VIRTUAL04
    case 0xC1D8EB: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:97 INC @VIRTUAL04
    case 0xC1D8ED: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:98 INC @VIRTUAL04
    case 0xC1D8EF: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:99 LDY @LOCAL01
    case 0xC1D8F1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:100 TYA
    case 0xC1D8F3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:101 LDY #4 * 100
    case 0xC1D8F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000090, 2); else cpu.execute_instruction<0xA0>(0x000190, 3); return true;
    // src/misc/gain_exp.asm:101 LDY #4 * 100
    // Overlapping static entry reached from 0xC1D8F4.
    case 0xC1D8F6: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:102 JSL MULT16
    case 0xC1D8F7: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/misc/gain_exp.asm:102 JSL MULT16
    // Overlapping static entry reached from 0xC1D8F6.
    case 0xC1D8F8: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/misc/gain_exp.asm:102 JSL MULT16
    // Overlapping static entry reached from 0xC1D8F8.
    case 0xC1D8FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006518, 3); return true;
    // src/misc/gain_exp.asm:103 CLC
    case 0xC1D8FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:104 ADC @VIRTUAL04
    case 0xC1D8FC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:104 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1D8FA.
    case 0xC1D8FD: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/misc/gain_exp.asm:105 CLC
    case 0xC1D8FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:106 ADC @VIRTUAL06
    case 0xC1D8FF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/gain_exp.asm:107 STA @VIRTUAL06
    case 0xC1D901: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1D903: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1D903.
    case 0xC1D905: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1D906: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1D908: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1D909: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1D90B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1D90D: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/gain_exp.asm:109 TXA
    case 0xC1D90F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:110 CLC
    case 0xC1D910: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:111 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    case 0xC1D911: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x009C84, 3); return true;
    // src/misc/gain_exp.asm:111 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    // Overlapping static entry reached from 0xC1D911.
    case 0xC1D913: cpu.execute_instruction<0x9C>(0x00B9A8, 3); return true;
    // src/misc/gain_exp.asm:112 TAY
    case 0xC1D914: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1D915: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D913.
    case 0xC1D916: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1D918: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1D91A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1D91D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:114 LDA @VIRTUAL06
    case 0xC1D91F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/misc/gain_exp.asm:115 CMP @VIRTUAL0A
    case 0xC1D921: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/misc/gain_exp.asm:116 LDA @VIRTUAL06+2
    case 0xC1D923: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:117 SBC @VIRTUAL0A+2
    case 0xC1D925: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/misc/gain_exp.asm:118 BCC @UNKNOWN6
    case 0xC1D927: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/misc/gain_exp.asm:119 JMP @UNKNOWN3
    case 0xC1D929: cpu.execute_instruction<0x4C>(0x00D8AD, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/gain_exp.asm:121 END_C_FUNCTION
    case 0xC1D92C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/gain_exp.asm:121 END_C_FUNCTION
    case 0xC1D92D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/get_character_item.asm (source_named).
bool execute_miscellaneous_get_character_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/get_character_item.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3E537: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E539: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E53A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E53B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E53C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E53C.
    case 0xC3E53E: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E53F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E540: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:8 TXY
    case 0xC3E541: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:9 TAX
    case 0xC3E542: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:10 TYA
    case 0xC3E543: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:11 DEC
    case 0xC3E544: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:12 STA @VIRTUAL02
    case 0xC3E545: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/get_character_item.asm:13 TXA
    case 0xC3E547: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:14 DEC
    case 0xC3E548: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:15 LDY #.SIZEOF(char_struct)
    case 0xC3E549: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/get_character_item.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E549.
    case 0xC3E54B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/get_character_item.asm:16 JSL MULT168
    case 0xC3E54C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/get_character_item.asm:17 CLC
    case 0xC3E550: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3E551: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/get_character_item.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E551.
    case 0xC3E553: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/get_character_item.asm:19 CLC
    case 0xC3E554: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:20 ADC @VIRTUAL02
    case 0xC3E555: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/get_character_item.asm:20 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC3E553.
    case 0xC3E556: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/get_character_item.asm:21 TAX
    case 0xC3E557: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:22 LDA __BSS_START__,X
    case 0xC3E558: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/get_character_item.asm:23 AND #$00FF
    case 0xC3E55B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/get_character_item.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC3E55B.
    case 0xC3E55D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/misc/get_character_item.asm:24 PLD
    case 0xC3E55E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:25 RTL
    case 0xC3E55F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/get_item_type.asm (source_named).
bool execute_miscellaneous_get_item_type_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/get_item_type.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC19EE3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/get_item_type.asm:8 END_STACK_VARS
    case 0xC19EE5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/get_item_type.asm:8 END_STACK_VARS
    case 0xC19EE6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/get_item_type.asm:8 END_STACK_VARS
    case 0xC19EE7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_item_type.asm:8 END_STACK_VARS
    case 0xC19EE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_item_type.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC19EE8.
    case 0xC19EEA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/get_item_type.asm:8 END_STACK_VARS
    case 0xC19EEB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/get_item_type.asm:8 END_STACK_VARS
    case 0xC19EEC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19EED: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19EEA.
    case 0xC19EEE: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19EEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19EF0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19EF2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19EF3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19EF4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/get_item_type.asm:11 CLC
    case 0xC19EF5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_item_type.asm:12 ADC #item::type
    case 0xC19EF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/misc/get_item_type.asm:12 ADC #item::type
    // Overlapping static entry reached from 0xC19EF6.
    case 0xC19EF8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/get_item_type.asm:13 TAX
    case 0xC19EF9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/get_item_type.asm:14 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19EFA: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/get_item_type.asm:15 AND #$00FF
    case 0xC19EFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/get_item_type.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC19EFE.
    case 0xC19F00: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/get_item_type.asm:16 AND #$0030
    case 0xC19F01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/misc/get_item_type.asm:16 AND #$0030
    // Overlapping static entry reached from 0xC19F01.
    case 0xC19F03: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/get_item_type.asm:17 BEQ @UNKNOWN0
    case 0xC19F04: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/get_item_type.asm:18 CMP #$0010
    case 0xC19F06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/misc/get_item_type.asm:18 CMP #$0010
    // Overlapping static entry reached from 0xC19F06.
    case 0xC19F08: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/get_item_type.asm:19 BEQ @UNKNOWN1
    case 0xC19F09: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/get_item_type.asm:20 CMP #$0020
    case 0xC19F0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/misc/get_item_type.asm:20 CMP #$0020
    // Overlapping static entry reached from 0xC19F0B.
    case 0xC19F0D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/get_item_type.asm:21 BEQ @UNKNOWN2
    case 0xC19F0E: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/get_item_type.asm:22 CMP #$0030
    case 0xC19F10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/misc/get_item_type.asm:22 CMP #$0030
    // Overlapping static entry reached from 0xC19F10.
    case 0xC19F12: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/get_item_type.asm:23 BEQ @UNKNOWN3
    case 0xC19F13: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/get_item_type.asm:24 BRA @UNKNOWN4
    case 0xC19F15: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/misc/get_item_type.asm:26 LDA #$0001
    case 0xC19F17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/get_item_type.asm:26 LDA #$0001
    // Overlapping static entry reached from 0xC19F17.
    case 0xC19F19: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/get_item_type.asm:27 BRA @UNKNOWN5
    case 0xC19F1A: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/misc/get_item_type.asm:29 LDA #$0002
    case 0xC19F1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/get_item_type.asm:29 LDA #$0002
    // Overlapping static entry reached from 0xC19F1C.
    case 0xC19F1E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/get_item_type.asm:30 BRA @UNKNOWN5
    case 0xC19F1F: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/misc/get_item_type.asm:32 LDA #$0003
    case 0xC19F21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/misc/get_item_type.asm:32 LDA #$0003
    // Overlapping static entry reached from 0xC19F21.
    case 0xC19F23: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/get_item_type.asm:33 BRA @UNKNOWN5
    case 0xC19F24: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/get_item_type.asm:35 LDA #$0004
    case 0xC19F26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/misc/get_item_type.asm:35 LDA #$0004
    // Overlapping static entry reached from 0xC19F26.
    case 0xC19F28: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/get_item_type.asm:36 BRA @UNKNOWN5
    case 0xC19F29: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/get_item_type.asm:38 LDA #$0000
    case 0xC19F2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/get_item_type.asm:38 LDA #$0000
    // Overlapping static entry reached from 0xC19F2B.
    case 0xC19F2D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/misc/get_item_type.asm:41 PLD
    case 0xC19F2E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/get_item_type.asm:43 RTS
    case 0xC19F2F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/get_required_exp.asm (source_named).
bool execute_miscellaneous_get_required_exp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/get_required_exp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43779: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC4377B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC4377C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC4377D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC4377E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4377E.
    case 0xC43780: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC43781: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC43782: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:10 TAY
    case 0xC43783: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:11 DEY
    case 0xC43784: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:12 STY @LOCAL01
    case 0xC43785: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/get_required_exp.asm:13 TYA
    case 0xC43787: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:14 LDY #.SIZEOF(char_struct)
    case 0xC43788: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/get_required_exp.asm:14 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC43788.
    case 0xC4378A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/get_required_exp.asm:15 JSL MULT168
    case 0xC4378B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/get_required_exp.asm:16 TAX
    case 0xC4378F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:17 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC43790: cpu.execute_instruction<0xBD>(0x009C83, 3); return true;
    // src/misc/get_required_exp.asm:18 AND #$00FF
    case 0xC43793: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/get_required_exp.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC43793.
    case 0xC43795: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/get_required_exp.asm:19 STA @LOCAL00
    case 0xC43796: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/get_required_exp.asm:20 CMP #MAX_LEVEL
    case 0xC43798: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000063, 2); else cpu.execute_instruction<0xC9>(0x000063, 3); return true;
    // src/misc/get_required_exp.asm:20 CMP #MAX_LEVEL
    // Overlapping static entry reached from 0xC43798.
    case 0xC4379A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/get_required_exp.asm:21 BNE @UNKNOWN0
    case 0xC4379B: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4379D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC4379D.
    case 0xC4379F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC437A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC437A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC437A2.
    case 0xC437A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC437A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/get_required_exp.asm:23 BRA @UNKNOWN1
    case 0xC437A7: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // src/misc/get_required_exp.asm:25 TXA
    case 0xC437A9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:26 CLC
    case 0xC437AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    case 0xC437AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x009C84, 3); return true;
    // src/misc/get_required_exp.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    // Overlapping static entry reached from 0xC437AB.
    case 0xC437AD: cpu.execute_instruction<0x9C>(0x00B9A8, 3); return true;
    // src/misc/get_required_exp.asm:28 TAY
    case 0xC437AE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC437AF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC437AD.
    case 0xC437B0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC437B2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC437B4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC437B7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC437B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009E00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC437B9.
    case 0xC437BB: cpu.execute_instruction<0x9E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC437BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC437BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC437BE.
    case 0xC437C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC437C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/get_required_exp.asm:31 LDA @LOCAL00
    case 0xC437C3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/get_required_exp.asm:32 ASL
    case 0xC437C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:33 ASL
    case 0xC437C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:34 STA @VIRTUAL02
    case 0xC437C7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:35 INC @VIRTUAL02
    case 0xC437C9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:36 INC @VIRTUAL02
    case 0xC437CB: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:37 INC @VIRTUAL02
    case 0xC437CD: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:38 INC @VIRTUAL02
    case 0xC437CF: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:39 LDY @LOCAL01
    case 0xC437D1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/get_required_exp.asm:40 TYA
    case 0xC437D3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:41 LDY #4 * 100
    case 0xC437D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000090, 2); else cpu.execute_instruction<0xA0>(0x000190, 3); return true;
    // src/misc/get_required_exp.asm:41 LDY #4 * 100
    // Overlapping static entry reached from 0xC437D4.
    case 0xC437D6: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/misc/get_required_exp.asm:42 JSL MULT16
    case 0xC437D7: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/misc/get_required_exp.asm:42 JSL MULT16
    // Overlapping static entry reached from 0xC437D6.
    case 0xC437D8: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/misc/get_required_exp.asm:42 JSL MULT16
    // Overlapping static entry reached from 0xC437D8.
    case 0xC437DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006518, 3); return true;
    // src/misc/get_required_exp.asm:43 CLC
    case 0xC437DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:44 ADC @VIRTUAL02
    case 0xC437DC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:44 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC437DA.
    case 0xC437DD: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/misc/get_required_exp.asm:45 CLC
    case 0xC437DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:46 ADC @VIRTUAL06
    case 0xC437DF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/get_required_exp.asm:47 STA @VIRTUAL06
    case 0xC437E1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC437E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC437E3.
    case 0xC437E5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC437E6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC437E8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC437E9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC437EB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC437ED: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/misc/get_required_exp.asm:49 SEC
    case 0xC437EF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC437F0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC437F2: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC437F4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC437F6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC437F8: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC437FA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/get_required_exp.asm:52 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC437FC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/get_required_exp.asm:52 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC437FE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/get_required_exp.asm:52 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC43800: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/get_required_exp.asm:52 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC43802: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/get_required_exp.asm:53 END_C_FUNCTION
    case 0xC43804: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/get_required_exp.asm:53 END_C_FUNCTION
    case 0xC43805: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/give_item_to_character.asm (source_named).
bool execute_miscellaneous_give_item_to_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/give_item_to_character.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC18C69: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18C6B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18C6C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18C6D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18C6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC18C6E.
    case 0xC18C70: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18C71: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18C72: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:11 STX @VIRTUAL04
    case 0xC18C73: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/give_item_to_character.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18C70.
    case 0xC18C74: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/give_item_to_character.asm:12 CMP #$00FF
    case 0xC18C75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/give_item_to_character.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC18C74.
    case 0xC18C76: cpu.execute_instruction<0xFF>(0x4DD000, 4); return true;
    // src/misc/give_item_to_character.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC18C75.
    case 0xC18C77: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/give_item_to_character.asm:13 BNE @UNKNOWN3
    case 0xC18C78: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/misc/give_item_to_character.asm:14 LDA #0
    case 0xC18C7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:14 LDA #0
    // Overlapping static entry reached from 0xC18C7A.
    case 0xC18C7C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/give_item_to_character.asm:15 STA @VIRTUAL02
    case 0xC18C7D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:16 STA @LOCAL01
    case 0xC18C7F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/give_item_to_character.asm:17 BRA @UNKNOWN2
    case 0xC18C81: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/misc/give_item_to_character.asm:19 LDA @LOCAL01
    case 0xC18C83: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/give_item_to_character.asm:20 STA @VIRTUAL02
    case 0xC18C85: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:21 CLC
    case 0xC18C87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC18C88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/give_item_to_character.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC18C88.
    case 0xC18C8A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:24 CLC
    case 0xC18C8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:25 ADC #game_state::party_members
    case 0xC18C8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000077, 2); else cpu.execute_instruction<0x69>(0x000077, 3); return true;
    // src/misc/give_item_to_character.asm:25 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC18C8C.
    case 0xC18C8E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/give_item_to_character.asm:29 TAY
    case 0xC18C8F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:30 STY @LOCAL00
    case 0xC18C90: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/give_item_to_character.asm:31 LDX @VIRTUAL04
    case 0xC18C92: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/give_item_to_character.asm:32 LDA __BSS_START__,Y
    case 0xC18C94: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:33 AND #$00FF
    case 0xC18C97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_character.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC18C97.
    case 0xC18C99: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/give_item_to_character.asm:34 JSR GIVE_ITEM_TO_SPECIFIC_CHARACTER
    case 0xC18C9A: cpu.execute_instruction<0x20>(0x008BCB, 3); return true;
    // src/misc/give_item_to_character.asm:35 CMP #0
    case 0xC18C9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:35 CMP #0
    // Overlapping static entry reached from 0xC18C9D.
    case 0xC18C9F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/give_item_to_character.asm:36 BEQ @UNKNOWN1
    case 0xC18CA0: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/give_item_to_character.asm:37 LDY @LOCAL00
    case 0xC18CA2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/give_item_to_character.asm:38 LDA __BSS_START__,Y
    case 0xC18CA4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:39 AND #$00FF
    case 0xC18CA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_character.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC18CA7.
    case 0xC18CA9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/give_item_to_character.asm:40 BRA @UNKNOWN4
    case 0xC18CAA: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/misc/give_item_to_character.asm:42 INC @VIRTUAL02
    case 0xC18CAC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:43 LDA @VIRTUAL02
    case 0xC18CAE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:44 STA @LOCAL01
    case 0xC18CB0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/give_item_to_character.asm:46 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC18CB2: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/give_item_to_character.asm:47 AND #$00FF
    case 0xC18CB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_character.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC18CB5.
    case 0xC18CB7: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/give_item_to_character.asm:48 PHA
    case 0xC18CB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:49 LDA @VIRTUAL02
    case 0xC18CB9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:50 PLY
    case 0xC18CBB: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:51 STY @VIRTUAL02
    case 0xC18CBC: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:52 CMP @VIRTUAL02
    case 0xC18CBE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:53 BCC @UNKNOWN0
    case 0xC18CC0: cpu.execute_instruction<0x90>(0x0000C1, 2); return true;
    // src/misc/give_item_to_character.asm:54 LDA #0
    case 0xC18CC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:54 LDA #0
    // Overlapping static entry reached from 0xC18CC2.
    case 0xC18CC4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/give_item_to_character.asm:55 BRA @UNKNOWN4
    case 0xC18CC5: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/misc/give_item_to_character.asm:57 LDX @VIRTUAL04
    case 0xC18CC7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/give_item_to_character.asm:58 JSR GIVE_ITEM_TO_SPECIFIC_CHARACTER
    case 0xC18CC9: cpu.execute_instruction<0x20>(0x008BCB, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/give_item_to_character.asm:60 END_C_FUNCTION
    case 0xC18CCC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/give_item_to_character.asm:60 END_C_FUNCTION
    case 0xC18CCD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/give_item_to_specific_character.asm (source_named).
bool execute_miscellaneous_give_item_to_specific_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/give_item_to_specific_character.asm:3 BEGIN_C_FUNCTION
    case 0xC18BCB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18BCD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18BCE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18BCF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18BD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC18BD0.
    case 0xC18BD2: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18BD3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18BD4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:13 TXY
    case 0xC18BD5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:14 STY @LOCAL01
    case 0xC18BD6: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/give_item_to_specific_character.asm:15 TAX
    case 0xC18BD8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:16 DEC
    case 0xC18BD9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:17 STA @VIRTUAL04
    case 0xC18BDA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/give_item_to_specific_character.asm:19 STA @LOCAL00
    case 0xC18BDC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/give_item_to_specific_character.asm:21 LDA #0
    case 0xC18BDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/give_item_to_specific_character.asm:21 LDA #0
    // Overlapping static entry reached from 0xC18BDE.
    case 0xC18BE0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/give_item_to_specific_character.asm:22 STA @VIRTUAL02
    case 0xC18BE1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/give_item_to_specific_character.asm:23 BRA @UNKNOWN4
    case 0xC18BE3: cpu.execute_instruction<0x80>(0x00006D, 2); return true;
    // src/misc/give_item_to_specific_character.asm:25 LDA @VIRTUAL04
    case 0xC18BE5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/give_item_to_specific_character.asm:26 LDY #.SIZEOF(char_struct)
    case 0xC18BE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/give_item_to_specific_character.asm:26 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18BE7.
    case 0xC18BE9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/give_item_to_specific_character.asm:27 JSL MULT168
    case 0xC18BEA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/give_item_to_specific_character.asm:28 CLC
    case 0xC18BEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:29 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18BEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/give_item_to_specific_character.asm:29 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18BEF.
    case 0xC18BF1: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/give_item_to_specific_character.asm:30 CLC
    case 0xC18BF2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:31 ADC @VIRTUAL02
    case 0xC18BF3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/give_item_to_specific_character.asm:31 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC18BF1.
    case 0xC18BF4: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/give_item_to_specific_character.asm:32 TAX
    case 0xC18BF5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:33 LDA __BSS_START__,X
    case 0xC18BF6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/give_item_to_specific_character.asm:34 AND #$00FF
    case 0xC18BF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_specific_character.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC18BF9.
    case 0xC18BFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/give_item_to_specific_character.asm:35 BNE @UNKNOWN3
    case 0xC18BFC: cpu.execute_instruction<0xD0>(0x000052, 2); return true;
    // src/misc/give_item_to_specific_character.asm:36 LDY @LOCAL01
    case 0xC18BFE: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/give_item_to_specific_character.asm:37 TYA
    case 0xC18C00: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC18C01: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/give_item_to_specific_character.asm:39 STA __BSS_START__,X
    case 0xC18C03: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/give_item_to_specific_character.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC18C06: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/give_item_to_specific_character.asm:41 TYA
    case 0xC18C08: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/give_item_to_specific_character.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C09: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/give_item_to_specific_character.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/give_item_to_specific_character.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C0C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/give_item_to_specific_character.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/give_item_to_specific_character.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/give_item_to_specific_character.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:43 CLC
    case 0xC18C11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:44 ADC #item::type
    case 0xC18C12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/misc/give_item_to_specific_character.asm:44 ADC #item::type
    // Overlapping static entry reached from 0xC18C12.
    case 0xC18C14: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/give_item_to_specific_character.asm:45 TAX
    case 0xC18C15: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:46 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC18C16: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/give_item_to_specific_character.asm:47 AND #$00FF
    case 0xC18C1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_specific_character.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC18C1A.
    case 0xC18C1C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/give_item_to_specific_character.asm:48 CMP #ITEM_TYPE::TEDDY_BEAR
    case 0xC18C1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/give_item_to_specific_character.asm:48 CMP #ITEM_TYPE::TEDDY_BEAR
    // Overlapping static entry reached from 0xC18C1D.
    case 0xC18C1F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/give_item_to_specific_character.asm:49 BNE @UNKNOWN1
    case 0xC18C20: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/misc/give_item_to_specific_character.asm:50 JSL UNKNOWN_C216DB
    case 0xC18C22: cpu.execute_instruction<0x22>(0xC21583, 4); return true;
    // src/misc/give_item_to_specific_character.asm:52 LDY @LOCAL01
    case 0xC18C26: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/give_item_to_specific_character.asm:53 TYA
    case 0xC18C28: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/give_item_to_specific_character.asm:54 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C29: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/give_item_to_specific_character.asm:54 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/give_item_to_specific_character.asm:54 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C2C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/give_item_to_specific_character.asm:54 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/give_item_to_specific_character.asm:54 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/give_item_to_specific_character.asm:54 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18C30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:55 CLC
    case 0xC18C31: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:56 ADC #item::flags
    case 0xC18C32: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/misc/give_item_to_specific_character.asm:56 ADC #item::flags
    // Overlapping static entry reached from 0xC18C32.
    case 0xC18C34: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/give_item_to_specific_character.asm:57 TAX
    case 0xC18C35: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:58 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC18C36: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/give_item_to_specific_character.asm:59 AND #$00FF
    case 0xC18C3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_specific_character.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC18C3A.
    case 0xC18C3C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/give_item_to_specific_character.asm:60 AND #ITEM_FLAGS::TRANSFORM
    case 0xC18C3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/misc/give_item_to_specific_character.asm:60 AND #ITEM_FLAGS::TRANSFORM
    // Overlapping static entry reached from 0xC18C3D.
    case 0xC18C3F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/give_item_to_specific_character.asm:61 BEQ @UNKNOWN2
    case 0xC18C40: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/give_item_to_specific_character.asm:65 TYA
    case 0xC18C42: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC18C43: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/give_item_to_specific_character.asm:67 JSL UNKNOWN_C3EAD0
    case 0xC18C45: cpu.execute_instruction<0x22>(0xC3E690, 4); return true;
    // src/misc/give_item_to_specific_character.asm:70 LDA @LOCAL00
    case 0xC18C49: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/give_item_to_specific_character.asm:71 STA @VIRTUAL04
    case 0xC18C4B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/give_item_to_specific_character.asm:75 INC
    case 0xC18C4D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:76 BRA @UNKNOWN7
    case 0xC18C4E: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/misc/give_item_to_specific_character.asm:78 INC @VIRTUAL02
    case 0xC18C50: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/give_item_to_specific_character.asm:81 LDA #.SIZEOF(char_struct::items)
    case 0xC18C52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/give_item_to_specific_character.asm:81 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC18C52.
    case 0xC18C54: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/give_item_to_specific_character.asm:82 CLC
    case 0xC18C55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:83 SBC @VIRTUAL02
    case 0xC18C56: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18C58: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18C5A: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18C5C: cpu.execute_instruction<0x4C>(0x008BE5, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18C5F: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18C61: cpu.execute_instruction<0x4C>(0x008BE5, 3); return true;
    // src/misc/give_item_to_specific_character.asm:85 LDA #0
    case 0xC18C64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/give_item_to_specific_character.asm:85 LDA #0
    // Overlapping static entry reached from 0xC18C64.
    case 0xC18C66: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/give_item_to_specific_character.asm:87 END_C_FUNCTION
    case 0xC18C67: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/give_item_to_specific_character.asm:87 END_C_FUNCTION
    case 0xC18C68: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/hp_pp_roller.asm (source_named).
bool execute_miscellaneous_hp_pp_roller_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/hp_pp_roller.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20F3B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    case 0xC20F3D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    case 0xC20F3E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    case 0xC20F3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC20F3F.
    case 0xC20F41: cpu.execute_instruction<0xFF>(0x4BAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    case 0xC20F42: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:9 LDA DISABLE_HPPP_ROLLING
    case 0xC20F43: cpu.execute_instruction<0xAD>(0x00994B, 3); return true;
    // src/misc/hp_pp_roller.asm:9 LDA DISABLE_HPPP_ROLLING
    // Overlapping static entry reached from 0xC20F41.
    case 0xC20F45: cpu.execute_instruction<0x99>(0x00FF29, 3); return true;
    // src/misc/hp_pp_roller.asm:10 AND #$00FF
    case 0xC20F46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC20F46.
    case 0xC20F48: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/hp_pp_roller.asm:11 BNEL @UNKNOWN30
    case 0xC20F49: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:11 BNEL @UNKNOWN30
    case 0xC20F4B: cpu.execute_instruction<0x4C>(0x00124A, 3); return true;
    // src/misc/hp_pp_roller.asm:12 LDA FRAME_COUNTER
    case 0xC20F4E: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:13 AND #$00FF
    case 0xC20F51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC20F51.
    case 0xC20F53: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/hp_pp_roller.asm:14 AND #$0003
    case 0xC20F54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/misc/hp_pp_roller.asm:14 AND #$0003
    // Overlapping static entry reached from 0xC20F54.
    case 0xC20F56: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/hp_pp_roller.asm:16 CLC
    case 0xC20F57: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:17 ADC #.LOWORD(GAME_STATE)
    case 0xC20F58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/hp_pp_roller.asm:17 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC20F58.
    case 0xC20F5A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:18 TAX
    case 0xC20F5B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:19 LDA a:game_state::party_members,X
    case 0xC20F5C: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/hp_pp_roller.asm:24 AND #$00FF
    case 0xC20F5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC20F5F.
    case 0xC20F61: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/hp_pp_roller.asm:25 BEQL @UNKNOWN30
    case 0xC20F62: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:25 BEQL @UNKNOWN30
    case 0xC20F64: cpu.execute_instruction<0x4C>(0x00124A, 3); return true;
    // src/misc/hp_pp_roller.asm:26 AND #$00FF
    case 0xC20F67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC20F67.
    case 0xC20F69: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/hp_pp_roller.asm:27 STA @LOCAL02
    case 0xC20F6A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/hp_pp_roller.asm:28 CLC
    case 0xC20F6C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:29 SBC #4
    case 0xC20F6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/misc/hp_pp_roller.asm:29 SBC #4
    // Overlapping static entry reached from 0xC20F6D.
    case 0xC20F6F: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC20F70: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC20F72: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC20F74: cpu.execute_instruction<0x4C>(0x00124A, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC20F77: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC20F79: cpu.execute_instruction<0x4C>(0x00124A, 3); return true;
    // src/misc/hp_pp_roller.asm:31 LDA @LOCAL02
    case 0xC20F7C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/hp_pp_roller.asm:32 DEC
    case 0xC20F7E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC20F7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/hp_pp_roller.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC20F7F.
    case 0xC20F81: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/hp_pp_roller.asm:34 JSL MULT168
    case 0xC20F82: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/hp_pp_roller.asm:35 CLC
    case 0xC20F86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC20F87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/misc/hp_pp_roller.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC20F87.
    case 0xC20F89: cpu.execute_instruction<0x9C>(0x001085, 3); return true;
    // src/misc/hp_pp_roller.asm:37 STA @LOCAL01
    case 0xC20F8A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:38 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC20F8C: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/misc/hp_pp_roller.asm:39 BNE @UNKNOWN4
    case 0xC20F8F: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/hp_pp_roller.asm:40 LDA @LOCAL01
    case 0xC20F91: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:41 CLC
    case 0xC20F93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:42 ADC #char_struct::current_hp_fraction
    case 0xC20F94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000042, 2); else cpu.execute_instruction<0x69>(0x000042, 3); return true;
    // src/misc/hp_pp_roller.asm:42 ADC #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC20F94.
    case 0xC20F96: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:43 TAX
    case 0xC20F97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:44 STX @LOCAL00
    case 0xC20F98: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:45 LDA __BSS_START__,X
    case 0xC20F9A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:46 AND #$0001
    case 0xC20F9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:46 AND #$0001
    // Overlapping static entry reached from 0xC20F9D.
    case 0xC20F9F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/hp_pp_roller.asm:47 BEQL @UNKNOWN14
    case 0xC20FA0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:47 BEQL @UNKNOWN14
    case 0xC20FA2: cpu.execute_instruction<0x4C>(0x0010B6, 3); return true;
    // src/misc/hp_pp_roller.asm:49 LDA @LOCAL01
    case 0xC20FA5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:50 TAX
    case 0xC20FA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:51 LDY a:char_struct::current_hp,X
    case 0xC20FA8: cpu.execute_instruction<0xBC>(0x000044, 3); return true;
    // src/misc/hp_pp_roller.asm:51 LDY a:char_struct::current_hp,X
    // Overlapping static entry reached from 0xC2E645.
    case 0xC20FA9: cpu.execute_instruction<0x44>(0x00AA00, 3); return true;
    // src/misc/hp_pp_roller.asm:52 TAX
    case 0xC20FAB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:53 LDA a:char_struct::current_hp_target,X
    case 0xC20FAC: cpu.execute_instruction<0xBD>(0x000046, 3); return true;
    // src/misc/hp_pp_roller.asm:54 STA @VIRTUAL02
    case 0xC20FAF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:55 TYA
    case 0xC20FB1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:56 CMP @VIRTUAL02
    case 0xC20FB2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:57 BCS @UNKNOWN9
    case 0xC20FB4: cpu.execute_instruction<0xB0>(0x000075, 2); return true;
    // src/misc/hp_pp_roller.asm:58 LDA @LOCAL01
    case 0xC20FB6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:59 CLC
    case 0xC20FB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:60 ADC #char_struct::current_hp_fraction
    case 0xC20FB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000042, 2); else cpu.execute_instruction<0x69>(0x000042, 3); return true;
    // src/misc/hp_pp_roller.asm:60 ADC #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC20FB9.
    case 0xC20FBB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:61 TAX
    case 0xC20FBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:62 TXY
    case 0xC20FBD: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:63 STY @LOCAL00
    case 0xC20FBE: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:64 LDA FASTEST_HPPP_METER_SPEED
    case 0xC20FC0: cpu.execute_instruction<0xAD>(0x00994A, 3); return true;
    // src/misc/hp_pp_roller.asm:65 AND #$00FF
    case 0xC20FC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC20FC3.
    case 0xC20FC5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:66 BNE @UNKNOWN5
    case 0xC20FC6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/hp_pp_roller.asm:67 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC20FC8: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/misc/hp_pp_roller.asm:68 BEQ @UNKNOWN6
    case 0xC20FCB: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC20FCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC20FCD.
    case 0xC20FCF: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC20FD0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC20FD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC20FD2.
    case 0xC20FD4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC20FD5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:71 BRA @UNKNOWN7
    case 0xC20FD7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/hp_pp_roller.asm:73 JSR UNKNOWN_C20F58
    case 0xC20FD9: cpu.execute_instruction<0x20>(0x000DE9, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC20FDC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC20FDE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC20FE0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC20FE2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/hp_pp_roller.asm:76 LDY @LOCAL00
    case 0xC20FE4: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/hp_pp_roller.asm:77 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC20FE6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:77 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC20FE9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:77 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC20FEB: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:77 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC20FEE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:78 CLC
    case 0xC20FF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC20FF1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC20FF3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC20FF5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC20FF7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC20FF9: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC20FFB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:80 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC20FFD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/hp_pp_roller.asm:80 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC20FFF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:80 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21002: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:80 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21004: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:81 LDA @LOCAL01
    case 0xC21007: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:82 CLC
    case 0xC21009: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:83 ADC #char_struct::current_hp
    case 0xC2100A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000044, 2); else cpu.execute_instruction<0x69>(0x000044, 3); return true;
    // src/misc/hp_pp_roller.asm:83 ADC #char_struct::current_hp
    // Overlapping static entry reached from 0xC2100A.
    case 0xC2100C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:84 TAX
    case 0xC2100D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:85 LDA __BSS_START__,X
    case 0xC2100E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:86 CMP @VIRTUAL02
    case 0xC21011: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/hp_pp_roller.asm:87 BCCL @UNKNOWN15
    case 0xC21013: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/hp_pp_roller.asm:87 BCCL @UNKNOWN15
    case 0xC21015: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:87 BCCL @UNKNOWN15
    case 0xC21017: cpu.execute_instruction<0x4C>(0x0010CB, 3); return true;
    // src/misc/hp_pp_roller.asm:88 LDA @VIRTUAL02
    case 0xC2101A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:89 STA __BSS_START__,X
    case 0xC2101C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:90 LDA @LOCAL01
    case 0xC2101F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:91 TAX
    case 0xC21021: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:92 LDA #1
    case 0xC21022: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:92 LDA #1
    // Overlapping static entry reached from 0xC21022.
    case 0xC21024: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:93 STA a:char_struct::current_hp_fraction,X
    case 0xC21025: cpu.execute_instruction<0x9D>(0x000042, 3); return true;
    // src/misc/hp_pp_roller.asm:94 JMP @UNKNOWN15
    case 0xC21028: cpu.execute_instruction<0x4C>(0x0010CB, 3); return true;
    // src/misc/hp_pp_roller.asm:96 TYA
    case 0xC2102B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:97 CMP @VIRTUAL02
    case 0xC2102C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:98 BNE @UNKNOWN10
    case 0xC2102E: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/misc/hp_pp_roller.asm:99 LDA @LOCAL01
    case 0xC21030: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:100 CLC
    case 0xC21032: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:101 ADC #char_struct::current_hp_fraction
    case 0xC21033: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000042, 2); else cpu.execute_instruction<0x69>(0x000042, 3); return true;
    // src/misc/hp_pp_roller.asm:101 ADC #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC21033.
    case 0xC21035: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:102 TAX
    case 0xC21036: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:103 LDA __BSS_START__,X
    case 0xC21037: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:104 CMP #1
    case 0xC2103A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:104 CMP #1
    // Overlapping static entry reached from 0xC2103A.
    case 0xC2103C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:105 BNE @UNKNOWN10
    case 0xC2103D: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/misc/hp_pp_roller.asm:105 BNE @UNKNOWN10
    // Overlapping static entry reached from 0xC21092.
    case 0xC2103E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A9, 2); else cpu.execute_instruction<0x09>(0x0000A9, 3); return true;
    // src/misc/hp_pp_roller.asm:106 LDA #0
    case 0xC2103F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:106 LDA #0
    // Overlapping static entry reached from 0xC2103E.
    case 0xC21040: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/hp_pp_roller.asm:106 LDA #0
    // Overlapping static entry reached from 0xC2103F.
    case 0xC21041: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:107 STA __BSS_START__,X
    case 0xC21042: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:108 JMP @UNKNOWN15
    case 0xC21045: cpu.execute_instruction<0x4C>(0x0010CB, 3); return true;
    // src/misc/hp_pp_roller.asm:110 LDA @LOCAL01
    case 0xC21048: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:111 CLC
    case 0xC2104A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:112 ADC #char_struct::current_hp_fraction
    case 0xC2104B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000042, 2); else cpu.execute_instruction<0x69>(0x000042, 3); return true;
    // src/misc/hp_pp_roller.asm:112 ADC #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC2104B.
    case 0xC2104D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:113 TAX
    case 0xC2104E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:114 TXY
    case 0xC2104F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:115 STY @LOCAL00
    case 0xC21050: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:116 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC21052: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/misc/hp_pp_roller.asm:117 BEQ @UNKNOWN11
    case 0xC21055: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21057: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21057.
    case 0xC21059: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC2105A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC2105C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2105C.
    case 0xC2105E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC2105F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:119 BRA @UNKNOWN12
    case 0xC21061: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/hp_pp_roller.asm:121 JSR UNKNOWN_C20F58
    case 0xC21063: cpu.execute_instruction<0x20>(0x000DE9, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC21066: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC21068: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2106A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2106C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/hp_pp_roller.asm:124 LDY @LOCAL00
    case 0xC2106E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/hp_pp_roller.asm:125 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21070: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:125 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21073: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:125 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21075: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:125 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21078: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:126 SEC
    case 0xC2107A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2107B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2107D: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2107F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21081: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21083: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21085: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21087: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/hp_pp_roller.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21089: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2108C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2108E: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:129 LDA @LOCAL01
    case 0xC21091: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:129 LDA @LOCAL01
    // Overlapping static entry reached from 0xC20500.
    case 0xC21092: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:130 TAX
    case 0xC21093: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:131 LDY a:char_struct::current_hp,X
    case 0xC21094: cpu.execute_instruction<0xBC>(0x000044, 3); return true;
    // src/misc/hp_pp_roller.asm:132 TYA
    case 0xC21097: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:133 CMP @VIRTUAL02
    case 0xC21098: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:134 BCC @UNKNOWN13
    case 0xC2109A: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/misc/hp_pp_roller.asm:135 CPY #1000
    case 0xC2109C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E8, 2); else cpu.execute_instruction<0xC0>(0x0003E8, 3); return true;
    // src/misc/hp_pp_roller.asm:135 CPY #1000
    // Overlapping static entry reached from 0xC2109C.
    case 0xC2109E: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/hp_pp_roller.asm:136 BLTEQ @UNKNOWN15
    case 0xC2109F: cpu.execute_instruction<0x90>(0x00002A, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/hp_pp_roller.asm:136 BLTEQ @UNKNOWN15
    // Overlapping static entry reached from 0xC2109E.
    case 0xC210A0: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/misc/hp_pp_roller.asm:136 BLTEQ @UNKNOWN15
    case 0xC210A1: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/misc/hp_pp_roller.asm:138 LDA @LOCAL01
    case 0xC210A3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:139 TAX
    case 0xC210A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:140 LDA @VIRTUAL02
    case 0xC210A6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:141 STA a:char_struct::current_hp,X
    case 0xC210A8: cpu.execute_instruction<0x9D>(0x000044, 3); return true;
    // src/misc/hp_pp_roller.asm:142 LDA @LOCAL01
    case 0xC210AB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:143 TAX
    case 0xC210AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:144 LDA #1
    case 0xC210AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:144 LDA #1
    // Overlapping static entry reached from 0xC210AE.
    case 0xC210B0: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:145 STA a:char_struct::current_hp_fraction,X
    case 0xC210B1: cpu.execute_instruction<0x9D>(0x000042, 3); return true;
    // src/misc/hp_pp_roller.asm:146 BRA @UNKNOWN15
    case 0xC210B4: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/misc/hp_pp_roller.asm:148 LDA @LOCAL01
    case 0xC210B6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:149 PHA
    case 0xC210B8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:150 TAX
    case 0xC210B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:151 LDA a:char_struct::current_hp,X
    case 0xC210BA: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/misc/hp_pp_roller.asm:152 PLX
    case 0xC210BD: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:153 CMP a:char_struct::current_hp_target,X
    case 0xC210BE: cpu.execute_instruction<0xDD>(0x000046, 3); return true;
    // src/misc/hp_pp_roller.asm:154 BEQ @UNKNOWN15
    case 0xC210C1: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:155 LDA #1
    case 0xC210C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:155 LDA #1
    // Overlapping static entry reached from 0xC210C3.
    case 0xC210C5: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/hp_pp_roller.asm:156 LDX @LOCAL00
    case 0xC210C6: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:157 STA __BSS_START__,X
    case 0xC210C8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:159 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC210CB: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/misc/hp_pp_roller.asm:160 BNE @UNKNOWN16
    case 0xC210CE: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/hp_pp_roller.asm:161 LDA @LOCAL01
    case 0xC210D0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:162 CLC
    case 0xC210D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:163 ADC #char_struct::current_pp_fraction
    case 0xC210D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000048, 2); else cpu.execute_instruction<0x69>(0x000048, 3); return true;
    // src/misc/hp_pp_roller.asm:163 ADC #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC210D3.
    case 0xC210D5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:164 TAX
    case 0xC210D6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:165 STX @LOCAL00
    case 0xC210D7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:166 LDA __BSS_START__,X
    case 0xC210D9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:167 AND #$0001
    case 0xC210DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:167 AND #$0001
    // Overlapping static entry reached from 0xC210DC.
    case 0xC210DE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/hp_pp_roller.asm:168 BEQL @UNKNOWN25
    case 0xC210DF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/hp_pp_roller.asm:168 BEQL @UNKNOWN25
    // Overlapping static entry reached from 0xC2EADC.
    case 0xC210E0: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:168 BEQL @UNKNOWN25
    case 0xC210E1: cpu.execute_instruction<0x4C>(0x0011F3, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:168 BEQL @UNKNOWN25
    // Overlapping static entry reached from 0xC210E0.
    case 0xC210E2: cpu.execute_instruction<0xF3>(0x000011, 2); return true;
    // src/misc/hp_pp_roller.asm:170 LDA @LOCAL01
    case 0xC210E4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:171 TAX
    case 0xC210E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:172 LDY a:char_struct::current_pp,X
    case 0xC210E7: cpu.execute_instruction<0xBC>(0x00004A, 3); return true;
    // src/misc/hp_pp_roller.asm:173 TAX
    case 0xC210EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:174 LDA a:char_struct::current_pp_target,X
    case 0xC210EB: cpu.execute_instruction<0xBD>(0x00004C, 3); return true;
    // src/misc/hp_pp_roller.asm:175 STA @VIRTUAL02
    case 0xC210EE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:176 TYA
    case 0xC210F0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:177 CMP @VIRTUAL02
    case 0xC210F1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:178 BCS @UNKNOWN20
    case 0xC210F3: cpu.execute_instruction<0xB0>(0x000070, 2); return true;
    // src/misc/hp_pp_roller.asm:179 LDA @LOCAL01
    case 0xC210F5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:180 CLC
    case 0xC210F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:181 ADC #char_struct::current_pp_fraction
    case 0xC210F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000048, 2); else cpu.execute_instruction<0x69>(0x000048, 3); return true;
    // src/misc/hp_pp_roller.asm:181 ADC #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC210F8.
    case 0xC210FA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:182 TAX
    case 0xC210FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:183 TXY
    case 0xC210FC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:184 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC210FD: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/misc/hp_pp_roller.asm:185 BEQ @UNKNOWN17
    case 0xC21100: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21102: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21102.
    case 0xC21104: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21105: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21107: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21107.
    case 0xC21109: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC2110A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:187 BRA @UNKNOWN18
    case 0xC2110C: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC2110E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2110E.
    case 0xC21110: cpu.execute_instruction<0x90>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC21111: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21110.
    case 0xC21112: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC21113: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21112.
    case 0xC21114: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21113.
    case 0xC21115: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC21116: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:191 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC21118: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:191 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2111A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:191 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2111C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:191 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2111E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21120: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21123: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC2119D.
    case 0xC21124: cpu.execute_instruction<0x06>(0x0000B9, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21125: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC21124.
    case 0xC21126: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21128: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:193 CLC
    case 0xC2112A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2112B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2112D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2112F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21131: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21133: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21135: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:195 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21137: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/hp_pp_roller.asm:195 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21139: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:195 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2113C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:195 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2113E: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:196 LDA @LOCAL01
    case 0xC21141: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:197 CLC
    case 0xC21143: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:198 ADC #char_struct::current_pp
    case 0xC21144: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004A, 2); else cpu.execute_instruction<0x69>(0x00004A, 3); return true;
    // src/misc/hp_pp_roller.asm:198 ADC #char_struct::current_pp
    // Overlapping static entry reached from 0xC21144.
    case 0xC21146: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:199 TAX
    case 0xC21147: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:200 LDA __BSS_START__,X
    case 0xC21148: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:201 CMP @VIRTUAL02
    case 0xC2114B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/hp_pp_roller.asm:202 BCCL @UNKNOWN26
    case 0xC2114D: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/hp_pp_roller.asm:202 BCCL @UNKNOWN26
    case 0xC2114F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:202 BCCL @UNKNOWN26
    case 0xC21151: cpu.execute_instruction<0x4C>(0x001208, 3); return true;
    // src/misc/hp_pp_roller.asm:203 LDA @VIRTUAL02
    case 0xC21154: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:204 STA __BSS_START__,X
    case 0xC21156: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:205 LDA @LOCAL01
    case 0xC21159: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:206 TAX
    case 0xC2115B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:207 LDA #1
    case 0xC2115C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:207 LDA #1
    // Overlapping static entry reached from 0xC2115C.
    case 0xC2115E: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:208 STA __BSS_START__ + char_struct::current_pp_fraction,X
    case 0xC2115F: cpu.execute_instruction<0x9D>(0x000048, 3); return true;
    // src/misc/hp_pp_roller.asm:209 JMP @UNKNOWN26
    case 0xC21162: cpu.execute_instruction<0x4C>(0x001208, 3); return true;
    // src/misc/hp_pp_roller.asm:211 TYA
    case 0xC21165: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:212 CMP @VIRTUAL02
    case 0xC21166: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:213 BNE @UNKNOWN21
    case 0xC21168: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/misc/hp_pp_roller.asm:214 LDA @LOCAL01
    case 0xC2116A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:215 CLC
    case 0xC2116C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:216 ADC #char_struct::current_pp_fraction
    case 0xC2116D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000048, 2); else cpu.execute_instruction<0x69>(0x000048, 3); return true;
    // src/misc/hp_pp_roller.asm:216 ADC #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC2116D.
    case 0xC2116F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:217 TAX
    case 0xC21170: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:218 LDA __BSS_START__,X
    case 0xC21171: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:219 CMP #1
    case 0xC21174: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:219 CMP #1
    // Overlapping static entry reached from 0xC21174.
    case 0xC21176: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:220 BNE @UNKNOWN21
    case 0xC21177: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/misc/hp_pp_roller.asm:221 LDA #0
    case 0xC21179: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:221 LDA #0
    // Overlapping static entry reached from 0xC21179.
    case 0xC2117B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:222 STA __BSS_START__,X
    case 0xC2117C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:223 JMP @UNKNOWN26
    case 0xC2117F: cpu.execute_instruction<0x4C>(0x001208, 3); return true;
    // src/misc/hp_pp_roller.asm:225 LDA @LOCAL01
    case 0xC21182: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:226 CLC
    case 0xC21184: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:227 ADC #char_struct::current_pp_fraction
    case 0xC21185: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000048, 2); else cpu.execute_instruction<0x69>(0x000048, 3); return true;
    // src/misc/hp_pp_roller.asm:227 ADC #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC21185.
    case 0xC21187: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:228 TAX
    case 0xC21188: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:229 TXY
    case 0xC21189: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:230 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC2118A: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/misc/hp_pp_roller.asm:231 BEQ @UNKNOWN22
    case 0xC2118D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC2118F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2118F.
    case 0xC21191: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21192: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21194: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21194.
    case 0xC21196: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21197: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:233 BRA @UNKNOWN23
    case 0xC21199: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC2119B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2119B.
    case 0xC2119D: cpu.execute_instruction<0x90>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC2119E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2119D.
    case 0xC2119F: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC211A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2119F.
    case 0xC211A1: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC211A0.
    case 0xC211A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC211A3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:237 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC211A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:237 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC211A7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:237 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC211A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:237 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC211AB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/hp_pp_roller.asm:238 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC211AD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:238 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC211B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:238 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC211B2: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:238 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC211B5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:239 SEC
    case 0xC211B7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211B8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211BA: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211C0: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211C2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:241 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC211C4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/hp_pp_roller.asm:241 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC211C6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:241 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC211C9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:241 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC211CB: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:242 LDA @LOCAL01
    case 0xC211CE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:243 TAX
    case 0xC211D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:244 LDY a:char_struct::current_pp,X
    case 0xC211D1: cpu.execute_instruction<0xBC>(0x00004A, 3); return true;
    // src/misc/hp_pp_roller.asm:245 TYA
    case 0xC211D4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:246 CMP @VIRTUAL02
    case 0xC211D5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:247 BCC @UNKNOWN24
    case 0xC211D7: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/misc/hp_pp_roller.asm:248 CPY #1000
    case 0xC211D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E8, 2); else cpu.execute_instruction<0xC0>(0x0003E8, 3); return true;
    // src/misc/hp_pp_roller.asm:248 CPY #1000
    // Overlapping static entry reached from 0xC211D9.
    case 0xC211DB: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/hp_pp_roller.asm:249 BLTEQ @UNKNOWN26
    case 0xC211DC: cpu.execute_instruction<0x90>(0x00002A, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/hp_pp_roller.asm:249 BLTEQ @UNKNOWN26
    // Overlapping static entry reached from 0xC211DB.
    case 0xC211DD: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/misc/hp_pp_roller.asm:249 BLTEQ @UNKNOWN26
    case 0xC211DE: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/misc/hp_pp_roller.asm:251 LDA @LOCAL01
    case 0xC211E0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:252 TAX
    case 0xC211E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:253 LDA @VIRTUAL02
    case 0xC211E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:254 STA a:char_struct::current_pp,X
    case 0xC211E5: cpu.execute_instruction<0x9D>(0x00004A, 3); return true;
    // src/misc/hp_pp_roller.asm:255 LDA @LOCAL01
    case 0xC211E8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:256 TAX
    case 0xC211EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:257 LDA #1
    case 0xC211EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:257 LDA #1
    // Overlapping static entry reached from 0xC211EB.
    case 0xC211ED: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:258 STA __BSS_START__ + char_struct::current_pp_fraction,X
    case 0xC211EE: cpu.execute_instruction<0x9D>(0x000048, 3); return true;
    // src/misc/hp_pp_roller.asm:259 BRA @UNKNOWN26
    case 0xC211F1: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/misc/hp_pp_roller.asm:261 LDA @LOCAL01
    case 0xC211F3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:262 PHA
    case 0xC211F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:263 TAX
    case 0xC211F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:264 LDA a:char_struct::current_pp,X
    case 0xC211F7: cpu.execute_instruction<0xBD>(0x00004A, 3); return true;
    // src/misc/hp_pp_roller.asm:265 PLX
    case 0xC211FA: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:266 CMP a:char_struct::current_pp_target,X
    case 0xC211FB: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // src/misc/hp_pp_roller.asm:267 BEQ @UNKNOWN26
    case 0xC211FE: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:268 LDA #1
    case 0xC21200: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:268 LDA #1
    // Overlapping static entry reached from 0xC21200.
    case 0xC21202: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/hp_pp_roller.asm:269 LDX @LOCAL00
    case 0xC21203: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:270 STA __BSS_START__,X
    case 0xC21205: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:272 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC21208: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/misc/hp_pp_roller.asm:273 BEQ @UNKNOWN30
    case 0xC2120B: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/misc/hp_pp_roller.asm:274 LDA @LOCAL01
    case 0xC2120D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:275 TAX
    case 0xC2120F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:276 LDY a:char_struct::current_hp,X
    case 0xC21210: cpu.execute_instruction<0xBC>(0x000044, 3); return true;
    // src/misc/hp_pp_roller.asm:277 CPY #999
    case 0xC21213: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E7, 2); else cpu.execute_instruction<0xC0>(0x0003E7, 3); return true;
    // src/misc/hp_pp_roller.asm:277 CPY #999
    // Overlapping static entry reached from 0xC21213.
    case 0xC21215: cpu.execute_instruction<0x03>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:278 BNE @UNKNOWN27
    case 0xC21216: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/misc/hp_pp_roller.asm:278 BNE @UNKNOWN27
    // Overlapping static entry reached from 0xC21215.
    case 0xC21217: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000AA, 2); else cpu.execute_instruction<0x09>(0x00A9AA, 3); return true;
    // src/misc/hp_pp_roller.asm:279 TAX
    case 0xC21218: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:280 LDA #1
    case 0xC21219: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:280 LDA #1
    // Overlapping static entry reached from 0xC21217.
    case 0xC2121A: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/misc/hp_pp_roller.asm:280 LDA #1
    // Overlapping static entry reached from 0xC21219.
    case 0xC2121B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:281 STA a:char_struct::current_hp_target,X
    case 0xC2121C: cpu.execute_instruction<0x9D>(0x000046, 3); return true;
    // src/misc/hp_pp_roller.asm:282 BRA @UNKNOWN28
    case 0xC2121F: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/misc/hp_pp_roller.asm:284 CPY #1
    case 0xC21221: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:284 CPY #1
    // Overlapping static entry reached from 0xC21221.
    case 0xC21223: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:285 BNE @UNKNOWN28
    case 0xC21224: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/misc/hp_pp_roller.asm:286 TAX
    case 0xC21226: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:287 LDA #999
    case 0xC21227: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x0003E7, 3); return true;
    // src/misc/hp_pp_roller.asm:287 LDA #999
    // Overlapping static entry reached from 0xC21227.
    case 0xC21229: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:288 STA a:char_struct::current_hp_target,X
    case 0xC2122A: cpu.execute_instruction<0x9D>(0x000046, 3); return true;
    // src/misc/hp_pp_roller.asm:288 STA a:char_struct::current_hp_target,X
    // Overlapping static entry reached from 0xC21229.
    case 0xC2122B: cpu.execute_instruction<0x46>(0x000000, 2); return true;
    // src/misc/hp_pp_roller.asm:290 LDA @LOCAL01
    case 0xC2122D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:291 TAX
    case 0xC2122F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:292 LDY a:char_struct::current_pp,X
    case 0xC21230: cpu.execute_instruction<0xBC>(0x00004A, 3); return true;
    // src/misc/hp_pp_roller.asm:293 CPY #999
    case 0xC21233: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E7, 2); else cpu.execute_instruction<0xC0>(0x0003E7, 3); return true;
    // src/misc/hp_pp_roller.asm:293 CPY #999
    // Overlapping static entry reached from 0xC21233.
    case 0xC21235: cpu.execute_instruction<0x03>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:294 BNE @UNKNOWN29
    case 0xC21236: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/misc/hp_pp_roller.asm:294 BNE @UNKNOWN29
    // Overlapping static entry reached from 0xC21235.
    case 0xC21237: cpu.execute_instruction<0x06>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:295 TAX
    case 0xC21238: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:296 STZ a:char_struct::current_pp_target,X
    case 0xC21239: cpu.execute_instruction<0x9E>(0x00004C, 3); return true;
    // src/misc/hp_pp_roller.asm:297 BRA @UNKNOWN30
    case 0xC2123C: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/misc/hp_pp_roller.asm:299 CPY #0
    case 0xC2123E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:299 CPY #0
    // Overlapping static entry reached from 0xC2123E.
    case 0xC21240: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:300 BNE @UNKNOWN30
    case 0xC21241: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/misc/hp_pp_roller.asm:301 TAX
    case 0xC21243: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:302 LDA #999
    case 0xC21244: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x0003E7, 3); return true;
    // src/misc/hp_pp_roller.asm:302 LDA #999
    // Overlapping static entry reached from 0xC21244.
    case 0xC21246: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:303 STA a:char_struct::current_pp_target,X
    case 0xC21247: cpu.execute_instruction<0x9D>(0x00004C, 3); return true;
    // src/misc/hp_pp_roller.asm:303 STA a:char_struct::current_pp_target,X
    // Overlapping static entry reached from 0xC21246.
    case 0xC21248: cpu.execute_instruction<0x4C>(0x002B00, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/hp_pp_roller.asm:305 END_C_FUNCTION
    case 0xC2124A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/hp_pp_roller.asm:305 END_C_FUNCTION
    case 0xC2124B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/increase_wallet_balance.asm (source_named).
bool execute_miscellaneous_increase_wallet_balance_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/increase_wallet_balance.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC220B3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    case 0xC220B5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    case 0xC220B6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    case 0xC220B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC220B7.
    case 0xC220B9: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    case 0xC220BA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC220BB: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC220BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC220BF: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC220C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:9 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL0A
    case 0xC220C3: cpu.execute_instruction<0xAD>(0x009AE2, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:9 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL0A
    case 0xC220C6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:9 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL0A
    case 0xC220C8: cpu.execute_instruction<0xAD>(0x009AE4, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:9 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL0A
    case 0xC220CB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/increase_wallet_balance.asm:10 CLC
    case 0xC220CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC220CE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC220D0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC220D2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC220D4: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC220D6: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC220D8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    case 0xC220DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x00869F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    // Overlapping static entry reached from 0xC220DA.
    case 0xC220DC: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    case 0xC220DD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    // Overlapping static entry reached from 0xC220DC.
    case 0xC220DE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    case 0xC220DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    // Overlapping static entry reached from 0xC220DE.
    case 0xC220E0: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    // Overlapping static entry reached from 0xC220DF.
    case 0xC220E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    case 0xC220E2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/increase_wallet_balance.asm:13 CLC
    case 0xC220E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:754 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:14 CMP32ALT @VIRTUAL0A, @VIRTUAL06
    case 0xC220E5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:755 SBC dest
    // Macro caller: src/misc/increase_wallet_balance.asm:14 CMP32ALT @VIRTUAL0A, @VIRTUAL06
    case 0xC220E7: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:756 LDA src + 2
    // Macro caller: src/misc/increase_wallet_balance.asm:14 CMP32ALT @VIRTUAL0A, @VIRTUAL06
    case 0xC220E9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:757 SBC dest + 2
    // Macro caller: src/misc/increase_wallet_balance.asm:14 CMP32ALT @VIRTUAL0A, @VIRTUAL06
    case 0xC220EB: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/increase_wallet_balance.asm:15 BRANCHGTS @UNKNOWN2
    case 0xC220ED: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/increase_wallet_balance.asm:15 BRANCHGTS @UNKNOWN2
    case 0xC220EF: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/increase_wallet_balance.asm:15 BRANCHGTS @UNKNOWN2
    case 0xC220F1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/increase_wallet_balance.asm:15 BRANCHGTS @UNKNOWN2
    case 0xC220F3: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC220F5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC220F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC220F9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC220FB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:18 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC220FD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:18 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC220FF: cpu.execute_instruction<0x8D>(0x009AE2, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:18 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC22102: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:18 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC22104: cpu.execute_instruction<0x8D>(0x009AE4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:19 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22107: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:19 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22109: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:19 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2210B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:19 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2210D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/misc/increase_wallet_balance.asm:20 PLD
    case 0xC2210F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/increase_wallet_balance.asm:21 RTL
    case 0xC22110: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/inflict_status_nonbattle.asm (source_named).
bool execute_miscellaneous_inflict_status_nonbattle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/inflict_status_nonbattle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC436FC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC436FE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC436FF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC43700: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC43701: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC43701.
    case 0xC43703: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC43704: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC43705: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:13 STY @VIRTUAL02
    case 0xC43706: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:13 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC43703.
    case 0xC43707: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:14 PHA
    case 0xC43708: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:15 LDA @VIRTUAL02
    case 0xC43709: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:16 STA @LOCAL02
    case 0xC4370B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:17 PLA
    case 0xC4370D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:18 TXY
    case 0xC4370E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:19 STY @LOCAL01
    case 0xC4370F: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:20 TAX
    case 0xC43711: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:21 STX @LOCAL00
    case 0xC43712: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:22 CPY #8
    case 0xC43714: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:22 CPY #8
    // Overlapping static entry reached from 0xC43714.
    case 0xC43716: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:23 BNE @UNKNOWN0
    case 0xC43717: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:24 LDA @VIRTUAL02
    case 0xC43719: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC4371B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:26 DEC
    case 0xC4371D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:27 STA GAME_STATE + game_state::party_status
    case 0xC4371E: cpu.execute_instruction<0x8D>(0x009AF1, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC43721: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:29 TXA
    case 0xC43723: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:30 BRA @RETURN
    case 0xC43724: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:32 TXA
    case 0xC43726: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:33 JSL UNKNOWN_C2239D
    case 0xC43727: cpu.execute_instruction<0x22>(0xC2223B, 4); return true;
    // src/misc/inflict_status_nonbattle.asm:34 CMP #0
    case 0xC4372B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:34 CMP #0
    // Overlapping static entry reached from 0xC4372B.
    case 0xC4372D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:35 BEQ @FAILURE
    case 0xC4372E: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:36 LDY @LOCAL01
    case 0xC43730: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:37 TYA
    case 0xC43732: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:38 DEC
    case 0xC43733: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:39 STA @VIRTUAL02
    case 0xC43734: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:40 LDX @LOCAL00
    case 0xC43736: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:41 TXA
    case 0xC43738: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:42 DEC
    case 0xC43739: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:43 LDY #.SIZEOF(char_struct)
    case 0xC4373A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:43 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4373A.
    case 0xC4373C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:44 JSL MULT168
    case 0xC4373D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/inflict_status_nonbattle.asm:45 CLC
    case 0xC43741: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:46 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC43742: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:46 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC43742.
    case 0xC43744: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:47 CLC
    case 0xC43745: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:48 ADC @VIRTUAL02
    case 0xC43746: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:48 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC43744.
    case 0xC43747: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:49 TAX
    case 0xC43748: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:50 LDA @LOCAL02
    case 0xC43749: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:51 STA @VIRTUAL02
    case 0xC4374B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC4374D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:53 DEC
    case 0xC4374F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:54 STA __BSS_START__,X
    case 0xC43750: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:55 JSL UNKNOWN_C3EE4D
    case 0xC43753: cpu.execute_instruction<0x22>(0xC3EA14, 4); return true;
    // src/misc/inflict_status_nonbattle.asm:56 LDX @LOCAL00
    case 0xC43757: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:57 TXA
    case 0xC43759: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:58 BRA @RETURN
    case 0xC4375A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:61 LDA #0
    case 0xC4375C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:61 LDA #0
    // Overlapping static entry reached from 0xC4375C.
    case 0xC4375E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/inflict_status_nonbattle.asm:63 END_C_FUNCTION
    case 0xC4375F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/inflict_status_nonbattle.asm:63 END_C_FUNCTION
    case 0xC43760: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/inventory_get_item_name.asm (source_named).
bool execute_miscellaneous_inventory_get_item_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/inventory_get_item_name.asm:3 BEGIN_C_FUNCTION
    case 0xC19930: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC19932: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC19933: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC19934: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC19935: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC19935.
    case 0xC19937: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC19938: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC19939: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:15 TXY
    case 0xC1993A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:16 STY @LOCAL04
    case 0xC1993B: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/misc/inventory_get_item_name.asm:17 TAX
    case 0xC1993D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:18 DEC
    case 0xC1993E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:19 STA @VIRTUAL04
    case 0xC1993F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/inventory_get_item_name.asm:21 STA @LOCAL03
    case 0xC19941: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/misc/inventory_get_item_name.asm:23 TYA
    case 0xC19943: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:24 JSR CREATE_WINDOW
    case 0xC19944: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/misc/inventory_get_item_name.asm:25 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC19947: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/inventory_get_item_name.asm:26 AND #$00FF
    case 0xC1994A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/inventory_get_item_name.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1994A.
    case 0xC1994C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/inventory_get_item_name.asm:27 CMP #1
    case 0xC1994D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/inventory_get_item_name.asm:27 CMP #1
    // Overlapping static entry reached from 0xC1994D.
    case 0xC1994F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/inventory_get_item_name.asm:28 BEQ @UNKNOWN0
    case 0xC19950: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/misc/inventory_get_item_name.asm:29 LDY @LOCAL04
    case 0xC19952: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/misc/inventory_get_item_name.asm:30 STY PAGINATION_WINDOW
    case 0xC19954: cpu.execute_instruction<0x8C>(0x0061F2, 3); return true;
    // src/misc/inventory_get_item_name.asm:32 LDA @VIRTUAL04
    case 0xC19957: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/inventory_get_item_name.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC19959: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/inventory_get_item_name.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19959.
    case 0xC1995B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/inventory_get_item_name.asm:34 JSL MULT168
    case 0xC1995C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/inventory_get_item_name.asm:35 CLC
    case 0xC19960: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC19961: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/misc/inventory_get_item_name.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC19961.
    case 0xC19963: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19964: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19966: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19967: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19969: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1996A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1996C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/misc/inventory_get_item_name.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC1996E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/inventory_get_item_name.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19970: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19972: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/inventory_get_item_name.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19974: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/inventory_get_item_name.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19976: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/inventory_get_item_name.asm:40 LDX #.SIZEOF(char_struct::name)
    case 0xC19978: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/misc/inventory_get_item_name.asm:40 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC19978.
    case 0xC1997A: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/misc/inventory_get_item_name.asm:41 LDY @LOCAL04
    case 0xC1997B: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/misc/inventory_get_item_name.asm:42 TYA
    case 0xC1997D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:43 JSL SET_WINDOW_TITLE
    case 0xC1997E: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/misc/inventory_get_item_name.asm:44 LDA #0
    case 0xC19982: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/inventory_get_item_name.asm:44 LDA #0
    // Overlapping static entry reached from 0xC19982.
    case 0xC19984: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/inventory_get_item_name.asm:45 STA @VIRTUAL02
    case 0xC19985: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/inventory_get_item_name.asm:46 JMP @UNKNOWN5
    case 0xC19987: cpu.execute_instruction<0x4C>(0x009A38, 3); return true;
    // src/misc/inventory_get_item_name.asm:48 LDA @VIRTUAL04
    case 0xC1998A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/inventory_get_item_name.asm:49 LDY #.SIZEOF(char_struct)
    case 0xC1998C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/inventory_get_item_name.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1998C.
    case 0xC1998E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/inventory_get_item_name.asm:50 JSL MULT168
    case 0xC1998F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/inventory_get_item_name.asm:51 CLC
    case 0xC19993: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC19994: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/inventory_get_item_name.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC19994.
    case 0xC19996: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/inventory_get_item_name.asm:53 CLC
    case 0xC19997: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:54 ADC @VIRTUAL02
    case 0xC19998: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/inventory_get_item_name.asm:54 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC19996.
    case 0xC19999: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/inventory_get_item_name.asm:55 TAX
    case 0xC1999A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:56 LDA __BSS_START__,X
    case 0xC1999B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/inventory_get_item_name.asm:57 AND #$00FF
    case 0xC1999E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/inventory_get_item_name.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC1999E.
    case 0xC199A0: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/inventory_get_item_name.asm:58 TAY
    case 0xC199A1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:59 STY @LOCAL02
    case 0xC199A2: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:75 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC199A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:75 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC199A4.
    case 0xC199A6: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/inventory_get_item_name.asm:75 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC199A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/inventory_get_item_name.asm:75 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC199A6.
    case 0xC199A8: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:75 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC199A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:75 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC199A8.
    case 0xC199AA: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:75 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC199A9.
    case 0xC199AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/inventory_get_item_name.asm:75 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC199AC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/inventory_get_item_name.asm:77 TYA
    case 0xC199AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/inventory_get_item_name.asm:78 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC199AF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/inventory_get_item_name.asm:78 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC199B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/inventory_get_item_name.asm:78 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC199B2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/inventory_get_item_name.asm:78 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC199B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/inventory_get_item_name.asm:78 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC199B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/inventory_get_item_name.asm:78 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC199B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:79 CLC
    case 0xC199B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:80 ADC @VIRTUAL06
    case 0xC199B8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/inventory_get_item_name.asm:81 STA @VIRTUAL06
    case 0xC199BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/inventory_get_item_name.asm:82 STA @LOCAL00
    case 0xC199BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/inventory_get_item_name.asm:83 LDA @VIRTUAL06+2
    case 0xC199BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/misc/inventory_get_item_name.asm:84 STA @LOCAL00+2
    case 0xC199C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/inventory_get_item_name.asm:85 LDX #.SIZEOF(item::name)
    case 0xC199C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/misc/inventory_get_item_name.asm:85 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC199C2.
    case 0xC199C4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/misc/inventory_get_item_name.asm:87 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC199C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/misc/inventory_get_item_name.asm:87 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC199C5.
    case 0xC199C7: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/misc/inventory_get_item_name.asm:88 JSL MEMCPY16
    case 0xC199C8: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/misc/inventory_get_item_name.asm:88 JSL MEMCPY16
    // Overlapping static entry reached from 0xC199C7.
    case 0xC199CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/misc/inventory_get_item_name.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC199CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/inventory_get_item_name.asm:89 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC199CB.
    case 0xC199CD: cpu.execute_instruction<0x20>(0x00549C, 3); return true;
    // src/misc/inventory_get_item_name.asm:90 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    case 0xC199CE: cpu.execute_instruction<0x9C>(0x009F54, 3); return true;
    // src/misc/inventory_get_item_name.asm:90 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC199CD.
    case 0xC199D0: cpu.execute_instruction<0x9F>(0xE802A6, 4); return true;
    // src/misc/inventory_get_item_name.asm:91 LDX @VIRTUAL02
    case 0xC199D1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/inventory_get_item_name.asm:92 INX
    case 0xC199D3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC199D4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/inventory_get_item_name.asm:94 LDA @LOCAL03
    case 0xC199D6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/misc/inventory_get_item_name.asm:95 STA @VIRTUAL04
    case 0xC199D8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/inventory_get_item_name.asm:96 INC
    case 0xC199DA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:97 JSL CHECK_ITEM_EQUIPPED
    case 0xC199DB: cpu.execute_instruction<0x22>(0xC3E560, 4); return true;
    // src/misc/inventory_get_item_name.asm:98 CMP #0
    case 0xC199DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/inventory_get_item_name.asm:98 CMP #0
    // Overlapping static entry reached from 0xC199DF.
    case 0xC199E1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/inventory_get_item_name.asm:99 BEQ @UNKNOWN2
    case 0xC199E2: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/misc/inventory_get_item_name.asm:100 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/misc/inventory_get_item_name.asm:100 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC199E4.
    case 0xC199E6: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:100 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/misc/inventory_get_item_name.asm:100 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199E9: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/misc/inventory_get_item_name.asm:100 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/misc/inventory_get_item_name.asm:100 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199EC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:100 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199ED: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/misc/inventory_get_item_name.asm:100 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199EF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/misc/inventory_get_item_name.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC199F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/inventory_get_item_name.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC199F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC199F5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/inventory_get_item_name.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC199F7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/inventory_get_item_name.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC199F9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/inventory_get_item_name.asm:103 JSL STRLEN
    case 0xC199FB: cpu.execute_instruction<0x22>(0xC08F13, 4); return true;
    // src/misc/inventory_get_item_name.asm:104 TAX
    case 0xC199FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC19A00: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/inventory_get_item_name.asm:106 LDA #CHAR::EQUIPPED
    case 0xC19A02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x009D22, 3); return true;
    // src/misc/inventory_get_item_name.asm:107 STA TEMPORARY_TEXT_BUFFER, X
    case 0xC19A04: cpu.execute_instruction<0x9D>(0x009F4A, 3); return true;
    // src/misc/inventory_get_item_name.asm:107 STA TEMPORARY_TEXT_BUFFER, X
    // Overlapping static entry reached from 0xC19A02.
    case 0xC19A05: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:107 STA TEMPORARY_TEXT_BUFFER, X
    // Overlapping static entry reached from 0xC19A05.
    case 0xC19A06: cpu.execute_instruction<0x9F>(0x9F4B9E, 4); return true;
    // src/misc/inventory_get_item_name.asm:108 STZ TEMPORARY_TEXT_BUFFER + 1, X
    case 0xC19A07: cpu.execute_instruction<0x9E>(0x009F4B, 3); return true;
    // src/misc/inventory_get_item_name.asm:133 LDY @LOCAL02
    case 0xC19A0A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/misc/inventory_get_item_name.asm:134 BEQ @UNKNOWN4
    case 0xC19A0C: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/misc/inventory_get_item_name.asm:135 REP #PROC_FLAGS::ACCUM8
    case 0xC19A0E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC19A10.
    case 0xC19A12: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A13: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A15: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A16: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A18: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A19: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A1B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/misc/inventory_get_item_name.asm:137 REP #PROC_FLAGS::ACCUM8
    case 0xC19A1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/inventory_get_item_name.asm:138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19A1F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19A21: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/inventory_get_item_name.asm:138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19A23: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/inventory_get_item_name.asm:138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19A25: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19A27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19A27.
    case 0xC19A29: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19A2A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19A2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19A2C.
    case 0xC19A2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19A2F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/inventory_get_item_name.asm:140 JSR UNKNOWN_C113D1
    case 0xC19A31: cpu.execute_instruction<0x20>(0x001A00, 3); return true;
    // src/misc/inventory_get_item_name.asm:142 REP #PROC_FLAGS::ACCUM8
    case 0xC19A34: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/inventory_get_item_name.asm:143 INC @VIRTUAL02
    case 0xC19A36: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/inventory_get_item_name.asm:145 LDA #.SIZEOF(char_struct::items)
    case 0xC19A38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/inventory_get_item_name.asm:145 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC19A38.
    case 0xC19A3A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/inventory_get_item_name.asm:146 CLC
    case 0xC19A3B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:147 SBC @VIRTUAL02
    case 0xC19A3C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC19A3E: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC19A40: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC19A42: cpu.execute_instruction<0x4C>(0x00998A, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC19A45: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC19A47: cpu.execute_instruction<0x4C>(0x00998A, 3); return true;
    // src/misc/inventory_get_item_name.asm:152 LDY #0
    case 0xC19A4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/misc/inventory_get_item_name.asm:152 LDY #0
    // Overlapping static entry reached from 0xC19A4A.
    case 0xC19A4C: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/misc/inventory_get_item_name.asm:153 TYX
    case 0xC19A4D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:154 LDA #2
    case 0xC19A4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/inventory_get_item_name.asm:154 LDA #2
    // Overlapping static entry reached from 0xC19A4E.
    case 0xC19A50: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/inventory_get_item_name.asm:155 JSR UNKNOWN_C1180D
    case 0xC19A51: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/inventory_get_item_name.asm:156 END_C_FUNCTION
    case 0xC19A54: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/inventory_get_item_name.asm:156 END_C_FUNCTION
    case 0xC19A55: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/learn_special_psi.asm (source_named).
bool execute_miscellaneous_learn_special_psi_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/learn_special_psi.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC22694: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/learn_special_psi.asm:4 CMP #$0001
    case 0xC22696: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/learn_special_psi.asm:4 CMP #$0001
    // Overlapping static entry reached from 0xC22696.
    case 0xC22698: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/learn_special_psi.asm:5 BEQ @LEARN_TELEPORT_ALPHA
    case 0xC22699: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/learn_special_psi.asm:6 CMP #$0002
    case 0xC2269B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/learn_special_psi.asm:6 CMP #$0002
    // Overlapping static entry reached from 0xC2269B.
    case 0xC2269D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/learn_special_psi.asm:7 BEQ @LEARN_TELEPORT_BETA
    case 0xC2269E: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/misc/learn_special_psi.asm:8 CMP #$0003
    case 0xC226A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/learn_special_psi.asm:8 CMP #$0003
    // Overlapping static entry reached from 0xC226A0.
    case 0xC226A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/learn_special_psi.asm:9 BEQ @LEARN_STARSTORM_ALPHA
    case 0xC226A3: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/misc/learn_special_psi.asm:10 CMP #$0004
    case 0xC226A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/learn_special_psi.asm:10 CMP #$0004
    // Overlapping static entry reached from 0xC226A5.
    case 0xC226A7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/learn_special_psi.asm:11 BEQ @LEARN_STARSTORM_OMEGA
    case 0xC226A8: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/misc/learn_special_psi.asm:12 BRA @RETURN
    case 0xC226AA: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/misc/learn_special_psi.asm:14 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    case 0xC226AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EA, 2); else cpu.execute_instruction<0xA2>(0x009AEA, 3); return true;
    // src/misc/learn_special_psi.asm:14 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    // Overlapping static entry reached from 0xC226AC.
    case 0xC226AE: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/learn_special_psi.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC226AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:16 LDA __BSS_START__,X
    case 0xC226B1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:17 ORA #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    case 0xC226B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x009D01, 3); return true;
    // src/misc/learn_special_psi.asm:18 STA __BSS_START__,X
    case 0xC226B6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:18 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC226B4.
    case 0xC226B7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/learn_special_psi.asm:19 BRA @RETURN
    case 0xC226B9: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/misc/learn_special_psi.asm:21 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    case 0xC226BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EA, 2); else cpu.execute_instruction<0xA2>(0x009AEA, 3); return true;
    // src/misc/learn_special_psi.asm:21 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    // Overlapping static entry reached from 0xC226BB.
    case 0xC226BD: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/learn_special_psi.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC226BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:23 LDA __BSS_START__,X
    case 0xC226C0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:24 ORA #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    case 0xC226C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000002, 2); else cpu.execute_instruction<0x09>(0x009D02, 3); return true;
    // src/misc/learn_special_psi.asm:25 STA __BSS_START__,X
    case 0xC226C5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:25 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC226C3.
    case 0xC226C6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/learn_special_psi.asm:26 BRA @RETURN
    case 0xC226C8: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/misc/learn_special_psi.asm:28 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    case 0xC226CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EA, 2); else cpu.execute_instruction<0xA2>(0x009AEA, 3); return true;
    // src/misc/learn_special_psi.asm:28 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    // Overlapping static entry reached from 0xC226CA.
    case 0xC226CC: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/learn_special_psi.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC226CD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:30 LDA __BSS_START__,X
    case 0xC226CF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:31 ORA #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    case 0xC226D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x009D04, 3); return true;
    // src/misc/learn_special_psi.asm:32 STA __BSS_START__,X
    case 0xC226D4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:32 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC226D2.
    case 0xC226D5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/learn_special_psi.asm:33 BRA @RETURN
    case 0xC226D7: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/misc/learn_special_psi.asm:35 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    case 0xC226D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EA, 2); else cpu.execute_instruction<0xA2>(0x009AEA, 3); return true;
    // src/misc/learn_special_psi.asm:35 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    // Overlapping static entry reached from 0xC226D9.
    case 0xC226DB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/learn_special_psi.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC226DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:37 LDA __BSS_START__,X
    case 0xC226DE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:38 ORA #PARTY_PSI_FLAGS::TELEPORT_BETA
    case 0xC226E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000008, 2); else cpu.execute_instruction<0x09>(0x009D08, 3); return true;
    // src/misc/learn_special_psi.asm:39 STA __BSS_START__,X
    case 0xC226E3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:39 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC226E1.
    case 0xC226E4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/learn_special_psi.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC226E6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:42 RTL
    case 0xC226E8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/level_up_char-jp.asm (source_named).
bool execute_miscellaneous_level_up_char_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/level_up_char-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1CEF2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/level_up_char-jp.asm:15 END_STACK_VARS
    case 0xC1CEF4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/level_up_char-jp.asm:15 END_STACK_VARS
    case 0xC1CEF5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/level_up_char-jp.asm:15 END_STACK_VARS
    case 0xC1CEF6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/level_up_char-jp.asm:15 END_STACK_VARS
    case 0xC1CEF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E1, 2); else cpu.execute_instruction<0x69>(0x00FFE1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/level_up_char-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CEF7.
    case 0xC1CEF9: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/level_up_char-jp.asm:15 END_STACK_VARS
    case 0xC1CEFA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/level_up_char-jp.asm:15 END_STACK_VARS
    case 0xC1CEFB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:16 STX @LOCAL07
    case 0xC1CEFC: cpu.execute_instruction<0x86>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:16 STX @LOCAL07
    // Overlapping static entry reached from 0xC1CEF9.
    case 0xC1CEFD: cpu.execute_instruction<0x1D>(0x009BAA, 3); return true;
    // src/misc/level_up_char-jp.asm:17 TAX
    case 0xC1CEFE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:18 TXY
    case 0xC1CEFF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:19 DEY
    case 0xC1CF00: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:20 STY @LOCAL06
    case 0xC1CF01: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:21 TYA
    case 0xC1CF03: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:22 LDY #.SIZEOF(char_struct)
    case 0xC1CF04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:22 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1CF04.
    case 0xC1CF06: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:23 JSL MULT168
    case 0xC1CF07: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:24 STA @LOCAL05
    case 0xC1CF0B: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:25 CLC
    case 0xC1CF0D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::level
    case 0xC1CF0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000083, 2); else cpu.execute_instruction<0x69>(0x009C83, 3); return true;
    // src/misc/level_up_char-jp.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::level
    // Overlapping static entry reached from 0xC1CF0E.
    case 0xC1CF10: cpu.execute_instruction<0x9C>(0x000285, 3); return true;
    // src/misc/level_up_char-jp.asm:27 STA @VIRTUAL02
    case 0xC1CF11: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:28 LDX @VIRTUAL02
    case 0xC1CF13: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CF15: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:30 LDA __BSS_START__,X
    case 0xC1CF17: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:31 STA @LOCAL04
    case 0xC1CF1A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/misc/level_up_char-jp.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC1CF1C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:33 AND #$00FF
    case 0xC1CF1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC1CF1E.
    case 0xC1CF20: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/level_up_char-jp.asm:34 STA @VIRTUAL04
    case 0xC1CF21: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:35 STA @LOCAL03
    case 0xC1CF23: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CF25: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:37 LDA @LOCAL04
    case 0xC1CF27: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/misc/level_up_char-jp.asm:38 INC
    case 0xC1CF29: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:39 LDX @VIRTUAL02
    case 0xC1CF2A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:40 STA __BSS_START__,X
    case 0xC1CF2C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC1CF2F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:42 LDA @LOCAL07
    case 0xC1CF31: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:43 BEQ @UNKNOWN0
    case 0xC1CF33: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/misc/level_up_char-jp.asm:44 LDA #1
    case 0xC1CF35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/level_up_char-jp.asm:44 LDA #1
    // Overlapping static entry reached from 0xC1CF35.
    case 0xC1CF37: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:45 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1CF38: cpu.execute_instruction<0x20>(0x000032, 3); return true;
    // src/misc/level_up_char-jp.asm:46 LDX #4
    case 0xC1CF3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/misc/level_up_char-jp.asm:46 LDX #4
    // Overlapping static entry reached from 0xC1CF3B.
    case 0xC1CF3D: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/level_up_char-jp.asm:47 LDA @LOCAL05
    case 0xC1CF3E: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:48 CLC
    case 0xC1CF40: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:49 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1CF41: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/misc/level_up_char-jp.asm:49 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1CF41.
    case 0xC1CF43: cpu.execute_instruction<0x9C>(0x006320, 3); return true;
    // src/misc/level_up_char-jp.asm:50 JSR UNKNOWN_C1ACA1
    case 0xC1CF44: cpu.execute_instruction<0x20>(0x00AB63, 3); return true;
    // src/misc/level_up_char-jp.asm:50 JSR UNKNOWN_C1ACA1
    // Overlapping static entry reached from 0xC1CF43.
    case 0xC1CF46: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:51 LDX @VIRTUAL02
    case 0xC1CF47: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CF49: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:53 LDA __BSS_START__,X
    case 0xC1CF4B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:54 STORE_INT832 @VIRTUAL06
    case 0xC1CF4E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/misc/level_up_char-jp.asm:54 STORE_INT832 @VIRTUAL06
    case 0xC1CF50: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:54 STORE_INT832 @VIRTUAL06
    case 0xC1CF52: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/misc/level_up_char-jp.asm:54 STORE_INT832 @VIRTUAL06
    case 0xC1CF54: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/misc/level_up_char-jp.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC1CF56: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1CF58: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1CF5A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1CF5C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1CF5E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:57 JSR UNKNOWN_C1AD0A
    case 0xC1CF60: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1CF63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0047D7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    // Overlapping static entry reached from 0xC1CF63.
    case 0xC1CF65: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1CF66: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    // Overlapping static entry reached from 0xC1CF65.
    case 0xC1CF67: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1CF68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    // Overlapping static entry reached from 0xC1CF68.
    case 0xC1CF6A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1CF6B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1CF6D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:59 LDA #2
    case 0xC1CF71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/level_up_char-jp.asm:59 LDA #2
    // Overlapping static entry reached from 0xC1CF71.
    case 0xC1CF73: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:60 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1CF74: cpu.execute_instruction<0x20>(0x000032, 3); return true;
    // src/misc/level_up_char-jp.asm:62 LDY @LOCAL06
    case 0xC1CF77: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:63 TYA
    case 0xC1CF79: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC1CF7A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1CF7A.
    case 0xC1CF7C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:65 JSL MULT168
    case 0xC1CF7D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:66 CLC
    case 0xC1CF81: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_offense
    case 0xC1CF82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009A, 2); else cpu.execute_instruction<0x69>(0x009C9A, 3); return true;
    // src/misc/level_up_char-jp.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_offense
    // Overlapping static entry reached from 0xC1CF82.
    case 0xC1CF84: cpu.execute_instruction<0x9C>(0x000285, 3); return true;
    // src/misc/level_up_char-jp.asm:68 STA @VIRTUAL02
    case 0xC1CF85: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:69 LDY @LOCAL06
    case 0xC1CF87: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:70 TYA
    case 0xC1CF89: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:71 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1CF8A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:71 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1CF8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:71 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1CF8D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:71 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1CF8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:71 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1CF90: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:72 TAX
    case 0xC1CF92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CF93: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:74 LDA f:STATS_GROWTH_VARS,X
    case 0xC1CF95: cpu.execute_instruction<0xBF>(0xD5E9BB, 4); return true;
    // src/misc/level_up_char-jp.asm:75 STA @LOCAL00
    case 0xC1CF99: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char-jp.asm:76 LDX @VIRTUAL02
    case 0xC1CF9B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:77 LDA __BSS_START__,X
    case 0xC1CF9D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:78 STA @LOCAL00+1
    case 0xC1CFA0: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char-jp.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC1CFA2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:80 LDA @LOCAL03
    case 0xC1CFA4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:81 STA @VIRTUAL04
    case 0xC1CFA6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:82 JSR UNKNOWN_C1D08B
    case 0xC1CFA8: cpu.execute_instruction<0x20>(0x00CE74, 3); return true;
    // src/misc/level_up_char-jp.asm:83 TAX
    case 0xC1CFAB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:84 STX @LOCAL05
    case 0xC1CFAC: cpu.execute_instruction<0x86>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:85 TXA
    case 0xC1CFAE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:86 CLC
    case 0xC1CFAF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:87 SBC #0
    case 0xC1CFB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:87 SBC #0
    // Overlapping static entry reached from 0xC1CFB0.
    case 0xC1CFB2: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:88 BRANCHLTEQS @UNKNOWN4
    case 0xC1CFB3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:88 BRANCHLTEQS @UNKNOWN4
    case 0xC1CFB5: cpu.execute_instruction<0x10>(0x00004D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:88 BRANCHLTEQS @UNKNOWN4
    case 0xC1CFB7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:88 BRANCHLTEQS @UNKNOWN4
    case 0xC1CFB9: cpu.execute_instruction<0x30>(0x000049, 2); return true;
    // src/misc/level_up_char-jp.asm:89 SEP #PROC_FLAGS::INDEX8
    case 0xC1CFBB: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:90 STX @VIRTUAL00
    case 0xC1CFBD: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:91 REP #PROC_FLAGS::INDEX8
    case 0xC1CFBF: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:92 LDX @VIRTUAL02
    case 0xC1CFC1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CFC3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:94 LDA __BSS_START__,X
    case 0xC1CFC5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:95 CLC
    case 0xC1CFC8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:96 ADC @VIRTUAL00
    case 0xC1CFC9: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:97 LDX @VIRTUAL02
    case 0xC1CFCB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:98 STA __BSS_START__,X
    case 0xC1CFCD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:99 LDY @LOCAL06
    case 0xC1CFD0: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC1CFD2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:101 TYA
    case 0xC1CFD4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:102 INC
    case 0xC1CFD5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:103 JSL RECALC_CHARACTER_POSTMATH_OFFENSE
    case 0xC1CFD6: cpu.execute_instruction<0x22>(0xC21706, 4); return true;
    // src/misc/level_up_char-jp.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC1CFDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:105 LDA @LOCAL07
    case 0xC1CFDC: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:106 BEQ @UNKNOWN4
    case 0xC1CFDE: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/level_up_char-jp.asm:107 LDX @LOCAL05
    case 0xC1CFE0: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:108 TXA
    case 0xC1CFE2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:109 STORE_INT1632S @VIRTUAL06
    case 0xC1CFE3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:109 STORE_INT1632S @VIRTUAL06
    case 0xC1CFE5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/misc/level_up_char-jp.asm:109 STORE_INT1632S @VIRTUAL06
    case 0xC1CFE7: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:109 STORE_INT1632S @VIRTUAL06
    case 0xC1CFE9: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:110 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1CFEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:110 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1CFED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:110 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1CFEF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:110 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1CFF1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:111 JSR UNKNOWN_C1AD0A
    case 0xC1CFF3: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:112 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1CFF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EB, 2); else cpu.execute_instruction<0xA9>(0x0047EB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:112 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    // Overlapping static entry reached from 0xC1CFF6.
    case 0xC1CFF8: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:112 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1CFF9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:112 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    // Overlapping static entry reached from 0xC1CFF8.
    case 0xC1CFFA: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:112 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1CFFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:112 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    // Overlapping static entry reached from 0xC1CFFB.
    case 0xC1CFFD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:112 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1CFFE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:112 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1D000: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:114 LDY @LOCAL06
    case 0xC1D004: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:115 TYA
    case 0xC1D006: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:116 LDY #.SIZEOF(char_struct)
    case 0xC1D007: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:116 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D007.
    case 0xC1D009: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:117 JSL MULT168
    case 0xC1D00A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:118 CLC
    case 0xC1D00E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:119 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_defense
    case 0xC1D00F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009B, 2); else cpu.execute_instruction<0x69>(0x009C9B, 3); return true;
    // src/misc/level_up_char-jp.asm:119 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_defense
    // Overlapping static entry reached from 0xC1D00F.
    case 0xC1D011: cpu.execute_instruction<0x9C>(0x000285, 3); return true;
    // src/misc/level_up_char-jp.asm:120 STA @VIRTUAL02
    case 0xC1D012: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:121 LDY @LOCAL06
    case 0xC1D014: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:122 TYA
    case 0xC1D016: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:123 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D017: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:123 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D019: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:123 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D01A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:123 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D01C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:123 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D01D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:124 TAX
    case 0xC1D01F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:125 INX
    case 0xC1D020: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:126 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D021: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:127 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D023: cpu.execute_instruction<0xBF>(0xD5E9BB, 4); return true;
    // src/misc/level_up_char-jp.asm:128 STA @LOCAL00
    case 0xC1D027: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char-jp.asm:129 LDX @VIRTUAL02
    case 0xC1D029: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:130 LDA __BSS_START__,X
    case 0xC1D02B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:131 STA @LOCAL00+1
    case 0xC1D02E: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char-jp.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC1D030: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:133 LDA @LOCAL03
    case 0xC1D032: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:134 STA @VIRTUAL04
    case 0xC1D034: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:135 JSR UNKNOWN_C1D08B
    case 0xC1D036: cpu.execute_instruction<0x20>(0x00CE74, 3); return true;
    // src/misc/level_up_char-jp.asm:136 TAX
    case 0xC1D039: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:137 STX @LOCAL05
    case 0xC1D03A: cpu.execute_instruction<0x86>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:138 TXA
    case 0xC1D03C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:139 CLC
    case 0xC1D03D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:140 SBC #0
    case 0xC1D03E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:140 SBC #0
    // Overlapping static entry reached from 0xC1D03E.
    case 0xC1D040: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:141 BRANCHLTEQS @UNKNOWN8
    case 0xC1D041: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:141 BRANCHLTEQS @UNKNOWN8
    case 0xC1D043: cpu.execute_instruction<0x10>(0x00004D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:141 BRANCHLTEQS @UNKNOWN8
    case 0xC1D045: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:141 BRANCHLTEQS @UNKNOWN8
    case 0xC1D047: cpu.execute_instruction<0x30>(0x000049, 2); return true;
    // src/misc/level_up_char-jp.asm:142 SEP #PROC_FLAGS::INDEX8
    case 0xC1D049: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:143 STX @VIRTUAL00
    case 0xC1D04B: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:144 REP #PROC_FLAGS::INDEX8
    case 0xC1D04D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:145 LDX @VIRTUAL02
    case 0xC1D04F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:146 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D051: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:147 LDA __BSS_START__,X
    case 0xC1D053: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:148 CLC
    case 0xC1D056: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:149 ADC @VIRTUAL00
    case 0xC1D057: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:150 LDX @VIRTUAL02
    case 0xC1D059: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:151 STA __BSS_START__,X
    case 0xC1D05B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:152 LDY @LOCAL06
    case 0xC1D05E: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:153 REP #PROC_FLAGS::ACCUM8
    case 0xC1D060: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:154 TYA
    case 0xC1D062: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:155 INC
    case 0xC1D063: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:156 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC1D064: cpu.execute_instruction<0x22>(0xC217D9, 4); return true;
    // src/misc/level_up_char-jp.asm:157 REP #PROC_FLAGS::ACCUM8
    case 0xC1D068: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:158 LDA @LOCAL07
    case 0xC1D06A: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:159 BEQ @UNKNOWN8
    case 0xC1D06C: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/level_up_char-jp.asm:160 LDX @LOCAL05
    case 0xC1D06E: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:161 TXA
    case 0xC1D070: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:162 STORE_INT1632S @VIRTUAL06
    case 0xC1D071: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:162 STORE_INT1632S @VIRTUAL06
    case 0xC1D073: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/misc/level_up_char-jp.asm:162 STORE_INT1632S @VIRTUAL06
    case 0xC1D075: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:162 STORE_INT1632S @VIRTUAL06
    case 0xC1D077: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D079: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D07B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D07D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D07F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:164 JSR UNKNOWN_C1AD0A
    case 0xC1D081: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:165 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D084: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x004801, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:165 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    // Overlapping static entry reached from 0xC1D084.
    case 0xC1D086: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:165 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D087: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:165 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D089: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:165 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    // Overlapping static entry reached from 0xC1D089.
    case 0xC1D08B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:165 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D08C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:165 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D08E: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:167 LDY @LOCAL06
    case 0xC1D092: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:168 TYA
    case 0xC1D094: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:169 LDY #.SIZEOF(char_struct)
    case 0xC1D095: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:169 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D095.
    case 0xC1D097: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:170 JSL MULT168
    case 0xC1D098: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:170 JSL MULT168
    // Overlapping static entry reached from 0xC13451.
    case 0xC1D099: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:171 CLC
    case 0xC1D09C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:172 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_speed
    case 0xC1D09D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009C, 2); else cpu.execute_instruction<0x69>(0x009C9C, 3); return true;
    // src/misc/level_up_char-jp.asm:172 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_speed
    // Overlapping static entry reached from 0xC1D09D.
    case 0xC1D09F: cpu.execute_instruction<0x9C>(0x000285, 3); return true;
    // src/misc/level_up_char-jp.asm:173 STA @VIRTUAL02
    case 0xC1D0A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:174 LDY @LOCAL06
    case 0xC1D0A2: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:175 TYA
    case 0xC1D0A4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D0A5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D0A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D0A8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D0AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D0AB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:177 TAX
    case 0xC1D0AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:178 INX
    case 0xC1D0AE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:179 INX
    case 0xC1D0AF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:180 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D0B0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:181 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D0B2: cpu.execute_instruction<0xBF>(0xD5E9BB, 4); return true;
    // src/misc/level_up_char-jp.asm:182 STA @LOCAL00
    case 0xC1D0B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char-jp.asm:183 LDX @VIRTUAL02
    case 0xC1D0B8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:184 LDA __BSS_START__,X
    case 0xC1D0BA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:185 STA @LOCAL00+1
    case 0xC1D0BD: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char-jp.asm:186 REP #PROC_FLAGS::ACCUM8
    case 0xC1D0BF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:187 LDA @LOCAL03
    case 0xC1D0C1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:188 STA @VIRTUAL04
    case 0xC1D0C3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:189 JSR UNKNOWN_C1D08B
    case 0xC1D0C5: cpu.execute_instruction<0x20>(0x00CE74, 3); return true;
    // src/misc/level_up_char-jp.asm:190 TAX
    case 0xC1D0C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:191 STX @LOCAL05
    case 0xC1D0C9: cpu.execute_instruction<0x86>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:192 TXA
    case 0xC1D0CB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:193 CLC
    case 0xC1D0CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:194 SBC #0
    case 0xC1D0CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:194 SBC #0
    // Overlapping static entry reached from 0xC1D0CD.
    case 0xC1D0CF: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:195 BRANCHLTEQS @UNKNOWN12
    case 0xC1D0D0: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:195 BRANCHLTEQS @UNKNOWN12
    case 0xC1D0D2: cpu.execute_instruction<0x10>(0x00004D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:195 BRANCHLTEQS @UNKNOWN12
    case 0xC1D0D4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:195 BRANCHLTEQS @UNKNOWN12
    case 0xC1D0D6: cpu.execute_instruction<0x30>(0x000049, 2); return true;
    // src/misc/level_up_char-jp.asm:196 SEP #PROC_FLAGS::INDEX8
    case 0xC1D0D8: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:197 STX @VIRTUAL00
    case 0xC1D0DA: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:198 REP #PROC_FLAGS::INDEX8
    case 0xC1D0DC: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:199 LDX @VIRTUAL02
    case 0xC1D0DE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:200 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D0E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:201 LDA __BSS_START__,X
    case 0xC1D0E2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:202 CLC
    case 0xC1D0E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:203 ADC @VIRTUAL00
    case 0xC1D0E6: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:204 LDX @VIRTUAL02
    case 0xC1D0E8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:205 STA __BSS_START__,X
    case 0xC1D0EA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:206 LDY @LOCAL06
    case 0xC1D0ED: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC1D0EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:208 TYA
    case 0xC1D0F1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:209 INC
    case 0xC1D0F2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:210 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC1D0F3: cpu.execute_instruction<0x22>(0xC21996, 4); return true;
    // src/misc/level_up_char-jp.asm:211 REP #PROC_FLAGS::ACCUM8
    case 0xC1D0F7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:212 LDA @LOCAL07
    case 0xC1D0F9: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:213 BEQ @UNKNOWN12
    case 0xC1D0FB: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/level_up_char-jp.asm:214 LDX @LOCAL05
    case 0xC1D0FD: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:215 TXA
    case 0xC1D0FF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:216 STORE_INT1632S @VIRTUAL06
    case 0xC1D100: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:216 STORE_INT1632S @VIRTUAL06
    case 0xC1D102: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/misc/level_up_char-jp.asm:216 STORE_INT1632S @VIRTUAL06
    case 0xC1D104: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:216 STORE_INT1632S @VIRTUAL06
    case 0xC1D106: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:217 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D108: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:217 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D10A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:217 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D10C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:217 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D10E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:218 JSR UNKNOWN_C1AD0A
    case 0xC1D110: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:219 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D113: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x004818, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:219 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    // Overlapping static entry reached from 0xC1D113.
    case 0xC1D115: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:219 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D116: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:219 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D118: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:219 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    // Overlapping static entry reached from 0xC1D118.
    case 0xC1D11A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:219 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D11B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:219 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D11D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:221 LDY @LOCAL06
    case 0xC1D121: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:222 TYA
    case 0xC1D123: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:223 LDY #.SIZEOF(char_struct)
    case 0xC1D124: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:223 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D124.
    case 0xC1D126: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:224 JSL MULT168
    case 0xC1D127: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:225 CLC
    case 0xC1D12B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:226 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_guts
    case 0xC1D12C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009D, 2); else cpu.execute_instruction<0x69>(0x009C9D, 3); return true;
    // src/misc/level_up_char-jp.asm:226 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_guts
    // Overlapping static entry reached from 0xC1D12C.
    case 0xC1D12E: cpu.execute_instruction<0x9C>(0x000285, 3); return true;
    // src/misc/level_up_char-jp.asm:227 STA @VIRTUAL02
    case 0xC1D12F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:228 LDY @LOCAL06
    case 0xC1D131: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:229 TYA
    case 0xC1D133: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D134: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D136: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D137: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D139: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D13A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:231 TAX
    case 0xC1D13C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:232 INX
    case 0xC1D13D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:233 INX
    case 0xC1D13E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:234 INX
    case 0xC1D13F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:235 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D140: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:236 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D142: cpu.execute_instruction<0xBF>(0xD5E9BB, 4); return true;
    // src/misc/level_up_char-jp.asm:237 STA @LOCAL00
    case 0xC1D146: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char-jp.asm:238 LDX @VIRTUAL02
    case 0xC1D148: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:239 LDA __BSS_START__,X
    case 0xC1D14A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:240 STA @LOCAL00+1
    case 0xC1D14D: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char-jp.asm:241 REP #PROC_FLAGS::ACCUM8
    case 0xC1D14F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:242 LDA @LOCAL03
    case 0xC1D151: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:243 STA @VIRTUAL04
    case 0xC1D153: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:244 JSR UNKNOWN_C1D08B
    case 0xC1D155: cpu.execute_instruction<0x20>(0x00CE74, 3); return true;
    // src/misc/level_up_char-jp.asm:245 TAX
    case 0xC1D158: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:246 STX @LOCAL05
    case 0xC1D159: cpu.execute_instruction<0x86>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:247 TXA
    case 0xC1D15B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:248 CLC
    case 0xC1D15C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:249 SBC #0
    case 0xC1D15D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:249 SBC #0
    // Overlapping static entry reached from 0xC1D15D.
    case 0xC1D15F: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:250 BRANCHLTEQS @UNKNOWN16
    case 0xC1D160: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:250 BRANCHLTEQS @UNKNOWN16
    case 0xC1D162: cpu.execute_instruction<0x10>(0x00004D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:250 BRANCHLTEQS @UNKNOWN16
    case 0xC1D164: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:250 BRANCHLTEQS @UNKNOWN16
    case 0xC1D166: cpu.execute_instruction<0x30>(0x000049, 2); return true;
    // src/misc/level_up_char-jp.asm:251 SEP #PROC_FLAGS::INDEX8
    case 0xC1D168: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:252 STX @VIRTUAL00
    case 0xC1D16A: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:253 REP #PROC_FLAGS::INDEX8
    case 0xC1D16C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:254 LDX @VIRTUAL02
    case 0xC1D16E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:255 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D170: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:256 LDA __BSS_START__,X
    case 0xC1D172: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:257 CLC
    case 0xC1D175: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:258 ADC @VIRTUAL00
    case 0xC1D176: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:259 LDX @VIRTUAL02
    case 0xC1D178: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:260 STA __BSS_START__,X
    case 0xC1D17A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:261 LDY @LOCAL06
    case 0xC1D17D: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:262 REP #PROC_FLAGS::ACCUM8
    case 0xC1D17F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:263 TYA
    case 0xC1D181: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:264 INC
    case 0xC1D182: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:265 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC1D183: cpu.execute_instruction<0x22>(0xC21A48, 4); return true;
    // src/misc/level_up_char-jp.asm:266 REP #PROC_FLAGS::ACCUM8
    case 0xC1D187: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:267 LDA @LOCAL07
    case 0xC1D189: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:268 BEQ @UNKNOWN16
    case 0xC1D18B: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/level_up_char-jp.asm:269 LDX @LOCAL05
    case 0xC1D18D: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:270 TXA
    case 0xC1D18F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:271 STORE_INT1632S @VIRTUAL06
    case 0xC1D190: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:271 STORE_INT1632S @VIRTUAL06
    case 0xC1D192: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/misc/level_up_char-jp.asm:271 STORE_INT1632S @VIRTUAL06
    case 0xC1D194: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:271 STORE_INT1632S @VIRTUAL06
    case 0xC1D196: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:272 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D198: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:272 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D19A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:272 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D19C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:272 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D19E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:273 JSR UNKNOWN_C1AD0A
    case 0xC1D1A0: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:274 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D1A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002D, 2); else cpu.execute_instruction<0xA9>(0x00482D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:274 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    // Overlapping static entry reached from 0xC1D1A3.
    case 0xC1D1A5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:274 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D1A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:274 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D1A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:274 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    // Overlapping static entry reached from 0xC1D1A8.
    case 0xC1D1AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:274 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D1AB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:274 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D1AD: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:276 LDA #10
    case 0xC1D1B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/misc/level_up_char-jp.asm:276 LDA #10
    // Overlapping static entry reached from 0xC1D1B1.
    case 0xC1D1B3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char-jp.asm:277 CLC
    case 0xC1D1B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:278 SBC @VIRTUAL04
    case 0xC1D1B5: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:279 BRANCHLTEQS @UNKNOWN19
    case 0xC1D1B7: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:279 BRANCHLTEQS @UNKNOWN19
    case 0xC1D1B9: cpu.execute_instruction<0x10>(0x00004C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:279 BRANCHLTEQS @UNKNOWN19
    case 0xC1D1BB: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:279 BRANCHLTEQS @UNKNOWN19
    case 0xC1D1BD: cpu.execute_instruction<0x30>(0x000048, 2); return true;
    // src/misc/level_up_char-jp.asm:280 LDY @LOCAL06
    case 0xC1D1BF: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:281 TYA
    case 0xC1D1C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:282 LDY #.SIZEOF(char_struct)
    case 0xC1D1C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:282 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D1C2.
    case 0xC1D1C4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:283 JSL MULT168
    case 0xC1D1C5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:284 TAX
    case 0xC1D1C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:285 LDA PARTY_CHARACTERS+char_struct::base_vitality,X
    case 0xC1D1CA: cpu.execute_instruction<0xBD>(0x009C9F, 3); return true;
    // src/misc/level_up_char-jp.asm:286 AND #$00FF
    case 0xC1D1CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:286 AND #$00FF
    // Overlapping static entry reached from 0xC1D1CD.
    case 0xC1D1CF: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/level_up_char-jp.asm:287 DEC
    case 0xC1D1D0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:288 DEC
    case 0xC1D1D1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:289 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D1D2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:289 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D1D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:289 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D1D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:289 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D1D6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:289 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D1D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:290 STA @VIRTUAL02
    case 0xC1D1D9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:291 LDY @LOCAL06
    case 0xC1D1DB: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:292 TYA
    case 0xC1D1DD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:293 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:293 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:293 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1E1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:293 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:293 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1E4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:294 TAX
    case 0xC1D1E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:295 INX
    case 0xC1D1E7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:296 INX
    case 0xC1D1E8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:297 INX
    case 0xC1D1E9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:298 INX
    case 0xC1D1EA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:299 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D1EB: cpu.execute_instruction<0xBF>(0xD5E9BB, 4); return true;
    // src/misc/level_up_char-jp.asm:300 AND #$00FF
    case 0xC1D1EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:300 AND #$00FF
    // Overlapping static entry reached from 0xC1D1EF.
    case 0xC1D1F1: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/level_up_char-jp.asm:301 TAY
    case 0xC1D1F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:302 LDA @LOCAL03
    case 0xC1D1F3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:303 STA @VIRTUAL04
    case 0xC1D1F5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:304 JSL MULT16
    case 0xC1D1F7: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/misc/level_up_char-jp.asm:305 SEC
    case 0xC1D1FB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:306 SBC @VIRTUAL02
    case 0xC1D1FC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:307 LDY #10
    case 0xC1D1FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/misc/level_up_char-jp.asm:307 LDY #10
    // Overlapping static entry reached from 0xC1D1FE.
    case 0xC1D200: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:308 JSL DIVISION16
    case 0xC1D201: cpu.execute_instruction<0x22>(0xC090C8, 4); return true;
    // src/misc/level_up_char-jp.asm:309 BRA @UNKNOWN20
    case 0xC1D205: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/misc/level_up_char-jp.asm:311 LDY @LOCAL06
    case 0xC1D207: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:312 TYA
    case 0xC1D209: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:313 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D20A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:313 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D20C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:313 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D20D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:313 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D20F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:313 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D210: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:314 TAX
    case 0xC1D212: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:315 INX
    case 0xC1D213: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:316 INX
    case 0xC1D214: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:317 INX
    case 0xC1D215: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:318 INX
    case 0xC1D216: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:319 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D217: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:320 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D219: cpu.execute_instruction<0xBF>(0xD5E9BB, 4); return true;
    // src/misc/level_up_char-jp.asm:321 STA @LOCAL00
    case 0xC1D21D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char-jp.asm:322 REP #PROC_FLAGS::ACCUM8
    case 0xC1D21F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:323 TYA
    case 0xC1D221: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:324 LDY #.SIZEOF(char_struct)
    case 0xC1D222: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:324 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D222.
    case 0xC1D224: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:325 JSL MULT168
    case 0xC1D225: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:326 TAX
    case 0xC1D229: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:327 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D22A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:328 LDA PARTY_CHARACTERS+char_struct::base_vitality,X
    case 0xC1D22C: cpu.execute_instruction<0xBD>(0x009C9F, 3); return true;
    // src/misc/level_up_char-jp.asm:329 STA @LOCAL00+1
    case 0xC1D22F: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char-jp.asm:330 REP #PROC_FLAGS::ACCUM8
    case 0xC1D231: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:331 LDA @LOCAL03
    case 0xC1D233: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:332 STA @VIRTUAL04
    case 0xC1D235: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:333 JSR UNKNOWN_C1D08B
    case 0xC1D237: cpu.execute_instruction<0x20>(0x00CE74, 3); return true;
    // src/misc/level_up_char-jp.asm:335 STA @VIRTUAL02
    case 0xC1D23A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:336 CLC
    case 0xC1D23C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:337 SBC #0
    case 0xC1D23D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:337 SBC #0
    // Overlapping static entry reached from 0xC1D23D.
    case 0xC1D23F: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:338 BRANCHLTEQS @UNKNOWN24
    case 0xC1D240: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:338 BRANCHLTEQS @UNKNOWN24
    case 0xC1D242: cpu.execute_instruction<0x10>(0x000055, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:338 BRANCHLTEQS @UNKNOWN24
    case 0xC1D244: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:338 BRANCHLTEQS @UNKNOWN24
    case 0xC1D246: cpu.execute_instruction<0x30>(0x000051, 2); return true;
    // src/misc/level_up_char-jp.asm:339 LDY @LOCAL06
    case 0xC1D248: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:340 TYA
    case 0xC1D24A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:341 LDY #.SIZEOF(char_struct)
    case 0xC1D24B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:341 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D24B.
    case 0xC1D24D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:342 JSL MULT168
    case 0xC1D24E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:343 CLC
    case 0xC1D252: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:344 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_vitality
    case 0xC1D253: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009F, 2); else cpu.execute_instruction<0x69>(0x009C9F, 3); return true;
    // src/misc/level_up_char-jp.asm:344 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_vitality
    // Overlapping static entry reached from 0xC1D253.
    case 0xC1D255: cpu.execute_instruction<0x9C>(0x00A5AA, 3); return true;
    // src/misc/level_up_char-jp.asm:345 TAX
    case 0xC1D256: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:346 LDA @VIRTUAL02
    case 0xC1D257: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:346 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1D255.
    case 0xC1D258: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // src/misc/level_up_char-jp.asm:347 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D259: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:348 STA @VIRTUAL00
    case 0xC1D25B: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:349 LDA __BSS_START__,X
    case 0xC1D25D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:350 CLC
    case 0xC1D260: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:351 ADC @VIRTUAL00
    case 0xC1D261: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:352 STA __BSS_START__,X
    case 0xC1D263: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:353 LDY @LOCAL06
    case 0xC1D266: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:354 REP #PROC_FLAGS::ACCUM8
    case 0xC1D268: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:355 TYA
    case 0xC1D26A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:356 INC
    case 0xC1D26B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:357 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC1D26C: cpu.execute_instruction<0x22>(0xC21BFA, 4); return true;
    // src/misc/level_up_char-jp.asm:358 REP #PROC_FLAGS::ACCUM8
    case 0xC1D270: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:359 LDA @LOCAL07
    case 0xC1D272: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:360 BEQ @UNKNOWN24
    case 0xC1D274: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:361 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D276: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:361 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D278: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:361 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D27A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char-jp.asm:361 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D27C: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:361 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D27E: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:362 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D280: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:362 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D282: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:362 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D284: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:362 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D286: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:363 JSR UNKNOWN_C1AD0A
    case 0xC1D288: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:364 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D28B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x004841, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:364 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    // Overlapping static entry reached from 0xC1D28B.
    case 0xC1D28D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:364 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D28E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:364 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D290: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:364 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    // Overlapping static entry reached from 0xC1D290.
    case 0xC1D292: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:364 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D293: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:364 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D295: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:366 LDA #10
    case 0xC1D299: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/misc/level_up_char-jp.asm:366 LDA #10
    // Overlapping static entry reached from 0xC1D299.
    case 0xC1D29B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char-jp.asm:367 CLC
    case 0xC1D29C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:368 SBC @VIRTUAL04
    case 0xC1D29D: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:369 BRANCHLTEQS @UNKNOWN27
    case 0xC1D29F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:369 BRANCHLTEQS @UNKNOWN27
    case 0xC1D2A1: cpu.execute_instruction<0x10>(0x00004C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:369 BRANCHLTEQS @UNKNOWN27
    case 0xC1D2A3: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:369 BRANCHLTEQS @UNKNOWN27
    case 0xC1D2A5: cpu.execute_instruction<0x30>(0x000048, 2); return true;
    // src/misc/level_up_char-jp.asm:370 LDY @LOCAL06
    case 0xC1D2A7: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:371 TYA
    case 0xC1D2A9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:372 LDY #.SIZEOF(char_struct)
    case 0xC1D2AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:372 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D2AA.
    case 0xC1D2AC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:373 JSL MULT168
    case 0xC1D2AD: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:374 TAX
    case 0xC1D2B1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:375 LDA PARTY_CHARACTERS+char_struct::base_iq,X
    case 0xC1D2B2: cpu.execute_instruction<0xBD>(0x009CA0, 3); return true;
    // src/misc/level_up_char-jp.asm:376 AND #$00FF
    case 0xC1D2B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:376 AND #$00FF
    // Overlapping static entry reached from 0xC1D2B5.
    case 0xC1D2B7: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/level_up_char-jp.asm:377 DEC
    case 0xC1D2B8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:378 DEC
    case 0xC1D2B9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:379 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D2BA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:379 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D2BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:379 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D2BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:379 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D2BE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:379 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D2C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:380 STA @VIRTUAL02
    case 0xC1D2C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:381 LDY @LOCAL06
    case 0xC1D2C3: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:382 TYA
    case 0xC1D2C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:383 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2C6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:383 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:383 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2C9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:383 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:383 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2CC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:384 CLC
    case 0xC1D2CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:385 ADC #5
    case 0xC1D2CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/level_up_char-jp.asm:385 ADC #5
    // Overlapping static entry reached from 0xC1D2CF.
    case 0xC1D2D1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/level_up_char-jp.asm:386 TAX
    case 0xC1D2D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:387 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D2D3: cpu.execute_instruction<0xBF>(0xD5E9BB, 4); return true;
    // src/misc/level_up_char-jp.asm:388 AND #$00FF
    case 0xC1D2D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:388 AND #$00FF
    // Overlapping static entry reached from 0xC1D2D7.
    case 0xC1D2D9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/level_up_char-jp.asm:389 TAY
    case 0xC1D2DA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:390 LDA @LOCAL03
    case 0xC1D2DB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:391 STA @VIRTUAL04
    case 0xC1D2DD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:392 JSL MULT16
    case 0xC1D2DF: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/misc/level_up_char-jp.asm:393 SEC
    case 0xC1D2E3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:394 SBC @VIRTUAL02
    case 0xC1D2E4: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:395 LDY #10
    case 0xC1D2E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/misc/level_up_char-jp.asm:395 LDY #10
    // Overlapping static entry reached from 0xC1D2E6.
    case 0xC1D2E8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:396 JSL DIVISION16
    case 0xC1D2E9: cpu.execute_instruction<0x22>(0xC090C8, 4); return true;
    // src/misc/level_up_char-jp.asm:397 BRA @UNKNOWN28
    case 0xC1D2ED: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/misc/level_up_char-jp.asm:399 LDY @LOCAL06
    case 0xC1D2EF: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:400 TYA
    case 0xC1D2F1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:401 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:401 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:401 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2F5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:401 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:401 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2F8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:402 CLC
    case 0xC1D2FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:403 ADC #5
    case 0xC1D2FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/level_up_char-jp.asm:403 ADC #5
    // Overlapping static entry reached from 0xC1D2FB.
    case 0xC1D2FD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/level_up_char-jp.asm:404 TAX
    case 0xC1D2FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:405 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D2FF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:406 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D301: cpu.execute_instruction<0xBF>(0xD5E9BB, 4); return true;
    // src/misc/level_up_char-jp.asm:407 STA @LOCAL00
    case 0xC1D305: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char-jp.asm:408 REP #PROC_FLAGS::ACCUM8
    case 0xC1D307: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:409 TYA
    case 0xC1D309: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:410 LDY #.SIZEOF(char_struct)
    case 0xC1D30A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:410 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D30A.
    case 0xC1D30C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:411 JSL MULT168
    case 0xC1D30D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:412 TAX
    case 0xC1D311: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:413 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D312: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:414 LDA PARTY_CHARACTERS+char_struct::base_iq,X
    case 0xC1D314: cpu.execute_instruction<0xBD>(0x009CA0, 3); return true;
    // src/misc/level_up_char-jp.asm:415 STA @LOCAL00+1
    case 0xC1D317: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char-jp.asm:416 REP #PROC_FLAGS::ACCUM8
    case 0xC1D319: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:417 LDA @LOCAL03
    case 0xC1D31B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:418 STA @VIRTUAL04
    case 0xC1D31D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:419 JSR UNKNOWN_C1D08B
    case 0xC1D31F: cpu.execute_instruction<0x20>(0x00CE74, 3); return true;
    // src/misc/level_up_char-jp.asm:421 STA @VIRTUAL02
    case 0xC1D322: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:422 CLC
    case 0xC1D324: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:423 SBC #0
    case 0xC1D325: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:423 SBC #0
    // Overlapping static entry reached from 0xC1D325.
    case 0xC1D327: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:424 BRANCHLTEQS @UNKNOWN32
    case 0xC1D328: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:424 BRANCHLTEQS @UNKNOWN32
    case 0xC1D32A: cpu.execute_instruction<0x10>(0x000055, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:424 BRANCHLTEQS @UNKNOWN32
    case 0xC1D32C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:424 BRANCHLTEQS @UNKNOWN32
    case 0xC1D32E: cpu.execute_instruction<0x30>(0x000051, 2); return true;
    // src/misc/level_up_char-jp.asm:425 LDY @LOCAL06
    case 0xC1D330: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:426 TYA
    case 0xC1D332: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:427 LDY #.SIZEOF(char_struct)
    case 0xC1D333: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:427 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D333.
    case 0xC1D335: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:428 JSL MULT168
    case 0xC1D336: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:429 CLC
    case 0xC1D33A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:430 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_iq
    case 0xC1D33B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A0, 2); else cpu.execute_instruction<0x69>(0x009CA0, 3); return true;
    // src/misc/level_up_char-jp.asm:430 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_iq
    // Overlapping static entry reached from 0xC1D33B.
    case 0xC1D33D: cpu.execute_instruction<0x9C>(0x00A5AA, 3); return true;
    // src/misc/level_up_char-jp.asm:431 TAX
    case 0xC1D33E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:432 LDA @VIRTUAL02
    case 0xC1D33F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:432 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1D33D.
    case 0xC1D340: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // src/misc/level_up_char-jp.asm:433 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D341: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:434 STA @VIRTUAL00
    case 0xC1D343: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:435 LDA __BSS_START__,X
    case 0xC1D345: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:436 CLC
    case 0xC1D348: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:437 ADC @VIRTUAL00
    case 0xC1D349: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:438 STA __BSS_START__,X
    case 0xC1D34B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:439 LDY @LOCAL06
    case 0xC1D34E: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:440 REP #PROC_FLAGS::ACCUM8
    case 0xC1D350: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:441 TYA
    case 0xC1D352: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:442 INC
    case 0xC1D353: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:443 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC1D354: cpu.execute_instruction<0x22>(0xC21C12, 4); return true;
    // src/misc/level_up_char-jp.asm:444 REP #PROC_FLAGS::ACCUM8
    case 0xC1D358: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:445 LDA @LOCAL07
    case 0xC1D35A: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:446 BEQ @UNKNOWN32
    case 0xC1D35C: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:447 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D35E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:447 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D360: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:447 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D362: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char-jp.asm:447 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D364: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:447 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D366: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:448 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D368: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:448 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D36A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:448 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D36C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:448 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D36E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:449 JSR UNKNOWN_C1AD0A
    case 0xC1D370: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:450 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D373: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x004858, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:450 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    // Overlapping static entry reached from 0xC1D373.
    case 0xC1D375: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:450 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D376: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:450 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D378: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:450 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    // Overlapping static entry reached from 0xC1D378.
    case 0xC1D37A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:450 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D37B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:450 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D37D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:452 LDY @LOCAL06
    case 0xC1D381: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:453 TYA
    case 0xC1D383: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:454 LDY #.SIZEOF(char_struct)
    case 0xC1D384: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:454 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D384.
    case 0xC1D386: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:455 JSL MULT168
    case 0xC1D387: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:456 CLC
    case 0xC1D38B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:457 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_luck
    case 0xC1D38C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009E, 2); else cpu.execute_instruction<0x69>(0x009C9E, 3); return true;
    // src/misc/level_up_char-jp.asm:457 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_luck
    // Overlapping static entry reached from 0xC1D38C.
    case 0xC1D38E: cpu.execute_instruction<0x9C>(0x000285, 3); return true;
    // src/misc/level_up_char-jp.asm:458 STA @VIRTUAL02
    case 0xC1D38F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:459 LDY @LOCAL06
    case 0xC1D391: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:460 TYA
    case 0xC1D393: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:461 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D394: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:461 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D396: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:461 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D397: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:461 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D399: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:461 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D39A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:462 CLC
    case 0xC1D39C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:463 ADC #6
    case 0xC1D39D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/misc/level_up_char-jp.asm:463 ADC #6
    // Overlapping static entry reached from 0xC1D39D.
    case 0xC1D39F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/level_up_char-jp.asm:464 TAX
    case 0xC1D3A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:465 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D3A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:466 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D3A3: cpu.execute_instruction<0xBF>(0xD5E9BB, 4); return true;
    // src/misc/level_up_char-jp.asm:467 STA @LOCAL00
    case 0xC1D3A7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char-jp.asm:468 LDX @VIRTUAL02
    case 0xC1D3A9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:469 LDA __BSS_START__,X
    case 0xC1D3AB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:470 STA @LOCAL00+1
    case 0xC1D3AE: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char-jp.asm:471 REP #PROC_FLAGS::ACCUM8
    case 0xC1D3B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:472 LDA @LOCAL03
    case 0xC1D3B2: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:473 STA @VIRTUAL04
    case 0xC1D3B4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:474 JSR UNKNOWN_C1D08B
    case 0xC1D3B6: cpu.execute_instruction<0x20>(0x00CE74, 3); return true;
    // src/misc/level_up_char-jp.asm:475 TAX
    case 0xC1D3B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:476 STX @LOCAL05
    case 0xC1D3BA: cpu.execute_instruction<0x86>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:477 TXA
    case 0xC1D3BC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:478 CLC
    case 0xC1D3BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:479 SBC #0
    case 0xC1D3BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:479 SBC #0
    // Overlapping static entry reached from 0xC1D3BE.
    case 0xC1D3C0: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:480 BRANCHLTEQS @UNKNOWN36
    case 0xC1D3C1: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:480 BRANCHLTEQS @UNKNOWN36
    case 0xC1D3C3: cpu.execute_instruction<0x10>(0x00004D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:480 BRANCHLTEQS @UNKNOWN36
    case 0xC1D3C5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:480 BRANCHLTEQS @UNKNOWN36
    case 0xC1D3C7: cpu.execute_instruction<0x30>(0x000049, 2); return true;
    // src/misc/level_up_char-jp.asm:481 SEP #PROC_FLAGS::INDEX8
    case 0xC1D3C9: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:482 STX @VIRTUAL00
    case 0xC1D3CB: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:483 REP #PROC_FLAGS::INDEX8
    case 0xC1D3CD: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:484 LDX @VIRTUAL02
    case 0xC1D3CF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:485 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D3D1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:486 LDA __BSS_START__,X
    case 0xC1D3D3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:487 CLC
    case 0xC1D3D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:488 ADC @VIRTUAL00
    case 0xC1D3D7: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:489 LDX @VIRTUAL02
    case 0xC1D3D9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:490 STA __BSS_START__,X
    case 0xC1D3DB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:491 LDY @LOCAL06
    case 0xC1D3DE: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:492 REP #PROC_FLAGS::ACCUM8
    case 0xC1D3E0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:493 TYA
    case 0xC1D3E2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:494 INC
    case 0xC1D3E3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:495 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC1D3E4: cpu.execute_instruction<0x22>(0xC21AFA, 4); return true;
    // src/misc/level_up_char-jp.asm:496 REP #PROC_FLAGS::ACCUM8
    case 0xC1D3E8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:497 LDA @LOCAL07
    case 0xC1D3EA: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:498 BEQ @UNKNOWN36
    case 0xC1D3EC: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/level_up_char-jp.asm:499 LDX @LOCAL05
    case 0xC1D3EE: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/level_up_char-jp.asm:500 TXA
    case 0xC1D3F0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:501 STORE_INT1632S @VIRTUAL06
    case 0xC1D3F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:501 STORE_INT1632S @VIRTUAL06
    case 0xC1D3F3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/misc/level_up_char-jp.asm:501 STORE_INT1632S @VIRTUAL06
    case 0xC1D3F5: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:501 STORE_INT1632S @VIRTUAL06
    case 0xC1D3F7: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:502 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D3F9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:502 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D3FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:502 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D3FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:502 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D3FF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:503 JSR UNKNOWN_C1AD0A
    case 0xC1D401: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:504 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D404: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006B, 2); else cpu.execute_instruction<0xA9>(0x00486B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:504 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    // Overlapping static entry reached from 0xC1D404.
    case 0xC1D406: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:504 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D407: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:504 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D409: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:504 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    // Overlapping static entry reached from 0xC1D409.
    case 0xC1D40B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:504 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D40C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:504 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D40E: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:506 LDY @LOCAL06
    case 0xC1D412: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:507 TYA
    case 0xC1D414: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:508 LDY #.SIZEOF(char_struct)
    case 0xC1D415: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:508 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D415.
    case 0xC1D417: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:509 JSL MULT168
    case 0xC1D418: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:510 TAX
    case 0xC1D41C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:511 LDA PARTY_CHARACTERS+char_struct::vitality,X
    case 0xC1D41D: cpu.execute_instruction<0xBD>(0x009C98, 3); return true;
    // src/misc/level_up_char-jp.asm:512 AND #$00FF
    case 0xC1D420: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:512 AND #$00FF
    // Overlapping static entry reached from 0xC1D420.
    case 0xC1D422: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:513 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D423: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:513 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D425: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:513 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D426: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:513 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D428: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:513 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D429: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:513 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D42B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:513 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D42C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:514 SEC
    case 0xC1D42E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:515 SBC PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC1D42F: cpu.execute_instruction<0xFD>(0x009C88, 3); return true;
    // src/misc/level_up_char-jp.asm:516 STA @LOCAL02
    case 0xC1D432: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:517 CLC
    case 0xC1D434: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:518 SBC #1
    case 0xC1D435: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000001, 2); else cpu.execute_instruction<0xE9>(0x000001, 3); return true;
    // src/misc/level_up_char-jp.asm:518 SBC #1
    // Overlapping static entry reached from 0xC1D435.
    case 0xC1D437: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:519 BRANCHLTEQS @UNKNOWN39
    case 0xC1D438: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:519 BRANCHLTEQS @UNKNOWN39
    case 0xC1D43A: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:519 BRANCHLTEQS @UNKNOWN39
    case 0xC1D43C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:519 BRANCHLTEQS @UNKNOWN39
    case 0xC1D43E: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/level_up_char-jp.asm:520 LDA @LOCAL02
    case 0xC1D440: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:521 TAX
    case 0xC1D442: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:522 BRA @UNKNOWN40
    case 0xC1D443: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/misc/level_up_char-jp.asm:524 LDA #2
    case 0xC1D445: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/level_up_char-jp.asm:524 LDA #2
    // Overlapping static entry reached from 0xC1D445.
    case 0xC1D447: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:525 JSL RAND_MOD
    case 0xC1D448: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // src/misc/level_up_char-jp.asm:526 TAX
    case 0xC1D44C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:527 INX
    case 0xC1D44D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:529 STX @VIRTUAL02
    case 0xC1D44E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:530 LDY @LOCAL06
    case 0xC1D450: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:531 TYA
    case 0xC1D452: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:532 LDY #.SIZEOF(char_struct)
    case 0xC1D453: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:532 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D453.
    case 0xC1D455: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:533 JSL MULT168
    case 0xC1D456: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:534 STA @LOCAL02
    case 0xC1D45A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:535 CLC
    case 0xC1D45C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:536 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::max_hp
    case 0xC1D45D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000088, 2); else cpu.execute_instruction<0x69>(0x009C88, 3); return true;
    // src/misc/level_up_char-jp.asm:536 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::max_hp
    // Overlapping static entry reached from 0xC1D45D.
    case 0xC1D45F: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/misc/level_up_char-jp.asm:537 TAX
    case 0xC1D460: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:538 LDA __BSS_START__,X
    case 0xC1D461: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:538 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC1D45F.
    case 0xC1D462: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:539 CLC
    case 0xC1D464: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:540 ADC @VIRTUAL02
    case 0xC1D465: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:541 STA __BSS_START__,X
    case 0xC1D467: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:542 LDA @LOCAL02
    case 0xC1D46A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:543 CLC
    case 0xC1D46C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:544 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_hp_target
    case 0xC1D46D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C5, 2); else cpu.execute_instruction<0x69>(0x009CC5, 3); return true;
    // src/misc/level_up_char-jp.asm:544 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_hp_target
    // Overlapping static entry reached from 0xC1D46D.
    case 0xC1D46F: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/misc/level_up_char-jp.asm:545 TAX
    case 0xC1D470: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:546 LDA __BSS_START__,X
    case 0xC1D471: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:546 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC1D46F.
    case 0xC1D472: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/level_up_char-jp.asm:547 CLC
    case 0xC1D474: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:548 ADC @VIRTUAL02
    case 0xC1D475: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:549 STA __BSS_START__,X
    case 0xC1D477: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:550 LDA @LOCAL07
    case 0xC1D47A: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:551 BEQ @UNKNOWN42
    case 0xC1D47C: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:552 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D47E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:552 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D480: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:552 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D482: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char-jp.asm:552 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D484: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:552 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D486: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:553 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D488: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:553 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D48A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:553 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D48C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:553 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D48E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:554 JSR UNKNOWN_C1AD0A
    case 0xC1D490: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:555 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D493: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00487F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:555 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    // Overlapping static entry reached from 0xC1D493.
    case 0xC1D495: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:555 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D496: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:555 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D498: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:555 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    // Overlapping static entry reached from 0xC1D498.
    case 0xC1D49A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:555 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D49B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:555 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D49D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:557 LDY @LOCAL06
    case 0xC1D4A1: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:558 CPY #2
    case 0xC1D4A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/misc/level_up_char-jp.asm:558 CPY #2
    // Overlapping static entry reached from 0xC1D4A3.
    case 0xC1D4A5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/level_up_char-jp.asm:559 BEQL @UNKNOWN66
    case 0xC1D4A6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/level_up_char-jp.asm:559 BEQL @UNKNOWN66
    case 0xC1D4A8: cpu.execute_instruction<0x4C>(0x00D6C2, 3); return true;
    // src/misc/level_up_char-jp.asm:560 CPY #0
    case 0xC1D4AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:560 CPY #0
    // Overlapping static entry reached from 0xC1D4AB.
    case 0xC1D4AD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/level_up_char-jp.asm:561 BNE @UNKNOWN44
    case 0xC1D4AE: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:562 LDA #EVENT_FLAG::FLG_WIN_OSCAR
    case 0xC1D4B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x00004A, 3); return true;
    // src/misc/level_up_char-jp.asm:562 LDA #EVENT_FLAG::FLG_WIN_OSCAR
    // Overlapping static entry reached from 0xC1D4B0.
    case 0xC1D4B2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:563 JSL GET_EVENT_FLAG
    case 0xC1D4B3: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/misc/level_up_char-jp.asm:564 CMP #0
    case 0xC1D4B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:564 CMP #0
    // Overlapping static entry reached from 0xC1D4B7.
    case 0xC1D4B9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/level_up_char-jp.asm:565 BEQ @UNKNOWN44
    case 0xC1D4BA: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:566 LDY @LOCAL06
    case 0xC1D4BC: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:567 TYA
    case 0xC1D4BE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:568 LDY #.SIZEOF(char_struct)
    case 0xC1D4BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:568 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D4BF.
    case 0xC1D4C1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:569 JSL MULT168
    case 0xC1D4C2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:570 TAX
    case 0xC1D4C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:571 LDA PARTY_CHARACTERS+char_struct::iq,X
    case 0xC1D4C7: cpu.execute_instruction<0xBD>(0x009C99, 3); return true;
    // src/misc/level_up_char-jp.asm:572 AND #$00FF
    case 0xC1D4CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:572 AND #$00FF
    // Overlapping static entry reached from 0xC1D4CA.
    case 0xC1D4CC: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:573 ASL
    case 0xC1D4CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:574 BRA @UNKNOWN45
    case 0xC1D4CE: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/misc/level_up_char-jp.asm:576 LDY @LOCAL06
    case 0xC1D4D0: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:577 TYA
    case 0xC1D4D2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:578 LDY #.SIZEOF(char_struct)
    case 0xC1D4D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:578 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D4D3.
    case 0xC1D4D5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:579 JSL MULT168
    case 0xC1D4D6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:580 TAX
    case 0xC1D4DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:581 LDA PARTY_CHARACTERS+char_struct::iq,X
    case 0xC1D4DB: cpu.execute_instruction<0xBD>(0x009C99, 3); return true;
    // src/misc/level_up_char-jp.asm:582 AND #$00FF
    case 0xC1D4DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:582 AND #$00FF
    // Overlapping static entry reached from 0xC1D4DE.
    case 0xC1D4E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/level_up_char-jp.asm:584 STA @LOCAL01
    case 0xC1D4E1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/level_up_char-jp.asm:585 LDY @LOCAL06
    case 0xC1D4E3: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:586 TYA
    case 0xC1D4E5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:587 LDY #.SIZEOF(char_struct)
    case 0xC1D4E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:587 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D4E6.
    case 0xC1D4E8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:588 JSL MULT168
    case 0xC1D4E9: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:589 TAX
    case 0xC1D4ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:590 LDA @LOCAL01
    case 0xC1D4EE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:591 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1D4F0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:591 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1D4F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:591 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1D4F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:591 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1D4F4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:592 SEC
    case 0xC1D4F6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:593 SBC PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC1D4F7: cpu.execute_instruction<0xFD>(0x009C8A, 3); return true;
    // src/misc/level_up_char-jp.asm:594 STA @LOCAL02
    case 0xC1D4FA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:595 CLC
    case 0xC1D4FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:596 SBC #1
    case 0xC1D4FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000001, 2); else cpu.execute_instruction<0xE9>(0x000001, 3); return true;
    // src/misc/level_up_char-jp.asm:596 SBC #1
    // Overlapping static entry reached from 0xC1D4FD.
    case 0xC1D4FF: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char-jp.asm:597 BRANCHLTEQS @UNKNOWN48
    case 0xC1D500: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char-jp.asm:597 BRANCHLTEQS @UNKNOWN48
    case 0xC1D502: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char-jp.asm:597 BRANCHLTEQS @UNKNOWN48
    case 0xC1D504: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char-jp.asm:597 BRANCHLTEQS @UNKNOWN48
    case 0xC1D506: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/level_up_char-jp.asm:598 LDA @LOCAL02
    case 0xC1D508: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:599 TAX
    case 0xC1D50A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:600 BRA @UNKNOWN49
    case 0xC1D50B: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/level_up_char-jp.asm:602 LDA #2
    case 0xC1D50D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/level_up_char-jp.asm:602 LDA #2
    // Overlapping static entry reached from 0xC1D50D.
    case 0xC1D50F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:603 JSL RAND_MOD
    case 0xC1D510: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // src/misc/level_up_char-jp.asm:604 TAX
    case 0xC1D514: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:606 TXA
    case 0xC1D515: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:607 STA @LOCAL01
    case 0xC1D516: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/level_up_char-jp.asm:608 BEQ @UNKNOWN51
    case 0xC1D518: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/misc/level_up_char-jp.asm:609 LDY @LOCAL06
    case 0xC1D51A: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:610 TYA
    case 0xC1D51C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:611 LDY #.SIZEOF(char_struct)
    case 0xC1D51D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/level_up_char-jp.asm:611 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D51D.
    case 0xC1D51F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char-jp.asm:612 JSL MULT168
    case 0xC1D520: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/level_up_char-jp.asm:613 STA @VIRTUAL02
    case 0xC1D524: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:614 STA @LOCAL02
    case 0xC1D526: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:615 LDA @VIRTUAL02
    case 0xC1D528: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:616 CLC
    case 0xC1D52A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:617 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::max_pp
    case 0xC1D52B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008A, 2); else cpu.execute_instruction<0x69>(0x009C8A, 3); return true;
    // src/misc/level_up_char-jp.asm:617 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::max_pp
    // Overlapping static entry reached from 0xC1D52B.
    case 0xC1D52D: cpu.execute_instruction<0x9C>(0x00A5AA, 3); return true;
    // src/misc/level_up_char-jp.asm:618 TAX
    case 0xC1D52E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:619 LDA @LOCAL01
    case 0xC1D52F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/level_up_char-jp.asm:619 LDA @LOCAL01
    // Overlapping static entry reached from 0xC1D52D.
    case 0xC1D530: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/misc/level_up_char-jp.asm:620 STA @VIRTUAL02
    case 0xC1D531: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:620 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1D530.
    case 0xC1D532: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/misc/level_up_char-jp.asm:621 LDA __BSS_START__,X
    case 0xC1D533: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:622 CLC
    case 0xC1D536: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:623 ADC @VIRTUAL02
    case 0xC1D537: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:624 STA __BSS_START__,X
    case 0xC1D539: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:625 LDA @LOCAL02
    case 0xC1D53C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:626 STA @VIRTUAL02
    case 0xC1D53E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:627 CLC
    case 0xC1D540: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:628 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_pp_target
    case 0xC1D541: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x009CCB, 3); return true;
    // src/misc/level_up_char-jp.asm:628 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_pp_target
    // Overlapping static entry reached from 0xC1D541.
    case 0xC1D543: cpu.execute_instruction<0x9C>(0x00A5AA, 3); return true;
    // src/misc/level_up_char-jp.asm:629 TAX
    case 0xC1D544: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:630 LDA @LOCAL01
    case 0xC1D545: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/level_up_char-jp.asm:630 LDA @LOCAL01
    // Overlapping static entry reached from 0xC1D543.
    case 0xC1D546: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/misc/level_up_char-jp.asm:631 STA @VIRTUAL02
    case 0xC1D547: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:631 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1D546.
    case 0xC1D548: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/misc/level_up_char-jp.asm:632 LDA __BSS_START__,X
    case 0xC1D549: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:633 CLC
    case 0xC1D54C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:634 ADC @VIRTUAL02
    case 0xC1D54D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:635 STA __BSS_START__,X
    case 0xC1D54F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char-jp.asm:636 LDA @LOCAL07
    case 0xC1D552: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:637 BEQ @UNKNOWN51
    case 0xC1D554: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:638 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1D556: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:638 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1D558: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:638 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1D55A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char-jp.asm:638 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1D55C: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:638 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1D55E: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char-jp.asm:639 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D560: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char-jp.asm:639 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D562: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char-jp.asm:639 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D564: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:639 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D566: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:640 JSR UNKNOWN_C1AD0A
    case 0xC1D568: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:641 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D56B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x004896, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:641 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    // Overlapping static entry reached from 0xC1D56B.
    case 0xC1D56D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:641 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D56E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:641 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D570: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:641 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    // Overlapping static entry reached from 0xC1D570.
    case 0xC1D572: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:641 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D573: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:641 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D575: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:643 LDA @LOCAL07
    case 0xC1D579: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/level_up_char-jp.asm:644 BEQL @UNKNOWN66
    case 0xC1D57B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/level_up_char-jp.asm:644 BEQL @UNKNOWN66
    case 0xC1D57D: cpu.execute_instruction<0x4C>(0x00D6C2, 3); return true;
    // src/misc/level_up_char-jp.asm:645 LDA @LOCAL03
    case 0xC1D580: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:646 STA @VIRTUAL04
    case 0xC1D582: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:647 STA @VIRTUAL02
    case 0xC1D584: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:648 INC @VIRTUAL02
    case 0xC1D586: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:649 LDY @LOCAL06
    case 0xC1D588: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:650 TYA
    case 0xC1D58A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:651 BEQ @UNKNOWN54
    case 0xC1D58B: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/misc/level_up_char-jp.asm:652 CMP #1
    case 0xC1D58D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/level_up_char-jp.asm:652 CMP #1
    // Overlapping static entry reached from 0xC1D58D.
    case 0xC1D58F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/level_up_char-jp.asm:653 BEQ @UNKNOWN58
    case 0xC1D590: cpu.execute_instruction<0xF0>(0x00006E, 2); return true;
    // src/misc/level_up_char-jp.asm:654 CMP #3
    case 0xC1D592: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/level_up_char-jp.asm:654 CMP #3
    // Overlapping static entry reached from 0xC1D592.
    case 0xC1D594: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/level_up_char-jp.asm:655 BEQL @UNKNOWN62
    case 0xC1D595: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/level_up_char-jp.asm:655 BEQL @UNKNOWN62
    case 0xC1D597: cpu.execute_instruction<0x4C>(0x00D662, 3); return true;
    // src/misc/level_up_char-jp.asm:656 JMP @UNKNOWN66
    case 0xC1D59A: cpu.execute_instruction<0x4C>(0x00D6C2, 3); return true;
    // src/misc/level_up_char-jp.asm:658 LDX #1
    case 0xC1D59D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/level_up_char-jp.asm:658 LDX #1
    // Overlapping static entry reached from 0xC1D59D.
    case 0xC1D59F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/level_up_char-jp.asm:659 STX @LOCAL06
    case 0xC1D5A0: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:660 BRA @UNKNOWN57
    case 0xC1D5A2: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/misc/level_up_char-jp.asm:662 LDA @LOCAL03
    case 0xC1D5A4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:663 CLC
    case 0xC1D5A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:664 ADC #6
    case 0xC1D5A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/misc/level_up_char-jp.asm:664 ADC #6
    // Overlapping static entry reached from 0xC1D5A7.
    case 0xC1D5A9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char-jp.asm:665 CLC
    case 0xC1D5AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:666 ADC @VIRTUAL06
    case 0xC1D5AB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/level_up_char-jp.asm:667 STA @VIRTUAL06
    case 0xC1D5AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/level_up_char-jp.asm:668 LDA [@VIRTUAL06]
    case 0xC1D5AF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/level_up_char-jp.asm:669 AND #$00FF
    case 0xC1D5B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:669 AND #$00FF
    // Overlapping static entry reached from 0xC1D5B1.
    case 0xC1D5B3: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/level_up_char-jp.asm:670 CMP @VIRTUAL02
    case 0xC1D5B4: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:671 BNE @UNKNOWN56
    case 0xC1D5B6: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:672 TXA
    case 0xC1D5B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:673 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D5B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:674 JSR UNKNOWN_C1ACF8
    case 0xC1D5BB: cpu.execute_instruction<0x20>(0x00ABB4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:676 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D5BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AD, 2); else cpu.execute_instruction<0xA9>(0x0048AD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:676 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D5BE.
    case 0xC1D5C0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:676 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D5C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:676 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D5C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:676 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D5C3.
    case 0xC1D5C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:676 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D5C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:676 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D5C8: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:679 LDX @LOCAL06
    case 0xC1D5CC: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:680 INX
    case 0xC1D5CE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:681 STX @LOCAL06
    case 0xC1D5CF: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:684 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D5D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:684 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D5D1.
    case 0xC1D5D3: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:684 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D5D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:684 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D5D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:684 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D5D6.
    case 0xC1D5D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:684 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D5D9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/level_up_char-jp.asm:685 TXA
    case 0xC1D5DB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:686 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D5DC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:686 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D5DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:686 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D5DF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:686 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D5E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:686 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D5E2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:686 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D5E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:686 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D5E5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:687 STA @LOCAL03
    case 0xC1D5E7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/level_up_char-jp.asm:688 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D5E9: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/level_up_char-jp.asm:688 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D5EB: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/level_up_char-jp.asm:688 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D5ED: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:688 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D5EF: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/level_up_char-jp.asm:689 CLC
    case 0xC1D5F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:690 ADC @VIRTUAL0A
    case 0xC1D5F2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:691 STA @VIRTUAL0A
    case 0xC1D5F4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:692 LDA [@VIRTUAL0A]
    case 0xC1D5F6: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:693 AND #$00FF
    case 0xC1D5F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:693 AND #$00FF
    // Overlapping static entry reached from 0xC1D5F8.
    case 0xC1D5FA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/level_up_char-jp.asm:694 BNE @UNKNOWN55
    case 0xC1D5FB: cpu.execute_instruction<0xD0>(0x0000A7, 2); return true;
    // src/misc/level_up_char-jp.asm:695 JMP @UNKNOWN66
    case 0xC1D5FD: cpu.execute_instruction<0x4C>(0x00D6C2, 3); return true;
    // src/misc/level_up_char-jp.asm:697 LDX #1
    case 0xC1D600: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/level_up_char-jp.asm:697 LDX #1
    // Overlapping static entry reached from 0xC1D600.
    case 0xC1D602: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/level_up_char-jp.asm:698 STX @LOCAL06
    case 0xC1D603: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:699 BRA @UNKNOWN61
    case 0xC1D605: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/misc/level_up_char-jp.asm:702 LDA @LOCAL03
    case 0xC1D607: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:703 CLC
    case 0xC1D609: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:704 ADC #7
    case 0xC1D60A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/misc/level_up_char-jp.asm:704 ADC #7
    // Overlapping static entry reached from 0xC1D60A.
    case 0xC1D60C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char-jp.asm:705 CLC
    case 0xC1D60D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:706 ADC @VIRTUAL06
    case 0xC1D60E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/level_up_char-jp.asm:707 STA @VIRTUAL06
    case 0xC1D610: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/level_up_char-jp.asm:708 LDA [@VIRTUAL06]
    case 0xC1D612: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/level_up_char-jp.asm:709 AND #$00FF
    case 0xC1D614: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:709 AND #$00FF
    // Overlapping static entry reached from 0xC1D614.
    case 0xC1D616: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/level_up_char-jp.asm:710 CMP @VIRTUAL02
    case 0xC1D617: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:711 BNE @UNKNOWN60
    case 0xC1D619: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:712 TXA
    case 0xC1D61B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:713 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D61C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:714 JSR UNKNOWN_C1ACF8
    case 0xC1D61E: cpu.execute_instruction<0x20>(0x00ABB4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:716 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D621: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AD, 2); else cpu.execute_instruction<0xA9>(0x0048AD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:716 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D621.
    case 0xC1D623: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:716 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D624: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:716 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D626: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:716 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D626.
    case 0xC1D628: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:716 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D629: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:716 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D62B: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:719 LDX @LOCAL06
    case 0xC1D62F: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:720 INX
    case 0xC1D631: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:721 STX @LOCAL06
    case 0xC1D632: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:724 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D634: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:724 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D634.
    case 0xC1D636: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:724 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D637: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:724 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:724 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D639.
    case 0xC1D63B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:724 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D63C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/level_up_char-jp.asm:725 TXA
    case 0xC1D63E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:726 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D63F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:726 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D641: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:726 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D642: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:726 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D644: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:726 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D645: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:726 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D647: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:726 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D648: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:727 STA @LOCAL03
    case 0xC1D64A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/level_up_char-jp.asm:728 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D64C: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/level_up_char-jp.asm:728 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D64E: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/level_up_char-jp.asm:728 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D650: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:728 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D652: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/level_up_char-jp.asm:729 CLC
    case 0xC1D654: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:730 ADC @VIRTUAL0A
    case 0xC1D655: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:731 STA @VIRTUAL0A
    case 0xC1D657: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:732 LDA [@VIRTUAL0A]
    case 0xC1D659: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:733 AND #$00FF
    case 0xC1D65B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:733 AND #$00FF
    // Overlapping static entry reached from 0xC1D65B.
    case 0xC1D65D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/level_up_char-jp.asm:734 BNE @UNKNOWN59
    case 0xC1D65E: cpu.execute_instruction<0xD0>(0x0000A7, 2); return true;
    // src/misc/level_up_char-jp.asm:735 BRA @UNKNOWN66
    case 0xC1D660: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/misc/level_up_char-jp.asm:737 LDX #1
    case 0xC1D662: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/level_up_char-jp.asm:737 LDX #1
    // Overlapping static entry reached from 0xC1D662.
    case 0xC1D664: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/level_up_char-jp.asm:738 STX @LOCAL06
    case 0xC1D665: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:739 BRA @UNKNOWN65
    case 0xC1D667: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/misc/level_up_char-jp.asm:742 LDA @LOCAL03
    case 0xC1D669: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char-jp.asm:743 CLC
    case 0xC1D66B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:744 ADC #8
    case 0xC1D66C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/level_up_char-jp.asm:744 ADC #8
    // Overlapping static entry reached from 0xC1D66C.
    case 0xC1D66E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char-jp.asm:745 CLC
    case 0xC1D66F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:746 ADC @VIRTUAL06
    case 0xC1D670: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/level_up_char-jp.asm:747 STA @VIRTUAL06
    case 0xC1D672: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/level_up_char-jp.asm:748 LDA [@VIRTUAL06]
    case 0xC1D674: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/level_up_char-jp.asm:749 AND #$00FF
    case 0xC1D676: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:749 AND #$00FF
    // Overlapping static entry reached from 0xC1D676.
    case 0xC1D678: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/level_up_char-jp.asm:750 CMP @VIRTUAL02
    case 0xC1D679: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/level_up_char-jp.asm:751 BNE @UNKNOWN64
    case 0xC1D67B: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/level_up_char-jp.asm:752 TXA
    case 0xC1D67D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:753 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D67E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char-jp.asm:754 JSR UNKNOWN_C1ACF8
    case 0xC1D680: cpu.execute_instruction<0x20>(0x00ABB4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:756 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D683: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AD, 2); else cpu.execute_instruction<0xA9>(0x0048AD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:756 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D683.
    case 0xC1D685: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:756 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D686: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:756 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D688: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:756 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D688.
    case 0xC1D68A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:756 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D68B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char-jp.asm:756 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D68D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/misc/level_up_char-jp.asm:759 LDX @LOCAL06
    case 0xC1D691: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/misc/level_up_char-jp.asm:760 INX
    case 0xC1D693: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:761 STX @LOCAL06
    case 0xC1D694: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:764 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D696: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:764 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D696.
    case 0xC1D698: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char-jp.asm:764 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D699: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:764 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D69B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char-jp.asm:764 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D69B.
    case 0xC1D69D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char-jp.asm:764 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D69E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/level_up_char-jp.asm:765 TXA
    case 0xC1D6A0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/level_up_char-jp.asm:766 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D6A1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:766 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D6A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:766 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D6A4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:766 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D6A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:766 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D6A7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/level_up_char-jp.asm:766 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D6A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/level_up_char-jp.asm:766 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D6AA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char-jp.asm:767 STA @LOCAL03
    case 0xC1D6AC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/level_up_char-jp.asm:768 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D6AE: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/level_up_char-jp.asm:768 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D6B0: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/level_up_char-jp.asm:768 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D6B2: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/level_up_char-jp.asm:768 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D6B4: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/level_up_char-jp.asm:769 CLC
    case 0xC1D6B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char-jp.asm:770 ADC @VIRTUAL0A
    case 0xC1D6B7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:771 STA @VIRTUAL0A
    case 0xC1D6B9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:772 LDA [@VIRTUAL0A]
    case 0xC1D6BB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/level_up_char-jp.asm:773 AND #$00FF
    case 0xC1D6BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char-jp.asm:773 AND #$00FF
    // Overlapping static entry reached from 0xC1D6BD.
    case 0xC1D6BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/level_up_char-jp.asm:774 BNE @UNKNOWN63
    case 0xC1D6C0: cpu.execute_instruction<0xD0>(0x0000A7, 2); return true;
    // src/misc/level_up_char-jp.asm:776 LDA @LOCAL07
    case 0xC1D6C2: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char-jp.asm:777 BEQ @UNKNOWN67
    case 0xC1D6C4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/misc/level_up_char-jp.asm:778 JSR CLEAR_BLINKING_PROMPT
    case 0xC1D6C6: cpu.execute_instruction<0x20>(0x000038, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/level_up_char-jp.asm:780 END_C_FUNCTION
    case 0xC1D6C9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/level_up_char-jp.asm:780 END_C_FUNCTION
    case 0xC1D6CA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/party_add_char-jp.asm (source_named).
bool execute_miscellaneous_party_add_char_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/party_add_char-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC227C4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/party_add_char-jp.asm:9 END_STACK_VARS
    case 0xC227C6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/party_add_char-jp.asm:9 END_STACK_VARS
    case 0xC227C7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/party_add_char-jp.asm:9 END_STACK_VARS
    case 0xC227C8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/party_add_char-jp.asm:9 END_STACK_VARS
    case 0xC227C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/party_add_char-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC227C9.
    case 0xC227CB: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/party_add_char-jp.asm:9 END_STACK_VARS
    case 0xC227CC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/party_add_char-jp.asm:9 END_STACK_VARS
    case 0xC227CD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:10 TAY
    case 0xC227CE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:11 STY @LOCAL02
    case 0xC227CF: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/party_add_char-jp.asm:12 LDA #0
    case 0xC227D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/party_add_char-jp.asm:12 LDA #0
    // Overlapping static entry reached from 0xC227D1.
    case 0xC227D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/party_add_char-jp.asm:13 STA @VIRTUAL02
    case 0xC227D4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/party_add_char-jp.asm:14 JMP @UNKNOWN14
    case 0xC227D6: cpu.execute_instruction<0x4C>(0x00289F, 3); return true;
    // src/misc/party_add_char-jp.asm:16 LDA @VIRTUAL02
    case 0xC227D9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/party_add_char-jp.asm:17 CLC
    case 0xC227DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:18 ADC #.LOWORD(GAME_STATE)
    case 0xC227DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/party_add_char-jp.asm:18 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC227DC.
    case 0xC227DE: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:19 TAX
    case 0xC227DF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC227E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_add_char-jp.asm:21 LDA a:game_state::party_members,X
    case 0xC227E2: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/party_add_char-jp.asm:22 STA @VIRTUAL00
    case 0xC227E5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/party_add_char-jp.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC227E7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_add_char-jp.asm:24 LDA @VIRTUAL00
    case 0xC227E9: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/party_add_char-jp.asm:25 AND #$00FF
    case 0xC227EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_add_char-jp.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC227EB.
    case 0xC227ED: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/misc/party_add_char-jp.asm:26 STY @VIRTUAL04
    case 0xC227EE: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/party_add_char-jp.asm:27 CMP @VIRTUAL04
    case 0xC227F0: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/party_add_char-jp.asm:28 BEQL @UNKNOWN16
    case 0xC227F2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/party_add_char-jp.asm:28 BEQL @UNKNOWN16
    case 0xC227F4: cpu.execute_instruction<0x4C>(0x0028B1, 3); return true;
    // src/misc/party_add_char-jp.asm:29 STY @VIRTUAL04
    case 0xC227F7: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/party_add_char-jp.asm:30 CMP @VIRTUAL04
    case 0xC227F9: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/misc/party_add_char-jp.asm:31 BGT @UNKNOWN3
    case 0xC227FB: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/misc/party_add_char-jp.asm:31 BGT @UNKNOWN3
    case 0xC227FD: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/misc/party_add_char-jp.asm:32 LDA @VIRTUAL00
    case 0xC227FF: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/party_add_char-jp.asm:33 AND #$00FF
    case 0xC22801: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_add_char-jp.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC22801.
    case 0xC22803: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/party_add_char-jp.asm:34 BNEL @UNKNOWN13
    case 0xC22804: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/party_add_char-jp.asm:34 BNEL @UNKNOWN13
    case 0xC22806: cpu.execute_instruction<0x4C>(0x00289D, 3); return true;
    // src/misc/party_add_char-jp.asm:36 LDX @VIRTUAL02
    case 0xC22809: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/party_add_char-jp.asm:37 STX @LOCAL01
    case 0xC2280B: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/party_add_char-jp.asm:38 BRA @UNKNOWN7
    case 0xC2280D: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/misc/party_add_char-jp.asm:40 LDX @LOCAL01
    case 0xC2280F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/party_add_char-jp.asm:41 STX @VIRTUAL04
    case 0xC22811: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/party_add_char-jp.asm:42 LDA #6
    case 0xC22813: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/misc/party_add_char-jp.asm:42 LDA #6
    // Overlapping static entry reached from 0xC22813.
    case 0xC22815: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/party_add_char-jp.asm:43 CLC
    case 0xC22816: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:44 SBC @VIRTUAL04
    case 0xC22817: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/misc/party_add_char-jp.asm:45 JUMPLTEQS @UNKNOWN16
    case 0xC22819: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/misc/party_add_char-jp.asm:45 JUMPLTEQS @UNKNOWN16
    case 0xC2281B: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/misc/party_add_char-jp.asm:45 JUMPLTEQS @UNKNOWN16
    case 0xC2281D: cpu.execute_instruction<0x4C>(0x0028B1, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/misc/party_add_char-jp.asm:45 JUMPLTEQS @UNKNOWN16
    case 0xC22820: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/misc/party_add_char-jp.asm:45 JUMPLTEQS @UNKNOWN16
    case 0xC22822: cpu.execute_instruction<0x4C>(0x0028B1, 3); return true;
    // src/misc/party_add_char-jp.asm:46 INX
    case 0xC22825: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:47 STX @LOCAL01
    case 0xC22826: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/party_add_char-jp.asm:49 TXA
    case 0xC22828: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:50 CLC
    case 0xC22829: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:51 ADC #.LOWORD(GAME_STATE)
    case 0xC2282A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/party_add_char-jp.asm:51 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2287F.
    case 0xC2282B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00AA9A, 3); return true;
    // src/misc/party_add_char-jp.asm:51 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2282A.
    case 0xC2282C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:52 TAX
    case 0xC2282D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:53 LDA a:game_state::party_members,X
    case 0xC2282E: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/party_add_char-jp.asm:54 AND #$00FF
    case 0xC22831: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_add_char-jp.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC22831.
    case 0xC22833: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/party_add_char-jp.asm:55 BNE @UNKNOWN4
    case 0xC22834: cpu.execute_instruction<0xD0>(0x0000D9, 2); return true;
    // src/misc/party_add_char-jp.asm:56 BRA @UNKNOWN9
    case 0xC22836: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/misc/party_add_char-jp.asm:58 TXA
    case 0xC22838: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:59 DEC
    case 0xC22839: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:60 STA @LOCAL00
    case 0xC2283A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/party_add_char-jp.asm:61 TXA
    case 0xC2283C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:62 CLC
    case 0xC2283D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:63 ADC #.LOWORD(GAME_STATE)
    case 0xC2283E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/party_add_char-jp.asm:63 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2283E.
    case 0xC22840: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:64 PHA
    case 0xC22841: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:65 LDA @LOCAL00
    case 0xC22842: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_add_char-jp.asm:66 CLC
    case 0xC22844: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:67 ADC #.LOWORD(GAME_STATE)
    case 0xC22845: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/party_add_char-jp.asm:67 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC22845.
    case 0xC22847: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:68 TAX
    case 0xC22848: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC22849: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_add_char-jp.asm:70 LDA a:game_state::party_members,X
    case 0xC2284B: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/party_add_char-jp.asm:71 PLX
    case 0xC2284E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:72 STA a:game_state::party_members,X
    case 0xC2284F: cpu.execute_instruction<0x9D>(0x000077, 3); return true;
    // src/misc/party_add_char-jp.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC22852: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_add_char-jp.asm:74 LDA @LOCAL00
    case 0xC22854: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_add_char-jp.asm:75 TAX
    case 0xC22856: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:76 STX @LOCAL01
    case 0xC22857: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/party_add_char-jp.asm:78 LDX @LOCAL01
    case 0xC22859: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/party_add_char-jp.asm:79 TXA
    case 0xC2285B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:80 CLC
    case 0xC2285C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:81 SBC @VIRTUAL02
    case 0xC2285D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/party_add_char-jp.asm:82 BRANCHGTS @UNKNOWN8
    case 0xC2285F: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/party_add_char-jp.asm:82 BRANCHGTS @UNKNOWN8
    case 0xC22861: cpu.execute_instruction<0x10>(0x0000D5, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/party_add_char-jp.asm:82 BRANCHGTS @UNKNOWN8
    case 0xC22863: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/party_add_char-jp.asm:82 BRANCHGTS @UNKNOWN8
    case 0xC22865: cpu.execute_instruction<0x30>(0x0000D1, 2); return true;
    // src/misc/party_add_char-jp.asm:83 LDA @VIRTUAL02
    case 0xC22867: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/party_add_char-jp.asm:84 CLC
    case 0xC22869: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:85 ADC #.LOWORD(GAME_STATE)
    case 0xC2286A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/party_add_char-jp.asm:85 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2286A.
    case 0xC2286C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:86 TAX
    case 0xC2286D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:87 TYA
    case 0xC2286E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC2286F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_add_char-jp.asm:89 STA a:game_state::party_members,X
    case 0xC22871: cpu.execute_instruction<0x9D>(0x000077, 3); return true;
    // src/misc/party_add_char-jp.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC22874: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_add_char-jp.asm:91 TYA
    case 0xC22876: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:92 JSL UNKNOWN_C0369B
    case 0xC22877: cpu.execute_instruction<0x22>(0xC0389E, 4); return true;
    // src/misc/party_add_char-jp.asm:93 ASL
    case 0xC2287B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:94 CLC
    case 0xC2287C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:95 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC2287D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/misc/party_add_char-jp.asm:95 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC2287D.
    case 0xC2287F: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/misc/party_add_char-jp.asm:96 TAX
    case 0xC22880: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:97 LDA __BSS_START__,X
    case 0xC22881: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/party_add_char-jp.asm:98 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC22884: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/misc/party_add_char-jp.asm:98 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC22884.
    case 0xC22886: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/misc/party_add_char-jp.asm:99 STA __BSS_START__,X
    case 0xC22887: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/party_add_char-jp.asm:99 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC22886.
    case 0xC22888: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/party_add_char-jp.asm:99 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC22886.
    case 0xC22889: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/misc/party_add_char-jp.asm:100 LDY @LOCAL02
    case 0xC2288A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/party_add_char-jp.asm:101 CPY #4
    case 0xC2288C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/misc/party_add_char-jp.asm:101 CPY #4
    // Overlapping static entry reached from 0xC2288C.
    case 0xC2288E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/misc/party_add_char-jp.asm:102 BGT @UNKNOWN16
    case 0xC2288F: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/misc/party_add_char-jp.asm:102 BGT @UNKNOWN16
    case 0xC22891: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/misc/party_add_char-jp.asm:103 JSL UNKNOWN_C216DB
    case 0xC22893: cpu.execute_instruction<0x22>(0xC21583, 4); return true;
    // src/misc/party_add_char-jp.asm:104 JSL UNKNOWN_C3EBCA
    case 0xC22897: cpu.execute_instruction<0x22>(0xC3E790, 4); return true;
    // src/misc/party_add_char-jp.asm:105 BRA @UNKNOWN16
    case 0xC2289B: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/misc/party_add_char-jp.asm:107 INC @VIRTUAL02
    case 0xC2289D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/party_add_char-jp.asm:109 LDA #6
    case 0xC2289F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/misc/party_add_char-jp.asm:109 LDA #6
    // Overlapping static entry reached from 0xC2289F.
    case 0xC228A1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/party_add_char-jp.asm:110 CLC
    case 0xC228A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char-jp.asm:111 SBC @VIRTUAL02
    case 0xC228A3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/misc/party_add_char-jp.asm:112 JUMPGTS @UNKNOWN0
    case 0xC228A5: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/misc/party_add_char-jp.asm:112 JUMPGTS @UNKNOWN0
    case 0xC228A7: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/misc/party_add_char-jp.asm:112 JUMPGTS @UNKNOWN0
    case 0xC228A9: cpu.execute_instruction<0x4C>(0x0027D9, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/misc/party_add_char-jp.asm:112 JUMPGTS @UNKNOWN0
    case 0xC228AC: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/misc/party_add_char-jp.asm:112 JUMPGTS @UNKNOWN0
    case 0xC228AE: cpu.execute_instruction<0x4C>(0x0027D9, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/party_add_char-jp.asm:114 END_C_FUNCTION
    case 0xC228B1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/party_add_char-jp.asm:114 END_C_FUNCTION
    case 0xC228B2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
