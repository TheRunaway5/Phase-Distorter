// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/misc/atm_deposit.asm (source_named).
bool execute_miscellaneous_atm_deposit_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/atm_deposit.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2281D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    case 0xC2281F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    case 0xC22820: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    case 0xC22821: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22821.
    case 0xC22823: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/atm_deposit.asm:8 END_STACK_VARS
    case 0xC22824: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:9 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC22825: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:9 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC22827: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:9 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC22829: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:9 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2282B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2282D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2282F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC22831: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC22833: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:11 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22835: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:11 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22837: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:11 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22839: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:11 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC2283B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:12 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL0A
    case 0xC2283D: cpu.execute_instruction<0xAD>(0x009835, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:12 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL0A
    case 0xC22840: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:12 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL0A
    case 0xC22842: cpu.execute_instruction<0xAD>(0x009837, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:12 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL0A
    case 0xC22845: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/atm_deposit.asm:13 CLC
    case 0xC22847: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22848: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2284A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2284C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2284E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22850: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:14 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22852: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    case 0xC22854: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00967F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC22854.
    case 0xC22856: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    case 0xC22857: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC22856.
    case 0xC22858: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    case 0xC22859: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x000098, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC22858.
    case 0xC2285A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC22859.
    case 0xC2285B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:15 MOVE_INT_CONSTANT ATM_ACCOUNT_LIMIT, @VIRTUAL06
    case 0xC2285C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/atm_deposit.asm:16 CLC
    case 0xC2285E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/atm_deposit.asm:17 LDA @VIRTUAL0A
    case 0xC2285F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/misc/atm_deposit.asm:18 SBC @VIRTUAL06
    case 0xC22861: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/misc/atm_deposit.asm:19 LDA @VIRTUAL0A+2
    case 0xC22863: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/misc/atm_deposit.asm:20 SBC @VIRTUAL06+2
    case 0xC22865: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/atm_deposit.asm:21 BRANCHGTS @UNKNOWN2
    case 0xC22867: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/atm_deposit.asm:21 BRANCHGTS @UNKNOWN2
    case 0xC22869: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/atm_deposit.asm:21 BRANCHGTS @UNKNOWN2
    case 0xC2286B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/atm_deposit.asm:21 BRANCHGTS @UNKNOWN2
    case 0xC2286D: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2286F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC22871: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC22873: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC22875: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:24 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::bank_balance
    case 0xC22877: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:24 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::bank_balance
    case 0xC22879: cpu.execute_instruction<0x8D>(0x009835, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:24 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::bank_balance
    case 0xC2287C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:24 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::bank_balance
    case 0xC2287E: cpu.execute_instruction<0x8D>(0x009837, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:25 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC22881: cpu.execute_instruction<0xAD>(0x009835, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:25 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC22884: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:25 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC22886: cpu.execute_instruction<0xAD>(0x009837, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:25 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC22889: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/atm_deposit.asm:26 SEC
    case 0xC2288B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2288C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2288E: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22890: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22892: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22894: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:27 SUB_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22896: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:28 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC22898: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:28 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC2289A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:28 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC2289C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:28 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC2289E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/atm_deposit.asm:29 SEC
    case 0xC228A0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC228A1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC228A3: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC228A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC228A7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC228A9: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:30 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC228AB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_deposit.asm:31 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC228AD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_deposit.asm:31 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC228AF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_deposit.asm:31 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC228B1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_deposit.asm:31 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC228B3: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/atm_deposit.asm:32 END_C_FUNCTION
    case 0xC228B5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/atm_deposit.asm:32 END_C_FUNCTION
    case 0xC228B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/atm_withdraw.asm (source_named).
bool execute_miscellaneous_atm_withdraw_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/atm_withdraw.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC228B7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    case 0xC228B9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    case 0xC228BA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    case 0xC228BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC228BB.
    case 0xC228BD: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/atm_withdraw.asm:6 END_STACK_VARS
    case 0xC228BE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/atm_withdraw.asm:7 MOVE_INT @PARAM00, $0A
    case 0xC228BF: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/atm_withdraw.asm:7 MOVE_INT @PARAM00, $0A
    case 0xC228C1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/atm_withdraw.asm:7 MOVE_INT @PARAM00, $0A
    case 0xC228C3: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/atm_withdraw.asm:7 MOVE_INT @PARAM00, $0A
    case 0xC228C5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/atm_withdraw.asm:8 LDY #.LOWORD(GAME_STATE) + game_state::bank_balance
    case 0xC228C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000035, 2); else cpu.execute_instruction<0xA0>(0x009835, 3); return true;
    // src/misc/atm_withdraw.asm:8 LDY #.LOWORD(GAME_STATE) + game_state::bank_balance
    // Overlapping static entry reached from 0xC228C7.
    case 0xC228C9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/atm_withdraw.asm:9 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC228CA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/atm_withdraw.asm:9 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC228CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/atm_withdraw.asm:9 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC228CF: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/atm_withdraw.asm:9 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC228D2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/atm_withdraw.asm:10 CLC
    case 0xC228D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/atm_withdraw.asm:11 LDA $0A
    case 0xC228D5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/misc/atm_withdraw.asm:12 SBC $06
    case 0xC228D7: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/misc/atm_withdraw.asm:13 LDA $0C
    case 0xC228D9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/misc/atm_withdraw.asm:14 SBC $08
    case 0xC228DB: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // src/misc/atm_withdraw.asm:15 BCS WITHDRAW_FROM_ATM_INSUFFICIENT_FUNDS
    case 0xC228DD: cpu.execute_instruction<0xB0>(0x000017, 2); return true;
    // src/misc/atm_withdraw.asm:16 SEC
    case 0xC228DF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC228E0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC228E2: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC228E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC228E6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC228E8: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/atm_withdraw.asm:17 SUB_INT_ASSIGN $06, $0A
    case 0xC228EA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/atm_withdraw.asm:18 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC228EC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/atm_withdraw.asm:18 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC228EE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/atm_withdraw.asm:18 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC228F1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/atm_withdraw.asm:18 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC228F3: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/atm_withdraw.asm:20 PLD
    case 0xC228F6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/atm_withdraw.asm:21 RTL
    case 0xC228F7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/do_battlebg_dma.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_do_battlebg_dma_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/battlebgs/do_battlebg_dma.asm:3 PHY
    case 0xC0ADB2: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:4 TAY
    case 0xC0ADB3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:5 LDA f:DMA_TARGET_REGISTERS,X
    case 0xC0ADB4: cpu.execute_instruction<0xBF>(0xC0AE1D, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:6 PHA
    case 0xC0ADB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:7 TYA
    case 0xC0ADB9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:8 ASL
    case 0xC0ADBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:9 ASL
    case 0xC0ADBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:10 ASL
    case 0xC0ADBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:11 ASL
    case 0xC0ADBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:12 TAX
    case 0xC0ADBE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ADBF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:14 LDA #^__BSS_START__
    case 0xC0ADC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009F7E, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:15 STA f:A1B0,X
    case 0xC0ADC3: cpu.execute_instruction<0x9F>(0x004304, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:15 STA f:A1B0,X
    // Overlapping static entry reached from 0xC0ADC1.
    case 0xC0ADC4: cpu.execute_instruction<0x04>(0x000043, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:15 STA f:A1B0,X
    // Overlapping static entry reached from 0xC0ADC4.
    case 0xC0ADC6: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:16 STA f:DASB0,X
    case 0xC0ADC7: cpu.execute_instruction<0x9F>(0x004307, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:17 PLA
    case 0xC0ADCB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:18 STA f:BBAD0,X
    case 0xC0ADCC: cpu.execute_instruction<0x9F>(0x004301, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:19 PLA
    case 0xC0ADD0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:20 LDA #$42
    case 0xC0ADD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000042, 2); else cpu.execute_instruction<0xA9>(0x009F42, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:21 STA f:DMAP0,X
    case 0xC0ADD3: cpu.execute_instruction<0x9F>(0x004300, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:21 STA f:DMAP0,X
    // Overlapping static entry reached from 0xC0ADD1.
    case 0xC0ADD4: cpu.execute_instruction<0x00>(0x000043, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC0ADD7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:23 PLA
    case 0xC0ADD9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:24 PHX
    case 0xC0ADDA: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:25 BNE @UNKNOWN1
    case 0xC0ADDB: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:26 LDX #$0006
    case 0xC0ADDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:26 LDX #$0006
    // Overlapping static entry reached from 0xC0ADDD.
    case 0xC0ADDF: cpu.execute_instruction<0x00>(0x0000BF, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:28 LDA f:UNKNOWN_C0AE26,X
    case 0xC0ADE0: cpu.execute_instruction<0xBF>(0xC0AE26, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:29 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_TABLE,X
    case 0xC0ADE4: cpu.execute_instruction<0x9D>(0x003C32, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:30 DEX
    case 0xC0ADE7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:31 DEX
    case 0xC0ADE8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:32 BPL @UNKNOWN0
    case 0xC0ADE9: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:33 LDA #.LOWORD(ANIMATED_BACKGROUND_LAYER_1_HDMA_TABLE)
    case 0xC0ADEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x003C32, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:33 LDA #.LOWORD(ANIMATED_BACKGROUND_LAYER_1_HDMA_TABLE)
    // Overlapping static entry reached from 0xC0ADEB.
    case 0xC0ADED: cpu.execute_instruction<0x3C>(0x001180, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:34 BRA @UNKNOWN3
    case 0xC0ADEE: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:36 LDX #6
    case 0xC0ADF0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:36 LDX #6
    // Overlapping static entry reached from 0xC0ADF0.
    case 0xC0ADF2: cpu.execute_instruction<0x00>(0x0000BF, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:38 LDA f:UNKNOWN_C0AE2D,X
    case 0xC0ADF3: cpu.execute_instruction<0xBF>(0xC0AE2D, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:39 STA ANIMATED_BACKGROUND_LAYER_2_HDMA_TABLE,X
    case 0xC0ADF7: cpu.execute_instruction<0x9D>(0x003C3C, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:40 DEX
    case 0xC0ADFA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:41 DEX
    case 0xC0ADFB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:42 BPL @UNKNOWN2
    case 0xC0ADFC: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:43 LDA #.LOWORD(ANIMATED_BACKGROUND_LAYER_2_HDMA_TABLE)
    case 0xC0ADFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x003C3C, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:43 LDA #.LOWORD(ANIMATED_BACKGROUND_LAYER_2_HDMA_TABLE)
    // Overlapping static entry reached from 0xC0ADFE.
    case 0xC0AE00: cpu.execute_instruction<0x3C>(0x009FFA, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:45 PLX
    case 0xC0AE01: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:46 STA f:A1T0L,X
    case 0xC0AE02: cpu.execute_instruction<0x9F>(0x004302, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:46 STA f:A1T0L,X
    // Overlapping static entry reached from 0xC0AE00.
    case 0xC0AE03: cpu.execute_instruction<0x02>(0x000043, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AE06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:48 TYX
    case 0xC0AE08: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:49 LDA HDMAEN_MIRROR
    case 0xC0AE09: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:50 ORA f:DMA_FLAGS,X
    case 0xC0AE0C: cpu.execute_instruction<0x1F>(0xC0AE16, 4); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:51 STA HDMAEN_MIRROR
    case 0xC0AE10: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC0AE13: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/do_battlebg_dma.asm:53 RTL
    case 0xC0AE15: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/generate_frame.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_generate_frame_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/battlebgs/generate_frame.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC2C92D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C92F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C930: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C931: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C932: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E1, 2); else cpu.execute_instruction<0x69>(0x00FFE1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C932.
    case 0xC2C934: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C935: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/battlebgs/generate_frame.asm:17 END_STACK_VARS
    case 0xC2C936: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:18 STX @LOCAL08
    case 0xC2C937: cpu.execute_instruction<0x86>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:18 STX @LOCAL08
    // Overlapping static entry reached from 0xC2C934.
    case 0xC2C938: cpu.execute_instruction<0x1D>(0x001B85, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:19 STA @LOCAL07
    case 0xC2C939: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:20 LDA (@LOCAL07)
    case 0xC2C93B: cpu.execute_instruction<0xB2>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:21 AND #$00FF
    case 0xC2C93D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2C93D.
    case 0xC2C93F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:22 STA @LOCAL06
    case 0xC2C940: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:23 LDY #loaded_bg_data::freeze_palette_scrolling
    case 0xC2C942: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:23 LDY #loaded_bg_data::freeze_palette_scrolling
    // Overlapping static entry reached from 0xC2C942.
    case 0xC2C944: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:24 LDA (@LOCAL07),Y
    case 0xC2C945: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:25 AND #$00FF
    case 0xC2C947: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC2C947.
    case 0xC2C949: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:26 BNEL @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2C94A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:26 BNEL @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2C94C: cpu.execute_instruction<0x4C>(0x00CD86, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:27 LDA @LOCAL07
    case 0xC2C94F: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:28 CLC
    case 0xC2C951: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:29 ADC #loaded_bg_data::palette_change_duration_left
    case 0xC2C952: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:29 ADC #loaded_bg_data::palette_change_duration_left
    // Overlapping static entry reached from 0xC2C952.
    case 0xC2C954: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:30 TAX
    case 0xC2C955: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C956: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:32 LDA __BSS_START__,X
    case 0xC2C958: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:33 STA @LOCAL05
    case 0xC2C95B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC2C95D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:35 AND #$00FF
    case 0xC2C95F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC2C95F.
    case 0xC2C961: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:36 BEQL @UNKNOWN23
    case 0xC2C962: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:36 BEQL @UNKNOWN23
    case 0xC2C964: cpu.execute_instruction<0x4C>(0x00CBAE, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C967: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:38 LDA @LOCAL05
    case 0xC2C969: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:39 DEC
    case 0xC2C96B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:40 STA __BSS_START__,X
    case 0xC2C96C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC2C96F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:42 AND #$00FF
    case 0xC2C971: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC2C971.
    case 0xC2C973: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:43 BNEL @UNKNOWN23
    case 0xC2C974: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:43 BNEL @UNKNOWN23
    case 0xC2C976: cpu.execute_instruction<0x4C>(0x00CBAE, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:44 LDY #loaded_bg_data::palette_change_speed
    case 0xC2C979: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:44 LDY #loaded_bg_data::palette_change_speed
    // Overlapping static entry reached from 0xC2C979.
    case 0xC2C97B: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C97C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:46 LDA (@LOCAL07),Y
    case 0xC2C97E: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:47 STA __BSS_START__,X
    case 0xC2C980: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:48 LDY #loaded_bg_data::palette_shifting_style
    case 0xC2C983: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:48 LDY #loaded_bg_data::palette_shifting_style
    // Overlapping static entry reached from 0xC2C983.
    case 0xC2C985: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC2C986: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:50 LDA (@LOCAL07),Y
    case 0xC2C988: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:51 AND #$00FF
    case 0xC2C98A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC2C98A.
    case 0xC2C98C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:52 CMP #2
    case 0xC2C98D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:52 CMP #2
    // Overlapping static entry reached from 0xC2C98D.
    case 0xC2C98F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:53 BEQ @PALETTE_SHIFTING_STYLE2
    case 0xC2C990: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:54 CMP #1
    case 0xC2C992: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:54 CMP #1
    // Overlapping static entry reached from 0xC2C992.
    case 0xC2C994: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:55 BEQL @PALETTE_SHIFTING_STYLE1
    case 0xC2C995: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:55 BEQL @PALETTE_SHIFTING_STYLE1
    case 0xC2C997: cpu.execute_instruction<0x4C>(0x00CA3B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:56 CMP #3
    case 0xC2C99A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:56 CMP #3
    // Overlapping static entry reached from 0xC2C99A.
    case 0xC2C99C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:57 BEQL @PALETTE_SHIFTING_STYLE3
    case 0xC2C99D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:57 BEQL @PALETTE_SHIFTING_STYLE3
    case 0xC2C99F: cpu.execute_instruction<0x4C>(0x00CAD9, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:58 JMP @PALETTE_SHIFTING_DONE
    case 0xC2C9A2: cpu.execute_instruction<0x4C>(0x00CBA5, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:60 LDY #loaded_bg_data::palette_cycle_2_last
    case 0xC2C9A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:60 LDY #loaded_bg_data::palette_cycle_2_last
    // Overlapping static entry reached from 0xC2C9A5.
    case 0xC2C9A7: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C9A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:62 LDA (@LOCAL07),Y
    case 0xC2C9AA: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:63 LDY #loaded_bg_data::palette_cycle_2_first
    case 0xC2C9AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:63 LDY #loaded_bg_data::palette_cycle_2_first
    // Overlapping static entry reached from 0xC2C9AC.
    case 0xC2C9AE: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:64 SEC
    case 0xC2C9AF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:65 SBC (@LOCAL07),Y
    case 0xC2C9B0: cpu.execute_instruction<0xF1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC2C9B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:67 AND #$00FF
    case 0xC2C9B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC2C9B4.
    case 0xC2C9B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:68 STA @VIRTUAL02
    case 0xC2C9B7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:69 INC @VIRTUAL02
    case 0xC2C9B9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:70 LDX #0
    case 0xC2C9BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:70 LDX #0
    // Overlapping static entry reached from 0xC2C9BB.
    case 0xC2C9BD: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:71 STX @LOCAL04
    case 0xC2C9BE: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:72 BRA @UNKNOWN9
    case 0xC2C9C0: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:74 LDY #loaded_bg_data::palette_cycle_2_step
    case 0xC2C9C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:74 LDY #loaded_bg_data::palette_cycle_2_step
    // Overlapping static entry reached from 0xC2C9C2.
    case 0xC2C9C4: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:75 LDA (@LOCAL07),Y
    case 0xC2C9C5: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:76 AND #$00FF
    case 0xC2C9C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC2C9C7.
    case 0xC2C9C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:77 STA @VIRTUAL04
    case 0xC2C9CA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:78 TXA
    case 0xC2C9CC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:79 CMP @VIRTUAL04
    case 0xC2C9CD: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:80 BCS @UNKNOWN7
    case 0xC2C9CF: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:81 TXA
    case 0xC2C9D1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:82 CLC
    case 0xC2C9D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:83 ADC @VIRTUAL02
    case 0xC2C9D3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:84 SEC
    case 0xC2C9D5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:85 SBC @VIRTUAL04
    case 0xC2C9D6: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:86 STA @LOCAL03
    case 0xC2C9D8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:87 BRA @UNKNOWN8
    case 0xC2C9DA: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:89 TXA
    case 0xC2C9DC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:90 SEC
    case 0xC2C9DD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:91 SBC @VIRTUAL04
    case 0xC2C9DE: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:92 STA @LOCAL03
    case 0xC2C9E0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:94 LDY #loaded_bg_data::palette_cycle_2_first
    case 0xC2C9E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:94 LDY #loaded_bg_data::palette_cycle_2_first
    // Overlapping static entry reached from 0xC2C9E2.
    case 0xC2C9E4: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:95 LDA (@LOCAL07),Y
    case 0xC2C9E5: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:96 AND #$00FF
    case 0xC2C9E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC2C9E7.
    case 0xC2C9E9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:97 TAY
    case 0xC2C9EA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:98 STY @LOCAL02
    case 0xC2C9EB: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:99 STX @VIRTUAL04
    case 0xC2C9ED: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:100 TYA
    case 0xC2C9EF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:101 CLC
    case 0xC2C9F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:102 ADC @VIRTUAL04
    case 0xC2C9F1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:103 ASL
    case 0xC2C9F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:104 LDY #loaded_bg_data::palette_pointer
    case 0xC2C9F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:104 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2C9F4.
    case 0xC2C9F6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:105 CLC
    case 0xC2C9F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:106 ADC (@LOCAL07),Y
    case 0xC2C9F8: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:107 PHA
    case 0xC2C9FA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:108 LDA @LOCAL03
    case 0xC2C9FB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:109 STA @VIRTUAL04
    case 0xC2C9FD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:110 LDY @LOCAL02
    case 0xC2C9FF: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:111 TYA
    case 0xC2CA01: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:112 CLC
    case 0xC2CA02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:113 ADC @VIRTUAL04
    case 0xC2CA03: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:114 ASL
    case 0xC2CA05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:115 CLC
    case 0xC2CA06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:116 ADC @LOCAL07
    case 0xC2CA07: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:117 TAX
    case 0xC2CA09: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:118 LDA __BSS_START__+12,X
    case 0xC2CA0A: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:119 PLX
    case 0xC2CA0D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:120 STA __BSS_START__,X
    case 0xC2CA0E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:121 LDX @LOCAL04
    case 0xC2CA11: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:122 INX
    case 0xC2CA13: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:123 STX @LOCAL04
    case 0xC2CA14: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:125 TXA
    case 0xC2CA16: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:126 CMP @VIRTUAL02
    case 0xC2CA17: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:127 BCC @UNKNOWN6
    case 0xC2CA19: cpu.execute_instruction<0x90>(0x0000A7, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:128 LDA @LOCAL07
    case 0xC2CA1B: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:129 CLC
    case 0xC2CA1D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:130 ADC #loaded_bg_data::palette_cycle_2_step
    case 0xC2CA1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:130 ADC #loaded_bg_data::palette_cycle_2_step
    // Overlapping static entry reached from 0xC2CA1E.
    case 0xC2CA20: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:131 TAX
    case 0xC2CA21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:132 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CA22: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:133 LDA __BSS_START__,X
    case 0xC2CA24: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:134 INC
    case 0xC2CA27: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:135 STA __BSS_START__,X
    case 0xC2CA28: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC2CA2B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:137 AND #$00FF
    case 0xC2CA2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:137 AND #$00FF
    // Overlapping static entry reached from 0xC2CA2D.
    case 0xC2CA2F: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:138 CMP @VIRTUAL02
    case 0xC2CA30: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:139 BCC @PALETTE_SHIFTING_STYLE1
    case 0xC2CA32: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:140 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CA34: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:141 LDA #0
    case 0xC2CA36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:142 STA __BSS_START__,X
    case 0xC2CA38: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:142 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CA36.
    case 0xC2CA39: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:144 LDY #loaded_bg_data::palette_cycle_1_last
    case 0xC2CA3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:144 LDY #loaded_bg_data::palette_cycle_1_last
    // Overlapping static entry reached from 0xC2CA3B.
    case 0xC2CA3D: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:145 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CA3E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:146 LDA (@LOCAL07),Y
    case 0xC2CA40: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:147 LDY #loaded_bg_data::palette_cycle_1_first
    case 0xC2CA42: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:147 LDY #loaded_bg_data::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2CA42.
    case 0xC2CA44: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:148 SEC
    case 0xC2CA45: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:149 SBC (@LOCAL07),Y
    case 0xC2CA46: cpu.execute_instruction<0xF1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC2CA48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:151 AND #$00FF
    case 0xC2CA4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC2CA4A.
    case 0xC2CA4C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:152 STA @VIRTUAL02
    case 0xC2CA4D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:153 INC @VIRTUAL02
    case 0xC2CA4F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:154 LDX #0
    case 0xC2CA51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:154 LDX #0
    // Overlapping static entry reached from 0xC2CA51.
    case 0xC2CA53: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:155 STX @LOCAL04
    case 0xC2CA54: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:156 BRA @UNKNOWN14
    case 0xC2CA56: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:158 LDY #loaded_bg_data::palette_cycle_1_step
    case 0xC2CA58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:158 LDY #loaded_bg_data::palette_cycle_1_step
    // Overlapping static entry reached from 0xC2CA58.
    case 0xC2CA5A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:159 LDA (@LOCAL07),Y
    case 0xC2CA5B: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:160 AND #$00FF
    case 0xC2CA5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:160 AND #$00FF
    // Overlapping static entry reached from 0xC2CA5D.
    case 0xC2CA5F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:161 STA @VIRTUAL04
    case 0xC2CA60: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:162 TXA
    case 0xC2CA62: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:163 CMP @VIRTUAL04
    case 0xC2CA63: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:164 BCS @UNKNOWN12
    case 0xC2CA65: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:165 TXA
    case 0xC2CA67: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:166 CLC
    case 0xC2CA68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:167 ADC @VIRTUAL02
    case 0xC2CA69: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:168 SEC
    case 0xC2CA6B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:169 SBC @VIRTUAL04
    case 0xC2CA6C: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:170 STA @LOCAL03
    case 0xC2CA6E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:171 BRA @UNKNOWN13
    case 0xC2CA70: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:173 TXA
    case 0xC2CA72: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:174 SEC
    case 0xC2CA73: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:175 SBC @VIRTUAL04
    case 0xC2CA74: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:176 STA @LOCAL03
    case 0xC2CA76: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:178 LDY #loaded_bg_data::palette_cycle_1_first
    case 0xC2CA78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:178 LDY #loaded_bg_data::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2CA78.
    case 0xC2CA7A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:179 LDA (@LOCAL07),Y
    case 0xC2CA7B: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:180 AND #$00FF
    case 0xC2CA7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:180 AND #$00FF
    // Overlapping static entry reached from 0xC2CA7D.
    case 0xC2CA7F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:181 TAY
    case 0xC2CA80: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:182 STY @LOCAL02
    case 0xC2CA81: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:183 STX @VIRTUAL04
    case 0xC2CA83: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:184 TYA
    case 0xC2CA85: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:185 CLC
    case 0xC2CA86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:186 ADC @VIRTUAL04
    case 0xC2CA87: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:187 ASL
    case 0xC2CA89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:188 LDY #loaded_bg_data::palette_pointer
    case 0xC2CA8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:188 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2CA8A.
    case 0xC2CA8C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:189 CLC
    case 0xC2CA8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:190 ADC (@LOCAL07),Y
    case 0xC2CA8E: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:191 PHA
    case 0xC2CA90: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:192 LDA @LOCAL03
    case 0xC2CA91: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:193 STA @VIRTUAL04
    case 0xC2CA93: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:194 LDY @LOCAL02
    case 0xC2CA95: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:195 TYA
    case 0xC2CA97: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:196 CLC
    case 0xC2CA98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:197 ADC @VIRTUAL04
    case 0xC2CA99: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:198 ASL
    case 0xC2CA9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:199 CLC
    case 0xC2CA9C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:200 ADC @LOCAL07
    case 0xC2CA9D: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:201 TAX
    case 0xC2CA9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:202 LDA __BSS_START__+12,X
    case 0xC2CAA0: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:203 PLX
    case 0xC2CAA3: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:204 STA __BSS_START__,X
    case 0xC2CAA4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:205 LDX @LOCAL04
    case 0xC2CAA7: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:206 INX
    case 0xC2CAA9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:207 STX @LOCAL04
    case 0xC2CAAA: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:209 TXA
    case 0xC2CAAC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:210 CMP @VIRTUAL02
    case 0xC2CAAD: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:211 BCC @UNKNOWN11
    case 0xC2CAAF: cpu.execute_instruction<0x90>(0x0000A7, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:212 LDA @LOCAL07
    case 0xC2CAB1: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:213 CLC
    case 0xC2CAB3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:214 ADC #loaded_bg_data::palette_cycle_1_step
    case 0xC2CAB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:214 ADC #loaded_bg_data::palette_cycle_1_step
    // Overlapping static entry reached from 0xC2CAB4.
    case 0xC2CAB6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:215 TAX
    case 0xC2CAB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:216 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CAB8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:217 LDA __BSS_START__,X
    case 0xC2CABA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:218 INC
    case 0xC2CABD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:219 STA __BSS_START__,X
    case 0xC2CABE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC2CAC1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:221 AND #$00FF
    case 0xC2CAC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC2CAC3.
    case 0xC2CAC5: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:222 CMP @VIRTUAL02
    case 0xC2CAC6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:223 BCCL @PALETTE_SHIFTING_DONE
    case 0xC2CAC8: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:223 BCCL @PALETTE_SHIFTING_DONE
    case 0xC2CACA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:223 BCCL @PALETTE_SHIFTING_DONE
    case 0xC2CACC: cpu.execute_instruction<0x4C>(0x00CBA5, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:224 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CACF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:225 LDA #0
    case 0xC2CAD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:226 STA __BSS_START__,X
    case 0xC2CAD3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:226 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CAD1.
    case 0xC2CAD4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:227 JMP @PALETTE_SHIFTING_DONE
    case 0xC2CAD6: cpu.execute_instruction<0x4C>(0x00CBA5, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:229 LDY #loaded_bg_data::palette_cycle_1_last
    case 0xC2CAD9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:229 LDY #loaded_bg_data::palette_cycle_1_last
    // Overlapping static entry reached from 0xC2CAD9.
    case 0xC2CADB: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:230 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CADC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:231 LDA (@LOCAL07),Y
    case 0xC2CADE: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:232 LDY #loaded_bg_data::palette_cycle_1_first
    case 0xC2CAE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:232 LDY #loaded_bg_data::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2CAE0.
    case 0xC2CAE2: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:233 SEC
    case 0xC2CAE3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:234 SBC (@LOCAL07),Y
    case 0xC2CAE4: cpu.execute_instruction<0xF1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:235 REP #PROC_FLAGS::ACCUM8
    case 0xC2CAE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:236 AND #$00FF
    case 0xC2CAE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC2CAE8.
    case 0xC2CAEA: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:237 INC
    case 0xC2CAEB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:238 STA @LOCAL01
    case 0xC2CAEC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:239 LDY #0
    case 0xC2CAEE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:239 LDY #0
    // Overlapping static entry reached from 0xC2CAEE.
    case 0xC2CAF0: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:240 STY @LOCAL00
    case 0xC2CAF1: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:241 BRA @UNKNOWN20
    case 0xC2CAF3: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:243 LDY #loaded_bg_data::palette_cycle_1_step
    case 0xC2CAF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:243 LDY #loaded_bg_data::palette_cycle_1_step
    // Overlapping static entry reached from 0xC2CAF5.
    case 0xC2CAF7: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:244 LDA (@LOCAL07),Y
    case 0xC2CAF8: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:245 AND #$00FF
    case 0xC2CAFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:245 AND #$00FF
    // Overlapping static entry reached from 0xC2CAFA.
    case 0xC2CAFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:246 STA @VIRTUAL04
    case 0xC2CAFD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:247 LDY @LOCAL00
    case 0xC2CAFF: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:248 TYA
    case 0xC2CB01: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:249 CLC
    case 0xC2CB02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:250 ADC @VIRTUAL04
    case 0xC2CB03: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:251 STA @VIRTUAL02
    case 0xC2CB05: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:252 STA @LOCAL03
    case 0xC2CB07: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:253 LDA @LOCAL01
    case 0xC2CB09: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:254 ASL
    case 0xC2CB0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:255 STA @VIRTUAL04
    case 0xC2CB0C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:256 LDA @VIRTUAL02
    case 0xC2CB0E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:257 CMP @VIRTUAL04
    case 0xC2CB10: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:258 BCC @UNKNOWN18
    case 0xC2CB12: cpu.execute_instruction<0x90>(0x00000B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:259 LDA @VIRTUAL02
    case 0xC2CB14: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:260 SEC
    case 0xC2CB16: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:261 SBC @VIRTUAL04
    case 0xC2CB17: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:262 STA @VIRTUAL02
    case 0xC2CB19: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:263 STA @LOCAL03
    case 0xC2CB1B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:264 BRA @UNKNOWN19
    case 0xC2CB1D: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:266 LDA @LOCAL01
    case 0xC2CB1F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:267 PHA
    case 0xC2CB21: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:268 LDA @VIRTUAL02
    case 0xC2CB22: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:269 PLY
    case 0xC2CB24: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:270 STY @VIRTUAL02
    case 0xC2CB25: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:271 CMP @VIRTUAL02
    case 0xC2CB27: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:272 BCC @UNKNOWN19
    case 0xC2CB29: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:273 LDA @LOCAL03
    case 0xC2CB2B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:274 STA @VIRTUAL02
    case 0xC2CB2D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:275 LDA @VIRTUAL04
    case 0xC2CB2F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:276 DEC
    case 0xC2CB31: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:277 SEC
    case 0xC2CB32: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:278 SBC @VIRTUAL02
    case 0xC2CB33: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:279 STA @VIRTUAL02
    case 0xC2CB35: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:280 STA @LOCAL03
    case 0xC2CB37: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:282 LDY #loaded_bg_data::palette_cycle_1_first
    case 0xC2CB39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:282 LDY #loaded_bg_data::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2CB39.
    case 0xC2CB3B: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:283 LDA (@LOCAL07),Y
    case 0xC2CB3C: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:284 AND #$00FF
    case 0xC2CB3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:284 AND #$00FF
    // Overlapping static entry reached from 0xC2CB3E.
    case 0xC2CB40: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:285 TAX
    case 0xC2CB41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:286 LDY @LOCAL00
    case 0xC2CB42: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:287 STY @VIRTUAL02
    case 0xC2CB44: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:288 TXA
    case 0xC2CB46: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:289 CLC
    case 0xC2CB47: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:290 ADC @VIRTUAL02
    case 0xC2CB48: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:291 ASL
    case 0xC2CB4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:292 LDY #loaded_bg_data::palette_pointer
    case 0xC2CB4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:292 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2CB4B.
    case 0xC2CB4D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:293 CLC
    case 0xC2CB4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:294 ADC (@LOCAL07),Y
    case 0xC2CB4F: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:295 PHA
    case 0xC2CB51: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:296 LDA @LOCAL03
    case 0xC2CB52: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:297 STA @VIRTUAL02
    case 0xC2CB54: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:298 TXA
    case 0xC2CB56: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:299 CLC
    case 0xC2CB57: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:300 ADC @VIRTUAL02
    case 0xC2CB58: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:301 ASL
    case 0xC2CB5A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:302 CLC
    case 0xC2CB5B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:303 ADC @LOCAL07
    case 0xC2CB5C: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:304 TAX
    case 0xC2CB5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:305 LDA __BSS_START__+12,X
    case 0xC2CB5F: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:306 PLX
    case 0xC2CB62: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:307 STA __BSS_START__,X
    case 0xC2CB63: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:308 LDY @LOCAL00
    case 0xC2CB66: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:309 INY
    case 0xC2CB68: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:310 STY @LOCAL00
    case 0xC2CB69: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:312 LDA @LOCAL01
    case 0xC2CB6B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:313 STA @VIRTUAL02
    case 0xC2CB6D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:314 TYA
    case 0xC2CB6F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:315 CMP @VIRTUAL02
    case 0xC2CB70: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:316 BCCL @UNKNOWN17
    case 0xC2CB72: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:316 BCCL @UNKNOWN17
    case 0xC2CB74: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:316 BCCL @UNKNOWN17
    case 0xC2CB76: cpu.execute_instruction<0x4C>(0x00CAF5, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:317 LDA @LOCAL07
    case 0xC2CB79: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:318 CLC
    case 0xC2CB7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:319 ADC #loaded_bg_data::palette_cycle_1_step
    case 0xC2CB7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:319 ADC #loaded_bg_data::palette_cycle_1_step
    // Overlapping static entry reached from 0xC2CB7C.
    case 0xC2CB7E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:320 TAX
    case 0xC2CB7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:321 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CB80: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:322 LDA __BSS_START__,X
    case 0xC2CB82: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:323 STA @VIRTUAL00
    case 0xC2CB85: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:324 INC @VIRTUAL00
    case 0xC2CB87: cpu.execute_instruction<0xE6>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:325 LDA @VIRTUAL00
    case 0xC2CB89: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:326 STA __BSS_START__,X
    case 0xC2CB8B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:327 REP #PROC_FLAGS::ACCUM8
    case 0xC2CB8E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:328 LDA @LOCAL01
    case 0xC2CB90: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:329 ASL
    case 0xC2CB92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:330 STA @VIRTUAL02
    case 0xC2CB93: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:331 LDA @VIRTUAL00
    case 0xC2CB95: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:332 AND #$00FF
    case 0xC2CB97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:332 AND #$00FF
    // Overlapping static entry reached from 0xC2CB97.
    case 0xC2CB99: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:333 CMP @VIRTUAL02
    case 0xC2CB9A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:334 BCC @PALETTE_SHIFTING_DONE
    case 0xC2CB9C: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:335 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CB9E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:336 LDA #0
    case 0xC2CBA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:337 STA __BSS_START__,X
    case 0xC2CBA2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:337 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CBA0.
    case 0xC2CBA3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:339 REP #PROC_FLAGS::ACCUM8
    case 0xC2CBA5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:340 LDA #24
    case 0xC2CBA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:340 LDA #24
    // Overlapping static entry reached from 0xC2CBA7.
    case 0xC2CBA9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:341 JSL UNKNOWN_C0856B
    case 0xC2CBAA: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:343 LDA GIYGAS_PHASE
    case 0xC2CBAE: cpu.execute_instruction<0xAD>(0x00A97A, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:344 CMP #GIYGAS_PHASES::DEFEATED
    case 0xC2CBB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:344 CMP #GIYGAS_PHASES::DEFEATED
    // Overlapping static entry reached from 0xC2CBB1.
    case 0xC2CBB3: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:345 BEQL @RETURN
    case 0xC2CBB4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:345 BEQL @RETURN
    case 0xC2CBB6: cpu.execute_instruction<0x4C>(0x00CFE3, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:345 BEQL @RETURN
    // Overlapping static entry reached from 0xC2CBB3.
    case 0xC2CBB7: cpu.execute_instruction<0xE3>(0x0000CF, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:346 LDA @LOCAL07
    case 0xC2CBB9: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:347 CLC
    case 0xC2CBBB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:348 ADC #loaded_bg_data::scrolling_duration_left
    case 0xC2CBBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000053, 2); else cpu.execute_instruction<0x69>(0x000053, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:348 ADC #loaded_bg_data::scrolling_duration_left
    // Overlapping static entry reached from 0xC2CBBC.
    case 0xC2CBBE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:349 TAX
    case 0xC2CBBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:350 LDA __BSS_START__,X
    case 0xC2CBC0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:351 BEQL @UNKNOWN29
    case 0xC2CBC3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:351 BEQL @UNKNOWN29
    case 0xC2CBC5: cpu.execute_instruction<0x4C>(0x00CC9C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:352 DEC
    case 0xC2CBC8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:353 STA __BSS_START__,X
    case 0xC2CBC9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:354 BNEL @UNKNOWN29
    case 0xC2CBCC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:354 BNEL @UNKNOWN29
    case 0xC2CBCE: cpu.execute_instruction<0x4C>(0x00CC9C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:355 LDA @LOCAL07
    case 0xC2CBD1: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:356 CLC
    case 0xC2CBD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:357 ADC #loaded_bg_data::current_scrolling_movement
    case 0xC2CBD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000052, 2); else cpu.execute_instruction<0x69>(0x000052, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:357 ADC #loaded_bg_data::current_scrolling_movement
    // Overlapping static entry reached from 0xC2CBD4.
    case 0xC2CBD6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:358 TAX
    case 0xC2CBD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:359 STX @LOCAL00
    case 0xC2CBD8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:360 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CBDA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:361 LDA __BSS_START__,X
    case 0xC2CBDC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:362 INC
    case 0xC2CBDF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:363 AND #$0003
    case 0xC2CBE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x009D03, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:364 STA __BSS_START__,X
    case 0xC2CBE2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:364 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CBE0.
    case 0xC2CBE3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:365 REP #PROC_FLAGS::ACCUM8
    case 0xC2CBE5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:366 AND #$00FF
    case 0xC2CBE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:366 AND #$00FF
    // Overlapping static entry reached from 0xC2CBE7.
    case 0xC2CBE9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:367 CLC
    case 0xC2CBEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:368 ADC @LOCAL07
    case 0xC2CBEB: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:369 TAX
    case 0xC2CBED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:370 LDA __BSS_START__+78,X
    case 0xC2CBEE: cpu.execute_instruction<0xBD>(0x00004E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:371 AND #$00FF
    case 0xC2CBF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:371 AND #$00FF
    // Overlapping static entry reached from 0xC2CBF1.
    case 0xC2CBF3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:372 STA @LOCAL01
    case 0xC2CBF4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:373 BNE @UNKNOWN27
    case 0xC2CBF6: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:374 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CBF8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:375 LDA #0
    case 0xC2CBFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A600, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:376 LDX @LOCAL00
    case 0xC2CBFC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:376 LDX @LOCAL00
    // Overlapping static entry reached from 0xC2CBFA.
    case 0xC2CBFD: cpu.execute_instruction<0x0E>(0x00009D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:377 STA __BSS_START__,X
    case 0xC2CBFE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:377 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CBFD.
    case 0xC2CC00: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:383 LDY #loaded_bg_data::scrolling_movements
    case 0xC2CC01: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:383 LDY #loaded_bg_data::scrolling_movements
    // Overlapping static entry reached from 0xC2CC01.
    case 0xC2CC03: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:384 REP #PROC_FLAGS::ACCUM8
    case 0xC2CC04: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:385 LDA (@LOCAL07),Y
    case 0xC2CC06: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:387 AND #$00FF
    case 0xC2CC08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC2CC08.
    case 0xC2CC0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:388 STA @LOCAL01
    case 0xC2CC0B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:390 CMP #0
    case 0xC2CC0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:390 CMP #0
    // Overlapping static entry reached from 0xC2CC0D.
    case 0xC2CC0F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:391 BEQL @UNKNOWN29
    case 0xC2CC10: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:391 BEQL @UNKNOWN29
    case 0xC2CC12: cpu.execute_instruction<0x4C>(0x00CC9C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    case 0xC2CC15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x00F258, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CC15.
    case 0xC2CC17: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    case 0xC2CC18: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CC17.
    case 0xC2CC19: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    case 0xC2CC1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CC19.
    case 0xC2CC1B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CC1A.
    case 0xC2CC1C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:392 LOADPTR BG_SCROLLING_TABLE, @VIRTUAL06
    case 0xC2CC1D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:393 LDA @LOCAL01
    case 0xC2CC1F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CC21: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CC23: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CC24: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CC25: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:394 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC2CC27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:395 STA @LOCAL02
    case 0xC2CC28: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:396 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC2A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:396 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC2C: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:396 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC2E: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:396 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC30: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:397 CLC
    case 0xC2CC32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:398 ADC @VIRTUAL0A
    case 0xC2CC33: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:399 STA @VIRTUAL0A
    case 0xC2CC35: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:400 LDA [@VIRTUAL0A]
    case 0xC2CC37: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:401 LDY #loaded_bg_data::scrolling_duration_left
    case 0xC2CC39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000053, 2); else cpu.execute_instruction<0xA0>(0x000053, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:401 LDY #loaded_bg_data::scrolling_duration_left
    // Overlapping static entry reached from 0xC2CC39.
    case 0xC2CC3B: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:402 STA (@LOCAL07),Y
    case 0xC2CC3C: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:403 LDA @LOCAL02
    case 0xC2CC3E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:405 INC
    case 0xC2CC40: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:406 INC
    case 0xC2CC41: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:407 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC42: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:407 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC44: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:407 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC46: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:407 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC48: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:408 CLC
    case 0xC2CC4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:409 ADC @VIRTUAL0A
    case 0xC2CC4B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:410 STA @VIRTUAL0A
    case 0xC2CC4D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:411 LDA [@VIRTUAL0A]
    case 0xC2CC4F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:412 LDY #loaded_bg_data::horizontal_velocity
    case 0xC2CC51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000059, 2); else cpu.execute_instruction<0xA0>(0x000059, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:412 LDY #loaded_bg_data::horizontal_velocity
    // Overlapping static entry reached from 0xC2CC51.
    case 0xC2CC53: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:413 STA (@LOCAL07),Y
    case 0xC2CC54: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:414 LDA @LOCAL02
    case 0xC2CC56: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:416 INC
    case 0xC2CC58: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:417 INC
    case 0xC2CC59: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:418 INC
    case 0xC2CC5A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:419 INC
    case 0xC2CC5B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:420 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC5C: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:420 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC5E: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:420 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC60: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:420 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC62: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:421 CLC
    case 0xC2CC64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:422 ADC @VIRTUAL0A
    case 0xC2CC65: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:423 STA @VIRTUAL0A
    case 0xC2CC67: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:424 LDA [@VIRTUAL0A]
    case 0xC2CC69: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:425 LDY #loaded_bg_data::vertical_velocity
    case 0xC2CC6B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005B, 2); else cpu.execute_instruction<0xA0>(0x00005B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:425 LDY #loaded_bg_data::vertical_velocity
    // Overlapping static entry reached from 0xC2CC6B.
    case 0xC2CC6D: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:426 STA (@LOCAL07),Y
    case 0xC2CC6E: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:427 LDA @LOCAL02
    case 0xC2CC70: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:428 CLC
    case 0xC2CC72: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:429 ADC #bg_scrolling_entry::horizontal_acceleration
    case 0xC2CC73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:429 ADC #bg_scrolling_entry::horizontal_acceleration
    // Overlapping static entry reached from 0xC2CC73.
    case 0xC2CC75: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:430 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC76: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:430 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC78: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:430 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC7A: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:430 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CC7C: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:431 CLC
    case 0xC2CC7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:432 ADC @VIRTUAL0A
    case 0xC2CC7F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:433 STA @VIRTUAL0A
    case 0xC2CC81: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:434 LDA [@VIRTUAL0A]
    case 0xC2CC83: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:435 LDY #loaded_bg_data::horizontal_acceleration
    case 0xC2CC85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005D, 2); else cpu.execute_instruction<0xA0>(0x00005D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:435 LDY #loaded_bg_data::horizontal_acceleration
    // Overlapping static entry reached from 0xC2CC85.
    case 0xC2CC87: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:436 STA (@LOCAL07),Y
    case 0xC2CC88: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:437 LDA @LOCAL02
    case 0xC2CC8A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:438 CLC
    case 0xC2CC8C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:439 ADC #bg_scrolling_entry::vertical_acceleration
    case 0xC2CC8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:439 ADC #bg_scrolling_entry::vertical_acceleration
    // Overlapping static entry reached from 0xC2CC8D.
    case 0xC2CC8F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:440 CLC
    case 0xC2CC90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:441 ADC @VIRTUAL06
    case 0xC2CC91: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:442 STA @VIRTUAL06
    case 0xC2CC93: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:443 LDA [@VIRTUAL06]
    case 0xC2CC95: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:444 LDY #loaded_bg_data::vertical_acceleration
    case 0xC2CC97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:444 LDY #loaded_bg_data::vertical_acceleration
    // Overlapping static entry reached from 0xC2CC97.
    case 0xC2CC99: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:445 STA (@LOCAL07),Y
    case 0xC2CC9A: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:447 LDA @LOCAL07
    case 0xC2CC9C: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:448 CLC
    case 0xC2CC9E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:449 ADC #loaded_bg_data::horizontal_position
    case 0xC2CC9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000055, 2); else cpu.execute_instruction<0x69>(0x000055, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:449 ADC #loaded_bg_data::horizontal_position
    // Overlapping static entry reached from 0xC2CC9F.
    case 0xC2CCA1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:450 STA @VIRTUAL02
    case 0xC2CCA2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:451 LDA @LOCAL07
    case 0xC2CCA4: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:452 CLC
    case 0xC2CCA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:453 ADC #loaded_bg_data::horizontal_velocity
    case 0xC2CCA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000059, 2); else cpu.execute_instruction<0x69>(0x000059, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:453 ADC #loaded_bg_data::horizontal_velocity
    // Overlapping static entry reached from 0xC2CCA7.
    case 0xC2CCA9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:454 TAX
    case 0xC2CCAA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:455 LDY #loaded_bg_data::horizontal_acceleration
    case 0xC2CCAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005D, 2); else cpu.execute_instruction<0xA0>(0x00005D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:455 LDY #loaded_bg_data::horizontal_acceleration
    // Overlapping static entry reached from 0xC2CCAB.
    case 0xC2CCAD: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:456 LDA __BSS_START__,X
    case 0xC2CCAE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:457 CLC
    case 0xC2CCB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:458 ADC (@LOCAL07),Y
    case 0xC2CCB2: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:459 STA __BSS_START__,X
    case 0xC2CCB4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:460 STA @VIRTUAL04
    case 0xC2CCB7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:461 LDX @VIRTUAL02
    case 0xC2CCB9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:462 LDA __BSS_START__,X
    case 0xC2CCBB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:463 CLC
    case 0xC2CCBE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:464 ADC @VIRTUAL04
    case 0xC2CCBF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:465 LDX @VIRTUAL02
    case 0xC2CCC1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:466 STA __BSS_START__,X
    case 0xC2CCC3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:467 LDA @LOCAL07
    case 0xC2CCC6: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:468 CLC
    case 0xC2CCC8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:469 ADC #loaded_bg_data::vertical_position
    case 0xC2CCC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000057, 2); else cpu.execute_instruction<0x69>(0x000057, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:469 ADC #loaded_bg_data::vertical_position
    // Overlapping static entry reached from 0xC2CCC9.
    case 0xC2CCCB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:470 TAY
    case 0xC2CCCC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:471 STY @LOCAL04
    case 0xC2CCCD: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:472 LDA @LOCAL07
    case 0xC2CCCF: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:473 CLC
    case 0xC2CCD1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:474 ADC #loaded_bg_data::vertical_velocity
    case 0xC2CCD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005B, 2); else cpu.execute_instruction<0x69>(0x00005B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:474 ADC #loaded_bg_data::vertical_velocity
    // Overlapping static entry reached from 0xC2CCD2.
    case 0xC2CCD4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:475 TAX
    case 0xC2CCD5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:476 LDY #loaded_bg_data::vertical_acceleration
    case 0xC2CCD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:476 LDY #loaded_bg_data::vertical_acceleration
    // Overlapping static entry reached from 0xC2CCD6.
    case 0xC2CCD8: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:477 LDA __BSS_START__,X
    case 0xC2CCD9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:478 CLC
    case 0xC2CCDC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:479 ADC (@LOCAL07),Y
    case 0xC2CCDD: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:480 STA __BSS_START__,X
    case 0xC2CCDF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:481 STA @VIRTUAL04
    case 0xC2CCE2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:482 LDY @LOCAL04
    case 0xC2CCE4: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:483 LDA __BSS_START__,Y
    case 0xC2CCE6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:484 CLC
    case 0xC2CCE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:485 ADC @VIRTUAL04
    case 0xC2CCEA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:486 STA __BSS_START__,Y
    case 0xC2CCEC: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:487 LDA @LOCAL06
    case 0xC2CCEF: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:488 CMP #BG_LAYER::LAYER_1
    case 0xC2CCF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:488 CMP #BG_LAYER::LAYER_1
    // Overlapping static entry reached from 0xC2CCF1.
    case 0xC2CCF3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:489 BEQ @AFFECT_LAYER_1
    case 0xC2CCF4: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:490 CMP #BG_LAYER::LAYER_2
    case 0xC2CCF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:490 CMP #BG_LAYER::LAYER_2
    // Overlapping static entry reached from 0xC2CCF6.
    case 0xC2CCF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:491 BEQ @AFFECT_LAYER_2
    case 0xC2CCF9: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:492 CMP #BG_LAYER::LAYER_3
    case 0xC2CCFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:492 CMP #BG_LAYER::LAYER_3
    // Overlapping static entry reached from 0xC2CCFB.
    case 0xC2CCFD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:493 BEQ @AFFECT_LAYER_3
    case 0xC2CCFE: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:494 CMP #BG_LAYER::LAYER_4
    case 0xC2CD00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:494 CMP #BG_LAYER::LAYER_4
    // Overlapping static entry reached from 0xC2CD00.
    case 0xC2CD02: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:495 BEQ @AFFECT_LAYER_4
    case 0xC2CD03: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:496 JMP @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2CD05: cpu.execute_instruction<0x4C>(0x00CD86, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:498 LDX @VIRTUAL02
    case 0xC2CD08: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:499 LDA __BSS_START__,X
    case 0xC2CD0A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:500 XBA
    case 0xC2CD0D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:501 AND #$00FF
    case 0xC2CD0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:501 AND #$00FF
    // Overlapping static entry reached from 0xC2CD0E.
    case 0xC2CD10: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:502 CLC
    case 0xC2CD11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:503 ADC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2CD12: cpu.execute_instruction<0x6D>(0x00AD96, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:504 STA BG1_X_POS
    case 0xC2CD15: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:505 LDA __BSS_START__,Y
    case 0xC2CD18: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:506 XBA
    case 0xC2CD1B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:507 AND #$00FF
    case 0xC2CD1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:507 AND #$00FF
    // Overlapping static entry reached from 0xC2CD1C.
    case 0xC2CD1E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:508 CLC
    case 0xC2CD1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:509 ADC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2CD20: cpu.execute_instruction<0x6D>(0x00AD98, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:510 STA BG1_Y_POS
    case 0xC2CD23: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:511 BRA @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2CD26: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:513 LDX @VIRTUAL02
    case 0xC2CD28: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:514 LDA __BSS_START__,X
    case 0xC2CD2A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:515 XBA
    case 0xC2CD2D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:516 AND #$00FF
    case 0xC2CD2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:516 AND #$00FF
    // Overlapping static entry reached from 0xC2CD2E.
    case 0xC2CD30: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:517 CLC
    case 0xC2CD31: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:518 ADC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2CD32: cpu.execute_instruction<0x6D>(0x00AD96, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:519 STA BG2_X_POS
    case 0xC2CD35: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:520 LDA __BSS_START__,Y
    case 0xC2CD38: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:521 XBA
    case 0xC2CD3B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:522 AND #$00FF
    case 0xC2CD3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:522 AND #$00FF
    // Overlapping static entry reached from 0xC2CD3C.
    case 0xC2CD3E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:523 CLC
    case 0xC2CD3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:524 ADC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2CD40: cpu.execute_instruction<0x6D>(0x00AD98, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:525 STA BG2_Y_POS
    case 0xC2CD43: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:526 BRA @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2CD46: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:528 LDX @VIRTUAL02
    case 0xC2CD48: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:529 LDA __BSS_START__,X
    case 0xC2CD4A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:530 XBA
    case 0xC2CD4D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:531 AND #$00FF
    case 0xC2CD4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:531 AND #$00FF
    // Overlapping static entry reached from 0xC2CD4E.
    case 0xC2CD50: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:532 CLC
    case 0xC2CD51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:533 ADC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2CD52: cpu.execute_instruction<0x6D>(0x00AD96, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:534 STA BG3_X_POS
    case 0xC2CD55: cpu.execute_instruction<0x8D>(0x000039, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:535 LDA __BSS_START__,Y
    case 0xC2CD58: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:536 XBA
    case 0xC2CD5B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:537 AND #$00FF
    case 0xC2CD5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:537 AND #$00FF
    // Overlapping static entry reached from 0xC2CD5C.
    case 0xC2CD5E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:538 CLC
    case 0xC2CD5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:539 ADC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2CD60: cpu.execute_instruction<0x6D>(0x00AD98, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:540 STA BG3_Y_POS
    case 0xC2CD63: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:541 BRA @TARGET_BG_LAYER_SELECTION_COMPLETE
    case 0xC2CD66: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:543 LDX @VIRTUAL02
    case 0xC2CD68: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:544 LDA __BSS_START__,X
    case 0xC2CD6A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:545 XBA
    case 0xC2CD6D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:546 AND #$00FF
    case 0xC2CD6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:546 AND #$00FF
    // Overlapping static entry reached from 0xC2CD6E.
    case 0xC2CD70: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:547 CLC
    case 0xC2CD71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:548 ADC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2CD72: cpu.execute_instruction<0x6D>(0x00AD96, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:549 STA BG4_X_POS
    case 0xC2CD75: cpu.execute_instruction<0x8D>(0x00003D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:550 LDA __BSS_START__,Y
    case 0xC2CD78: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:551 XBA
    case 0xC2CD7B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:552 AND #$00FF
    case 0xC2CD7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:552 AND #$00FF
    // Overlapping static entry reached from 0xC2CD7C.
    case 0xC2CD7E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:553 CLC
    case 0xC2CD7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:554 ADC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2CD80: cpu.execute_instruction<0x6D>(0x00AD98, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:555 STA BG4_Y_POS
    case 0xC2CD83: cpu.execute_instruction<0x8D>(0x00003F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:557 LDA @LOCAL07
    case 0xC2CD86: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:558 CLC
    case 0xC2CD88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:559 ADC #loaded_bg_data::distortion_duration_left
    case 0xC2CD89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000066, 2); else cpu.execute_instruction<0x69>(0x000066, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:559 ADC #loaded_bg_data::distortion_duration_left
    // Overlapping static entry reached from 0xC2CD89.
    case 0xC2CD8B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:560 TAX
    case 0xC2CD8C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:561 LDA __BSS_START__,X
    case 0xC2CD8D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:562 BEQL @DISTORTION_DMA_DONE
    case 0xC2CD90: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:562 BEQL @DISTORTION_DMA_DONE
    case 0xC2CD92: cpu.execute_instruction<0x4C>(0x00CF29, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:563 DEC
    case 0xC2CD95: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:564 STA __BSS_START__,X
    case 0xC2CD96: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:565 BNEL @DISTORTION_DMA_DONE
    case 0xC2CD99: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:565 BNEL @DISTORTION_DMA_DONE
    case 0xC2CD9B: cpu.execute_instruction<0x4C>(0x00CF29, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:566 LDA @LOCAL07
    case 0xC2CD9E: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:567 CLC
    case 0xC2CDA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:568 ADC #loaded_bg_data::current_distortion_style_index
    case 0xC2CDA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000065, 2); else cpu.execute_instruction<0x69>(0x000065, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:568 ADC #loaded_bg_data::current_distortion_style_index
    // Overlapping static entry reached from 0xC2CDA1.
    case 0xC2CDA3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:569 TAX
    case 0xC2CDA4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:570 STX @LOCAL00
    case 0xC2CDA5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:571 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CDA7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:572 LDA __BSS_START__,X
    case 0xC2CDA9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:573 INC
    case 0xC2CDAC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:574 AND #$0003
    case 0xC2CDAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x009D03, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:575 STA __BSS_START__,X
    case 0xC2CDAF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:575 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CDAD.
    case 0xC2CDB0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:576 REP #PROC_FLAGS::ACCUM8
    case 0xC2CDB2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:577 AND #$00FF
    case 0xC2CDB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:577 AND #$00FF
    // Overlapping static entry reached from 0xC2CDB4.
    case 0xC2CDB6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:578 CLC
    case 0xC2CDB7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:579 ADC @LOCAL07
    case 0xC2CDB8: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:580 TAX
    case 0xC2CDBA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:581 LDA a:loaded_bg_data::distortion_styles,X
    case 0xC2CDBB: cpu.execute_instruction<0xBD>(0x000061, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:582 AND #$00FF
    case 0xC2CDBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:582 AND #$00FF
    // Overlapping static entry reached from 0xC2CDBE.
    case 0xC2CDC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:583 STA @LOCAL01
    case 0xC2CDC1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:584 BNE @UNKNOWN37
    case 0xC2CDC3: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:585 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CDC5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:586 LDA #0
    case 0xC2CDC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A600, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:587 LDX @LOCAL00
    case 0xC2CDC9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:587 LDX @LOCAL00
    // Overlapping static entry reached from 0xC2CDC7.
    case 0xC2CDCA: cpu.execute_instruction<0x0E>(0x00009D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:588 STA __BSS_START__,X
    case 0xC2CDCB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:588 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2CDCA.
    case 0xC2CDCD: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:594 LDY #loaded_bg_data::distortion_styles
    case 0xC2CDCE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000061, 2); else cpu.execute_instruction<0xA0>(0x000061, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:594 LDY #loaded_bg_data::distortion_styles
    // Overlapping static entry reached from 0xC2CDCE.
    case 0xC2CDD0: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:595 REP #PROC_FLAGS::ACCUM8
    case 0xC2CDD1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:596 LDA (@LOCAL07),Y
    case 0xC2CDD3: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:598 AND #$00FF
    case 0xC2CDD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:598 AND #$00FF
    // Overlapping static entry reached from 0xC2CDD5.
    case 0xC2CDD7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:599 STA @LOCAL01
    case 0xC2CDD8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:601 CMP #0
    case 0xC2CDDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:601 CMP #0
    // Overlapping static entry reached from 0xC2CDDA.
    case 0xC2CDDC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:602 BEQL @DISTORTION_DMA_DONE
    case 0xC2CDDD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:602 BEQL @DISTORTION_DMA_DONE
    case 0xC2CDDF: cpu.execute_instruction<0x4C>(0x00CF29, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    case 0xC2CDE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00F708, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CDE2.
    case 0xC2CDE4: cpu.execute_instruction<0xF7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    case 0xC2CDE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CDE4.
    case 0xC2CDE6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    case 0xC2CDE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CDE6.
    case 0xC2CDE8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2CDE7.
    case 0xC2CDE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:603 LOADPTR BG_DISTORTION_TABLE, @VIRTUAL06
    case 0xC2CDEA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:604 LDA @LOCAL01
    case 0xC2CDEC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDEE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDF0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDF1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDF2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDF3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/misc/battlebgs/generate_frame.asm:605 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(distortion_entry)
    case 0xC2CDF4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:606 STA @LOCAL01
    case 0xC2CDF6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:607 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDF8: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:607 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDFA: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:607 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDFC: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:607 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2CDFE: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:608 CLC
    case 0xC2CE00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:609 ADC @VIRTUAL0A
    case 0xC2CE01: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:610 STA @VIRTUAL0A
    case 0xC2CE03: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:611 LDA [@VIRTUAL0A]
    case 0xC2CE05: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:612 LDY #loaded_bg_data::distortion_duration_left
    case 0xC2CE07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000066, 2); else cpu.execute_instruction<0xA0>(0x000066, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:612 LDY #loaded_bg_data::distortion_duration_left
    // Overlapping static entry reached from 0xC2CE07.
    case 0xC2CE09: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:613 STA (@LOCAL07),Y
    case 0xC2CE0A: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:614 LDA @LOCAL07
    case 0xC2CE0C: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:615 CLC
    case 0xC2CE0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:616 ADC #loaded_bg_data::distortion_type
    case 0xC2CE0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000068, 2); else cpu.execute_instruction<0x69>(0x000068, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:616 ADC #loaded_bg_data::distortion_type
    // Overlapping static entry reached from 0xC2CE0F.
    case 0xC2CE11: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:617 TAX
    case 0xC2CE12: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:618 LDA @LOCAL01
    case 0xC2CE13: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:620 INC
    case 0xC2CE15: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:621 INC
    case 0xC2CE16: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:622 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE17: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:622 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE19: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:622 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE1B: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:622 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE1D: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:623 CLC
    case 0xC2CE1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:624 ADC @VIRTUAL0A
    case 0xC2CE20: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:625 STA @VIRTUAL0A
    case 0xC2CE22: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:626 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CE24: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:627 LDA [@VIRTUAL0A]
    case 0xC2CE26: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:628 STA __BSS_START__,X
    case 0xC2CE28: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:629 REP #PROC_FLAGS::ACCUM8
    case 0xC2CE2B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:630 LDA @LOCAL01
    case 0xC2CE2D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:632 INC
    case 0xC2CE2F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:633 INC
    case 0xC2CE30: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:634 INC
    case 0xC2CE31: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:635 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE32: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:635 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE34: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:635 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE36: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:635 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE38: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:636 CLC
    case 0xC2CE3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:637 ADC @VIRTUAL0A
    case 0xC2CE3B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:638 STA @VIRTUAL0A
    case 0xC2CE3D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:639 LDA [@VIRTUAL0A]
    case 0xC2CE3F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:640 LDY #loaded_bg_data::distortion_ripple_frequency
    case 0xC2CE41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000069, 2); else cpu.execute_instruction<0xA0>(0x000069, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:640 LDY #loaded_bg_data::distortion_ripple_frequency
    // Overlapping static entry reached from 0xC2CE41.
    case 0xC2CE43: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:641 STA (@LOCAL07),Y
    case 0xC2CE44: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:642 LDA @LOCAL01
    case 0xC2CE46: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:643 CLC
    case 0xC2CE48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:644 ADC #distortion_entry::ripple_amplitude
    case 0xC2CE49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:644 ADC #distortion_entry::ripple_amplitude
    // Overlapping static entry reached from 0xC2CE49.
    case 0xC2CE4B: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:645 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE4C: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:645 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE4E: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:645 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE50: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:645 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE52: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:646 CLC
    case 0xC2CE54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:647 ADC @VIRTUAL0A
    case 0xC2CE55: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:648 STA @VIRTUAL0A
    case 0xC2CE57: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:649 LDA [@VIRTUAL0A]
    case 0xC2CE59: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:650 LDY #loaded_bg_data::distortion_ripple_amplitude
    case 0xC2CE5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006B, 2); else cpu.execute_instruction<0xA0>(0x00006B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:650 LDY #loaded_bg_data::distortion_ripple_amplitude
    // Overlapping static entry reached from 0xC2CE5B.
    case 0xC2CE5D: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:651 STA (@LOCAL07),Y
    case 0xC2CE5E: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:652 LDA @LOCAL01
    case 0xC2CE60: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:653 CLC
    case 0xC2CE62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:654 ADC #distortion_entry::speed
    case 0xC2CE63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:654 ADC #distortion_entry::speed
    // Overlapping static entry reached from 0xC2CE63.
    case 0xC2CE65: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:655 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE66: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:655 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE68: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:655 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE6A: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:655 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE6C: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:656 CLC
    case 0xC2CE6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:657 ADC @VIRTUAL0A
    case 0xC2CE6F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:658 STA @VIRTUAL0A
    case 0xC2CE71: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:659 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CE73: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:660 LDA [@VIRTUAL0A]
    case 0xC2CE75: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:661 LDY #loaded_bg_data::distortion_speed
    case 0xC2CE77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006D, 2); else cpu.execute_instruction<0xA0>(0x00006D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:661 LDY #loaded_bg_data::distortion_speed
    // Overlapping static entry reached from 0xC2CE77.
    case 0xC2CE79: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:662 STA (@LOCAL07),Y
    case 0xC2CE7A: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:663 REP #PROC_FLAGS::ACCUM8
    case 0xC2CE7C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:664 LDA @LOCAL01
    case 0xC2CE7E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:665 CLC
    case 0xC2CE80: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:666 ADC #distortion_entry::compression_rate
    case 0xC2CE81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:666 ADC #distortion_entry::compression_rate
    // Overlapping static entry reached from 0xC2CE81.
    case 0xC2CE83: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:667 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE84: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:667 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE86: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:667 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE88: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:667 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE8A: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:668 CLC
    case 0xC2CE8C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:669 ADC @VIRTUAL0A
    case 0xC2CE8D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:670 STA @VIRTUAL0A
    case 0xC2CE8F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:671 LDA [@VIRTUAL0A]
    case 0xC2CE91: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:672 LDY #loaded_bg_data::distortion_compression_rate
    case 0xC2CE93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006E, 2); else cpu.execute_instruction<0xA0>(0x00006E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:672 LDY #loaded_bg_data::distortion_compression_rate
    // Overlapping static entry reached from 0xC2CE93.
    case 0xC2CE95: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:673 STA (@LOCAL07),Y
    case 0xC2CE96: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:674 LDA @LOCAL01
    case 0xC2CE98: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:675 CLC
    case 0xC2CE9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:676 ADC #distortion_entry::ripple_frequency_acceleration
    case 0xC2CE9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:676 ADC #distortion_entry::ripple_frequency_acceleration
    // Overlapping static entry reached from 0xC2CE9B.
    case 0xC2CE9D: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:677 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CE9E: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:677 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CEA0: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:677 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CEA2: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:677 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CEA4: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:678 CLC
    case 0xC2CEA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:679 ADC @VIRTUAL0A
    case 0xC2CEA7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:680 STA @VIRTUAL0A
    case 0xC2CEA9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:681 LDA [@VIRTUAL0A]
    case 0xC2CEAB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:682 LDY #loaded_bg_data::distortion_ripple_frequency_acceleration
    case 0xC2CEAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000070, 2); else cpu.execute_instruction<0xA0>(0x000070, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:682 LDY #loaded_bg_data::distortion_ripple_frequency_acceleration
    // Overlapping static entry reached from 0xC2CEAD.
    case 0xC2CEAF: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:683 STA (@LOCAL07),Y
    case 0xC2CEB0: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:684 LDA @LOCAL01
    case 0xC2CEB2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:685 CLC
    case 0xC2CEB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:686 ADC #distortion_entry::ripple_amplitude_acceleration
    case 0xC2CEB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:686 ADC #distortion_entry::ripple_amplitude_acceleration
    // Overlapping static entry reached from 0xC2CEB5.
    case 0xC2CEB7: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:687 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CEB8: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:687 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CEBA: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:687 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CEBC: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:687 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CEBE: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:688 CLC
    case 0xC2CEC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:689 ADC @VIRTUAL0A
    case 0xC2CEC1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:690 STA @VIRTUAL0A
    case 0xC2CEC3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:691 LDA [@VIRTUAL0A]
    case 0xC2CEC5: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:692 LDY #loaded_bg_data::distortion_ripple_amplitude_acceleration
    case 0xC2CEC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000072, 2); else cpu.execute_instruction<0xA0>(0x000072, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:692 LDY #loaded_bg_data::distortion_ripple_amplitude_acceleration
    // Overlapping static entry reached from 0xC2CEC7.
    case 0xC2CEC9: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:693 STA (@LOCAL07),Y
    case 0xC2CECA: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:694 LDA @LOCAL01
    case 0xC2CECC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:695 CLC
    case 0xC2CECE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:696 ADC #distortion_entry::speed_acceleration
    case 0xC2CECF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:696 ADC #distortion_entry::speed_acceleration
    // Overlapping static entry reached from 0xC2CECF.
    case 0xC2CED1: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/battlebgs/generate_frame.asm:697 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CED2: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:697 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CED4: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:697 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CED6: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/battlebgs/generate_frame.asm:697 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2CED8: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:698 CLC
    case 0xC2CEDA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:699 ADC @VIRTUAL0A
    case 0xC2CEDB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:700 STA @VIRTUAL0A
    case 0xC2CEDD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:701 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CEDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:702 LDA [@VIRTUAL0A]
    case 0xC2CEE1: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:703 LDY #loaded_bg_data::distortion_speed_acceleration
    case 0xC2CEE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000074, 2); else cpu.execute_instruction<0xA0>(0x000074, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:703 LDY #loaded_bg_data::distortion_speed_acceleration
    // Overlapping static entry reached from 0xC2CEE3.
    case 0xC2CEE5: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:704 STA (@LOCAL07),Y
    case 0xC2CEE6: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:705 REP #PROC_FLAGS::ACCUM8
    case 0xC2CEE8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:706 LDA @LOCAL01
    case 0xC2CEEA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:707 CLC
    case 0xC2CEEC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:708 ADC #distortion_entry::compression_acceleration
    case 0xC2CEED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:708 ADC #distortion_entry::compression_acceleration
    // Overlapping static entry reached from 0xC2CEED.
    case 0xC2CEEF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:709 CLC
    case 0xC2CEF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:710 ADC @VIRTUAL06
    case 0xC2CEF1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:711 STA @VIRTUAL06
    case 0xC2CEF3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:712 LDA [@VIRTUAL06]
    case 0xC2CEF5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:713 LDY #loaded_bg_data::distortion_compression_acceleration
    case 0xC2CEF7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000075, 2); else cpu.execute_instruction<0xA0>(0x000075, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:713 LDY #loaded_bg_data::distortion_compression_acceleration
    // Overlapping static entry reached from 0xC2CEF7.
    case 0xC2CEF9: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:714 STA (@LOCAL07),Y
    case 0xC2CEFA: cpu.execute_instruction<0x91>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:715 LDA __BSS_START__,X
    case 0xC2CEFC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:716 AND #$00FF
    case 0xC2CEFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:716 AND #$00FF
    // Overlapping static entry reached from 0xC2CEFF.
    case 0xC2CF01: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:717 CMP #DISTORTION_STYLE::VERTICAL_SMOOTH
    case 0xC2CF02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:717 CMP #DISTORTION_STYLE::VERTICAL_SMOOTH
    // Overlapping static entry reached from 0xC2CF02.
    case 0xC2CF04: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:718 BNE @HORIZONTAL_DISTORTION
    case 0xC2CF05: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:719 LDY @LOCAL08
    case 0xC2CF07: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:720 LDX @LOCAL06
    case 0xC2CF09: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:721 INX
    case 0xC2CF0B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:722 INX
    case 0xC2CF0C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:723 INX
    case 0xC2CF0D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:724 INX
    case 0xC2CF0E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:725 LDA @LOCAL08
    case 0xC2CF0F: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:726 CLC
    case 0xC2CF11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:727 ADC #5
    case 0xC2CF12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:727 ADC #5
    // Overlapping static entry reached from 0xC2CF12.
    case 0xC2CF14: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:728 JSL DO_BATTLEBG_DMA
    case 0xC2CF15: cpu.execute_instruction<0x22>(0xC0ADB2, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:729 BRA @DISTORTION_DMA_DONE
    case 0xC2CF19: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:731 LDY @LOCAL08
    case 0xC2CF1B: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:732 LDX @LOCAL06
    case 0xC2CF1D: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:733 LDA @LOCAL08
    case 0xC2CF1F: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:734 CLC
    case 0xC2CF21: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:735 ADC #5
    case 0xC2CF22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:735 ADC #5
    // Overlapping static entry reached from 0xC2CF22.
    case 0xC2CF24: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:736 JSL DO_BATTLEBG_DMA
    case 0xC2CF25: cpu.execute_instruction<0x22>(0xC0ADB2, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:738 LDA @LOCAL07
    case 0xC2CF29: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:739 CLC
    case 0xC2CF2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:740 ADC #loaded_bg_data::distortion_type
    case 0xC2CF2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000068, 2); else cpu.execute_instruction<0x69>(0x000068, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:740 ADC #loaded_bg_data::distortion_type
    // Overlapping static entry reached from 0xC2CF2C.
    case 0xC2CF2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:741 STA @LOCAL00
    case 0xC2CF2F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:742 TAX
    case 0xC2CF31: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:743 LDA __BSS_START__,X
    case 0xC2CF32: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:744 AND #$00FF
    case 0xC2CF35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:744 AND #$00FF
    // Overlapping static entry reached from 0xC2CF35.
    case 0xC2CF37: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/generate_frame.asm:745 BEQL @RETURN
    case 0xC2CF38: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/generate_frame.asm:745 BEQL @RETURN
    case 0xC2CF3A: cpu.execute_instruction<0x4C>(0x00CFE3, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:746 LDA @LOCAL07
    case 0xC2CF3D: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:747 CLC
    case 0xC2CF3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:748 ADC #loaded_bg_data::distortion_ripple_frequency
    case 0xC2CF40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000069, 2); else cpu.execute_instruction<0x69>(0x000069, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:748 ADC #loaded_bg_data::distortion_ripple_frequency
    // Overlapping static entry reached from 0xC2CF40.
    case 0xC2CF42: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:749 TAX
    case 0xC2CF43: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:750 LDY #loaded_bg_data::distortion_ripple_frequency_acceleration
    case 0xC2CF44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000070, 2); else cpu.execute_instruction<0xA0>(0x000070, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:750 LDY #loaded_bg_data::distortion_ripple_frequency_acceleration
    // Overlapping static entry reached from 0xC2CF44.
    case 0xC2CF46: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:751 LDA __BSS_START__,X
    case 0xC2CF47: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:752 CLC
    case 0xC2CF4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:753 ADC (@LOCAL07),Y
    case 0xC2CF4B: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:754 STA __BSS_START__,X
    case 0xC2CF4D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:755 LDA @LOCAL07
    case 0xC2CF50: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:756 CLC
    case 0xC2CF52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:757 ADC #loaded_bg_data::distortion_ripple_amplitude
    case 0xC2CF53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006B, 2); else cpu.execute_instruction<0x69>(0x00006B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:757 ADC #loaded_bg_data::distortion_ripple_amplitude
    // Overlapping static entry reached from 0xC2CF53.
    case 0xC2CF55: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:758 TAX
    case 0xC2CF56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:759 LDY #loaded_bg_data::distortion_ripple_amplitude_acceleration
    case 0xC2CF57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000072, 2); else cpu.execute_instruction<0xA0>(0x000072, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:759 LDY #loaded_bg_data::distortion_ripple_amplitude_acceleration
    // Overlapping static entry reached from 0xC2CF57.
    case 0xC2CF59: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:760 LDA __BSS_START__,X
    case 0xC2CF5A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:761 CLC
    case 0xC2CF5D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:762 ADC (@LOCAL07),Y
    case 0xC2CF5E: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:763 STA __BSS_START__,X
    case 0xC2CF60: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:764 LDA @LOCAL07
    case 0xC2CF63: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:765 CLC
    case 0xC2CF65: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:766 ADC #loaded_bg_data::distortion_speed
    case 0xC2CF66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006D, 2); else cpu.execute_instruction<0x69>(0x00006D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:766 ADC #loaded_bg_data::distortion_speed
    // Overlapping static entry reached from 0xC2CF66.
    case 0xC2CF68: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:767 TAX
    case 0xC2CF69: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:768 LDY #loaded_bg_data::distortion_speed_acceleration
    case 0xC2CF6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000074, 2); else cpu.execute_instruction<0xA0>(0x000074, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:768 LDY #loaded_bg_data::distortion_speed_acceleration
    // Overlapping static entry reached from 0xC2CF6A.
    case 0xC2CF6C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:769 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CF6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:770 LDA __BSS_START__,X
    case 0xC2CF6F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:771 CLC
    case 0xC2CF72: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:772 ADC (@LOCAL07),Y
    case 0xC2CF73: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:773 STA __BSS_START__,X
    case 0xC2CF75: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:774 REP #PROC_FLAGS::ACCUM8
    case 0xC2CF78: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:775 LDA @LOCAL07
    case 0xC2CF7A: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:776 CLC
    case 0xC2CF7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:777 ADC #loaded_bg_data::distortion_compression_rate
    case 0xC2CF7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006E, 2); else cpu.execute_instruction<0x69>(0x00006E, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:777 ADC #loaded_bg_data::distortion_compression_rate
    // Overlapping static entry reached from 0xC2CF7D.
    case 0xC2CF7F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:778 STA @VIRTUAL02
    case 0xC2CF80: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:779 LDY #loaded_bg_data::distortion_compression_acceleration
    case 0xC2CF82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000075, 2); else cpu.execute_instruction<0xA0>(0x000075, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:779 LDY #loaded_bg_data::distortion_compression_acceleration
    // Overlapping static entry reached from 0xC2CF82.
    case 0xC2CF84: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:780 LDX @VIRTUAL02
    case 0xC2CF85: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:781 LDA __BSS_START__,X
    case 0xC2CF87: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:782 CLC
    case 0xC2CF8A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:783 ADC (@LOCAL07),Y
    case 0xC2CF8B: cpu.execute_instruction<0x71>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:784 LDX @VIRTUAL02
    case 0xC2CF8D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:785 STA __BSS_START__,X
    case 0xC2CF8F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:786 LDY @LOCAL08
    case 0xC2CF92: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:787 LDX @LOCAL06
    case 0xC2CF94: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:788 STX @LOCAL03
    case 0xC2CF96: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:789 LDA @LOCAL00
    case 0xC2CF98: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:790 TAX
    case 0xC2CF9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:791 LDA __BSS_START__,X
    case 0xC2CF9B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:792 AND #$00FF
    case 0xC2CF9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:792 AND #$00FF
    // Overlapping static entry reached from 0xC2CF9E.
    case 0xC2CFA0: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:793 DEC
    case 0xC2CFA1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:794 LDX @LOCAL03
    case 0xC2CFA2: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:795 JSL LOAD_BG_OFFSET_PARAMETERS
    case 0xC2CFA4: cpu.execute_instruction<0x22>(0xC0AE4C, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:796 LDX @VIRTUAL02
    case 0xC2CFA8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:797 LDA __BSS_START__,X
    case 0xC2CFAA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:798 JSL LOAD_BG_OFFSET_PARAMETERS2
    case 0xC2CFAD: cpu.execute_instruction<0x22>(0xC0AE56, 4); return true;
    // src/misc/battlebgs/generate_frame.asm:799 LDA FRAME_COUNTER
    case 0xC2CFB1: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:800 AND #$00FF
    case 0xC2CFB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:800 AND #$00FF
    // Overlapping static entry reached from 0xC2CFB4.
    case 0xC2CFB6: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:801 AND #$0001
    case 0xC2CFB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:801 AND #$0001
    // Overlapping static entry reached from 0xC2CFB7.
    case 0xC2CFB9: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:802 CMP @LOCAL08
    case 0xC2CFBA: cpu.execute_instruction<0xC5>(0x00001D, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:803 BEQ @PREPARE_BG_OFFSETS
    case 0xC2CFBC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:804 LDA DISTORT_30FPS
    case 0xC2CFBE: cpu.execute_instruction<0xAD>(0x00ADAC, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:805 BNE @RETURN
    case 0xC2CFC1: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:807 LDY #loaded_bg_data::distortion_speed
    case 0xC2CFC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006D, 2); else cpu.execute_instruction<0xA0>(0x00006D, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:807 LDY #loaded_bg_data::distortion_speed
    // Overlapping static entry reached from 0xC2CFC3.
    case 0xC2CFC5: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:808 LDA (@LOCAL07),Y
    case 0xC2CFC6: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:809 AND #$00FF
    case 0xC2CFC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:809 AND #$00FF
    // Overlapping static entry reached from 0xC2CFC8.
    case 0xC2CFCA: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:810 TAY
    case 0xC2CFCB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:811 STY @LOCAL01
    case 0xC2CFCC: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:812 LDY #loaded_bg_data::distortion_ripple_amplitude
    case 0xC2CFCE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006B, 2); else cpu.execute_instruction<0xA0>(0x00006B, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:812 LDY #loaded_bg_data::distortion_ripple_amplitude
    // Overlapping static entry reached from 0xC2CFCE.
    case 0xC2CFD0: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:813 LDA (@LOCAL07),Y
    case 0xC2CFD1: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:814 XBA
    case 0xC2CFD3: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:815 AND #$00FF
    case 0xC2CFD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:815 AND #$00FF
    // Overlapping static entry reached from 0xC2CFD4.
    case 0xC2CFD6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:816 TAX
    case 0xC2CFD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/generate_frame.asm:817 LDY #loaded_bg_data::distortion_ripple_frequency
    case 0xC2CFD8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000069, 2); else cpu.execute_instruction<0xA0>(0x000069, 3); return true;
    // src/misc/battlebgs/generate_frame.asm:817 LDY #loaded_bg_data::distortion_ripple_frequency
    // Overlapping static entry reached from 0xC2CFD8.
    case 0xC2CFDA: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:818 LDA (@LOCAL07),Y
    case 0xC2CFDB: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:819 LDY @LOCAL01
    case 0xC2CFDD: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/battlebgs/generate_frame.asm:820 JSL PREPARE_BG_OFFSET_TABLES
    case 0xC2CFDF: cpu.execute_instruction<0x22>(0xC0AE5A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/battlebgs/generate_frame.asm:822 END_C_FUNCTION
    case 0xC2CFE3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/battlebgs/generate_frame.asm:822 END_C_FUNCTION
    case 0xC2CFE4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/load_bg_offset_parameters.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/battlebgs/load_bg_offset_parameters.asm:3 STA BACKGROUND_DISTORTION_STYLE
    case 0xC0AE4C: cpu.execute_instruction<0x8D>(0x001ACC, 3); return true;
    // src/misc/battlebgs/load_bg_offset_parameters.asm:4 STX BACKGROUND_DISTORTION_TARGET_LAYER
    case 0xC0AE4F: cpu.execute_instruction<0x8E>(0x001ACE, 3); return true;
    // src/misc/battlebgs/load_bg_offset_parameters.asm:5 STY BACKGROUND_DISTORTION_IS_SECONDARY_LAYER
    case 0xC0AE52: cpu.execute_instruction<0x8C>(0x001AD2, 3); return true;
    // src/misc/battlebgs/load_bg_offset_parameters.asm:6 RTL
    case 0xC0AE55: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/load_bg_offset_parameters2.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/battlebgs/load_bg_offset_parameters2.asm:3 STA BACKGROUND_DISTORTION_COMPRESSION_RATE
    case 0xC0AE56: cpu.execute_instruction<0x8D>(0x001AD4, 3); return true;
    // src/misc/battlebgs/load_bg_offset_parameters2.asm:4 RTL
    case 0xC0AE59: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/battlebgs/prepare_bg_offset_tables.asm (source_named).
bool execute_miscellaneous_battle_backgrounds_prepare_bg_offset_tables_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:3 PHD
    case 0xC0AE5A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:4 PHA
    case 0xC0AE5B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:5 TDC
    case 0xC0AE5C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:6 SEC
    case 0xC0AE5D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:7 SBC #$000B
    case 0xC0AE5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000B, 2); else cpu.execute_instruction<0xE9>(0x00000B, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:7 SBC #$000B
    // Overlapping static entry reached from 0xC0AE5E.
    case 0xC0AE60: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:8 AND #$FF00
    case 0xC0AE61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:8 AND #$FF00
    // Overlapping static entry reached from 0xC0AE61.
    case 0xC0AE63: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:9 TCD
    case 0xC0AE64: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:10 PLA
    case 0xC0AE65: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:11 STA $00
    case 0xC0AE66: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:11 STA $00
    // Overlapping static entry reached from 0xC0AE63.
    case 0xC0AE67: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:12 TXA
    case 0xC0AE68: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AE69: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:14 STA f:M7A
    case 0xC0AE6B: cpu.execute_instruction<0x8F>(0x00211B, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:15 XBA
    case 0xC0AE6F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:16 STA f:M7A
    case 0xC0AE70: cpu.execute_instruction<0x8F>(0x00211B, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:17 STZ $02
    case 0xC0AE74: cpu.execute_instruction<0x64>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:18 STY $03
    case 0xC0AE76: cpu.execute_instruction<0x84>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:19 STZ $04
    case 0xC0AE78: cpu.execute_instruction<0x64>(0x000004, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC0AE7A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:21 LDA #$0000
    case 0xC0AE7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:21 LDA #$0000
    // Overlapping static entry reached from 0xC0AE7C.
    case 0xC0AE7E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:22 LDX #$01C0 ;buffer size for 1 layer
    case 0xC0AE7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0001C0, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:22 LDX #$01C0 ;buffer size for 1 layer
    // Overlapping static entry reached from 0xC0AE7F.
    case 0xC0AE81: cpu.execute_instruction<0x01>(0x0000AC, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:23 LDY BACKGROUND_DISTORTION_IS_SECONDARY_LAYER
    case 0xC0AE82: cpu.execute_instruction<0xAC>(0x001AD2, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:23 LDY BACKGROUND_DISTORTION_IS_SECONDARY_LAYER
    // Overlapping static entry reached from 0xC0AE81.
    case 0xC0AE83: cpu.execute_instruction<0xD2>(0x00001A, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:24 BEQ @UNKNOWN0
    case 0xC0AE85: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:25 TXA
    case 0xC0AE87: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:26 LDX #$0380 ;buffer size for 2 layers
    case 0xC0AE88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000380, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:26 LDX #$0380 ;buffer size for 2 layers
    // Overlapping static entry reached from 0xC0AE88.
    case 0xC0AE8A: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:28 STA $07
    case 0xC0AE8B: cpu.execute_instruction<0x85>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:28 STA $07
    // Overlapping static entry reached from 0xC0AE8A.
    case 0xC0AE8C: cpu.execute_instruction<0x07>(0x000086, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:29 STX $09
    case 0xC0AE8D: cpu.execute_instruction<0x86>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:29 STX $09
    // Overlapping static entry reached from 0xC0AE8C.
    case 0xC0AE8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000AD, 2); else cpu.execute_instruction<0x09>(0x00CCAD, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:30 LDA BACKGROUND_DISTORTION_STYLE
    case 0xC0AE8F: cpu.execute_instruction<0xAD>(0x001ACC, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:30 LDA BACKGROUND_DISTORTION_STYLE
    // Overlapping static entry reached from 0xC0AE8E.
    case 0xC0AE90: cpu.execute_instruction<0xCC>(0x00C91A, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:30 LDA BACKGROUND_DISTORTION_STYLE
    // Overlapping static entry reached from 0xC0AE8E.
    case 0xC0AE91: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:31 CMP #$0002
    case 0xC0AE92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:31 CMP #$0002
    // Overlapping static entry reached from 0xC0AE90.
    case 0xC0AE93: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:31 CMP #$0002
    // Overlapping static entry reached from 0xC0AE92.
    case 0xC0AE94: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:32 BCC @UNKNOWN2
    case 0xC0AE95: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/battlebgs/prepare_bg_offset_tables.asm:33 BEQL @UNKNOWN7
    case 0xC0AE97: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/battlebgs/prepare_bg_offset_tables.asm:33 BEQL @UNKNOWN7
    case 0xC0AE99: cpu.execute_instruction<0x4C>(0x00AF24, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:34 JMP @UNKNOWN10
    case 0xC0AE9C: cpu.execute_instruction<0x4C>(0x00AF65, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:36 LDA BACKGROUND_DISTORTION_TARGET_LAYER
    case 0xC0AE9F: cpu.execute_instruction<0xAD>(0x001ACE, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:37 BEQ @UNKNOWN3
    case 0xC0AEA2: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:38 DEC
    case 0xC0AEA4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:39 ASL
    case 0xC0AEA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:40 ASL
    case 0xC0AEA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:41 TAX
    case 0xC0AEA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:42 LDA __BSS_START__+51,X
    case 0xC0AEA8: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:43 CLC
    case 0xC0AEAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:44 ADC $03
    case 0xC0AEAC: cpu.execute_instruction<0x65>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:45 AND #$00FF
    case 0xC0AEAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC0AEAE.
    case 0xC0AEB0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:46 STA $03
    case 0xC0AEB1: cpu.execute_instruction<0x85>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:47 LDA __BSS_START__+49,X
    case 0xC0AEB3: cpu.execute_instruction<0xBD>(0x000031, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:49 STA $05
    case 0xC0AEB6: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:50 LDA BACKGROUND_DISTORTION_STYLE
    case 0xC0AEB8: cpu.execute_instruction<0xAD>(0x001ACC, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:51 BNE @UNKNOWN5
    case 0xC0AEBB: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:52 LDY $07
    case 0xC0AEBD: cpu.execute_instruction<0xA4>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:54 LDX $03
    case 0xC0AEBF: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:55 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AEC1: cpu.execute_instruction<0xBF>(0xC0B425, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:56 STA f:M7B
    case 0xC0AEC5: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:57 LDA f:MPYM
    case 0xC0AEC9: cpu.execute_instruction<0xAF>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:58 CLC
    case 0xC0AECD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:59 ADC $05
    case 0xC0AECE: cpu.execute_instruction<0x65>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:60 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER,Y
    case 0xC0AED0: cpu.execute_instruction<0x99>(0x003C46, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:61 LDA $02
    case 0xC0AED3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:62 CLC
    case 0xC0AED5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:63 ADC $00
    case 0xC0AED6: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:64 STA $02
    case 0xC0AED8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:65 INY
    case 0xC0AEDA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:66 INY
    case 0xC0AEDB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:67 CPY $09
    case 0xC0AEDC: cpu.execute_instruction<0xC4>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:68 BCC @UNKNOWN4
    case 0xC0AEDE: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:69 PLD
    case 0xC0AEE0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:70 RTL
    case 0xC0AEE1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:72 LDY $07
    case 0xC0AEE2: cpu.execute_instruction<0xA4>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:74 LDX $03
    case 0xC0AEE4: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:75 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AEE6: cpu.execute_instruction<0xBF>(0xC0B425, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:76 STA f:M7B
    case 0xC0AEEA: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:77 LDA f:MPYM
    case 0xC0AEEE: cpu.execute_instruction<0xAF>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:78 CLC
    case 0xC0AEF2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:79 ADC $05
    case 0xC0AEF3: cpu.execute_instruction<0x65>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:80 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER,Y
    case 0xC0AEF5: cpu.execute_instruction<0x99>(0x003C46, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:81 LDA $02
    case 0xC0AEF8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:82 CLC
    case 0xC0AEFA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:83 ADC $00
    case 0xC0AEFB: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:84 STA $02
    case 0xC0AEFD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:85 LDX $03
    case 0xC0AEFF: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:86 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AF01: cpu.execute_instruction<0xBF>(0xC0B425, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:87 STA f:M7B
    case 0xC0AF05: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:88 LDA $05
    case 0xC0AF09: cpu.execute_instruction<0xA5>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:89 SEC
    case 0xC0AF0B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:90 SBC f:MPYM
    case 0xC0AF0C: cpu.execute_instruction<0xEF>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:91 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER + 2,Y
    case 0xC0AF10: cpu.execute_instruction<0x99>(0x003C48, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:92 LDA $02
    case 0xC0AF13: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:93 CLC
    case 0xC0AF15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:94 ADC $00
    case 0xC0AF16: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:95 STA $02
    case 0xC0AF18: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:96 INY
    case 0xC0AF1A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:97 INY
    case 0xC0AF1B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:98 INY
    case 0xC0AF1C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:99 INY
    case 0xC0AF1D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:100 CPY $09
    case 0xC0AF1E: cpu.execute_instruction<0xC4>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:101 BCC @UNKNOWN6
    case 0xC0AF20: cpu.execute_instruction<0x90>(0x0000C2, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:102 PLD
    case 0xC0AF22: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:103 RTL
    case 0xC0AF23: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:105 LDA BACKGROUND_DISTORTION_TARGET_LAYER
    case 0xC0AF24: cpu.execute_instruction<0xAD>(0x001ACE, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:106 BEQ @UNKNOWN8
    case 0xC0AF27: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:107 DEC
    case 0xC0AF29: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:108 ASL
    case 0xC0AF2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:109 ASL
    case 0xC0AF2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:110 TAX
    case 0xC0AF2C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:111 LDA __BSS_START__+51,X
    case 0xC0AF2D: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:113 XBA
    case 0xC0AF30: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:114 AND #$FF00
    case 0xC0AF31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:114 AND #$FF00
    // Overlapping static entry reached from 0xC0AF31.
    case 0xC0AF33: cpu.execute_instruction<0xFF>(0xA40585, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:115 STA $05
    case 0xC0AF34: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:116 LDY $07
    case 0xC0AF36: cpu.execute_instruction<0xA4>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:116 LDY $07
    // Overlapping static entry reached from 0xC0AF33.
    case 0xC0AF37: cpu.execute_instruction<0x07>(0x0000A6, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:118 LDX $03
    case 0xC0AF38: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:118 LDX $03
    // Overlapping static entry reached from 0xC0AF37.
    case 0xC0AF39: cpu.execute_instruction<0x03>(0x0000BF, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:119 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AF3A: cpu.execute_instruction<0xBF>(0xC0B425, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:119 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC0AF39.
    case 0xC0AF3B: cpu.execute_instruction<0x25>(0x0000B4, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:119 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC0AF3B.
    case 0xC0AF3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00008F, 2); else cpu.execute_instruction<0xC0>(0x001C8F, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:120 STA f:M7B
    case 0xC0AF3E: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:120 STA f:M7B
    // Overlapping static entry reached from 0xC0AF3D.
    case 0xC0AF3F: cpu.execute_instruction<0x1C>(0x000021, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:120 STA f:M7B
    // Overlapping static entry reached from 0xC0AF3D.
    case 0xC0AF40: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:121 LDA $05
    case 0xC0AF42: cpu.execute_instruction<0xA5>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:122 CLC
    case 0xC0AF44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:123 ADC BACKGROUND_DISTORTION_COMPRESSION_RATE
    case 0xC0AF45: cpu.execute_instruction<0x6D>(0x001AD4, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:124 STA $05
    case 0xC0AF48: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:125 XBA
    case 0xC0AF4A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:126 AND #$00FF
    case 0xC0AF4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC0AF4B.
    case 0xC0AF4D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:127 CLC
    case 0xC0AF4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:128 ADC f:MPYM
    case 0xC0AF4F: cpu.execute_instruction<0x6F>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:129 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER,Y
    case 0xC0AF53: cpu.execute_instruction<0x99>(0x003C46, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:130 LDA $02
    case 0xC0AF56: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:131 CLC
    case 0xC0AF58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:132 ADC $00
    case 0xC0AF59: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:133 STA $02
    case 0xC0AF5B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:134 INY
    case 0xC0AF5D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:135 INY
    case 0xC0AF5E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:136 CPY $09
    case 0xC0AF5F: cpu.execute_instruction<0xC4>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:137 BCC @UNKNOWN9
    case 0xC0AF61: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:138 PLD
    case 0xC0AF63: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:139 RTL
    case 0xC0AF64: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:141 LDA BACKGROUND_DISTORTION_TARGET_LAYER
    case 0xC0AF65: cpu.execute_instruction<0xAD>(0x001ACE, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:142 BEQ @UNKNOWN11
    case 0xC0AF68: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:143 DEC
    case 0xC0AF6A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:144 ASL
    case 0xC0AF6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:145 ASL
    case 0xC0AF6C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:146 TAX
    case 0xC0AF6D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:147 LDA __BSS_START__+51,X
    case 0xC0AF6E: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:149 XBA
    case 0xC0AF71: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:150 AND #$FF00
    case 0xC0AF72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:150 AND #$FF00
    // Overlapping static entry reached from 0xC0AF72.
    case 0xC0AF74: cpu.execute_instruction<0xFF>(0xA40585, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:151 STA $05
    case 0xC0AF75: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:152 LDY $07
    case 0xC0AF77: cpu.execute_instruction<0xA4>(0x000007, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:152 LDY $07
    // Overlapping static entry reached from 0xC0AF74.
    case 0xC0AF78: cpu.execute_instruction<0x07>(0x0000A6, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:154 LDX $03
    case 0xC0AF79: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:154 LDX $03
    // Overlapping static entry reached from 0xC0AF78.
    case 0xC0AF7A: cpu.execute_instruction<0x03>(0x0000BF, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:155 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AF7B: cpu.execute_instruction<0xBF>(0xC0B425, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:155 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC0AF7A.
    case 0xC0AF7C: cpu.execute_instruction<0x25>(0x0000B4, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:155 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC0AF7C.
    case 0xC0AF7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00008F, 2); else cpu.execute_instruction<0xC0>(0x001C8F, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:156 STA f:M7B
    case 0xC0AF7F: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:156 STA f:M7B
    // Overlapping static entry reached from 0xC0AF7E.
    case 0xC0AF80: cpu.execute_instruction<0x1C>(0x000021, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:156 STA f:M7B
    // Overlapping static entry reached from 0xC0AF7E.
    case 0xC0AF81: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:157 LDA $05
    case 0xC0AF83: cpu.execute_instruction<0xA5>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:158 CLC
    case 0xC0AF85: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:159 ADC BACKGROUND_DISTORTION_COMPRESSION_RATE
    case 0xC0AF86: cpu.execute_instruction<0x6D>(0x001AD4, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:160 STA $05
    case 0xC0AF89: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:161 XBA
    case 0xC0AF8B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:162 AND #$00FF
    case 0xC0AF8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC0AF8C.
    case 0xC0AF8E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:163 CLC
    case 0xC0AF8F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:164 ADC f:MPYM
    case 0xC0AF90: cpu.execute_instruction<0x6F>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:165 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER,Y
    case 0xC0AF94: cpu.execute_instruction<0x99>(0x003C46, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:166 LDA $02
    case 0xC0AF97: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:167 CLC
    case 0xC0AF99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:168 ADC $00
    case 0xC0AF9A: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:169 STA $02
    case 0xC0AF9C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:170 LDX $03
    case 0xC0AF9E: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:171 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0AFA0: cpu.execute_instruction<0xBF>(0xC0B425, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:172 STA f:M7B
    case 0xC0AFA4: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:173 LDA $05
    case 0xC0AFA8: cpu.execute_instruction<0xA5>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:174 CLC
    case 0xC0AFAA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:175 ADC BACKGROUND_DISTORTION_COMPRESSION_RATE
    case 0xC0AFAB: cpu.execute_instruction<0x6D>(0x001AD4, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:176 STA $05
    case 0xC0AFAE: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:177 XBA
    case 0xC0AFB0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:178 AND #$00FF
    case 0xC0AFB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC0AFB1.
    case 0xC0AFB3: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:179 SEC
    case 0xC0AFB4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:180 SBC f:MPYM
    case 0xC0AFB5: cpu.execute_instruction<0xEF>(0x002135, 4); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:181 STA ANIMATED_BACKGROUND_LAYER_1_HDMA_BUFFER + 2,Y
    case 0xC0AFB9: cpu.execute_instruction<0x99>(0x003C48, 3); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:182 LDA $02
    case 0xC0AFBC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:183 CLC
    case 0xC0AFBE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:184 ADC $00
    case 0xC0AFBF: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:185 STA $02
    case 0xC0AFC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:185 STA $02
    // Overlapping static entry reached from 0xC0B031.
    case 0xC0AFC2: cpu.execute_instruction<0x02>(0x0000C8, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:186 INY
    case 0xC0AFC3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:187 INY
    case 0xC0AFC4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:188 INY
    case 0xC0AFC5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:189 INY
    case 0xC0AFC6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:190 CPY $09
    case 0xC0AFC7: cpu.execute_instruction<0xC4>(0x000009, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:191 BCC @UNKNOWN12
    case 0xC0AFC9: cpu.execute_instruction<0x90>(0x0000AE, 2); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:192 PLD
    case 0xC0AFCB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/battlebgs/prepare_bg_offset_tables.asm:193 RTL
    case 0xC0AFCC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/change_equipped_arms.asm (source_named).
bool execute_miscellaneous_change_equipped_arms_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/change_equipped_arms.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45815: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC45817: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC45818: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC45819: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC4581A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4581A.
    case 0xC4581C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC4581D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/change_equipped_arms.asm:9 END_STACK_VARS
    case 0xC4581E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:10 STX @VIRTUAL02
    case 0xC4581F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/change_equipped_arms.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4581C.
    case 0xC45820: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/change_equipped_arms.asm:11 TAY
    case 0xC45821: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:12 STY @LOCAL00
    case 0xC45822: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/change_equipped_arms.asm:13 TYA
    case 0xC45824: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:14 DEC
    case 0xC45825: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/change_equipped_arms.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC45826: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/change_equipped_arms.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC45826.
    case 0xC45828: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/change_equipped_arms.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC45829: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/change_equipped_arms.asm:16 CLC
    case 0xC4582D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:17 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    case 0xC4582E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x009A01, 3); return true;
    // src/misc/change_equipped_arms.asm:17 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC4582E.
    case 0xC45830: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:18 TAX
    case 0xC45831: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:19 LDA __BSS_START__,X
    case 0xC45832: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/change_equipped_arms.asm:20 AND #$00FF
    case 0xC45835: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/change_equipped_arms.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC45835.
    case 0xC45837: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/change_equipped_arms.asm:21 STA @VIRTUAL04
    case 0xC45838: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/change_equipped_arms.asm:22 LDA @VIRTUAL02
    case 0xC4583A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/change_equipped_arms.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC4583C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/change_equipped_arms.asm:24 STA __BSS_START__,X
    case 0xC4583E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/change_equipped_arms.asm:25 LDY @LOCAL00
    case 0xC45841: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_arms.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC45843: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_arms.asm:27 TYA
    case 0xC45845: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:28 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC45846: cpu.execute_instruction<0x22>(0xC2192B, 4); return true;
    // src/misc/change_equipped_arms.asm:29 LDY @LOCAL00
    case 0xC4584A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_arms.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC4584C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_arms.asm:31 TYA
    case 0xC4584E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:32 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC4584F: cpu.execute_instruction<0x22>(0xC21C5D, 4); return true;
    // src/misc/change_equipped_arms.asm:33 LDY @LOCAL00
    case 0xC45853: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_arms.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC45855: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_arms.asm:35 TYA
    case 0xC45857: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_arms.asm:36 JSL CALC_RESISTANCES
    case 0xC45858: cpu.execute_instruction<0x22>(0xC21E03, 4); return true;
    // src/misc/change_equipped_arms.asm:37 LDA @VIRTUAL04
    case 0xC4585C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/change_equipped_arms.asm:38 END_C_FUNCTION
    case 0xC4585E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/change_equipped_arms.asm:38 END_C_FUNCTION
    case 0xC4585F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/change_equipped_body.asm (source_named).
bool execute_miscellaneous_change_equipped_body_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/change_equipped_body.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC457CA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC457CC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC457CD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC457CE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC457CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC457CF.
    case 0xC457D1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC457D2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/change_equipped_body.asm:9 END_STACK_VARS
    case 0xC457D3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:10 STX @VIRTUAL02
    case 0xC457D4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/change_equipped_body.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC457D1.
    case 0xC457D5: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/change_equipped_body.asm:11 TAY
    case 0xC457D6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:12 STY @LOCAL00
    case 0xC457D7: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/change_equipped_body.asm:13 TYA
    case 0xC457D9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:14 DEC
    case 0xC457DA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:15 LDY #.SIZEOF(char_struct)
    case 0xC457DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/change_equipped_body.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC457DB.
    case 0xC457DD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/change_equipped_body.asm:16 JSL MULT168
    case 0xC457DE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/change_equipped_body.asm:17 CLC
    case 0xC457E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    case 0xC457E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x009A00, 3); return true;
    // src/misc/change_equipped_body.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC457E3.
    case 0xC457E5: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:19 TAX
    case 0xC457E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:20 LDA __BSS_START__,X
    case 0xC457E7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/change_equipped_body.asm:21 AND #$00FF
    case 0xC457EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/change_equipped_body.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC457EA.
    case 0xC457EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/change_equipped_body.asm:22 STA @VIRTUAL04
    case 0xC457ED: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/change_equipped_body.asm:23 LDA @VIRTUAL02
    case 0xC457EF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/change_equipped_body.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC457F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/change_equipped_body.asm:25 STA __BSS_START__,X
    case 0xC457F3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/change_equipped_body.asm:26 LDY @LOCAL00
    case 0xC457F6: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_body.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC457F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_body.asm:28 TYA
    case 0xC457FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:29 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC457FB: cpu.execute_instruction<0x22>(0xC2192B, 4); return true;
    // src/misc/change_equipped_body.asm:30 LDY @LOCAL00
    case 0xC457FF: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_body.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC45801: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_body.asm:32 TYA
    case 0xC45803: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:33 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC45804: cpu.execute_instruction<0x22>(0xC21AEB, 4); return true;
    // src/misc/change_equipped_body.asm:34 LDY @LOCAL00
    case 0xC45808: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_body.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC4580A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_body.asm:36 TYA
    case 0xC4580C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_body.asm:37 JSL CALC_RESISTANCES
    case 0xC4580D: cpu.execute_instruction<0x22>(0xC21E03, 4); return true;
    // src/misc/change_equipped_body.asm:38 LDA @VIRTUAL04
    case 0xC45811: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/change_equipped_body.asm:39 END_C_FUNCTION
    case 0xC45813: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/change_equipped_body.asm:39 END_C_FUNCTION
    case 0xC45814: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/change_equipped_other.asm (source_named).
bool execute_miscellaneous_change_equipped_other_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/change_equipped_other.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45860: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC45862: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC45863: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC45864: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC45865: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC45865.
    case 0xC45867: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC45868: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/change_equipped_other.asm:9 END_STACK_VARS
    case 0xC45869: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:10 STX @VIRTUAL02
    case 0xC4586A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/change_equipped_other.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC45867.
    case 0xC4586B: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/change_equipped_other.asm:11 TAY
    case 0xC4586C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:12 STY @LOCAL00
    case 0xC4586D: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/change_equipped_other.asm:13 TYA
    case 0xC4586F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:14 DEC
    case 0xC45870: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:15 LDY #.SIZEOF(char_struct)
    case 0xC45871: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/change_equipped_other.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC45871.
    case 0xC45873: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/change_equipped_other.asm:16 JSL MULT168
    case 0xC45874: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/change_equipped_other.asm:17 CLC
    case 0xC45878: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    case 0xC45879: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x009A02, 3); return true;
    // src/misc/change_equipped_other.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC45879.
    case 0xC4587B: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:19 TAX
    case 0xC4587C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:20 LDA __BSS_START__,X
    case 0xC4587D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/change_equipped_other.asm:21 AND #$00FF
    case 0xC45880: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/change_equipped_other.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC45880.
    case 0xC45882: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/change_equipped_other.asm:22 STA @VIRTUAL04
    case 0xC45883: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/change_equipped_other.asm:23 LDA @VIRTUAL02
    case 0xC45885: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/change_equipped_other.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC45887: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/change_equipped_other.asm:25 STA __BSS_START__,X
    case 0xC45889: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/change_equipped_other.asm:26 LDY @LOCAL00
    case 0xC4588C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_other.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC4588E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_other.asm:28 TYA
    case 0xC45890: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:29 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC45891: cpu.execute_instruction<0x22>(0xC2192B, 4); return true;
    // src/misc/change_equipped_other.asm:30 LDY @LOCAL00
    case 0xC45895: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_other.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC45897: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_other.asm:32 TYA
    case 0xC45899: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:33 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC4589A: cpu.execute_instruction<0x22>(0xC21C5D, 4); return true;
    // src/misc/change_equipped_other.asm:34 LDY @LOCAL00
    case 0xC4589E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_other.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC458A0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_other.asm:36 TYA
    case 0xC458A2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_other.asm:37 JSL CALC_RESISTANCES
    case 0xC458A3: cpu.execute_instruction<0x22>(0xC21E03, 4); return true;
    // src/misc/change_equipped_other.asm:38 LDA @VIRTUAL04
    case 0xC458A7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/change_equipped_other.asm:39 END_C_FUNCTION
    case 0xC458A9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/change_equipped_other.asm:39 END_C_FUNCTION
    case 0xC458AA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/change_equipped_weapon.asm (source_named).
bool execute_miscellaneous_change_equipped_weapon_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/change_equipped_weapon.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4577D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC4577F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC45780: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC45781: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC45782: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC45782.
    case 0xC45784: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC45785: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/change_equipped_weapon.asm:9 END_STACK_VARS
    case 0xC45786: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:10 STX @VIRTUAL02
    case 0xC45787: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/change_equipped_weapon.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC45784.
    case 0xC45788: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/change_equipped_weapon.asm:11 TAY
    case 0xC45789: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:12 STY @LOCAL00
    case 0xC4578A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/change_equipped_weapon.asm:13 TYA
    case 0xC4578C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:14 DEC
    case 0xC4578D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:15 LDY #.SIZEOF(char_struct)
    case 0xC4578E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/change_equipped_weapon.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4578E.
    case 0xC45790: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/change_equipped_weapon.asm:16 JSL MULT168
    case 0xC45791: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/change_equipped_weapon.asm:17 CLC
    case 0xC45795: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::WEAPON
    case 0xC45796: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FF, 2); else cpu.execute_instruction<0x69>(0x0099FF, 3); return true;
    // src/misc/change_equipped_weapon.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC45796.
    case 0xC45798: cpu.execute_instruction<0x99>(0x00BDAA, 3); return true;
    // src/misc/change_equipped_weapon.asm:19 TAX
    case 0xC45799: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:20 LDA __BSS_START__,X
    case 0xC4579A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/change_equipped_weapon.asm:20 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC45798.
    case 0xC4579B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/change_equipped_weapon.asm:21 AND #$00FF
    case 0xC4579D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/change_equipped_weapon.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC4579D.
    case 0xC4579F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/change_equipped_weapon.asm:22 STA @VIRTUAL04
    case 0xC457A0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/change_equipped_weapon.asm:23 LDA @VIRTUAL02
    case 0xC457A2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/change_equipped_weapon.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC457A4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:25 STA __BSS_START__,X
    case 0xC457A6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/change_equipped_weapon.asm:26 LDY @LOCAL00
    case 0xC457A9: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_weapon.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC457AB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:28 TYA
    case 0xC457AD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:29 JSL RECALC_CHARACTER_POSTMATH_OFFENSE
    case 0xC457AE: cpu.execute_instruction<0x22>(0xC21857, 4); return true;
    // src/misc/change_equipped_weapon.asm:30 LDY @LOCAL00
    case 0xC457B2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_weapon.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC457B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:32 TYA
    case 0xC457B6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:33 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC457B7: cpu.execute_instruction<0x22>(0xC21BA4, 4); return true;
    // src/misc/change_equipped_weapon.asm:34 LDY @LOCAL00
    case 0xC457BB: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/change_equipped_weapon.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC457BD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:36 TYA
    case 0xC457BF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/change_equipped_weapon.asm:37 JSL RECALC_CHARACTER_MISS_RATE
    case 0xC457C0: cpu.execute_instruction<0x22>(0xC21D95, 4); return true;
    // src/misc/change_equipped_weapon.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC457C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/change_equipped_weapon.asm:39 LDA @VIRTUAL04
    case 0xC457C6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/change_equipped_weapon.asm:40 END_C_FUNCTION
    case 0xC457C8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/change_equipped_weapon.asm:40 END_C_FUNCTION
    case 0xC457C9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/check_if_psi_known.asm (source_named).
bool execute_miscellaneous_check_if_psi_known_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/check_if_psi_known.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45ECE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC45ED0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC45ED1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC45ED2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC45ED3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC45ED3.
    case 0xC45ED5: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC45ED6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/check_if_psi_known.asm:10 END_STACK_VARS
    case 0xC45ED7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:11 STA @LOCAL02
    case 0xC45ED8: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/check_if_psi_known.asm:11 STA @LOCAL02
    // Overlapping static entry reached from 0xC45ED5.
    case 0xC45ED9: cpu.execute_instruction<0x11>(0x0000C9, 2); return true;
    // src/misc/check_if_psi_known.asm:12 CMP #PARTY_MEMBER::NESS
    case 0xC45EDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/check_if_psi_known.asm:12 CMP #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC45ED9.
    case 0xC45EDB: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:12 CMP #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC45EDA.
    case 0xC45EDC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_if_psi_known.asm:13 BEQ @UNKNOWN0
    case 0xC45EDD: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/misc/check_if_psi_known.asm:14 CMP #PARTY_MEMBER::PAULA
    case 0xC45EDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/check_if_psi_known.asm:14 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC45EDF.
    case 0xC45EE1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_if_psi_known.asm:15 BEQ @UNKNOWN1
    case 0xC45EE2: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/check_if_psi_known.asm:16 CMP #PARTY_MEMBER::POO
    case 0xC45EE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/check_if_psi_known.asm:16 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC45EE4.
    case 0xC45EE6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_if_psi_known.asm:17 BEQ @UNKNOWN2
    case 0xC45EE7: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/misc/check_if_psi_known.asm:18 BRA @UNKNOWN3
    case 0xC45EE9: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/misc/check_if_psi_known.asm:20 TXA
    case 0xC45EEB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45EEC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45EEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45EEF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45EF1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45EF2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45EF4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45EF5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/check_if_psi_known.asm:22 CLC
    case 0xC45EF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:23 ADC #psi_ability::ness_level
    case 0xC45EF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/misc/check_if_psi_known.asm:23 ADC #psi_ability::ness_level
    // Overlapping static entry reached from 0xC45EF8.
    case 0xC45EFA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/check_if_psi_known.asm:24 TAX
    case 0xC45EFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC45EFC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:26 LDA f:PSI_ABILITY_TABLE,X
    case 0xC45EFE: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // src/misc/check_if_psi_known.asm:27 STA @VIRTUAL00
    case 0xC45F02: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:28 STA @LOCAL01
    case 0xC45F04: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/check_if_psi_known.asm:29 BRA @UNKNOWN3
    case 0xC45F06: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/misc/check_if_psi_known.asm:32 TXA
    case 0xC45F08: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F09: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F0C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F0F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F12: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/check_if_psi_known.asm:34 CLC
    case 0xC45F14: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:35 ADC #psi_ability::paula_level
    case 0xC45F15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/misc/check_if_psi_known.asm:35 ADC #psi_ability::paula_level
    // Overlapping static entry reached from 0xC45F15.
    case 0xC45F17: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/check_if_psi_known.asm:36 TAX
    case 0xC45F18: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC45F19: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:38 LDA f:PSI_ABILITY_TABLE,X
    case 0xC45F1B: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // src/misc/check_if_psi_known.asm:39 STA @VIRTUAL00
    case 0xC45F1F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:40 STA @LOCAL01
    case 0xC45F21: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/check_if_psi_known.asm:41 BRA @UNKNOWN3
    case 0xC45F23: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/misc/check_if_psi_known.asm:44 TXA
    case 0xC45F25: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F26: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F29: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F2C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/check_if_psi_known.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC45F2F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/check_if_psi_known.asm:46 CLC
    case 0xC45F31: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:47 ADC #psi_ability::poo_level
    case 0xC45F32: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/check_if_psi_known.asm:47 ADC #psi_ability::poo_level
    // Overlapping static entry reached from 0xC45F32.
    case 0xC45F34: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/check_if_psi_known.asm:48 TAX
    case 0xC45F35: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC45F36: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:50 LDA f:PSI_ABILITY_TABLE,X
    case 0xC45F38: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // src/misc/check_if_psi_known.asm:51 STA @VIRTUAL00
    case 0xC45F3C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:52 STA @LOCAL01
    case 0xC45F3E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/check_if_psi_known.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC45F40: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:55 LDA @LOCAL01
    case 0xC45F42: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/check_if_psi_known.asm:56 STA @VIRTUAL00
    case 0xC45F44: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC45F46: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:58 LDA @VIRTUAL00
    case 0xC45F48: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:59 AND #$00FF
    case 0xC45F4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_if_psi_known.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC45F4A.
    case 0xC45F4C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_if_psi_known.asm:60 BEQ @UNKNOWN6
    case 0xC45F4D: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/misc/check_if_psi_known.asm:61 LDX #0
    case 0xC45F4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/check_if_psi_known.asm:61 LDX #0
    // Overlapping static entry reached from 0xC45F4F.
    case 0xC45F51: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/check_if_psi_known.asm:62 STX @LOCAL00
    case 0xC45F52: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/check_if_psi_known.asm:63 LDA @LOCAL02
    case 0xC45F54: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/check_if_psi_known.asm:64 DEC
    case 0xC45F56: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:65 LDY #.SIZEOF(char_struct)
    case 0xC45F57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/check_if_psi_known.asm:65 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC45F57.
    case 0xC45F59: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/check_if_psi_known.asm:66 JSL MULT168
    case 0xC45F5A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/check_if_psi_known.asm:67 TAX
    case 0xC45F5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC45F5F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:69 LDA @VIRTUAL00
    case 0xC45F61: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/check_if_psi_known.asm:70 CMP PARTY_CHARACTERS+char_struct::level,X
    case 0xC45F63: cpu.execute_instruction<0xDD>(0x0099D3, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/misc/check_if_psi_known.asm:71 BGT @UNKNOWN5
    case 0xC45F66: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/misc/check_if_psi_known.asm:71 BGT @UNKNOWN5
    case 0xC45F68: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/misc/check_if_psi_known.asm:72 LDX #1
    case 0xC45F6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/check_if_psi_known.asm:72 LDX #1
    // Overlapping static entry reached from 0xC45F6A.
    case 0xC45F6C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/check_if_psi_known.asm:73 STX @LOCAL00
    case 0xC45F6D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/check_if_psi_known.asm:75 LDX @LOCAL00
    case 0xC45F6F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/check_if_psi_known.asm:76 REP #PROC_FLAGS::ACCUM8
    case 0xC45F71: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/check_if_psi_known.asm:77 TXA
    case 0xC45F73: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/check_if_psi_known.asm:78 BRA @UNKNOWN7
    case 0xC45F74: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/check_if_psi_known.asm:80 LDA #0
    case 0xC45F76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/check_if_psi_known.asm:80 LDA #0
    // Overlapping static entry reached from 0xC45F76.
    case 0xC45F78: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/check_if_psi_known.asm:82 END_C_FUNCTION
    case 0xC45F79: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/check_if_psi_known.asm:82 END_C_FUNCTION
    case 0xC45F7A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/check_item_equipped.asm (source_named).
bool execute_miscellaneous_check_item_equipped_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/check_item_equipped.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3E9A0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E9A2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E9A3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E9A4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E9A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E9A5.
    case 0xC3E9A7: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E9A8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/check_item_equipped.asm:7 END_STACK_VARS
    case 0xC3E9A9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:8 STX @VIRTUAL02
    case 0xC3E9AA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E9A7.
    case 0xC3E9AB: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/check_item_equipped.asm:9 TAX
    case 0xC3E9AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:10 DEC
    case 0xC3E9AD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:11 LDY #.SIZEOF(char_struct)
    case 0xC3E9AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/check_item_equipped.asm:11 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E9AE.
    case 0xC3E9B0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/check_item_equipped.asm:12 JSL MULT168
    case 0xC3E9B1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/check_item_equipped.asm:13 TAX
    case 0xC3E9B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:14 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC3E9B6: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/misc/check_item_equipped.asm:15 AND #$00FF
    case 0xC3E9B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC3E9B9.
    case 0xC3E9BB: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:16 CMP @VIRTUAL02
    case 0xC3E9BC: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:17 BNE @UNKNOWN0
    case 0xC3E9BE: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:18 LDA #$0001
    case 0xC3E9C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:18 LDA #$0001
    // Overlapping static entry reached from 0xC3E9C0.
    case 0xC3E9C2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:19 BRA @UNKNOWN4
    case 0xC3E9C3: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/misc/check_item_equipped.asm:21 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC3E9C5: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/misc/check_item_equipped.asm:22 AND #$00FF
    case 0xC3E9C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC3E9C8.
    case 0xC3E9CA: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:23 CMP @VIRTUAL02
    case 0xC3E9CB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:24 BNE @UNKNOWN1
    case 0xC3E9CD: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:25 LDA #$0001
    case 0xC3E9CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:25 LDA #$0001
    // Overlapping static entry reached from 0xC3E9CF.
    case 0xC3E9D1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:26 BRA @UNKNOWN4
    case 0xC3E9D2: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/misc/check_item_equipped.asm:28 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC3E9D4: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/misc/check_item_equipped.asm:29 AND #$00FF
    case 0xC3E9D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC3E9D7.
    case 0xC3E9D9: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:30 CMP @VIRTUAL02
    case 0xC3E9DA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:31 BNE @UNKNOWN2
    case 0xC3E9DC: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:32 LDA #$0001
    case 0xC3E9DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:32 LDA #$0001
    // Overlapping static entry reached from 0xC3E9DE.
    case 0xC3E9E0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:33 BRA @UNKNOWN4
    case 0xC3E9E1: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/misc/check_item_equipped.asm:35 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC3E9E3: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/misc/check_item_equipped.asm:36 AND #$00FF
    case 0xC3E9E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC3E9E6.
    case 0xC3E9E8: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:37 CMP @VIRTUAL02
    case 0xC3E9E9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:38 BNE @UNKNOWN3
    case 0xC3E9EB: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:39 LDA #$0001
    case 0xC3E9ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:39 LDA #$0001
    // Overlapping static entry reached from 0xC3E9ED.
    case 0xC3E9EF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:40 BRA @UNKNOWN4
    case 0xC3E9F0: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/check_item_equipped.asm:42 LDA #$0000
    case 0xC3E9F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/check_item_equipped.asm:42 LDA #$0000
    // Overlapping static entry reached from 0xC3E9F2.
    case 0xC3E9F4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/misc/check_item_equipped.asm:44 PLD
    case 0xC3E9F5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:45 RTL
    case 0xC3E9F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/check_status_group.asm (source_named).
bool execute_miscellaneous_check_status_group_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/check_status_group.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC458AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC458B1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC458B2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC458B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC458B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC458B4.
    case 0xC458B6: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC458B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/check_status_group.asm:10 END_STACK_VARS
    case 0xC458B8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:11 TXY
    case 0xC458B9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:12 STY @LOCAL01
    case 0xC458BA: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/check_status_group.asm:13 TAX
    case 0xC458BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:14 STX @LOCAL00
    case 0xC458BD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/check_status_group.asm:15 CPY #8
    case 0xC458BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/misc/check_status_group.asm:15 CPY #8
    // Overlapping static entry reached from 0xC458BF.
    case 0xC458C1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/check_status_group.asm:16 BNE @UNKNOWN0
    case 0xC458C2: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/misc/check_status_group.asm:17 LDA GAME_STATE + game_state::party_status
    case 0xC458C4: cpu.execute_instruction<0xAD>(0x009840, 3); return true;
    // src/misc/check_status_group.asm:18 AND #$00FF
    case 0xC458C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_status_group.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC458C7.
    case 0xC458C9: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/misc/check_status_group.asm:19 INC
    case 0xC458CA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:20 BRA @UNKNOWN2
    case 0xC458CB: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/misc/check_status_group.asm:22 TXA
    case 0xC458CD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:23 JSL UNKNOWN_C2239D
    case 0xC458CE: cpu.execute_instruction<0x22>(0xC2239D, 4); return true;
    // src/misc/check_status_group.asm:24 CMP #0
    case 0xC458D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/check_status_group.asm:24 CMP #0
    // Overlapping static entry reached from 0xC458D2.
    case 0xC458D4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/check_status_group.asm:25 BEQ @UNKNOWN1
    case 0xC458D5: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/misc/check_status_group.asm:26 LDY @LOCAL01
    case 0xC458D7: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/check_status_group.asm:27 TYA
    case 0xC458D9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:28 DEC
    case 0xC458DA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:29 STA @VIRTUAL02
    case 0xC458DB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/check_status_group.asm:30 LDX @LOCAL00
    case 0xC458DD: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/check_status_group.asm:31 TXA
    case 0xC458DF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:32 DEC
    case 0xC458E0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC458E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/check_status_group.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC458E1.
    case 0xC458E3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/check_status_group.asm:34 JSL MULT168
    case 0xC458E4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/check_status_group.asm:35 CLC
    case 0xC458E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC458E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/misc/check_status_group.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC458E9.
    case 0xC458EB: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/check_status_group.asm:37 CLC
    case 0xC458EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:38 ADC @VIRTUAL02
    case 0xC458ED: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/check_status_group.asm:38 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC458EB.
    case 0xC458EE: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/check_status_group.asm:39 TAX
    case 0xC458EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:40 LDA __BSS_START__,X
    case 0xC458F0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/check_status_group.asm:41 AND #$00FF
    case 0xC458F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/check_status_group.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC458F3.
    case 0xC458F5: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/misc/check_status_group.asm:42 INC
    case 0xC458F6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/check_status_group.asm:43 BRA @UNKNOWN2
    case 0xC458F7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/check_status_group.asm:45 LDA #0
    case 0xC458F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/check_status_group.asm:45 LDA #0
    // Overlapping static entry reached from 0xC458F9.
    case 0xC458FB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/check_status_group.asm:47 END_C_FUNCTION
    case 0xC458FC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/check_status_group.asm:47 END_C_FUNCTION
    case 0xC458FD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/decrease_wallet_balance.asm (source_named).
bool execute_miscellaneous_decrease_wallet_balance_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/decrease_wallet_balance.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC22272: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    case 0xC22274: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    case 0xC22275: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    case 0xC22276: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC22276.
    case 0xC22278: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/decrease_wallet_balance.asm:6 END_STACK_VARS
    case 0xC22279: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/decrease_wallet_balance.asm:7 MOVE_INT @PARAM00, $06
    case 0xC2227A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:7 MOVE_INT @PARAM00, $06
    case 0xC2227C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:7 MOVE_INT @PARAM00, $06
    case 0xC2227E: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:7 MOVE_INT @PARAM00, $06
    case 0xC22280: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/decrease_wallet_balance.asm:8 LDY #.LOWORD(GAME_STATE)+game_state::money_carried
    case 0xC22282: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000031, 2); else cpu.execute_instruction<0xA0>(0x009831, 3); return true;
    // src/misc/decrease_wallet_balance.asm:8 LDY #.LOWORD(GAME_STATE)+game_state::money_carried
    // Overlapping static entry reached from 0xC22282.
    case 0xC22284: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/decrease_wallet_balance.asm:9 MOVE_INT $06, $0A
    case 0xC22285: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:9 MOVE_INT $06, $0A
    case 0xC22287: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:9 MOVE_INT $06, $0A
    case 0xC22289: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:9 MOVE_INT $06, $0A
    case 0xC2228B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/decrease_wallet_balance.asm:10 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC2228D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:10 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC22290: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/decrease_wallet_balance.asm:10 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC22292: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:10 MOVE_INT_YPTRSRC __BSS_START__, $06
    case 0xC22295: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/decrease_wallet_balance.asm:11 SEC
    case 0xC22297: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC22298: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC2229A: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC2229C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC2229E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC222A0: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:12 SUB_INT_ASSIGN $06, $0A
    case 0xC222A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    case 0xC222A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    // Overlapping static entry reached from 0xC2D343.
    case 0xC222A5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    // Overlapping static entry reached from 0xC222A4.
    case 0xC222A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    case 0xC222A7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    case 0xC222A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    // Overlapping static entry reached from 0xC222A9.
    case 0xC222AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:13 MOVE_INT_CONSTANT NULL, $0A
    case 0xC222AC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/decrease_wallet_balance.asm:14 CLC
    case 0xC222AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/decrease_wallet_balance.asm:15 LDA $0A
    case 0xC222AF: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/misc/decrease_wallet_balance.asm:16 SBC $06
    case 0xC222B1: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/misc/decrease_wallet_balance.asm:17 LDA $0C
    case 0xC222B3: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/misc/decrease_wallet_balance.asm:18 SBC $08
    case 0xC222B5: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/decrease_wallet_balance.asm:19 BRANCHLTEQS @UNKNOWN2
    case 0xC222B7: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:19 BRANCHLTEQS @UNKNOWN2
    case 0xC222B9: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/decrease_wallet_balance.asm:19 BRANCHLTEQS @UNKNOWN2
    case 0xC222BB: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/decrease_wallet_balance.asm:19 BRANCHLTEQS @UNKNOWN2
    case 0xC222BD: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/decrease_wallet_balance.asm:20 LDA #$0001
    case 0xC222BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/decrease_wallet_balance.asm:20 LDA #$0001
    // Overlapping static entry reached from 0xC222BF.
    case 0xC222C1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/decrease_wallet_balance.asm:21 BRA @UNKNOWN3
    case 0xC222C2: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/decrease_wallet_balance.asm:23 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC222C4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/decrease_wallet_balance.asm:23 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC222C6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/decrease_wallet_balance.asm:23 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC222C9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/decrease_wallet_balance.asm:23 MOVE_INT_YPTRDEST $06, __BSS_START__
    case 0xC222CB: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/decrease_wallet_balance.asm:24 LDA #$0000
    case 0xC222CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/decrease_wallet_balance.asm:24 LDA #$0000
    // Overlapping static entry reached from 0xC222CE.
    case 0xC222D0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/misc/decrease_wallet_balance.asm:26 PLD
    case 0xC222D1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/decrease_wallet_balance.asm:27 RTL
    case 0xC222D2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/equip_item.asm (source_named).
bool execute_miscellaneous_equip_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/equip_item.asm:3 BEGIN_C_FUNCTION
    case 0xC19066: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC19068: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC19069: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC1906A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC1906B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1906B.
    case 0xC1906D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC1906E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/equip_item.asm:10 END_STACK_VARS
    case 0xC1906F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/equip_item.asm:11 STX @LOCAL01
    case 0xC19070: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/equip_item.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC1906D.
    case 0xC19071: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/misc/equip_item.asm:12 STA @LOCAL00
    case 0xC19072: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:12 STA @LOCAL00
    // Overlapping static entry reached from 0xC19071.
    case 0xC19073: cpu.execute_instruction<0x0E>(0x003A8A, 3); return true;
    // src/misc/equip_item.asm:13 TXA
    case 0xC19074: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/equip_item.asm:14 DEC
    case 0xC19075: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/equip_item.asm:15 STA @VIRTUAL02
    case 0xC19076: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/equip_item.asm:16 LDA @LOCAL00
    case 0xC19078: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:17 DEC
    case 0xC1907A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/equip_item.asm:18 LDY #.SIZEOF(char_struct)
    case 0xC1907B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/equip_item.asm:18 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1907B.
    case 0xC1907D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/equip_item.asm:19 JSL MULT168
    case 0xC1907E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/equip_item.asm:20 CLC
    case 0xC19082: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/equip_item.asm:21 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC19083: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/equip_item.asm:21 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC19083.
    case 0xC19085: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/equip_item.asm:22 CLC
    case 0xC19086: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/equip_item.asm:23 ADC @VIRTUAL02
    case 0xC19087: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/equip_item.asm:23 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC19085.
    case 0xC19088: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/equip_item.asm:24 TAX
    case 0xC19089: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/equip_item.asm:25 LDA __BSS_START__,X
    case 0xC1908A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/equip_item.asm:26 AND #$00FF
    case 0xC1908D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/equip_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1908D.
    case 0xC1908F: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/equip_item.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19090: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/equip_item.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19090.
    case 0xC19092: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/equip_item.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19093: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/equip_item.asm:28 CLC
    case 0xC19097: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/equip_item.asm:29 ADC #item::type
    case 0xC19098: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/misc/equip_item.asm:29 ADC #item::type
    // Overlapping static entry reached from 0xC19098.
    case 0xC1909A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/equip_item.asm:30 TAX
    case 0xC1909B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/equip_item.asm:31 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1909C: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/equip_item.asm:32 AND #$00FF
    case 0xC190A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/equip_item.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC190A0.
    case 0xC190A2: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/equip_item.asm:33 AND #EQUIPMENT_SLOT::ALL<<2
    case 0xC190A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/misc/equip_item.asm:33 AND #EQUIPMENT_SLOT::ALL<<2
    // Overlapping static entry reached from 0xC190A3.
    case 0xC190A5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/equip_item.asm:34 BEQ @UNKNOWN0
    case 0xC190A6: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/equip_item.asm:35 CMP #EQUIPMENT_SLOT::BODY<<2
    case 0xC190A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/equip_item.asm:35 CMP #EQUIPMENT_SLOT::BODY<<2
    // Overlapping static entry reached from 0xC190A8.
    case 0xC190AA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/equip_item.asm:36 BEQ @UNKNOWN1
    case 0xC190AB: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/misc/equip_item.asm:37 CMP #EQUIPMENT_SLOT::ARMS<<2
    case 0xC190AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/misc/equip_item.asm:37 CMP #EQUIPMENT_SLOT::ARMS<<2
    // Overlapping static entry reached from 0xC190AD.
    case 0xC190AF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/equip_item.asm:38 BEQ @UNKNOWN2
    case 0xC190B0: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/misc/equip_item.asm:39 CMP #EQUIPMENT_SLOT::OTHER<<2
    case 0xC190B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/misc/equip_item.asm:39 CMP #EQUIPMENT_SLOT::OTHER<<2
    // Overlapping static entry reached from 0xC190B2.
    case 0xC190B4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/equip_item.asm:40 BEQ @UNKNOWN3
    case 0xC190B5: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/misc/equip_item.asm:41 BRA @UNKNOWN4
    case 0xC190B7: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/misc/equip_item.asm:43 LDX @LOCAL01
    case 0xC190B9: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/equip_item.asm:44 LDA @LOCAL00
    case 0xC190BB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:45 JSL CHANGE_EQUIPPED_WEAPON
    case 0xC190BD: cpu.execute_instruction<0x22>(0xC4577D, 4); return true;
    // src/misc/equip_item.asm:46 BRA @UNKNOWN5
    case 0xC190C1: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/misc/equip_item.asm:48 LDX @LOCAL01
    case 0xC190C3: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/equip_item.asm:49 LDA @LOCAL00
    case 0xC190C5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:50 JSL CHANGE_EQUIPPED_BODY
    case 0xC190C7: cpu.execute_instruction<0x22>(0xC457CA, 4); return true;
    // src/misc/equip_item.asm:51 BRA @UNKNOWN5
    case 0xC190CB: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/misc/equip_item.asm:53 LDX @LOCAL01
    case 0xC190CD: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/equip_item.asm:54 LDA @LOCAL00
    case 0xC190CF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:55 JSL CHANGE_EQUIPPED_ARMS
    case 0xC190D1: cpu.execute_instruction<0x22>(0xC45815, 4); return true;
    // src/misc/equip_item.asm:56 BRA @UNKNOWN5
    case 0xC190D5: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/misc/equip_item.asm:58 LDX @LOCAL01
    case 0xC190D7: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/equip_item.asm:59 LDA @LOCAL00
    case 0xC190D9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/equip_item.asm:60 JSL CHANGE_EQUIPPED_OTHER
    case 0xC190DB: cpu.execute_instruction<0x22>(0xC45860, 4); return true;
    // src/misc/equip_item.asm:61 BRA @UNKNOWN5
    case 0xC190DF: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/equip_item.asm:63 LDA #0
    case 0xC190E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/equip_item.asm:63 LDA #0
    // Overlapping static entry reached from 0xC190E1.
    case 0xC190E3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/equip_item.asm:65 END_C_FUNCTION
    case 0xC190E4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/equip_item.asm:65 END_C_FUNCTION
    case 0xC190E5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/escargo_express_move.asm (source_named).
bool execute_miscellaneous_escargo_express_move_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/escargo_express_move.asm:3 BEGIN_C_FUNCTION
    case 0xC19183: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19185: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19186: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19187: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC19188: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC19188.
    case 0xC1918A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC1918B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/escargo_express_move.asm:9 END_STACK_VARS
    case 0xC1918C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/escargo_express_move.asm:10 STX @VIRTUAL02
    case 0xC1918D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/escargo_express_move.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1918A.
    case 0xC1918E: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/misc/escargo_express_move.asm:11 TAY
    case 0xC1918F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/escargo_express_move.asm:12 STY @LOCAL00
    case 0xC19190: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/escargo_express_move.asm:13 LDX @VIRTUAL02
    case 0xC19192: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/escargo_express_move.asm:14 TYA
    case 0xC19194: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/escargo_express_move.asm:15 JSL GET_CHARACTER_ITEM
    case 0xC19195: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/misc/escargo_express_move.asm:16 JSR ESCARGO_EXPRESS_STORE
    case 0xC19199: cpu.execute_instruction<0x20>(0x00913D, 3); return true;
    // src/misc/escargo_express_move.asm:17 CMP #FALSE
    case 0xC1919C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/escargo_express_move.asm:17 CMP #FALSE
    // Overlapping static entry reached from 0xC1919C.
    case 0xC1919E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/escargo_express_move.asm:18 BEQ @RETURN_ZERO
    case 0xC1919F: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/escargo_express_move.asm:19 LDX @VIRTUAL02
    case 0xC191A1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/escargo_express_move.asm:20 LDY @LOCAL00
    case 0xC191A3: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/escargo_express_move.asm:21 TYA
    case 0xC191A5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/escargo_express_move.asm:22 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC191A6: cpu.execute_instruction<0x20>(0x008C27, 3); return true;
    // src/misc/escargo_express_move.asm:23 BRA @RETURN
    case 0xC191A9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/escargo_express_move.asm:25 LDA #FALSE
    case 0xC191AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/escargo_express_move.asm:25 LDA #FALSE
    // Overlapping static entry reached from 0xC191AB.
    case 0xC191AD: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/escargo_express_move.asm:27 END_C_FUNCTION
    case 0xC191AE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/escargo_express_move.asm:27 END_C_FUNCTION
    case 0xC191AF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/escargo_express_store.asm (source_named).
bool execute_miscellaneous_escargo_express_store_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/escargo_express_store.asm:3 BEGIN_C_FUNCTION
    case 0xC1913D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC1913F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC19140: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC19141: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC19142: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC19142.
    case 0xC19144: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC19145: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC19146: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:9 TAY
    case 0xC19147: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:10 LDA #0
    case 0xC19148: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/escargo_express_store.asm:10 LDA #0
    // Overlapping static entry reached from 0xC19148.
    case 0xC1914A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/escargo_express_store.asm:11 STA @LOCAL00
    case 0xC1914B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/escargo_express_store.asm:12 BRA @LOOP_ENTRY
    case 0xC1914D: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/misc/escargo_express_store.asm:14 LDA @LOCAL00
    case 0xC1914F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/escargo_express_store.asm:15 CLC
    case 0xC19151: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:21 ADC #.LOWORD(GAME_STATE)+game_state::escargo_express_items
    case 0xC19152: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004B, 2); else cpu.execute_instruction<0x69>(0x00984B, 3); return true;
    // src/misc/escargo_express_store.asm:21 ADC #.LOWORD(GAME_STATE)+game_state::escargo_express_items
    // Overlapping static entry reached from 0xC19152.
    case 0xC19154: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:23 TAX
    case 0xC19155: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:24 LDA __BSS_START__,X
    case 0xC19156: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/escargo_express_store.asm:25 AND #$00FF
    case 0xC19159: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/escargo_express_store.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC19159.
    case 0xC1915B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/escargo_express_store.asm:26 BNE @ENTRY_FILLED
    case 0xC1915C: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/misc/escargo_express_store.asm:27 TYA
    case 0xC1915E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC1915F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/escargo_express_store.asm:29 STA __BSS_START__,X
    case 0xC19161: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/escargo_express_store.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC19164: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/escargo_express_store.asm:31 TYA
    case 0xC19166: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:32 BRA @RETURN
    case 0xC19167: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/misc/escargo_express_store.asm:34 LDA @LOCAL00
    case 0xC19169: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/escargo_express_store.asm:35 INC
    case 0xC1916B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:36 STA @LOCAL00
    case 0xC1916C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/escargo_express_store.asm:38 STA @VIRTUAL02
    case 0xC1916E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/escargo_express_store.asm:39 LDA #.SIZEOF(game_state::escargo_express_items)
    case 0xC19170: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/misc/escargo_express_store.asm:39 LDA #.SIZEOF(game_state::escargo_express_items)
    // Overlapping static entry reached from 0xC19170.
    case 0xC19172: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/escargo_express_store.asm:40 CLC
    case 0xC19173: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/escargo_express_store.asm:41 SBC @VIRTUAL02
    case 0xC19174: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/escargo_express_store.asm:42 BRANCHGTS @LOOP_BEGIN
    case 0xC19176: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/escargo_express_store.asm:42 BRANCHGTS @LOOP_BEGIN
    case 0xC19178: cpu.execute_instruction<0x10>(0x0000D5, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/escargo_express_store.asm:42 BRANCHGTS @LOOP_BEGIN
    case 0xC1917A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/escargo_express_store.asm:42 BRANCHGTS @LOOP_BEGIN
    case 0xC1917C: cpu.execute_instruction<0x30>(0x0000D1, 2); return true;
    // src/misc/escargo_express_store.asm:43 LDA #FALSE
    case 0xC1917E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/escargo_express_store.asm:43 LDA #FALSE
    // Overlapping static entry reached from 0xC1917E.
    case 0xC19180: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/escargo_express_store.asm:45 END_C_FUNCTION
    case 0xC19181: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/escargo_express_store.asm:45 END_C_FUNCTION
    case 0xC19182: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_condiment.asm (source_named).
bool execute_miscellaneous_find_condiment_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_condiment.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB33: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1DB35: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1DB36: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1DB37: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1DB38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DB38.
    case 0xC1DB3A: cpu.execute_instruction<0xFF>(0x29685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1DB3B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_condiment.asm:10 END_STACK_VARS
    case 0xC1DB3C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:11 AND #$00FF
    case 0xC1DB3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC1DB3A.
    case 0xC1DB3E: cpu.execute_instruction<0xFF>(0x27A000, 4); return true;
    // src/misc/find_condiment.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC1DB3D.
    case 0xC1DB3F: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/find_condiment.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DB40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/find_condiment.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC1DB40.
    case 0xC1DB42: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/find_condiment.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DB43: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/find_condiment.asm:13 CLC
    case 0xC1DB47: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:14 ADC #item::type
    case 0xC1DB48: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/misc/find_condiment.asm:14 ADC #item::type
    // Overlapping static entry reached from 0xC1DB48.
    case 0xC1DB4A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/find_condiment.asm:15 TAX
    case 0xC1DB4B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:16 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1DB4C: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/find_condiment.asm:17 AND #$00FF
    case 0xC1DB50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC1DB50.
    case 0xC1DB52: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/find_condiment.asm:18 AND #$003C
    case 0xC1DB53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003C, 2); else cpu.execute_instruction<0x29>(0x00003C, 3); return true;
    // src/misc/find_condiment.asm:18 AND #$003C
    // Overlapping static entry reached from 0xC1DB53.
    case 0xC1DB55: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/find_condiment.asm:19 CMP #$0020
    case 0xC1DB56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/misc/find_condiment.asm:19 CMP #$0020
    // Overlapping static entry reached from 0xC1DB56.
    case 0xC1DB58: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_condiment.asm:20 BNE @UNKNOWN3
    case 0xC1DB59: cpu.execute_instruction<0xD0>(0x00005B, 2); return true;
    // src/misc/find_condiment.asm:21 LDX CURRENT_ATTACKER
    case 0xC1DB5B: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/misc/find_condiment.asm:22 LDA __BSS_START__,X
    case 0xC1DB5E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_condiment.asm:23 TAY
    case 0xC1DB61: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:24 DEY
    case 0xC1DB62: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:25 STY @LOCAL02
    case 0xC1DB63: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/find_condiment.asm:26 LDX #0
    case 0xC1DB65: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/find_condiment.asm:26 LDX #0
    // Overlapping static entry reached from 0xC1DB65.
    case 0xC1DB67: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/find_condiment.asm:27 STX @LOCAL01
    case 0xC1DB68: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/find_condiment.asm:28 BRA @UNKNOWN2
    case 0xC1DB6A: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/misc/find_condiment.asm:30 AND #$00FF
    case 0xC1DB6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1DB6C.
    case 0xC1DB6E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_condiment.asm:31 STA @LOCAL00
    case 0xC1DB6F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/find_condiment.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DB71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/find_condiment.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC1DB71.
    case 0xC1DB73: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/find_condiment.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DB74: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/find_condiment.asm:33 CLC
    case 0xC1DB78: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:34 ADC #item::type
    case 0xC1DB79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/misc/find_condiment.asm:34 ADC #item::type
    // Overlapping static entry reached from 0xC1DB79.
    case 0xC1DB7B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/find_condiment.asm:35 TAX
    case 0xC1DB7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:36 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1DB7D: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/find_condiment.asm:37 AND #$00FF
    case 0xC1DB81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC1DB81.
    case 0xC1DB83: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/find_condiment.asm:38 AND #$003C
    case 0xC1DB84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003C, 2); else cpu.execute_instruction<0x29>(0x00003C, 3); return true;
    // src/misc/find_condiment.asm:38 AND #$003C
    // Overlapping static entry reached from 0xC1DB84.
    case 0xC1DB86: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/find_condiment.asm:39 CMP #$0028
    case 0xC1DB87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000028, 3); return true;
    // src/misc/find_condiment.asm:39 CMP #$0028
    // Overlapping static entry reached from 0xC1DB87.
    case 0xC1DB89: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_condiment.asm:40 BNE @UNKNOWN1
    case 0xC1DB8A: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/misc/find_condiment.asm:41 LDA @LOCAL00
    case 0xC1DB8C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_condiment.asm:42 BRA @UNKNOWN4
    case 0xC1DB8E: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/misc/find_condiment.asm:44 LDX @LOCAL01
    case 0xC1DB90: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/find_condiment.asm:45 INX
    case 0xC1DB92: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:46 STX @LOCAL01
    case 0xC1DB93: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/find_condiment.asm:48 CPX #.SIZEOF(char_struct::items)
    case 0xC1DB95: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000E, 2); else cpu.execute_instruction<0xE0>(0x00000E, 3); return true;
    // src/misc/find_condiment.asm:48 CPX #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC1DB95.
    case 0xC1DB97: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/misc/find_condiment.asm:49 BCS @UNKNOWN3
    case 0xC1DB98: cpu.execute_instruction<0xB0>(0x00001C, 2); return true;
    // src/misc/find_condiment.asm:50 STX @VIRTUAL02
    case 0xC1DB9A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/find_condiment.asm:51 LDY @LOCAL02
    case 0xC1DB9C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/find_condiment.asm:52 TYA
    case 0xC1DB9E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:53 LDY #.SIZEOF(char_struct)
    case 0xC1DB9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/find_condiment.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DB9F.
    case 0xC1DBA1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/find_condiment.asm:54 JSL MULT168
    case 0xC1DBA2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/find_condiment.asm:55 CLC
    case 0xC1DBA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1DBA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/find_condiment.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1DBA7.
    case 0xC1DBA9: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/find_condiment.asm:57 CLC
    case 0xC1DBAA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:58 ADC @VIRTUAL02
    case 0xC1DBAB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/find_condiment.asm:58 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1DBA9.
    case 0xC1DBAC: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/find_condiment.asm:59 TAX
    case 0xC1DBAD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_condiment.asm:60 LDA __BSS_START__,X
    case 0xC1DBAE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_condiment.asm:61 AND #$00FF
    case 0xC1DBB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_condiment.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC1DBB1.
    case 0xC1DBB3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_condiment.asm:62 BNE @UNKNOWN0
    case 0xC1DBB4: cpu.execute_instruction<0xD0>(0x0000B6, 2); return true;
    // src/misc/find_condiment.asm:64 LDA #FALSE
    case 0xC1DBB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_condiment.asm:64 LDA #FALSE
    // Overlapping static entry reached from 0xC1DBB6.
    case 0xC1DBB8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_condiment.asm:66 END_C_FUNCTION
    case 0xC1DBB9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/find_condiment.asm:66 END_C_FUNCTION
    case 0xC1DBBA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_inventory_space.asm (source_named).
bool execute_miscellaneous_find_inventory_space_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_inventory_space.asm:3 BEGIN_C_FUNCTION
    case 0xC456E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC456E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC456E7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC456E8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC456E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC456E9.
    case 0xC456EB: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC456EC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_inventory_space.asm:8 END_STACK_VARS
    case 0xC456ED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:9 DEC
    case 0xC456EE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:10 STA @LOCAL00
    case 0xC456EF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/find_inventory_space.asm:11 LDA #0
    case 0xC456F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_inventory_space.asm:11 LDA #0
    // Overlapping static entry reached from 0xC456F1.
    case 0xC456F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_inventory_space.asm:12 STA @VIRTUAL02
    case 0xC456F4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_inventory_space.asm:13 BRA @UNKNOWN2
    case 0xC456F6: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/misc/find_inventory_space.asm:15 LDA @LOCAL00
    case 0xC456F8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_inventory_space.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC456FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/find_inventory_space.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC456FA.
    case 0xC456FC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/find_inventory_space.asm:17 JSL MULT168
    case 0xC456FD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/find_inventory_space.asm:18 CLC
    case 0xC45701: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:19 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC45702: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/find_inventory_space.asm:19 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC45702.
    case 0xC45704: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/find_inventory_space.asm:20 CLC
    case 0xC45705: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:21 ADC @VIRTUAL02
    case 0xC45706: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/find_inventory_space.asm:21 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC45704.
    case 0xC45707: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/find_inventory_space.asm:22 TAX
    case 0xC45708: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:23 LDA __BSS_START__,X
    case 0xC45709: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_inventory_space.asm:24 AND #$00FF
    case 0xC4570C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC4570C.
    case 0xC4570E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_inventory_space.asm:25 BNE @UNKNOWN1
    case 0xC4570F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/find_inventory_space.asm:26 LDA @LOCAL00
    case 0xC45711: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_inventory_space.asm:27 INC
    case 0xC45713: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:28 BRA @UNKNOWN5
    case 0xC45714: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/misc/find_inventory_space.asm:30 INC @VIRTUAL02
    case 0xC45716: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/find_inventory_space.asm:32 LDA #.SIZEOF(char_struct::items)
    case 0xC45718: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/find_inventory_space.asm:32 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC45718.
    case 0xC4571A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/find_inventory_space.asm:33 CLC
    case 0xC4571B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_inventory_space.asm:34 SBC @VIRTUAL02
    case 0xC4571C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/find_inventory_space.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC4571E: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/find_inventory_space.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC45720: cpu.execute_instruction<0x10>(0x0000D6, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/find_inventory_space.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC45722: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/find_inventory_space.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC45724: cpu.execute_instruction<0x30>(0x0000D2, 2); return true;
    // src/misc/find_inventory_space.asm:36 LDA #FALSE
    case 0xC45726: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_inventory_space.asm:36 LDA #FALSE
    // Overlapping static entry reached from 0xC45726.
    case 0xC45728: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_inventory_space.asm:38 END_C_FUNCTION
    case 0xC45729: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/find_inventory_space.asm:38 END_C_FUNCTION
    case 0xC4572A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_inventory_space2.asm (source_named).
bool execute_miscellaneous_find_inventory_space2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_inventory_space2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4572B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC4572D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC4572E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC4572F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC45730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC45730.
    case 0xC45732: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC45733: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_inventory_space2.asm:9 END_STACK_VARS
    case 0xC45734: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:10 CMP #$00FF
    case 0xC45735: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space2.asm:10 CMP #$00FF
    // Overlapping static entry reached from 0xC45732.
    case 0xC45736: cpu.execute_instruction<0xFF>(0x3ED000, 4); return true;
    // src/misc/find_inventory_space2.asm:10 CMP #$00FF
    // Overlapping static entry reached from 0xC45735.
    case 0xC45737: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_inventory_space2.asm:11 BNE @UNKNOWN3
    case 0xC45738: cpu.execute_instruction<0xD0>(0x00003E, 2); return true;
    // src/misc/find_inventory_space2.asm:12 LDY #0
    case 0xC4573A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4573A.
    case 0xC4573C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/misc/find_inventory_space2.asm:13 STY @LOCAL01
    case 0xC4573D: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/find_inventory_space2.asm:14 BRA @UNKNOWN2
    case 0xC4573F: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/misc/find_inventory_space2.asm:16 TYA
    case 0xC45741: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:17 CLC
    case 0xC45742: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:23 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC45743: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006F, 2); else cpu.execute_instruction<0x69>(0x00986F, 3); return true;
    // src/misc/find_inventory_space2.asm:23 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC45743.
    case 0xC45745: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:25 TAX
    case 0xC45746: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:26 STX @LOCAL00
    case 0xC45747: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/find_inventory_space2.asm:27 LDA __BSS_START__,X
    case 0xC45749: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:28 AND #$00FF
    case 0xC4574C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space2.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC4574C.
    case 0xC4574E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/find_inventory_space2.asm:29 JSR FIND_INVENTORY_SPACE
    case 0xC4574F: cpu.execute_instruction<0x20>(0x0056E4, 3); return true;
    // src/misc/find_inventory_space2.asm:30 CMP #$0000
    case 0xC45752: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:30 CMP #$0000
    // Overlapping static entry reached from 0xC45752.
    case 0xC45754: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/find_inventory_space2.asm:31 BEQ @UNKNOWN1
    case 0xC45755: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/find_inventory_space2.asm:32 LDX @LOCAL00
    case 0xC45757: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/find_inventory_space2.asm:33 LDA __BSS_START__,X
    case 0xC45759: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:34 AND #$00FF
    case 0xC4575C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space2.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC4575C.
    case 0xC4575E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/find_inventory_space2.asm:35 BRA @UNKNOWN4
    case 0xC4575F: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/misc/find_inventory_space2.asm:37 LDY @LOCAL01
    case 0xC45761: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/find_inventory_space2.asm:38 INY
    case 0xC45763: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:39 STY @LOCAL01
    case 0xC45764: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/find_inventory_space2.asm:41 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC45766: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/find_inventory_space2.asm:42 AND #$00FF
    case 0xC45769: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_inventory_space2.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC45769.
    case 0xC4576B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_inventory_space2.asm:43 STA @VIRTUAL02
    case 0xC4576C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_inventory_space2.asm:44 TYA
    case 0xC4576E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/find_inventory_space2.asm:45 CMP @VIRTUAL02
    case 0xC4576F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/find_inventory_space2.asm:46 BCC @UNKNOWN0
    case 0xC45771: cpu.execute_instruction<0x90>(0x0000CE, 2); return true;
    // src/misc/find_inventory_space2.asm:47 LDA #0
    case 0xC45773: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_inventory_space2.asm:47 LDA #0
    // Overlapping static entry reached from 0xC45773.
    case 0xC45775: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/find_inventory_space2.asm:48 BRA @UNKNOWN4
    case 0xC45776: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/find_inventory_space2.asm:50 JSR FIND_INVENTORY_SPACE
    case 0xC45778: cpu.execute_instruction<0x20>(0x0056E4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_inventory_space2.asm:52 END_C_FUNCTION
    case 0xC4577B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/find_inventory_space2.asm:52 END_C_FUNCTION
    case 0xC4577C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_item_in_inventory.asm (source_named).
bool execute_miscellaneous_find_item_in_inventory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_item_in_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC45637: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC45639: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC4563A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC4563B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC4563C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4563C.
    case 0xC4563E: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC4563F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_item_in_inventory.asm:9 END_STACK_VARS
    case 0xC45640: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:10 STX @VIRTUAL04
    case 0xC45641: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory.asm:10 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4563E.
    case 0xC45642: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/find_item_in_inventory.asm:11 TAX
    case 0xC45643: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:12 DEC
    case 0xC45644: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:13 STA @LOCAL00
    case 0xC45645: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory.asm:14 LDA #0
    case 0xC45647: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory.asm:14 LDA #0
    // Overlapping static entry reached from 0xC45647.
    case 0xC45649: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_item_in_inventory.asm:15 STA @VIRTUAL02
    case 0xC4564A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory.asm:16 BRA @UNKNOWN2
    case 0xC4564C: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/misc/find_item_in_inventory.asm:18 LDA @LOCAL00
    case 0xC4564E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC45650: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/find_item_in_inventory.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC45650.
    case 0xC45652: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/find_item_in_inventory.asm:20 JSL MULT168
    case 0xC45653: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/find_item_in_inventory.asm:21 CLC
    case 0xC45657: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:22 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC45658: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/find_item_in_inventory.asm:22 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC45658.
    case 0xC4565A: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/find_item_in_inventory.asm:23 CLC
    case 0xC4565B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:24 ADC @VIRTUAL02
    case 0xC4565C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory.asm:24 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC4565A.
    case 0xC4565D: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/find_item_in_inventory.asm:25 TAX
    case 0xC4565E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:26 LDA __BSS_START__,X
    case 0xC4565F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory.asm:27 AND #$00FF
    case 0xC45662: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC45662.
    case 0xC45664: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/find_item_in_inventory.asm:28 CMP @VIRTUAL04
    case 0xC45665: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory.asm:29 BNE @UNKNOWN1
    case 0xC45667: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/find_item_in_inventory.asm:30 LDA @LOCAL00
    case 0xC45669: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory.asm:31 INC
    case 0xC4566B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:32 BRA @UNKNOWN5
    case 0xC4566C: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/misc/find_item_in_inventory.asm:34 INC @VIRTUAL02
    case 0xC4566E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory.asm:36 LDA #.SIZEOF(char_struct::items)
    case 0xC45670: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/find_item_in_inventory.asm:36 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC45670.
    case 0xC45672: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/find_item_in_inventory.asm:37 CLC
    case 0xC45673: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory.asm:38 SBC @VIRTUAL02
    case 0xC45674: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/find_item_in_inventory.asm:39 BRANCHGTS @UNKNOWN0
    case 0xC45676: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/find_item_in_inventory.asm:39 BRANCHGTS @UNKNOWN0
    case 0xC45678: cpu.execute_instruction<0x10>(0x0000D4, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/find_item_in_inventory.asm:39 BRANCHGTS @UNKNOWN0
    case 0xC4567A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/find_item_in_inventory.asm:39 BRANCHGTS @UNKNOWN0
    case 0xC4567C: cpu.execute_instruction<0x30>(0x0000D0, 2); return true;
    // src/misc/find_item_in_inventory.asm:40 LDA #FALSE
    case 0xC4567E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory.asm:40 LDA #FALSE
    // Overlapping static entry reached from 0xC4567E.
    case 0xC45680: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_item_in_inventory.asm:42 END_C_FUNCTION
    case 0xC45681: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/find_item_in_inventory.asm:42 END_C_FUNCTION
    case 0xC45682: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_item_in_inventory2.asm (source_named).
bool execute_miscellaneous_find_item_in_inventory2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_item_in_inventory2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45683: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC45685: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC45686: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC45687: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC45688: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC45688.
    case 0xC4568A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC4568B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_item_in_inventory2.asm:10 END_STACK_VARS
    case 0xC4568C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:11 STX @VIRTUAL04
    case 0xC4568D: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory2.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4568A.
    case 0xC4568E: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/find_item_in_inventory2.asm:12 CMP #$00FF
    case 0xC4568F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory2.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC4568E.
    case 0xC45690: cpu.execute_instruction<0xFF>(0x49D000, 4); return true;
    // src/misc/find_item_in_inventory2.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC4568F.
    case 0xC45691: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/find_item_in_inventory2.asm:13 BNE @UNKNOWN3
    case 0xC45692: cpu.execute_instruction<0xD0>(0x000049, 2); return true;
    // src/misc/find_item_in_inventory2.asm:14 LDA #0
    case 0xC45694: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:14 LDA #0
    // Overlapping static entry reached from 0xC45694.
    case 0xC45696: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_item_in_inventory2.asm:15 STA @VIRTUAL02
    case 0xC45697: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:16 STA @LOCAL01
    case 0xC45699: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/find_item_in_inventory2.asm:17 BRA @UNKNOWN2
    case 0xC4569B: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/misc/find_item_in_inventory2.asm:19 LDA @LOCAL01
    case 0xC4569D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/find_item_in_inventory2.asm:20 STA @VIRTUAL02
    case 0xC4569F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:21 CLC
    case 0xC456A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:27 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC456A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006F, 2); else cpu.execute_instruction<0x69>(0x00986F, 3); return true;
    // src/misc/find_item_in_inventory2.asm:27 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC456A2.
    case 0xC456A4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:29 TAY
    case 0xC456A5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:30 STY @LOCAL00
    case 0xC456A6: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory2.asm:31 LDX @VIRTUAL04
    case 0xC456A8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory2.asm:32 LDA __BSS_START__,Y
    case 0xC456AA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:33 AND #$00FF
    case 0xC456AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory2.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC456AD.
    case 0xC456AF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/find_item_in_inventory2.asm:34 JSR FIND_ITEM_IN_INVENTORY
    case 0xC456B0: cpu.execute_instruction<0x20>(0x005637, 3); return true;
    // src/misc/find_item_in_inventory2.asm:35 CMP #0
    case 0xC456B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:35 CMP #0
    // Overlapping static entry reached from 0xC456B3.
    case 0xC456B5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/find_item_in_inventory2.asm:36 BEQ @UNKNOWN1
    case 0xC456B6: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/find_item_in_inventory2.asm:37 LDY @LOCAL00
    case 0xC456B8: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/find_item_in_inventory2.asm:38 LDA __BSS_START__,Y
    case 0xC456BA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:39 AND #$00FF
    case 0xC456BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory2.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC456BD.
    case 0xC456BF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/find_item_in_inventory2.asm:40 BRA @UNKNOWN4
    case 0xC456C0: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/misc/find_item_in_inventory2.asm:42 INC @VIRTUAL02
    case 0xC456C2: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:43 LDA @VIRTUAL02
    case 0xC456C4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:44 STA @LOCAL01
    case 0xC456C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/find_item_in_inventory2.asm:46 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC456C8: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/find_item_in_inventory2.asm:47 AND #$00FF
    case 0xC456CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/find_item_in_inventory2.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC456CB.
    case 0xC456CD: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/find_item_in_inventory2.asm:48 PHA
    case 0xC456CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:49 LDA @VIRTUAL02
    case 0xC456CF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:50 PLY
    case 0xC456D1: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/find_item_in_inventory2.asm:51 STY @VIRTUAL02
    case 0xC456D2: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:52 CMP @VIRTUAL02
    case 0xC456D4: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/find_item_in_inventory2.asm:53 BCC @UNKNOWN0
    case 0xC456D6: cpu.execute_instruction<0x90>(0x0000C5, 2); return true;
    // src/misc/find_item_in_inventory2.asm:54 LDA #0
    case 0xC456D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/find_item_in_inventory2.asm:54 LDA #0
    // Overlapping static entry reached from 0xC456D8.
    case 0xC456DA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/find_item_in_inventory2.asm:55 BRA @UNKNOWN4
    case 0xC456DB: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/misc/find_item_in_inventory2.asm:57 LDX @VIRTUAL04
    case 0xC456DD: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/find_item_in_inventory2.asm:58 JSR FIND_ITEM_IN_INVENTORY
    case 0xC456DF: cpu.execute_instruction<0x20>(0x005637, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_item_in_inventory2.asm:60 END_C_FUNCTION
    case 0xC456E2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/find_item_in_inventory2.asm:60 END_C_FUNCTION
    case 0xC456E3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/find_path_to_party.asm (source_named).
bool execute_miscellaneous_find_path_to_party_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/find_path_to_party.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0BC74: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC76: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC77: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC78: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x00FFD4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC0BC79.
    case 0xC0BC7B: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC7C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/find_path_to_party.asm:19 END_STACK_VARS
    case 0xC0BC7D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:27 STA @LOCAL0C
    case 0xC0BC7E: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/misc/find_path_to_party.asm:27 STA @LOCAL0C
    // Overlapping static entry reached from 0xC0BC7B.
    case 0xC0BC7F: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:28 LDA GAME_STATE+game_state::current_party_members
    case 0xC0BC80: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/misc/find_path_to_party.asm:29 STA @LOCAL0B
    case 0xC0BC83: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/misc/find_path_to_party.asm:30 LDA #.LOWORD(PATHFINDING_STATE)
    case 0xC0BC85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F200, 3); return true;
    // src/misc/find_path_to_party.asm:30 LDA #.LOWORD(PATHFINDING_STATE)
    // Overlapping static entry reached from 0xC0BC85.
    case 0xC0BC87: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // src/misc/find_path_to_party.asm:31 STA @LOCAL0A
    case 0xC0BC88: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/misc/find_path_to_party.asm:31 STA @LOCAL0A
    // Overlapping static entry reached from 0xC0BC87.
    case 0xC0BC89: cpu.execute_instruction<0x26>(0x00008E, 2); return true;
    // src/misc/find_path_to_party.asm:32 STX PATHFINDING_STATE + pathfinding::radius
    case 0xC0BC8A: cpu.execute_instruction<0x8E>(0x00F278, 3); return true;
    // src/misc/find_path_to_party.asm:32 STX PATHFINDING_STATE + pathfinding::radius
    // Overlapping static entry reached from 0xC0BC89.
    case 0xC0BC8B: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:32 STX PATHFINDING_STATE + pathfinding::radius
    // Overlapping static entry reached from 0xC0BC8B.
    case 0xC0BC8C: cpu.execute_instruction<0xF2>(0x00008C, 2); return true;
    // src/misc/find_path_to_party.asm:33 STY PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BC8D: cpu.execute_instruction<0x8C>(0x00F27A, 3); return true;
    // src/misc/find_path_to_party.asm:33 STY PATHFINDING_STATE + pathfinding::radius + 2
    // Overlapping static entry reached from 0xC0BC8C.
    case 0xC0BC8E: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:33 STY PATHFINDING_STATE + pathfinding::radius + 2
    // Overlapping static entry reached from 0xC0BC8E.
    case 0xC0BC8F: cpu.execute_instruction<0xF2>(0x0000AD, 2); return true;
    // src/misc/find_path_to_party.asm:34 LDA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BC90: cpu.execute_instruction<0xAD>(0x00F278, 3); return true;
    // src/misc/find_path_to_party.asm:34 LDA PATHFINDING_STATE + pathfinding::radius
    // Overlapping static entry reached from 0xC0BC8F.
    case 0xC0BC91: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:34 LDA PATHFINDING_STATE + pathfinding::radius
    // Overlapping static entry reached from 0xC0BC91.
    case 0xC0BC92: cpu.execute_instruction<0xF2>(0x00004A, 2); return true;
    // src/misc/find_path_to_party.asm:35 LSR
    case 0xC0BC93: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:36 STA @VIRTUAL04
    case 0xC0BC94: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:37 STA PATHFINDING_TARGET_WIDTH
    case 0xC0BC96: cpu.execute_instruction<0x8D>(0x004A92, 3); return true;
    // src/misc/find_path_to_party.asm:38 LDA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BC99: cpu.execute_instruction<0xAD>(0x00F27A, 3); return true;
    // src/misc/find_path_to_party.asm:39 LSR
    case 0xC0BC9C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:40 STA @VIRTUAL02
    case 0xC0BC9D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:41 STA @LOCAL09
    case 0xC0BC9F: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/misc/find_path_to_party.asm:42 LDA @VIRTUAL02
    case 0xC0BCA1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:43 STA PATHFINDING_TARGET_HEIGHT
    case 0xC0BCA3: cpu.execute_instruction<0x8D>(0x004A94, 3); return true;
    // src/misc/find_path_to_party.asm:44 LDA @LOCAL0B
    case 0xC0BCA6: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/misc/find_path_to_party.asm:45 ASL
    case 0xC0BCA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:46 STA @LOCAL0BALT
    case 0xC0BCA9: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/misc/find_path_to_party.asm:47 CLC
    case 0xC0BCAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:48 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0BCAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008E, 2); else cpu.execute_instruction<0x69>(0x000B8E, 3); return true;
    // src/misc/find_path_to_party.asm:48 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0BCAC.
    case 0xC0BCAE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:49 TAY
    case 0xC0BCAF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:50 STY @LOCAL08ALT
    case 0xC0BCB0: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    case 0xC0BCB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x002A1F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BCB2.
    case 0xC0BCB4: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    case 0xC0BCB5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    case 0xC0BCB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BCB7.
    case 0xC0BCB9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/find_path_to_party.asm:51 LOADPTR UNKNOWN_C42A1F, @VIRTUAL0A
    case 0xC0BCBA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/find_path_to_party.asm:52 LDA @LOCAL0BALT
    case 0xC0BCBC: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/misc/find_path_to_party.asm:53 CLC
    case 0xC0BCBE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:54 ADC #.LOWORD(ENTITY_SIZES)
    case 0xC0BCBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006E, 2); else cpu.execute_instruction<0x69>(0x002B6E, 3); return true;
    // src/misc/find_path_to_party.asm:54 ADC #.LOWORD(ENTITY_SIZES)
    // Overlapping static entry reached from 0xC0BCBF.
    case 0xC0BCC1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:55 STA @LOCAL07
    case 0xC0BCC2: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/misc/find_path_to_party.asm:56 LDA (@LOCAL07)
    case 0xC0BCC4: cpu.execute_instruction<0xB2>(0x000020, 2); return true;
    // src/misc/find_path_to_party.asm:57 ASL
    case 0xC0BCC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/find_path_to_party.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0BCC7: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/find_path_to_party.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0BCC9: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/find_path_to_party.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0BCCB: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/find_path_to_party.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0BCCD: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/misc/find_path_to_party.asm:59 CLC
    case 0xC0BCCF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:60 ADC @VIRTUAL06
    case 0xC0BCD0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:61 STA @VIRTUAL06
    case 0xC0BCD2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:62 LDA [@VIRTUAL06]
    case 0xC0BCD4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:63 STA @VIRTUAL02
    case 0xC0BCD6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:64 LDA __BSS_START__,Y
    case 0xC0BCD8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/find_path_to_party.asm:65 SEC
    case 0xC0BCDB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:66 SBC @VIRTUAL02
    case 0xC0BCDC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:67 LSR
    case 0xC0BCDE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:68 LSR
    case 0xC0BCDF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:69 LSR
    case 0xC0BCE0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:70 STA PATHFINDING_TARGET_CENTRE_X
    case 0xC0BCE1: cpu.execute_instruction<0x8D>(0x004A8E, 3); return true;
    // src/misc/find_path_to_party.asm:71 LDA @LOCAL0BALT
    case 0xC0BCE4: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/misc/find_path_to_party.asm:72 CLC
    case 0xC0BCE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:73 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0BCE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CA, 2); else cpu.execute_instruction<0x69>(0x000BCA, 3); return true;
    // src/misc/find_path_to_party.asm:73 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0BCE7.
    case 0xC0BCE9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:74 TAX
    case 0xC0BCEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    case 0xC0BCEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x002A41, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BCEB.
    case 0xC0BCED: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    case 0xC0BCEE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    case 0xC0BCF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BCF0.
    case 0xC0BCF2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/find_path_to_party.asm:75 LOADPTR UNKNOWN_C42A41, @VIRTUAL06
    case 0xC0BCF3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/find_path_to_party.asm:76 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC0BCF5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/find_path_to_party.asm:76 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC0BCF7: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/find_path_to_party.asm:76 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC0BCF9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/find_path_to_party.asm:76 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC0BCFB: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/misc/find_path_to_party.asm:77 LDA (@LOCAL07)
    case 0xC0BCFD: cpu.execute_instruction<0xB2>(0x000020, 2); return true;
    // src/misc/find_path_to_party.asm:78 ASL
    case 0xC0BCFF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:79 STA @LOCAL05
    case 0xC0BD00: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    case 0xC0BD02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EB, 2); else cpu.execute_instruction<0xA9>(0x002AEB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    // Overlapping static entry reached from 0xC0BD02.
    case 0xC0BD04: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    case 0xC0BD05: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    case 0xC0BD07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    // Overlapping static entry reached from 0xC0BD07.
    case 0xC0BD09: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/find_path_to_party.asm:80 LOADPTR UNKNOWN_C42AEB, @LOCAL04
    case 0xC0BD0A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/misc/find_path_to_party.asm:81 LDA @LOCAL05
    case 0xC0BD0C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/misc/find_path_to_party.asm:82 TAY
    case 0xC0BD0E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:83 CLC
    case 0xC0BD0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:84 ADC @VIRTUAL06
    case 0xC0BD10: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:85 STA @VIRTUAL06
    case 0xC0BD12: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:86 LDA [@VIRTUAL06]
    case 0xC0BD14: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:87 STA @VIRTUAL02
    case 0xC0BD16: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:88 LDA __BSS_START__,X
    case 0xC0BD18: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_path_to_party.asm:89 SEC
    case 0xC0BD1B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:90 SBC @VIRTUAL02
    case 0xC0BD1C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:91 CLC
    case 0xC0BD1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:92 ADC [@LOCAL04],Y
    case 0xC0BD1F: cpu.execute_instruction<0x77>(0x000016, 2); return true;
    // src/misc/find_path_to_party.asm:93 LSR
    case 0xC0BD21: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:94 LSR
    case 0xC0BD22: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:95 LSR
    case 0xC0BD23: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:96 STA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0BD24: cpu.execute_instruction<0x8D>(0x004A90, 3); return true;
    // src/misc/find_path_to_party.asm:97 LDA (@LOCAL07)
    case 0xC0BD27: cpu.execute_instruction<0xB2>(0x000020, 2); return true;
    // src/misc/find_path_to_party.asm:98 ASL
    case 0xC0BD29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:99 STA @LOCAL05
    case 0xC0BD2A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/misc/find_path_to_party.asm:100 CLC
    case 0xC0BD2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:101 ADC @VIRTUAL0A
    case 0xC0BD2D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/find_path_to_party.asm:102 STA @VIRTUAL0A
    case 0xC0BD2F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/find_path_to_party.asm:103 LDA [@VIRTUAL0A]
    case 0xC0BD31: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/find_path_to_party.asm:104 STA @VIRTUAL02
    case 0xC0BD33: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:105 LDY @LOCAL08ALT
    case 0xC0BD35: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/misc/find_path_to_party.asm:106 LDA __BSS_START__,Y
    case 0xC0BD37: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/find_path_to_party.asm:107 SEC
    case 0xC0BD3A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:108 SBC @VIRTUAL02
    case 0xC0BD3B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:109 LSR
    case 0xC0BD3D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:110 LSR
    case 0xC0BD3E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:111 LSR
    case 0xC0BD3F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:112 SEC
    case 0xC0BD40: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:113 SBC @VIRTUAL04
    case 0xC0BD41: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:114 STA @VIRTUAL04
    case 0xC0BD43: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:115 LDA @LOCAL05
    case 0xC0BD45: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/misc/find_path_to_party.asm:116 TAY
    case 0xC0BD47: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:117 PHA
    case 0xC0BD48: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/find_path_to_party.asm:118 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0BD49: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/find_path_to_party.asm:118 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0BD4B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/find_path_to_party.asm:118 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0BD4D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/find_path_to_party.asm:118 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0BD4F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/find_path_to_party.asm:119 PLA
    case 0xC0BD51: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:120 CLC
    case 0xC0BD52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:121 ADC @VIRTUAL06
    case 0xC0BD53: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:122 STA @VIRTUAL06
    case 0xC0BD55: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:123 LDA [@VIRTUAL06]
    case 0xC0BD57: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/find_path_to_party.asm:124 STA @VIRTUAL02
    case 0xC0BD59: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:125 LDA __BSS_START__,X
    case 0xC0BD5B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/find_path_to_party.asm:126 SEC
    case 0xC0BD5E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:127 SBC @VIRTUAL02
    case 0xC0BD5F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:128 CLC
    case 0xC0BD61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:129 ADC [@LOCAL04],Y
    case 0xC0BD62: cpu.execute_instruction<0x77>(0x000016, 2); return true;
    // src/misc/find_path_to_party.asm:130 LSR
    case 0xC0BD64: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:131 LSR
    case 0xC0BD65: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:132 LSR
    case 0xC0BD66: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:133 LDX @LOCAL09
    case 0xC0BD67: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/misc/find_path_to_party.asm:134 STX @VIRTUAL02
    case 0xC0BD69: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:135 SEC
    case 0xC0BD6B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/find_path_to_party.asm:136 SBC @VIRTUAL02
    case 0xC0BD6C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:137 STA @VIRTUAL02
    case 0xC0BD6E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:138 STA @LOCAL00
    case 0xC0BD70: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/find_path_to_party.asm:139 LDY @VIRTUAL04
    case 0xC0BD72: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:140 LDX @LOCAL0C
    case 0xC0BD74: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/misc/find_path_to_party.asm:141 LDA @LOCAL0A
    case 0xC0BD76: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/misc/find_path_to_party.asm:142 JSR UNKNOWN_C0B9BC
    case 0xC0BD78: cpu.execute_instruction<0x20>(0x00B9BC, 3); return true;
    // src/misc/find_path_to_party.asm:143 LDA @VIRTUAL02
    case 0xC0BD7B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/find_path_to_party.asm:144 STA @LOCAL00
    case 0xC0BD7D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/misc/find_path_to_party.asm:145 STZ_BADOPT @LOCAL01
    case 0xC0BD7F: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/misc/find_path_to_party.asm:146 LDA #64
    case 0xC0BD81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/misc/find_path_to_party.asm:146 LDA #64
    // Overlapping static entry reached from 0xC0BD81.
    case 0xC0BD83: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_path_to_party.asm:147 STA @LOCAL02
    case 0xC0BD84: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/find_path_to_party.asm:148 LDA #50
    case 0xC0BD86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/misc/find_path_to_party.asm:148 LDA #50
    // Overlapping static entry reached from 0xC0BD86.
    case 0xC0BD88: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/find_path_to_party.asm:149 STA @LOCAL03
    case 0xC0BD89: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/find_path_to_party.asm:150 LDY @VIRTUAL04
    case 0xC0BD8B: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/misc/find_path_to_party.asm:151 LDX @LOCAL0C
    case 0xC0BD8D: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/misc/find_path_to_party.asm:152 LDA @LOCAL0A
    case 0xC0BD8F: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/misc/find_path_to_party.asm:153 JSR UNKNOWN_C0BA35
    case 0xC0BD91: cpu.execute_instruction<0x20>(0x00BA35, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/find_path_to_party.asm:154 END_C_FUNCTION
    case 0xC0BD94: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/find_path_to_party.asm:154 END_C_FUNCTION
    case 0xC0BD95: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/gain_exp.asm (source_named).
bool execute_miscellaneous_gain_exp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/gain_exp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1D9E9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D9EB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D9EC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D9ED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D9EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D9EE.
    case 0xC1D9F0: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D9F1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/gain_exp.asm:10 END_STACK_VARS
    case 0xC1D9F2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:11 STX @VIRTUAL02
    case 0xC1D9F3: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/gain_exp.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1D9F0.
    case 0xC1D9F4: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/gain_exp.asm:12 TAX
    case 0xC1D9F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/gain_exp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1D9F6: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/gain_exp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1D9F8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/gain_exp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1D9FA: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1D9FC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:14 TXY
    case 0xC1D9FE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:15 DEY
    case 0xC1D9FF: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:16 STY @LOCAL01
    case 0xC1DA00: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:17 TYA
    case 0xC1DA02: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:18 LDY #.SIZEOF(char_struct)
    case 0xC1DA03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/gain_exp.asm:18 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DA03.
    case 0xC1DA05: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:19 JSL MULT168
    case 0xC1DA06: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/gain_exp.asm:20 STA @LOCAL00
    case 0xC1DA0A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/gain_exp.asm:21 CLC
    case 0xC1DA0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:22 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::exp
    case 0xC1DA0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0099D4, 3); return true;
    // src/misc/gain_exp.asm:22 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::exp
    // Overlapping static entry reached from 0xC1DA0D.
    case 0xC1DA0F: cpu.execute_instruction<0x99>(0x00A5AA, 3); return true;
    // src/misc/gain_exp.asm:23 TAX
    case 0xC1DA10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA11: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1DA0F.
    case 0xC1DA12: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA13: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1DA12.
    case 0xC1DA14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA15: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:24 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA17: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/gain_exp.asm:25 TXY
    case 0xC1DA19: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/gain_exp.asm:26 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1DA1A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/gain_exp.asm:26 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1DA1D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/gain_exp.asm:26 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1DA1F: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:26 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1DA22: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:27 CLC
    case 0xC1DA24: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA25: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA27: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA29: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA2B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA2D: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:28 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA2F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:29 TXY
    case 0xC1DA31: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/gain_exp.asm:30 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1DA32: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/gain_exp.asm:30 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1DA34: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/gain_exp.asm:30 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1DA37: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/gain_exp.asm:30 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1DA39: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/gain_exp.asm:31 LDA @LOCAL00
    case 0xC1DA3C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/gain_exp.asm:32 TAX
    case 0xC1DA3E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:33 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC1DA3F: cpu.execute_instruction<0xBD>(0x0099D3, 3); return true;
    // src/misc/gain_exp.asm:34 AND #$00FF
    case 0xC1DA42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/gain_exp.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC1DA42.
    case 0xC1DA44: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/gain_exp.asm:35 STA @LOCAL00
    case 0xC1DA45: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/gain_exp.asm:36 STA @VIRTUAL04
    case 0xC1DA47: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:37 LDA #MAX_LEVEL
    case 0xC1DA49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x000063, 3); return true;
    // src/misc/gain_exp.asm:37 LDA #MAX_LEVEL
    // Overlapping static entry reached from 0xC1DA49.
    case 0xC1DA4B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/gain_exp.asm:38 CLC
    case 0xC1DA4C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:39 SBC @VIRTUAL04
    case 0xC1DA4D: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1DA4F: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1DA51: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1DA53: cpu.execute_instruction<0x4C>(0x00DB31, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1DA56: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/misc/gain_exp.asm:40 JUMPLTEQS @UNKNOWN6
    case 0xC1DA58: cpu.execute_instruction<0x4C>(0x00DB31, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/gain_exp.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA5B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/gain_exp.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA5D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/gain_exp.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA5F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1DA61: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1DA63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x008F49, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DA63.
    case 0xC1DA65: cpu.execute_instruction<0x8F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1DA66: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1DA68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DA65.
    case 0xC1DA69: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DA68.
    case 0xC1DA6A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/gain_exp.asm:42 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1DA6B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:43 LDA @LOCAL00
    case 0xC1DA6D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/misc/gain_exp.asm:44 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1DA6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/misc/gain_exp.asm:44 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1DA70: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:45 STA @VIRTUAL04
    case 0xC1DA71: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:46 INC @VIRTUAL04
    case 0xC1DA73: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:47 INC @VIRTUAL04
    case 0xC1DA75: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:48 INC @VIRTUAL04
    case 0xC1DA77: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:49 INC @VIRTUAL04
    case 0xC1DA79: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:50 LDY @LOCAL01
    case 0xC1DA7B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:51 TYA
    case 0xC1DA7D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:52 LDY #4 * 100
    case 0xC1DA7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000090, 2); else cpu.execute_instruction<0xA0>(0x000190, 3); return true;
    // src/misc/gain_exp.asm:52 LDY #4 * 100
    // Overlapping static entry reached from 0xC1DA7E.
    case 0xC1DA80: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:53 JSL MULT16
    case 0xC1DA81: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/misc/gain_exp.asm:53 JSL MULT16
    // Overlapping static entry reached from 0xC1DA80.
    case 0xC1DA82: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/misc/gain_exp.asm:53 JSL MULT16
    // Overlapping static entry reached from 0xC1DA82.
    case 0xC1DA84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006518, 3); return true;
    // src/misc/gain_exp.asm:54 CLC
    case 0xC1DA85: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:55 ADC @VIRTUAL04
    case 0xC1DA86: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:55 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1DA84.
    case 0xC1DA87: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/misc/gain_exp.asm:56 CLC
    case 0xC1DA88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:57 ADC @VIRTUAL06
    case 0xC1DA89: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/gain_exp.asm:58 STA @VIRTUAL06
    case 0xC1DA8B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1DA8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DA8D.
    case 0xC1DA8F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1DA90: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1DA92: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1DA93: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1DA95: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/misc/gain_exp.asm:59 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1DA97: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:60 CLC
    case 0xC1DA99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:61 LDA @VIRTUAL06
    case 0xC1DA9A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/misc/gain_exp.asm:62 SBC @VIRTUAL0A
    case 0xC1DA9C: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/misc/gain_exp.asm:63 LDA @VIRTUAL06+2
    case 0xC1DA9E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:64 SBC @VIRTUAL0A+2
    case 0xC1DAA0: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/misc/gain_exp.asm:65 BCC @UNKNOWN2
    case 0xC1DAA2: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/misc/gain_exp.asm:66 JMP @UNKNOWN6
    case 0xC1DAA4: cpu.execute_instruction<0x4C>(0x00DB31, 3); return true;
    // src/misc/gain_exp.asm:68 LDA @VIRTUAL02
    case 0xC1DAA7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/gain_exp.asm:69 BEQ @UNKNOWN3
    case 0xC1DAA9: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/gain_exp.asm:70 LDA #MUSIC::LEVEL_UP
    case 0xC1DAAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/misc/gain_exp.asm:70 LDA #MUSIC::LEVEL_UP
    // Overlapping static entry reached from 0xC1DAAB.
    case 0xC1DAAD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:71 JSL CHANGE_MUSIC
    case 0xC1DAAE: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/misc/gain_exp.asm:73 LDX @VIRTUAL02
    case 0xC1DAB2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/gain_exp.asm:74 LDY @LOCAL01
    case 0xC1DAB4: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:75 TYA
    case 0xC1DAB6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:76 INC
    case 0xC1DAB7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:77 JSR LEVEL_UP_CHAR
    case 0xC1DAB8: cpu.execute_instruction<0x20>(0x00D109, 3); return true;
    // src/misc/gain_exp.asm:78 LDY @LOCAL01
    case 0xC1DABB: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:79 TYA
    case 0xC1DABD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:80 LDY #.SIZEOF(char_struct)
    case 0xC1DABE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/gain_exp.asm:80 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DABE.
    case 0xC1DAC0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:81 JSL MULT168
    case 0xC1DAC1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/gain_exp.asm:82 TAX
    case 0xC1DAC5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:83 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC1DAC6: cpu.execute_instruction<0xBD>(0x0099D3, 3); return true;
    // src/misc/gain_exp.asm:84 AND #$00FF
    case 0xC1DAC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/gain_exp.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC1DAC9.
    case 0xC1DACB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/gain_exp.asm:85 STA @LOCAL00
    case 0xC1DACC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/gain_exp.asm:86 STA @VIRTUAL04
    case 0xC1DACE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:87 LDA #MAX_LEVEL
    case 0xC1DAD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x000063, 3); return true;
    // src/misc/gain_exp.asm:87 LDA #MAX_LEVEL
    // Overlapping static entry reached from 0xC1DAD0.
    case 0xC1DAD2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/gain_exp.asm:88 CLC
    case 0xC1DAD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:89 SBC @VIRTUAL04
    case 0xC1DAD4: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/gain_exp.asm:90 BRANCHLTEQS @UNKNOWN6
    case 0xC1DAD6: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/gain_exp.asm:90 BRANCHLTEQS @UNKNOWN6
    case 0xC1DAD8: cpu.execute_instruction<0x10>(0x000057, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/gain_exp.asm:90 BRANCHLTEQS @UNKNOWN6
    case 0xC1DADA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/gain_exp.asm:90 BRANCHLTEQS @UNKNOWN6
    case 0xC1DADC: cpu.execute_instruction<0x30>(0x000053, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1DADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x008F49, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DADE.
    case 0xC1DAE0: cpu.execute_instruction<0x8F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1DAE1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1DAE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DAE0.
    case 0xC1DAE4: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DAE3.
    case 0xC1DAE5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/gain_exp.asm:91 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC1DAE6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:92 LDA @LOCAL00
    case 0xC1DAE8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/misc/gain_exp.asm:93 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1DAEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/misc/gain_exp.asm:93 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1DAEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:94 STA @VIRTUAL04
    case 0xC1DAEC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:95 INC @VIRTUAL04
    case 0xC1DAEE: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:96 INC @VIRTUAL04
    case 0xC1DAF0: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:97 INC @VIRTUAL04
    case 0xC1DAF2: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:98 INC @VIRTUAL04
    case 0xC1DAF4: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:99 LDY @LOCAL01
    case 0xC1DAF6: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/gain_exp.asm:100 TYA
    case 0xC1DAF8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:101 LDY #4 * 100
    case 0xC1DAF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000090, 2); else cpu.execute_instruction<0xA0>(0x000190, 3); return true;
    // src/misc/gain_exp.asm:101 LDY #4 * 100
    // Overlapping static entry reached from 0xC1DAF9.
    case 0xC1DAFB: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/misc/gain_exp.asm:102 JSL MULT16
    case 0xC1DAFC: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/misc/gain_exp.asm:102 JSL MULT16
    // Overlapping static entry reached from 0xC1DAFB.
    case 0xC1DAFD: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/misc/gain_exp.asm:102 JSL MULT16
    // Overlapping static entry reached from 0xC1DAFD.
    case 0xC1DAFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006518, 3); return true;
    // src/misc/gain_exp.asm:103 CLC
    case 0xC1DB00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:104 ADC @VIRTUAL04
    case 0xC1DB01: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/gain_exp.asm:104 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1DAFF.
    case 0xC1DB02: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/misc/gain_exp.asm:105 CLC
    case 0xC1DB03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:106 ADC @VIRTUAL06
    case 0xC1DB04: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/gain_exp.asm:107 STA @VIRTUAL06
    case 0xC1DB06: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1DB08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1DB08.
    case 0xC1DB0A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1DB0B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1DB0D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1DB0E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1DB10: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/misc/gain_exp.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1DB12: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/gain_exp.asm:109 TXA
    case 0xC1DB14: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:110 CLC
    case 0xC1DB15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/gain_exp.asm:111 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    case 0xC1DB16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0099D4, 3); return true;
    // src/misc/gain_exp.asm:111 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    // Overlapping static entry reached from 0xC1DB16.
    case 0xC1DB18: cpu.execute_instruction<0x99>(0x00B9A8, 3); return true;
    // src/misc/gain_exp.asm:112 TAY
    case 0xC1DB19: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1DB1A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DB18.
    case 0xC1DB1B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1DB1D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1DB1F: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/gain_exp.asm:113 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1DB22: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:114 LDA @VIRTUAL06
    case 0xC1DB24: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/misc/gain_exp.asm:115 CMP @VIRTUAL0A
    case 0xC1DB26: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/misc/gain_exp.asm:116 LDA @VIRTUAL06+2
    case 0xC1DB28: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/misc/gain_exp.asm:117 SBC @VIRTUAL0A+2
    case 0xC1DB2A: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/misc/gain_exp.asm:118 BCC @UNKNOWN6
    case 0xC1DB2C: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/misc/gain_exp.asm:119 JMP @UNKNOWN3
    case 0xC1DB2E: cpu.execute_instruction<0x4C>(0x00DAB2, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/gain_exp.asm:121 END_C_FUNCTION
    case 0xC1DB31: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/gain_exp.asm:121 END_C_FUNCTION
    case 0xC1DB32: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/get_character_item.asm (source_named).
bool execute_miscellaneous_get_character_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/get_character_item.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3E977: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E979: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E97A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E97B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E97C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E97C.
    case 0xC3E97E: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E97F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/get_character_item.asm:7 END_STACK_VARS
    case 0xC3E980: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:8 TXY
    case 0xC3E981: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:9 TAX
    case 0xC3E982: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:10 TYA
    case 0xC3E983: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:11 DEC
    case 0xC3E984: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:12 STA @VIRTUAL02
    case 0xC3E985: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/get_character_item.asm:13 TXA
    case 0xC3E987: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:14 DEC
    case 0xC3E988: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:15 LDY #.SIZEOF(char_struct)
    case 0xC3E989: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/get_character_item.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E989.
    case 0xC3E98B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/get_character_item.asm:16 JSL MULT168
    case 0xC3E98C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/get_character_item.asm:17 CLC
    case 0xC3E990: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3E991: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/get_character_item.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E991.
    case 0xC3E993: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/get_character_item.asm:19 CLC
    case 0xC3E994: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:20 ADC @VIRTUAL02
    case 0xC3E995: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/get_character_item.asm:20 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC3E993.
    case 0xC3E996: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/get_character_item.asm:21 TAX
    case 0xC3E997: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:22 LDA __BSS_START__,X
    case 0xC3E998: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/get_character_item.asm:23 AND #$00FF
    case 0xC3E99B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/get_character_item.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC3E99B.
    case 0xC3E99D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/misc/get_character_item.asm:24 PLD
    case 0xC3E99E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:25 RTL
    case 0xC3E99F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/get_item_type.asm (source_named).
bool execute_miscellaneous_get_item_type_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/get_item_type.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC19EE6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19EE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19EE8.
    case 0xC19EEA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/get_item_type.asm:10 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19EEB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/get_item_type.asm:11 CLC
    case 0xC19EEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_item_type.asm:12 ADC #item::type
    case 0xC19EF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/misc/get_item_type.asm:12 ADC #item::type
    // Overlapping static entry reached from 0xC19EF0.
    case 0xC19EF2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/get_item_type.asm:13 TAX
    case 0xC19EF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/get_item_type.asm:14 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19EF4: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/get_item_type.asm:15 AND #$00FF
    case 0xC19EF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/get_item_type.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC19EF8.
    case 0xC19EFA: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/get_item_type.asm:16 AND #$0030
    case 0xC19EFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/misc/get_item_type.asm:16 AND #$0030
    // Overlapping static entry reached from 0xC19EFB.
    case 0xC19EFD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/get_item_type.asm:17 BEQ @UNKNOWN0
    case 0xC19EFE: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/get_item_type.asm:18 CMP #$0010
    case 0xC19F00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/misc/get_item_type.asm:18 CMP #$0010
    // Overlapping static entry reached from 0xC19F00.
    case 0xC19F02: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/get_item_type.asm:19 BEQ @UNKNOWN1
    case 0xC19F03: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/get_item_type.asm:20 CMP #$0020
    case 0xC19F05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/misc/get_item_type.asm:20 CMP #$0020
    // Overlapping static entry reached from 0xC19F05.
    case 0xC19F07: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/get_item_type.asm:21 BEQ @UNKNOWN2
    case 0xC19F08: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/get_item_type.asm:22 CMP #$0030
    case 0xC19F0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/misc/get_item_type.asm:22 CMP #$0030
    // Overlapping static entry reached from 0xC19F0A.
    case 0xC19F0C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/get_item_type.asm:23 BEQ @UNKNOWN3
    case 0xC19F0D: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/get_item_type.asm:24 BRA @UNKNOWN4
    case 0xC19F0F: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/misc/get_item_type.asm:26 LDA #$0001
    case 0xC19F11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/get_item_type.asm:26 LDA #$0001
    // Overlapping static entry reached from 0xC19F11.
    case 0xC19F13: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/get_item_type.asm:27 BRA @UNKNOWN5
    case 0xC19F14: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/misc/get_item_type.asm:29 LDA #$0002
    case 0xC19F16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/get_item_type.asm:29 LDA #$0002
    // Overlapping static entry reached from 0xC19F16.
    case 0xC19F18: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/get_item_type.asm:30 BRA @UNKNOWN5
    case 0xC19F19: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/misc/get_item_type.asm:32 LDA #$0003
    case 0xC19F1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/misc/get_item_type.asm:32 LDA #$0003
    // Overlapping static entry reached from 0xC19F1B.
    case 0xC19F1D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/get_item_type.asm:33 BRA @UNKNOWN5
    case 0xC19F1E: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/get_item_type.asm:35 LDA #$0004
    case 0xC19F20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/misc/get_item_type.asm:35 LDA #$0004
    // Overlapping static entry reached from 0xC19F20.
    case 0xC19F22: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/get_item_type.asm:36 BRA @UNKNOWN5
    case 0xC19F23: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/get_item_type.asm:38 LDA #$0000
    case 0xC19F25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/get_item_type.asm:38 LDA #$0000
    // Overlapping static entry reached from 0xC19F25.
    case 0xC19F27: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/misc/get_item_type.asm:43 RTS
    case 0xC19F28: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/get_required_exp.asm (source_named).
bool execute_miscellaneous_get_required_exp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/get_required_exp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4599A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC4599C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC4599D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC4599E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC4599F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4599F.
    case 0xC459A1: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC459A2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/get_required_exp.asm:9 END_STACK_VARS
    case 0xC459A3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:10 TAY
    case 0xC459A4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:11 DEY
    case 0xC459A5: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:12 STY @LOCAL01
    case 0xC459A6: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/get_required_exp.asm:13 TYA
    case 0xC459A8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:14 LDY #.SIZEOF(char_struct)
    case 0xC459A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/get_required_exp.asm:14 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC459A9.
    case 0xC459AB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/get_required_exp.asm:15 JSL MULT168
    case 0xC459AC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/get_required_exp.asm:16 TAX
    case 0xC459B0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:17 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC459B1: cpu.execute_instruction<0xBD>(0x0099D3, 3); return true;
    // src/misc/get_required_exp.asm:18 AND #$00FF
    case 0xC459B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/get_required_exp.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC459B4.
    case 0xC459B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/get_required_exp.asm:19 STA @LOCAL00
    case 0xC459B7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/get_required_exp.asm:20 CMP #MAX_LEVEL
    case 0xC459B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000063, 2); else cpu.execute_instruction<0xC9>(0x000063, 3); return true;
    // src/misc/get_required_exp.asm:20 CMP #MAX_LEVEL
    // Overlapping static entry reached from 0xC459B9.
    case 0xC459BB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/get_required_exp.asm:21 BNE @UNKNOWN0
    case 0xC459BC: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC459BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC459BE.
    case 0xC459C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC459C1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC459C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC459C3.
    case 0xC459C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/get_required_exp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC459C6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/get_required_exp.asm:23 BRA @UNKNOWN1
    case 0xC459C8: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // src/misc/get_required_exp.asm:25 TXA
    case 0xC459CA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:26 CLC
    case 0xC459CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    case 0xC459CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0099D4, 3); return true;
    // src/misc/get_required_exp.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    // Overlapping static entry reached from 0xC459CC.
    case 0xC459CE: cpu.execute_instruction<0x99>(0x00B9A8, 3); return true;
    // src/misc/get_required_exp.asm:28 TAY
    case 0xC459CF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC459D0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC459CE.
    case 0xC459D1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC459D3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC459D5: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/get_required_exp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC459D8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC459DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x008F49, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC459DA.
    case 0xC459DC: cpu.execute_instruction<0x8F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC459DD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC459DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC459DC.
    case 0xC459E0: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC459DF.
    case 0xC459E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/get_required_exp.asm:30 LOADPTR EXP_TABLE, @VIRTUAL06
    case 0xC459E2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/get_required_exp.asm:31 LDA @LOCAL00
    case 0xC459E4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/get_required_exp.asm:32 ASL
    case 0xC459E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:33 ASL
    case 0xC459E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:34 STA @VIRTUAL02
    case 0xC459E8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:35 INC @VIRTUAL02
    case 0xC459EA: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:36 INC @VIRTUAL02
    case 0xC459EC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:37 INC @VIRTUAL02
    case 0xC459EE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:38 INC @VIRTUAL02
    case 0xC459F0: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:39 LDY @LOCAL01
    case 0xC459F2: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/get_required_exp.asm:40 TYA
    case 0xC459F4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:41 LDY #4 * 100
    case 0xC459F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000090, 2); else cpu.execute_instruction<0xA0>(0x000190, 3); return true;
    // src/misc/get_required_exp.asm:41 LDY #4 * 100
    // Overlapping static entry reached from 0xC459F5.
    case 0xC459F7: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/misc/get_required_exp.asm:42 JSL MULT16
    case 0xC459F8: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/misc/get_required_exp.asm:42 JSL MULT16
    // Overlapping static entry reached from 0xC459F7.
    case 0xC459F9: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/misc/get_required_exp.asm:42 JSL MULT16
    // Overlapping static entry reached from 0xC459F9.
    case 0xC459FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006518, 3); return true;
    // src/misc/get_required_exp.asm:43 CLC
    case 0xC459FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:44 ADC @VIRTUAL02
    case 0xC459FD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/get_required_exp.asm:44 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC459FB.
    case 0xC459FE: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/misc/get_required_exp.asm:45 CLC
    case 0xC459FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/get_required_exp.asm:46 ADC @VIRTUAL06
    case 0xC45A00: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/get_required_exp.asm:47 STA @VIRTUAL06
    case 0xC45A02: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45A04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC45A04.
    case 0xC45A06: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45A07: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45A09: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45A0A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45A0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/misc/get_required_exp.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45A0E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/misc/get_required_exp.asm:49 SEC
    case 0xC45A10: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC45A11: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC45A13: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC45A15: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC45A17: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC45A19: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/get_required_exp.asm:50 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC45A1B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/get_required_exp.asm:52 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC45A1D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/get_required_exp.asm:52 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC45A1F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/get_required_exp.asm:52 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC45A21: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/get_required_exp.asm:52 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC45A23: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/get_required_exp.asm:53 END_C_FUNCTION
    case 0xC45A25: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/get_required_exp.asm:53 END_C_FUNCTION
    case 0xC45A26: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/give_item_to_character.asm (source_named).
bool execute_miscellaneous_give_item_to_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/give_item_to_character.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC18BC6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18BC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18BC9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18BCA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18BCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC18BCB.
    case 0xC18BCD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18BCE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/give_item_to_character.asm:10 END_STACK_VARS
    case 0xC18BCF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:11 STX @VIRTUAL04
    case 0xC18BD0: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/give_item_to_character.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18BCD.
    case 0xC18BD1: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/give_item_to_character.asm:12 CMP #$00FF
    case 0xC18BD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/give_item_to_character.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC18BD1.
    case 0xC18BD3: cpu.execute_instruction<0xFF>(0x49D000, 4); return true;
    // src/misc/give_item_to_character.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC18BD2.
    case 0xC18BD4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/give_item_to_character.asm:13 BNE @UNKNOWN3
    case 0xC18BD5: cpu.execute_instruction<0xD0>(0x000049, 2); return true;
    // src/misc/give_item_to_character.asm:14 LDA #0
    case 0xC18BD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:14 LDA #0
    // Overlapping static entry reached from 0xC18BD7.
    case 0xC18BD9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/give_item_to_character.asm:15 STA @VIRTUAL02
    case 0xC18BDA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:16 STA @LOCAL01
    case 0xC18BDC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/give_item_to_character.asm:17 BRA @UNKNOWN2
    case 0xC18BDE: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/misc/give_item_to_character.asm:19 LDA @LOCAL01
    case 0xC18BE0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/give_item_to_character.asm:20 STA @VIRTUAL02
    case 0xC18BE2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:21 CLC
    case 0xC18BE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:27 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC18BE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006F, 2); else cpu.execute_instruction<0x69>(0x00986F, 3); return true;
    // src/misc/give_item_to_character.asm:27 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC18BE5.
    case 0xC18BE7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:29 TAY
    case 0xC18BE8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:30 STY @LOCAL00
    case 0xC18BE9: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/give_item_to_character.asm:31 LDX @VIRTUAL04
    case 0xC18BEB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/give_item_to_character.asm:32 LDA __BSS_START__,Y
    case 0xC18BED: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:33 AND #$00FF
    case 0xC18BF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_character.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC18BF0.
    case 0xC18BF2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/give_item_to_character.asm:34 JSR GIVE_ITEM_TO_SPECIFIC_CHARACTER
    case 0xC18BF3: cpu.execute_instruction<0x20>(0x008B2C, 3); return true;
    // src/misc/give_item_to_character.asm:35 CMP #0
    case 0xC18BF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:35 CMP #0
    // Overlapping static entry reached from 0xC18BF6.
    case 0xC18BF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/give_item_to_character.asm:36 BEQ @UNKNOWN1
    case 0xC18BF9: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/give_item_to_character.asm:37 LDY @LOCAL00
    case 0xC18BFB: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/give_item_to_character.asm:38 LDA __BSS_START__,Y
    case 0xC18BFD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:39 AND #$00FF
    case 0xC18C00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_character.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC18C00.
    case 0xC18C02: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/give_item_to_character.asm:40 BRA @UNKNOWN4
    case 0xC18C03: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/misc/give_item_to_character.asm:42 INC @VIRTUAL02
    case 0xC18C05: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:43 LDA @VIRTUAL02
    case 0xC18C07: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:44 STA @LOCAL01
    case 0xC18C09: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/give_item_to_character.asm:46 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC18C0B: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/give_item_to_character.asm:47 AND #$00FF
    case 0xC18C0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_character.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC18C0E.
    case 0xC18C10: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/give_item_to_character.asm:48 PHA
    case 0xC18C11: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:49 LDA @VIRTUAL02
    case 0xC18C12: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:50 PLY
    case 0xC18C14: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/give_item_to_character.asm:51 STY @VIRTUAL02
    case 0xC18C15: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:52 CMP @VIRTUAL02
    case 0xC18C17: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/give_item_to_character.asm:53 BCC @UNKNOWN0
    case 0xC18C19: cpu.execute_instruction<0x90>(0x0000C5, 2); return true;
    // src/misc/give_item_to_character.asm:54 LDA #0
    case 0xC18C1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/give_item_to_character.asm:54 LDA #0
    // Overlapping static entry reached from 0xC18C1B.
    case 0xC18C1D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/give_item_to_character.asm:55 BRA @UNKNOWN4
    case 0xC18C1E: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/misc/give_item_to_character.asm:57 LDX @VIRTUAL04
    case 0xC18C20: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/give_item_to_character.asm:58 JSR GIVE_ITEM_TO_SPECIFIC_CHARACTER
    case 0xC18C22: cpu.execute_instruction<0x20>(0x008B2C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/give_item_to_character.asm:60 END_C_FUNCTION
    case 0xC18C25: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/give_item_to_character.asm:60 END_C_FUNCTION
    case 0xC18C26: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/give_item_to_specific_character.asm (source_named).
bool execute_miscellaneous_give_item_to_specific_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/give_item_to_specific_character.asm:3 BEGIN_C_FUNCTION
    case 0xC18B2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18B2E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18B2F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18B30: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18B31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC18B31.
    case 0xC18B33: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18B34: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/give_item_to_specific_character.asm:12 END_STACK_VARS
    case 0xC18B35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:13 TXY
    case 0xC18B36: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:14 STY @LOCAL01
    case 0xC18B37: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/give_item_to_specific_character.asm:15 TAX
    case 0xC18B39: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:16 DEC
    case 0xC18B3A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:17 STA @VIRTUAL04
    case 0xC18B3B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/give_item_to_specific_character.asm:21 LDA #0
    case 0xC18B3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/give_item_to_specific_character.asm:21 LDA #0
    // Overlapping static entry reached from 0xC18B3D.
    case 0xC18B3F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/give_item_to_specific_character.asm:22 STA @VIRTUAL02
    case 0xC18B40: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/give_item_to_specific_character.asm:23 BRA @UNKNOWN4
    case 0xC18B42: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/misc/give_item_to_specific_character.asm:25 LDA @VIRTUAL04
    case 0xC18B44: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/give_item_to_specific_character.asm:26 LDY #.SIZEOF(char_struct)
    case 0xC18B46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/give_item_to_specific_character.asm:26 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18B46.
    case 0xC18B48: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/give_item_to_specific_character.asm:27 JSL MULT168
    case 0xC18B49: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/give_item_to_specific_character.asm:28 CLC
    case 0xC18B4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:29 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18B4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/give_item_to_specific_character.asm:29 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18B4E.
    case 0xC18B50: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/give_item_to_specific_character.asm:30 CLC
    case 0xC18B51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:31 ADC @VIRTUAL02
    case 0xC18B52: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/give_item_to_specific_character.asm:31 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC18B50.
    case 0xC18B53: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/give_item_to_specific_character.asm:32 TAX
    case 0xC18B54: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:33 LDA __BSS_START__,X
    case 0xC18B55: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/give_item_to_specific_character.asm:34 AND #$00FF
    case 0xC18B58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_specific_character.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC18B58.
    case 0xC18B5A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/give_item_to_specific_character.asm:35 BNE @UNKNOWN3
    case 0xC18B5B: cpu.execute_instruction<0xD0>(0x000050, 2); return true;
    // src/misc/give_item_to_specific_character.asm:36 LDY @LOCAL01
    case 0xC18B5D: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/give_item_to_specific_character.asm:37 TYA
    case 0xC18B5F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC18B60: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/give_item_to_specific_character.asm:39 STA __BSS_START__,X
    case 0xC18B62: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/give_item_to_specific_character.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC18B65: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/give_item_to_specific_character.asm:41 TYA
    case 0xC18B67: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/give_item_to_specific_character.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18B68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/give_item_to_specific_character.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC18B68.
    case 0xC18B6A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/give_item_to_specific_character.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18B6B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/give_item_to_specific_character.asm:43 CLC
    case 0xC18B6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:44 ADC #item::type
    case 0xC18B70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/misc/give_item_to_specific_character.asm:44 ADC #item::type
    // Overlapping static entry reached from 0xC18B70.
    case 0xC18B72: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/give_item_to_specific_character.asm:45 TAX
    case 0xC18B73: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:46 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC18B74: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/give_item_to_specific_character.asm:47 AND #$00FF
    case 0xC18B78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_specific_character.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC18B78.
    case 0xC18B7A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/give_item_to_specific_character.asm:48 CMP #ITEM_TYPE::TEDDY_BEAR
    case 0xC18B7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/give_item_to_specific_character.asm:48 CMP #ITEM_TYPE::TEDDY_BEAR
    // Overlapping static entry reached from 0xC18B7B.
    case 0xC18B7D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/give_item_to_specific_character.asm:49 BNE @UNKNOWN1
    case 0xC18B7E: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/misc/give_item_to_specific_character.asm:50 JSL UNKNOWN_C216DB
    case 0xC18B80: cpu.execute_instruction<0x22>(0xC216DB, 4); return true;
    // src/misc/give_item_to_specific_character.asm:52 LDY @LOCAL01
    case 0xC18B84: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/give_item_to_specific_character.asm:53 TYA
    case 0xC18B86: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/give_item_to_specific_character.asm:54 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18B87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/give_item_to_specific_character.asm:54 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC18B87.
    case 0xC18B89: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/give_item_to_specific_character.asm:54 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18B8A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/give_item_to_specific_character.asm:55 CLC
    case 0xC18B8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:56 ADC #item::flags
    case 0xC18B8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/misc/give_item_to_specific_character.asm:56 ADC #item::flags
    // Overlapping static entry reached from 0xC18B8F.
    case 0xC18B91: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/give_item_to_specific_character.asm:57 TAX
    case 0xC18B92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:58 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC18B93: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/give_item_to_specific_character.asm:59 AND #$00FF
    case 0xC18B97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/give_item_to_specific_character.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC18B97.
    case 0xC18B99: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/give_item_to_specific_character.asm:60 AND #ITEM_FLAGS::TRANSFORM
    case 0xC18B9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/misc/give_item_to_specific_character.asm:60 AND #ITEM_FLAGS::TRANSFORM
    // Overlapping static entry reached from 0xC18B9A.
    case 0xC18B9C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/give_item_to_specific_character.asm:61 BEQ @UNKNOWN2
    case 0xC18B9D: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/misc/give_item_to_specific_character.asm:63 LDY @LOCAL01
    case 0xC18B9F: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/give_item_to_specific_character.asm:65 TYA
    case 0xC18BA1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC18BA2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/give_item_to_specific_character.asm:67 JSL UNKNOWN_C3EAD0
    case 0xC18BA4: cpu.execute_instruction<0x22>(0xC3EAD0, 4); return true;
    // src/misc/give_item_to_specific_character.asm:73 LDA @VIRTUAL04
    case 0xC18BA8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/give_item_to_specific_character.asm:75 INC
    case 0xC18BAA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:76 BRA @UNKNOWN7
    case 0xC18BAB: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/misc/give_item_to_specific_character.asm:78 INC @VIRTUAL02
    case 0xC18BAD: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/give_item_to_specific_character.asm:81 LDA #.SIZEOF(char_struct::items)
    case 0xC18BAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/give_item_to_specific_character.asm:81 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC18BAF.
    case 0xC18BB1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/give_item_to_specific_character.asm:82 CLC
    case 0xC18BB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/give_item_to_specific_character.asm:83 SBC @VIRTUAL02
    case 0xC18BB3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18BB5: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18BB7: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18BB9: cpu.execute_instruction<0x4C>(0x008B44, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18BBC: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/misc/give_item_to_specific_character.asm:84 JUMPGTS @UNKNOWN0
    case 0xC18BBE: cpu.execute_instruction<0x4C>(0x008B44, 3); return true;
    // src/misc/give_item_to_specific_character.asm:85 LDA #0
    case 0xC18BC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/give_item_to_specific_character.asm:85 LDA #0
    // Overlapping static entry reached from 0xC18BC1.
    case 0xC18BC3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/give_item_to_specific_character.asm:87 END_C_FUNCTION
    case 0xC18BC4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/give_item_to_specific_character.asm:87 END_C_FUNCTION
    case 0xC18BC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/hp_pp_roller.asm (source_named).
bool execute_miscellaneous_hp_pp_roller_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/hp_pp_roller.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2109F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    case 0xC210A1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    case 0xC210A2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    case 0xC210A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC210A3.
    case 0xC210A5: cpu.execute_instruction<0xFF>(0x97AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/hp_pp_roller.asm:8 END_STACK_VARS
    case 0xC210A6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:9 LDA DISABLE_HPPP_ROLLING
    case 0xC210A7: cpu.execute_instruction<0xAD>(0x009697, 3); return true;
    // src/misc/hp_pp_roller.asm:9 LDA DISABLE_HPPP_ROLLING
    // Overlapping static entry reached from 0xC210A5.
    case 0xC210A9: cpu.execute_instruction<0x96>(0x000029, 2); return true;
    // src/misc/hp_pp_roller.asm:10 AND #$00FF
    case 0xC210AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC210A9.
    case 0xC210AB: cpu.execute_instruction<0xFF>(0x03F000, 4); return true;
    // src/misc/hp_pp_roller.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC210AA.
    case 0xC210AC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/misc/hp_pp_roller.asm:11 BNEL @UNKNOWN30
    case 0xC210AD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:11 BNEL @UNKNOWN30
    case 0xC210AF: cpu.execute_instruction<0x4C>(0x0013AA, 3); return true;
    // src/misc/hp_pp_roller.asm:12 LDA FRAME_COUNTER
    case 0xC210B2: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:13 AND #$00FF
    case 0xC210B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC210B5.
    case 0xC210B7: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/hp_pp_roller.asm:14 AND #$0003
    case 0xC210B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/misc/hp_pp_roller.asm:14 AND #$0003
    // Overlapping static entry reached from 0xC210B8.
    case 0xC210BA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:21 TAX
    case 0xC210BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:22 LDA GAME_STATE + game_state::party_members,X
    case 0xC210BC: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/misc/hp_pp_roller.asm:24 AND #$00FF
    case 0xC210BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC210BF.
    case 0xC210C1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/hp_pp_roller.asm:25 BEQL @UNKNOWN30
    case 0xC210C2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:25 BEQL @UNKNOWN30
    case 0xC210C4: cpu.execute_instruction<0x4C>(0x0013AA, 3); return true;
    // src/misc/hp_pp_roller.asm:26 AND #$00FF
    case 0xC210C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC210C7.
    case 0xC210C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/hp_pp_roller.asm:27 STA @LOCAL02
    case 0xC210CA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/hp_pp_roller.asm:28 CLC
    case 0xC210CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:29 SBC #4
    case 0xC210CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/misc/hp_pp_roller.asm:29 SBC #4
    // Overlapping static entry reached from 0xC210CD.
    case 0xC210CF: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC210D0: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC210D2: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC210D4: cpu.execute_instruction<0x4C>(0x0013AA, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC210D7: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:30 JUMPGTS @UNKNOWN30
    case 0xC210D9: cpu.execute_instruction<0x4C>(0x0013AA, 3); return true;
    // src/misc/hp_pp_roller.asm:31 LDA @LOCAL02
    case 0xC210DC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/hp_pp_roller.asm:32 DEC
    case 0xC210DE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC210DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/hp_pp_roller.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2EBC3.
    case 0xC210E0: cpu.execute_instruction<0x5F>(0xF72200, 4); return true;
    // src/misc/hp_pp_roller.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC210DF.
    case 0xC210E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/hp_pp_roller.asm:34 JSL MULT168
    case 0xC210E2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/hp_pp_roller.asm:34 JSL MULT168
    // Overlapping static entry reached from 0xC210E0.
    case 0xC210E4: cpu.execute_instruction<0x8F>(0x6918C0, 4); return true;
    // src/misc/hp_pp_roller.asm:35 CLC
    case 0xC210E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC210E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/misc/hp_pp_roller.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC210E4.
    case 0xC210E8: cpu.execute_instruction<0xCE>(0x008599, 3); return true;
    // src/misc/hp_pp_roller.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC210E7.
    case 0xC210E9: cpu.execute_instruction<0x99>(0x001085, 3); return true;
    // src/misc/hp_pp_roller.asm:37 STA @LOCAL01
    case 0xC210EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:37 STA @LOCAL01
    // Overlapping static entry reached from 0xC210E8.
    case 0xC210EB: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/misc/hp_pp_roller.asm:38 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC210EC: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/misc/hp_pp_roller.asm:38 LDA HPPP_METER_FLIPOUT_MODE
    // Overlapping static entry reached from 0xC210EB.
    case 0xC210ED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:38 LDA HPPP_METER_FLIPOUT_MODE
    // Overlapping static entry reached from 0xC210ED.
    case 0xC210EE: cpu.execute_instruction<0x96>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:39 BNE @UNKNOWN4
    case 0xC210EF: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/hp_pp_roller.asm:39 BNE @UNKNOWN4
    // Overlapping static entry reached from 0xC210EE.
    case 0xC210F0: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // src/misc/hp_pp_roller.asm:40 LDA @LOCAL01
    case 0xC210F1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:40 LDA @LOCAL01
    // Overlapping static entry reached from 0xC210F0.
    case 0xC210F2: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // src/misc/hp_pp_roller.asm:41 CLC
    case 0xC210F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:42 ADC #char_struct::current_hp_fraction
    case 0xC210F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000043, 2); else cpu.execute_instruction<0x69>(0x000043, 3); return true;
    // src/misc/hp_pp_roller.asm:42 ADC #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC210F4.
    case 0xC210F6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:43 TAX
    case 0xC210F7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:44 STX @LOCAL00
    case 0xC210F8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:45 LDA __BSS_START__,X
    case 0xC210FA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:46 AND #$0001
    case 0xC210FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:46 AND #$0001
    // Overlapping static entry reached from 0xC210FD.
    case 0xC210FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/hp_pp_roller.asm:47 BEQL @UNKNOWN14
    case 0xC21100: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:47 BEQL @UNKNOWN14
    case 0xC21102: cpu.execute_instruction<0x4C>(0x001216, 3); return true;
    // src/misc/hp_pp_roller.asm:49 LDA @LOCAL01
    case 0xC21105: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:50 TAX
    case 0xC21107: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:51 LDY a:char_struct::current_hp,X
    case 0xC21108: cpu.execute_instruction<0xBC>(0x000045, 3); return true;
    // src/misc/hp_pp_roller.asm:52 TAX
    case 0xC2110B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:53 LDA a:char_struct::current_hp_target,X
    case 0xC2110C: cpu.execute_instruction<0xBD>(0x000047, 3); return true;
    // src/misc/hp_pp_roller.asm:54 STA @VIRTUAL02
    case 0xC2110F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:55 TYA
    case 0xC21111: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:56 CMP @VIRTUAL02
    case 0xC21112: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:57 BCS @UNKNOWN9
    case 0xC21114: cpu.execute_instruction<0xB0>(0x000075, 2); return true;
    // src/misc/hp_pp_roller.asm:58 LDA @LOCAL01
    case 0xC21116: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:59 CLC
    case 0xC21118: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:60 ADC #char_struct::current_hp_fraction
    case 0xC21119: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000043, 2); else cpu.execute_instruction<0x69>(0x000043, 3); return true;
    // src/misc/hp_pp_roller.asm:60 ADC #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC21119.
    case 0xC2111B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:61 TAX
    case 0xC2111C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:62 TXY
    case 0xC2111D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:63 STY @LOCAL00
    case 0xC2111E: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:64 LDA FASTEST_HPPP_METER_SPEED
    case 0xC21120: cpu.execute_instruction<0xAD>(0x009696, 3); return true;
    // src/misc/hp_pp_roller.asm:65 AND #$00FF
    case 0xC21123: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/hp_pp_roller.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC21123.
    case 0xC21125: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:66 BNE @UNKNOWN5
    case 0xC21126: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/hp_pp_roller.asm:67 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC21128: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/misc/hp_pp_roller.asm:68 BEQ @UNKNOWN6
    case 0xC2112B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC2112D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2112D.
    case 0xC2112F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21130: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21132: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21132.
    case 0xC21134: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:70 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21135: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:71 BRA @UNKNOWN7
    case 0xC21137: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/hp_pp_roller.asm:73 JSR UNKNOWN_C20F58
    case 0xC21139: cpu.execute_instruction<0x20>(0x000F58, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2113C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2113E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC21140: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC21142: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/hp_pp_roller.asm:76 LDY @LOCAL00
    case 0xC21144: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/hp_pp_roller.asm:77 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21146: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:77 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21149: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:77 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2114B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:77 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2114E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:78 CLC
    case 0xC21150: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21151: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21153: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21155: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21157: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21159: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2115B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:80 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2115D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/hp_pp_roller.asm:80 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2115F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:80 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21162: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:80 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21164: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:81 LDA @LOCAL01
    case 0xC21167: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:82 CLC
    case 0xC21169: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:83 ADC #char_struct::current_hp
    case 0xC2116A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000045, 2); else cpu.execute_instruction<0x69>(0x000045, 3); return true;
    // src/misc/hp_pp_roller.asm:83 ADC #char_struct::current_hp
    // Overlapping static entry reached from 0xC2116A.
    case 0xC2116C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:84 TAX
    case 0xC2116D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:85 LDA __BSS_START__,X
    case 0xC2116E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:86 CMP @VIRTUAL02
    case 0xC21171: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/hp_pp_roller.asm:87 BCCL @UNKNOWN15
    case 0xC21173: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/hp_pp_roller.asm:87 BCCL @UNKNOWN15
    case 0xC21175: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:87 BCCL @UNKNOWN15
    case 0xC21177: cpu.execute_instruction<0x4C>(0x00122B, 3); return true;
    // src/misc/hp_pp_roller.asm:88 LDA @VIRTUAL02
    case 0xC2117A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:89 STA __BSS_START__,X
    case 0xC2117C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:90 LDA @LOCAL01
    case 0xC2117F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:91 TAX
    case 0xC21181: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:92 LDA #1
    case 0xC21182: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:92 LDA #1
    // Overlapping static entry reached from 0xC21182.
    case 0xC21184: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:93 STA a:char_struct::current_hp_fraction,X
    case 0xC21185: cpu.execute_instruction<0x9D>(0x000043, 3); return true;
    // src/misc/hp_pp_roller.asm:94 JMP @UNKNOWN15
    case 0xC21188: cpu.execute_instruction<0x4C>(0x00122B, 3); return true;
    // src/misc/hp_pp_roller.asm:96 TYA
    case 0xC2118B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:97 CMP @VIRTUAL02
    case 0xC2118C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:98 BNE @UNKNOWN10
    case 0xC2118E: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/misc/hp_pp_roller.asm:99 LDA @LOCAL01
    case 0xC21190: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:100 CLC
    case 0xC21192: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:101 ADC #char_struct::current_hp_fraction
    case 0xC21193: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000043, 2); else cpu.execute_instruction<0x69>(0x000043, 3); return true;
    // src/misc/hp_pp_roller.asm:101 ADC #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC21193.
    case 0xC21195: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:102 TAX
    case 0xC21196: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:103 LDA __BSS_START__,X
    case 0xC21197: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:104 CMP #1
    case 0xC2119A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:104 CMP #1
    // Overlapping static entry reached from 0xC2119A.
    case 0xC2119C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:105 BNE @UNKNOWN10
    case 0xC2119D: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/misc/hp_pp_roller.asm:106 LDA #0
    case 0xC2119F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:106 LDA #0
    // Overlapping static entry reached from 0xC2119F.
    case 0xC211A1: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:107 STA __BSS_START__,X
    case 0xC211A2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:108 JMP @UNKNOWN15
    case 0xC211A5: cpu.execute_instruction<0x4C>(0x00122B, 3); return true;
    // src/misc/hp_pp_roller.asm:110 LDA @LOCAL01
    case 0xC211A8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:111 CLC
    case 0xC211AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:112 ADC #char_struct::current_hp_fraction
    case 0xC211AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000043, 2); else cpu.execute_instruction<0x69>(0x000043, 3); return true;
    // src/misc/hp_pp_roller.asm:112 ADC #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC211AB.
    case 0xC211AD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:113 TAX
    case 0xC211AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:114 TXY
    case 0xC211AF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:115 STY @LOCAL00
    case 0xC211B0: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:116 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC211B2: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/misc/hp_pp_roller.asm:117 BEQ @UNKNOWN11
    case 0xC211B5: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC211B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC211B7.
    case 0xC211B9: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC211BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC211BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC211BC.
    case 0xC211BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:118 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC211BF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:119 BRA @UNKNOWN12
    case 0xC211C1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/hp_pp_roller.asm:121 JSR UNKNOWN_C20F58
    case 0xC211C3: cpu.execute_instruction<0x20>(0x000F58, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC211C6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC211C8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC211CA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC211CC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/hp_pp_roller.asm:124 LDY @LOCAL00
    case 0xC211CE: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/hp_pp_roller.asm:125 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC211D0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:125 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC211D3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:125 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC211D5: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:125 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC211D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:126 SEC
    case 0xC211DA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211DB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211DD: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211DF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211E3: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:127 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC211E5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC211E7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/hp_pp_roller.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC211E9: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC211EC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC211EE: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:129 LDA @LOCAL01
    case 0xC211F1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:130 TAX
    case 0xC211F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:131 LDY a:char_struct::current_hp,X
    case 0xC211F4: cpu.execute_instruction<0xBC>(0x000045, 3); return true;
    // src/misc/hp_pp_roller.asm:132 TYA
    case 0xC211F7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:133 CMP @VIRTUAL02
    case 0xC211F8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:134 BCC @UNKNOWN13
    case 0xC211FA: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/misc/hp_pp_roller.asm:135 CPY #1000
    case 0xC211FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E8, 2); else cpu.execute_instruction<0xC0>(0x0003E8, 3); return true;
    // src/misc/hp_pp_roller.asm:135 CPY #1000
    // Overlapping static entry reached from 0xC211FC.
    case 0xC211FE: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/hp_pp_roller.asm:136 BLTEQ @UNKNOWN15
    case 0xC211FF: cpu.execute_instruction<0x90>(0x00002A, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/hp_pp_roller.asm:136 BLTEQ @UNKNOWN15
    // Overlapping static entry reached from 0xC211FE.
    case 0xC21200: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/misc/hp_pp_roller.asm:136 BLTEQ @UNKNOWN15
    case 0xC21201: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/misc/hp_pp_roller.asm:138 LDA @LOCAL01
    case 0xC21203: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:139 TAX
    case 0xC21205: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:140 LDA @VIRTUAL02
    case 0xC21206: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:141 STA a:char_struct::current_hp,X
    case 0xC21208: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/misc/hp_pp_roller.asm:142 LDA @LOCAL01
    case 0xC2120B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:143 TAX
    case 0xC2120D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:144 LDA #1
    case 0xC2120E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:144 LDA #1
    // Overlapping static entry reached from 0xC2120E.
    case 0xC21210: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:145 STA a:char_struct::current_hp_fraction,X
    case 0xC21211: cpu.execute_instruction<0x9D>(0x000043, 3); return true;
    // src/misc/hp_pp_roller.asm:146 BRA @UNKNOWN15
    case 0xC21214: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/misc/hp_pp_roller.asm:148 LDA @LOCAL01
    case 0xC21216: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:149 PHA
    case 0xC21218: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:150 TAX
    case 0xC21219: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:151 LDA a:char_struct::current_hp,X
    case 0xC2121A: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/misc/hp_pp_roller.asm:152 PLX
    case 0xC2121D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:153 CMP a:char_struct::current_hp_target,X
    case 0xC2121E: cpu.execute_instruction<0xDD>(0x000047, 3); return true;
    // src/misc/hp_pp_roller.asm:154 BEQ @UNKNOWN15
    case 0xC21221: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:155 LDA #1
    case 0xC21223: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:155 LDA #1
    // Overlapping static entry reached from 0xC21223.
    case 0xC21225: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/hp_pp_roller.asm:156 LDX @LOCAL00
    case 0xC21226: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:157 STA __BSS_START__,X
    case 0xC21228: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:159 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC2122B: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/misc/hp_pp_roller.asm:160 BNE @UNKNOWN16
    case 0xC2122E: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/hp_pp_roller.asm:161 LDA @LOCAL01
    case 0xC21230: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:162 CLC
    case 0xC21232: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:163 ADC #char_struct::current_pp_fraction
    case 0xC21233: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000049, 2); else cpu.execute_instruction<0x69>(0x000049, 3); return true;
    // src/misc/hp_pp_roller.asm:163 ADC #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC21233.
    case 0xC21235: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:164 TAX
    case 0xC21236: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:165 STX @LOCAL00
    case 0xC21237: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:166 LDA __BSS_START__,X
    case 0xC21239: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:167 AND #$0001
    case 0xC2123C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:167 AND #$0001
    // Overlapping static entry reached from 0xC2123C.
    case 0xC2123E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/hp_pp_roller.asm:168 BEQL @UNKNOWN25
    case 0xC2123F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:168 BEQL @UNKNOWN25
    case 0xC21241: cpu.execute_instruction<0x4C>(0x001353, 3); return true;
    // src/misc/hp_pp_roller.asm:170 LDA @LOCAL01
    case 0xC21244: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:171 TAX
    case 0xC21246: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:172 LDY a:char_struct::current_pp,X
    case 0xC21247: cpu.execute_instruction<0xBC>(0x00004B, 3); return true;
    // src/misc/hp_pp_roller.asm:173 TAX
    case 0xC2124A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:174 LDA a:char_struct::current_pp_target,X
    case 0xC2124B: cpu.execute_instruction<0xBD>(0x00004D, 3); return true;
    // src/misc/hp_pp_roller.asm:175 STA @VIRTUAL02
    case 0xC2124E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:176 TYA
    case 0xC21250: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:177 CMP @VIRTUAL02
    case 0xC21251: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:178 BCS @UNKNOWN20
    case 0xC21253: cpu.execute_instruction<0xB0>(0x000070, 2); return true;
    // src/misc/hp_pp_roller.asm:179 LDA @LOCAL01
    case 0xC21255: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:180 CLC
    case 0xC21257: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:181 ADC #char_struct::current_pp_fraction
    case 0xC21258: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000049, 2); else cpu.execute_instruction<0x69>(0x000049, 3); return true;
    // src/misc/hp_pp_roller.asm:181 ADC #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC21258.
    case 0xC2125A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:182 TAX
    case 0xC2125B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:183 TXY
    case 0xC2125C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:184 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC2125D: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/misc/hp_pp_roller.asm:185 BEQ @UNKNOWN17
    case 0xC21260: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21262: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21262.
    case 0xC21264: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21265: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC21267: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21267.
    case 0xC21269: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:186 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC2126A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:187 BRA @UNKNOWN18
    case 0xC2126C: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC2126E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2126E.
    case 0xC21270: cpu.execute_instruction<0x90>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC21271: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21270.
    case 0xC21272: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC21273: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21272.
    case 0xC21274: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21273.
    case 0xC21275: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:189 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC21276: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:191 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC21278: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:191 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2127A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:191 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2127C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:191 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2127E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21280: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21283: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC212FD.
    case 0xC21284: cpu.execute_instruction<0x06>(0x0000B9, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21285: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC21284.
    case 0xC21286: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:192 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21288: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:193 CLC
    case 0xC2128A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2128B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2128D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2128F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21291: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21293: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:194 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21295: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:195 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21297: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/hp_pp_roller.asm:195 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21299: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:195 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2129C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:195 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2129E: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:196 LDA @LOCAL01
    case 0xC212A1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:197 CLC
    case 0xC212A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:198 ADC #char_struct::current_pp
    case 0xC212A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004B, 2); else cpu.execute_instruction<0x69>(0x00004B, 3); return true;
    // src/misc/hp_pp_roller.asm:198 ADC #char_struct::current_pp
    // Overlapping static entry reached from 0xC212A4.
    case 0xC212A6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:199 TAX
    case 0xC212A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:200 LDA __BSS_START__,X
    case 0xC212A8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:201 CMP @VIRTUAL02
    case 0xC212AB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/hp_pp_roller.asm:202 BCCL @UNKNOWN26
    case 0xC212AD: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/hp_pp_roller.asm:202 BCCL @UNKNOWN26
    case 0xC212AF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/hp_pp_roller.asm:202 BCCL @UNKNOWN26
    case 0xC212B1: cpu.execute_instruction<0x4C>(0x001368, 3); return true;
    // src/misc/hp_pp_roller.asm:203 LDA @VIRTUAL02
    case 0xC212B4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:204 STA __BSS_START__,X
    case 0xC212B6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:205 LDA @LOCAL01
    case 0xC212B9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:206 TAX
    case 0xC212BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:207 LDA #1
    case 0xC212BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:207 LDA #1
    // Overlapping static entry reached from 0xC212BC.
    case 0xC212BE: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:208 STA __BSS_START__ + char_struct::current_pp_fraction,X
    case 0xC212BF: cpu.execute_instruction<0x9D>(0x000049, 3); return true;
    // src/misc/hp_pp_roller.asm:209 JMP @UNKNOWN26
    case 0xC212C2: cpu.execute_instruction<0x4C>(0x001368, 3); return true;
    // src/misc/hp_pp_roller.asm:211 TYA
    case 0xC212C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:212 CMP @VIRTUAL02
    case 0xC212C6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:213 BNE @UNKNOWN21
    case 0xC212C8: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/misc/hp_pp_roller.asm:214 LDA @LOCAL01
    case 0xC212CA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:215 CLC
    case 0xC212CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:216 ADC #char_struct::current_pp_fraction
    case 0xC212CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000049, 2); else cpu.execute_instruction<0x69>(0x000049, 3); return true;
    // src/misc/hp_pp_roller.asm:216 ADC #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC212CD.
    case 0xC212CF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:217 TAX
    case 0xC212D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:218 LDA __BSS_START__,X
    case 0xC212D1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:219 CMP #1
    case 0xC212D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:219 CMP #1
    // Overlapping static entry reached from 0xC212D4.
    case 0xC212D6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:220 BNE @UNKNOWN21
    case 0xC212D7: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/misc/hp_pp_roller.asm:221 LDA #0
    case 0xC212D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:221 LDA #0
    // Overlapping static entry reached from 0xC212D9.
    case 0xC212DB: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:222 STA __BSS_START__,X
    case 0xC212DC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:223 JMP @UNKNOWN26
    case 0xC212DF: cpu.execute_instruction<0x4C>(0x001368, 3); return true;
    // src/misc/hp_pp_roller.asm:225 LDA @LOCAL01
    case 0xC212E2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:226 CLC
    case 0xC212E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:227 ADC #char_struct::current_pp_fraction
    case 0xC212E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000049, 2); else cpu.execute_instruction<0x69>(0x000049, 3); return true;
    // src/misc/hp_pp_roller.asm:227 ADC #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC212E5.
    case 0xC212E7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:228 TAX
    case 0xC212E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:229 TXY
    case 0xC212E9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:230 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC212EA: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/misc/hp_pp_roller.asm:231 BEQ @UNKNOWN22
    case 0xC212ED: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC212EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC212EF.
    case 0xC212F1: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC212F2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC212F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    // Overlapping static entry reached from 0xC212F4.
    case 0xC212F6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:232 MOVE_INT_CONSTANT $00064000, @VIRTUAL06
    case 0xC212F7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:233 BRA @UNKNOWN23
    case 0xC212F9: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC212FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC212FB.
    case 0xC212FD: cpu.execute_instruction<0x90>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC212FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC212FD.
    case 0xC212FF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC21300: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC212FF.
    case 0xC21301: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    // Overlapping static entry reached from 0xC21300.
    case 0xC21302: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:235 MOVE_INT_CONSTANT $00019000, @VIRTUAL06
    case 0xC21303: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:237 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC21305: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:237 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC21307: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:237 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC21309: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:237 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2130B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/misc/hp_pp_roller.asm:238 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2130D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:238 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21310: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:238 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21312: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:238 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC21315: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:239 SEC
    case 0xC21317: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21318: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2131A: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2131C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2131E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21320: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/misc/hp_pp_roller.asm:240 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC21322: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/hp_pp_roller.asm:241 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21324: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/hp_pp_roller.asm:241 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21326: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/hp_pp_roller.asm:241 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC21329: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/hp_pp_roller.asm:241 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2132B: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/misc/hp_pp_roller.asm:242 LDA @LOCAL01
    case 0xC2132E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:243 TAX
    case 0xC21330: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:244 LDY a:char_struct::current_pp,X
    case 0xC21331: cpu.execute_instruction<0xBC>(0x00004B, 3); return true;
    // src/misc/hp_pp_roller.asm:245 TYA
    case 0xC21334: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:246 CMP @VIRTUAL02
    case 0xC21335: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:247 BCC @UNKNOWN24
    case 0xC21337: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/misc/hp_pp_roller.asm:248 CPY #1000
    case 0xC21339: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E8, 2); else cpu.execute_instruction<0xC0>(0x0003E8, 3); return true;
    // src/misc/hp_pp_roller.asm:248 CPY #1000
    // Overlapping static entry reached from 0xC21339.
    case 0xC2133B: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/hp_pp_roller.asm:249 BLTEQ @UNKNOWN26
    case 0xC2133C: cpu.execute_instruction<0x90>(0x00002A, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/hp_pp_roller.asm:249 BLTEQ @UNKNOWN26
    // Overlapping static entry reached from 0xC2133B.
    case 0xC2133D: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/misc/hp_pp_roller.asm:249 BLTEQ @UNKNOWN26
    case 0xC2133E: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/misc/hp_pp_roller.asm:251 LDA @LOCAL01
    case 0xC21340: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:252 TAX
    case 0xC21342: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:253 LDA @VIRTUAL02
    case 0xC21343: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/hp_pp_roller.asm:254 STA a:char_struct::current_pp,X
    case 0xC21345: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/misc/hp_pp_roller.asm:255 LDA @LOCAL01
    case 0xC21348: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:256 TAX
    case 0xC2134A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:257 LDA #1
    case 0xC2134B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:257 LDA #1
    // Overlapping static entry reached from 0xC2134B.
    case 0xC2134D: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:258 STA __BSS_START__ + char_struct::current_pp_fraction,X
    case 0xC2134E: cpu.execute_instruction<0x9D>(0x000049, 3); return true;
    // src/misc/hp_pp_roller.asm:259 BRA @UNKNOWN26
    case 0xC21351: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/misc/hp_pp_roller.asm:261 LDA @LOCAL01
    case 0xC21353: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:262 PHA
    case 0xC21355: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:263 TAX
    case 0xC21356: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:264 LDA a:char_struct::current_pp,X
    case 0xC21357: cpu.execute_instruction<0xBD>(0x00004B, 3); return true;
    // src/misc/hp_pp_roller.asm:265 PLX
    case 0xC2135A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:266 CMP a:char_struct::current_pp_target,X
    case 0xC2135B: cpu.execute_instruction<0xDD>(0x00004D, 3); return true;
    // src/misc/hp_pp_roller.asm:267 BEQ @UNKNOWN26
    case 0xC2135E: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/misc/hp_pp_roller.asm:268 LDA #1
    case 0xC21360: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:268 LDA #1
    // Overlapping static entry reached from 0xC21360.
    case 0xC21362: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/hp_pp_roller.asm:269 LDX @LOCAL00
    case 0xC21363: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/hp_pp_roller.asm:270 STA __BSS_START__,X
    case 0xC21365: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:272 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC21368: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/misc/hp_pp_roller.asm:273 BEQ @UNKNOWN30
    case 0xC2136B: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/misc/hp_pp_roller.asm:274 LDA @LOCAL01
    case 0xC2136D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:275 TAX
    case 0xC2136F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:276 LDY a:char_struct::current_hp,X
    case 0xC21370: cpu.execute_instruction<0xBC>(0x000045, 3); return true;
    // src/misc/hp_pp_roller.asm:277 CPY #999
    case 0xC21373: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E7, 2); else cpu.execute_instruction<0xC0>(0x0003E7, 3); return true;
    // src/misc/hp_pp_roller.asm:277 CPY #999
    // Overlapping static entry reached from 0xC21373.
    case 0xC21375: cpu.execute_instruction<0x03>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:278 BNE @UNKNOWN27
    case 0xC21376: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/misc/hp_pp_roller.asm:278 BNE @UNKNOWN27
    // Overlapping static entry reached from 0xC21375.
    case 0xC21377: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000AA, 2); else cpu.execute_instruction<0x09>(0x00A9AA, 3); return true;
    // src/misc/hp_pp_roller.asm:279 TAX
    case 0xC21378: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:280 LDA #1
    case 0xC21379: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:280 LDA #1
    // Overlapping static entry reached from 0xC21377.
    case 0xC2137A: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/misc/hp_pp_roller.asm:280 LDA #1
    // Overlapping static entry reached from 0xC21379.
    case 0xC2137B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:281 STA a:char_struct::current_hp_target,X
    case 0xC2137C: cpu.execute_instruction<0x9D>(0x000047, 3); return true;
    // src/misc/hp_pp_roller.asm:282 BRA @UNKNOWN28
    case 0xC2137F: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/misc/hp_pp_roller.asm:284 CPY #1
    case 0xC21381: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/misc/hp_pp_roller.asm:284 CPY #1
    // Overlapping static entry reached from 0xC21381.
    case 0xC21383: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:285 BNE @UNKNOWN28
    case 0xC21384: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/misc/hp_pp_roller.asm:286 TAX
    case 0xC21386: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:287 LDA #999
    case 0xC21387: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x0003E7, 3); return true;
    // src/misc/hp_pp_roller.asm:287 LDA #999
    // Overlapping static entry reached from 0xC21387.
    case 0xC21389: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:288 STA a:char_struct::current_hp_target,X
    case 0xC2138A: cpu.execute_instruction<0x9D>(0x000047, 3); return true;
    // src/misc/hp_pp_roller.asm:288 STA a:char_struct::current_hp_target,X
    // Overlapping static entry reached from 0xC21389.
    case 0xC2138B: cpu.execute_instruction<0x47>(0x000000, 2); return true;
    // src/misc/hp_pp_roller.asm:290 LDA @LOCAL01
    case 0xC2138D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/hp_pp_roller.asm:291 TAX
    case 0xC2138F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:292 LDY a:char_struct::current_pp,X
    case 0xC21390: cpu.execute_instruction<0xBC>(0x00004B, 3); return true;
    // src/misc/hp_pp_roller.asm:293 CPY #999
    case 0xC21393: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E7, 2); else cpu.execute_instruction<0xC0>(0x0003E7, 3); return true;
    // src/misc/hp_pp_roller.asm:293 CPY #999
    // Overlapping static entry reached from 0xC21393.
    case 0xC21395: cpu.execute_instruction<0x03>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:294 BNE @UNKNOWN29
    case 0xC21396: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/misc/hp_pp_roller.asm:294 BNE @UNKNOWN29
    // Overlapping static entry reached from 0xC21395.
    case 0xC21397: cpu.execute_instruction<0x06>(0x0000AA, 2); return true;
    // src/misc/hp_pp_roller.asm:295 TAX
    case 0xC21398: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:296 STZ a:char_struct::current_pp_target,X
    case 0xC21399: cpu.execute_instruction<0x9E>(0x00004D, 3); return true;
    // src/misc/hp_pp_roller.asm:297 BRA @UNKNOWN30
    case 0xC2139C: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/misc/hp_pp_roller.asm:299 CPY #0
    case 0xC2139E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/misc/hp_pp_roller.asm:299 CPY #0
    // Overlapping static entry reached from 0xC2139E.
    case 0xC213A0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/hp_pp_roller.asm:300 BNE @UNKNOWN30
    case 0xC213A1: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/misc/hp_pp_roller.asm:301 TAX
    case 0xC213A3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/hp_pp_roller.asm:302 LDA #999
    case 0xC213A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x0003E7, 3); return true;
    // src/misc/hp_pp_roller.asm:302 LDA #999
    // Overlapping static entry reached from 0xC213A4.
    case 0xC213A6: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/misc/hp_pp_roller.asm:303 STA a:char_struct::current_pp_target,X
    case 0xC213A7: cpu.execute_instruction<0x9D>(0x00004D, 3); return true;
    // src/misc/hp_pp_roller.asm:303 STA a:char_struct::current_pp_target,X
    // Overlapping static entry reached from 0xC213A6.
    case 0xC213A8: cpu.execute_instruction<0x4D>(0x002B00, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/hp_pp_roller.asm:305 END_C_FUNCTION
    case 0xC213AA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/hp_pp_roller.asm:305 END_C_FUNCTION
    case 0xC213AB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/increase_wallet_balance.asm (source_named).
bool execute_miscellaneous_increase_wallet_balance_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/increase_wallet_balance.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC22214: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    case 0xC22216: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    case 0xC22217: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    case 0xC22218: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC22218.
    case 0xC2221A: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/increase_wallet_balance.asm:7 END_STACK_VARS
    case 0xC2221B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2221C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2221E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC22220: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC22222: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:9 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL0A
    case 0xC22224: cpu.execute_instruction<0xAD>(0x009831, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:9 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL0A
    case 0xC22227: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:9 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL0A
    case 0xC22229: cpu.execute_instruction<0xAD>(0x009833, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:9 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL0A
    case 0xC2222C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/increase_wallet_balance.asm:10 CLC
    case 0xC2222E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC2222F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22231: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22233: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22235: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22237: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:11 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC22239: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    case 0xC2223B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x00869F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    // Overlapping static entry reached from 0xC2223B.
    case 0xC2223D: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    case 0xC2223E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    // Overlapping static entry reached from 0xC2223D.
    case 0xC2223F: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    case 0xC22240: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    // Overlapping static entry reached from 0xC2223F.
    case 0xC22241: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    // Overlapping static entry reached from 0xC22240.
    case 0xC22242: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:12 MOVE_INT_CONSTANT 99999, @VIRTUAL06
    case 0xC22243: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/increase_wallet_balance.asm:13 CLC
    case 0xC22245: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:754 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:14 CMP32ALT @VIRTUAL0A, @VIRTUAL06
    case 0xC22246: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:755 SBC dest
    // Macro caller: src/misc/increase_wallet_balance.asm:14 CMP32ALT @VIRTUAL0A, @VIRTUAL06
    case 0xC22248: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:756 LDA src + 2
    // Macro caller: src/misc/increase_wallet_balance.asm:14 CMP32ALT @VIRTUAL0A, @VIRTUAL06
    case 0xC2224A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:757 SBC dest + 2
    // Macro caller: src/misc/increase_wallet_balance.asm:14 CMP32ALT @VIRTUAL0A, @VIRTUAL06
    case 0xC2224C: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/increase_wallet_balance.asm:15 BRANCHGTS @UNKNOWN2
    case 0xC2224E: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/increase_wallet_balance.asm:15 BRANCHGTS @UNKNOWN2
    case 0xC22250: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/increase_wallet_balance.asm:15 BRANCHGTS @UNKNOWN2
    case 0xC22252: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/increase_wallet_balance.asm:15 BRANCHGTS @UNKNOWN2
    case 0xC22254: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC22256: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC22258: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2225A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2225C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:18 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC2225E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:18 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC22260: cpu.execute_instruction<0x8D>(0x009831, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:18 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC22263: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:18 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC22265: cpu.execute_instruction<0x8D>(0x009833, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/increase_wallet_balance.asm:19 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22268: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/increase_wallet_balance.asm:19 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2226A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/increase_wallet_balance.asm:19 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2226C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/increase_wallet_balance.asm:19 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2226E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/misc/increase_wallet_balance.asm:20 PLD
    case 0xC22270: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/misc/increase_wallet_balance.asm:21 RTL
    case 0xC22271: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/inflict_status_nonbattle.asm (source_named).
bool execute_miscellaneous_inflict_status_nonbattle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/inflict_status_nonbattle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC458FE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC45900: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC45901: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC45902: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC45903: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC45903.
    case 0xC45905: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC45906: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/inflict_status_nonbattle.asm:12 END_STACK_VARS
    case 0xC45907: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:13 STY @VIRTUAL02
    case 0xC45908: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:13 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC45905.
    case 0xC45909: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:14 PHA
    case 0xC4590A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:15 LDA @VIRTUAL02
    case 0xC4590B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:16 STA @LOCAL02
    case 0xC4590D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:17 PLA
    case 0xC4590F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:18 TXY
    case 0xC45910: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:19 STY @LOCAL01
    case 0xC45911: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:20 TAX
    case 0xC45913: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:21 STX @LOCAL00
    case 0xC45914: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:22 CPY #8
    case 0xC45916: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:22 CPY #8
    // Overlapping static entry reached from 0xC45916.
    case 0xC45918: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:23 BNE @UNKNOWN0
    case 0xC45919: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:24 LDA @VIRTUAL02
    case 0xC4591B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC4591D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:26 DEC
    case 0xC4591F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:27 STA GAME_STATE + game_state::party_status
    case 0xC45920: cpu.execute_instruction<0x8D>(0x009840, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC45923: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:29 TXA
    case 0xC45925: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:30 BRA @RETURN
    case 0xC45926: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:32 TXA
    case 0xC45928: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:33 JSL UNKNOWN_C2239D
    case 0xC45929: cpu.execute_instruction<0x22>(0xC2239D, 4); return true;
    // src/misc/inflict_status_nonbattle.asm:34 CMP #0
    case 0xC4592D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:34 CMP #0
    // Overlapping static entry reached from 0xC4592D.
    case 0xC4592F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:35 BEQ @FAILURE
    case 0xC45930: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:36 LDY @LOCAL01
    case 0xC45932: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:37 TYA
    case 0xC45934: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:38 DEC
    case 0xC45935: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:39 STA @VIRTUAL02
    case 0xC45936: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:40 LDX @LOCAL00
    case 0xC45938: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:41 TXA
    case 0xC4593A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:42 DEC
    case 0xC4593B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:43 LDY #.SIZEOF(char_struct)
    case 0xC4593C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:43 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4593C.
    case 0xC4593E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:44 JSL MULT168
    case 0xC4593F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/inflict_status_nonbattle.asm:45 CLC
    case 0xC45943: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:46 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC45944: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:46 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC45944.
    case 0xC45946: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:47 CLC
    case 0xC45947: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:48 ADC @VIRTUAL02
    case 0xC45948: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:48 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC45946.
    case 0xC45949: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:49 TAX
    case 0xC4594A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:50 LDA @LOCAL02
    case 0xC4594B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:51 STA @VIRTUAL02
    case 0xC4594D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC4594F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:53 DEC
    case 0xC45951: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:54 STA __BSS_START__,X
    case 0xC45952: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:55 JSL UNKNOWN_C3EE4D
    case 0xC45955: cpu.execute_instruction<0x22>(0xC3EE4D, 4); return true;
    // src/misc/inflict_status_nonbattle.asm:56 LDX @LOCAL00
    case 0xC45959: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:57 TXA
    case 0xC4595B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/inflict_status_nonbattle.asm:58 BRA @RETURN
    case 0xC4595C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/misc/inflict_status_nonbattle.asm:61 LDA #0
    case 0xC4595E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/inflict_status_nonbattle.asm:61 LDA #0
    // Overlapping static entry reached from 0xC4595E.
    case 0xC45960: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/inflict_status_nonbattle.asm:63 END_C_FUNCTION
    case 0xC45961: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/inflict_status_nonbattle.asm:63 END_C_FUNCTION
    case 0xC45962: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/inventory_get_item_name.asm (source_named).
bool execute_miscellaneous_inventory_get_item_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/inventory_get_item_name.asm:3 BEGIN_C_FUNCTION
    case 0xC198DE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC198E0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC198E1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC198E2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC198E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC198E3.
    case 0xC198E5: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC198E6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/inventory_get_item_name.asm:14 END_STACK_VARS
    case 0xC198E7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:15 TXY
    case 0xC198E8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:16 STY @LOCAL04
    case 0xC198E9: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/misc/inventory_get_item_name.asm:17 TAX
    case 0xC198EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:18 DEC
    case 0xC198EC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:19 STA @VIRTUAL04
    case 0xC198ED: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/inventory_get_item_name.asm:23 TYA
    case 0xC198EF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:24 JSR CREATE_WINDOW
    case 0xC198F0: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/misc/inventory_get_item_name.asm:24 JSR CREATE_WINDOW
    // Overlapping static entry reached from 0xC1996A.
    case 0xC198F1: cpu.execute_instruction<0xEE>(0x00AD04, 3); return true;
    // src/misc/inventory_get_item_name.asm:25 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC198F3: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/inventory_get_item_name.asm:25 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC198F1.
    case 0xC198F4: cpu.execute_instruction<0xA4>(0x000098, 2); return true;
    // src/misc/inventory_get_item_name.asm:26 AND #$00FF
    case 0xC198F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/inventory_get_item_name.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC198F6.
    case 0xC198F8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/inventory_get_item_name.asm:27 CMP #1
    case 0xC198F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/inventory_get_item_name.asm:27 CMP #1
    // Overlapping static entry reached from 0xC198F9.
    case 0xC198FB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/inventory_get_item_name.asm:28 BEQ @UNKNOWN0
    case 0xC198FC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/misc/inventory_get_item_name.asm:29 LDY @LOCAL04
    case 0xC198FE: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/misc/inventory_get_item_name.asm:30 STY PAGINATION_WINDOW
    case 0xC19900: cpu.execute_instruction<0x8C>(0x005E7A, 3); return true;
    // src/misc/inventory_get_item_name.asm:32 LDA @VIRTUAL04
    case 0xC19903: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/inventory_get_item_name.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC19905: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/inventory_get_item_name.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19905.
    case 0xC19907: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/inventory_get_item_name.asm:34 JSL MULT168
    case 0xC19908: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/inventory_get_item_name.asm:35 CLC
    case 0xC1990C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC1990D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/misc/inventory_get_item_name.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC1990D.
    case 0xC1990F: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19910: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19912: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19913: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19915: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19916: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/misc/inventory_get_item_name.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19918: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/misc/inventory_get_item_name.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC1991A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/inventory_get_item_name.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1991C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1991E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/inventory_get_item_name.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19920: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/inventory_get_item_name.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19922: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/inventory_get_item_name.asm:40 LDX #.SIZEOF(char_struct::name)
    case 0xC19924: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/misc/inventory_get_item_name.asm:40 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC19924.
    case 0xC19926: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/misc/inventory_get_item_name.asm:41 LDY @LOCAL04
    case 0xC19927: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/misc/inventory_get_item_name.asm:42 TYA
    case 0xC19929: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:43 JSL SET_WINDOW_TITLE
    case 0xC1992A: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/misc/inventory_get_item_name.asm:44 LDA #0
    case 0xC1992E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/inventory_get_item_name.asm:44 LDA #0
    // Overlapping static entry reached from 0xC1992E.
    case 0xC19930: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/inventory_get_item_name.asm:45 STA @VIRTUAL02
    case 0xC19931: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/inventory_get_item_name.asm:46 JMP @UNKNOWN5
    case 0xC19933: cpu.execute_instruction<0x4C>(0x0099EF, 3); return true;
    // src/misc/inventory_get_item_name.asm:48 LDA @VIRTUAL04
    case 0xC19936: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/inventory_get_item_name.asm:49 LDY #.SIZEOF(char_struct)
    case 0xC19938: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/inventory_get_item_name.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19938.
    case 0xC1993A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/inventory_get_item_name.asm:50 JSL MULT168
    case 0xC1993B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/inventory_get_item_name.asm:51 CLC
    case 0xC1993F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC19940: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/inventory_get_item_name.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC19940.
    case 0xC19942: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/inventory_get_item_name.asm:53 CLC
    case 0xC19943: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:54 ADC @VIRTUAL02
    case 0xC19944: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/inventory_get_item_name.asm:54 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC19942.
    case 0xC19945: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/inventory_get_item_name.asm:55 TAX
    case 0xC19946: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:56 LDA __BSS_START__,X
    case 0xC19947: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/inventory_get_item_name.asm:57 AND #$00FF
    case 0xC1994A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/inventory_get_item_name.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC1994A.
    case 0xC1994C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/inventory_get_item_name.asm:58 TAY
    case 0xC1994D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:59 STY @LOCAL02
    case 0xC1994E: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/misc/inventory_get_item_name.asm:61 LDX @VIRTUAL02
    case 0xC19950: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/inventory_get_item_name.asm:62 INX
    case 0xC19952: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:63 LDA @VIRTUAL04
    case 0xC19953: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/inventory_get_item_name.asm:64 INC
    case 0xC19955: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:65 JSL CHECK_ITEM_EQUIPPED
    case 0xC19956: cpu.execute_instruction<0x22>(0xC3E9A0, 4); return true;
    // src/misc/inventory_get_item_name.asm:66 CMP #0
    case 0xC1995A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/inventory_get_item_name.asm:66 CMP #0
    // Overlapping static entry reached from 0xC1995A.
    case 0xC1995C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/inventory_get_item_name.asm:67 BEQ @UNKNOWN2
    case 0xC1995D: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/misc/inventory_get_item_name.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC1995F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/inventory_get_item_name.asm:69 LDA #CHAR::EQUIPPED
    case 0xC19961: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x008D22, 3); return true;
    // src/misc/inventory_get_item_name.asm:70 STA TEMPORARY_TEXT_BUFFER
    case 0xC19963: cpu.execute_instruction<0x8D>(0x009C9F, 3); return true;
    // src/misc/inventory_get_item_name.asm:70 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC19961.
    case 0xC19964: cpu.execute_instruction<0x9F>(0x20C29C, 4); return true;
    // src/misc/inventory_get_item_name.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC19966: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:72 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19968: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:72 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19968.
    case 0xC1996A: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/inventory_get_item_name.asm:72 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1996B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/inventory_get_item_name.asm:72 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1996A.
    case 0xC1996C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:72 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1996D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:72 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1996C.
    case 0xC1996E: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:72 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1996D.
    case 0xC1996F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/inventory_get_item_name.asm:72 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19970: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/inventory_get_item_name.asm:73 LDY @LOCAL02
    case 0xC19972: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/misc/inventory_get_item_name.asm:77 TYA
    case 0xC19974: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/inventory_get_item_name.asm:78 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19975: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/inventory_get_item_name.asm:78 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19975.
    case 0xC19977: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/inventory_get_item_name.asm:78 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19978: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/inventory_get_item_name.asm:79 CLC
    case 0xC1997C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:80 ADC @VIRTUAL06
    case 0xC1997D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/inventory_get_item_name.asm:81 STA @VIRTUAL06
    case 0xC1997F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/inventory_get_item_name.asm:82 STA @LOCAL00
    case 0xC19981: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/inventory_get_item_name.asm:83 LDA @VIRTUAL06+2
    case 0xC19983: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/misc/inventory_get_item_name.asm:84 STA @LOCAL00+2
    case 0xC19985: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/inventory_get_item_name.asm:85 LDX #.SIZEOF(item::name)
    case 0xC19987: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/misc/inventory_get_item_name.asm:85 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC19987.
    case 0xC19989: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/misc/inventory_get_item_name.asm:111 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)+1
    case 0xC1998A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x009CA0, 3); return true;
    // src/misc/inventory_get_item_name.asm:111 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)+1
    // Overlapping static entry reached from 0xC1998A.
    case 0xC1998C: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/misc/inventory_get_item_name.asm:112 JSL MEMCPY16
    case 0xC1998D: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/misc/inventory_get_item_name.asm:112 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1998C.
    case 0xC1998F: cpu.execute_instruction<0x8E>(0x0080C0, 3); return true;
    // src/misc/inventory_get_item_name.asm:113 BRA @UNKNOWN3
    case 0xC19991: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/misc/inventory_get_item_name.asm:113 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC1998F.
    case 0xC19992: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A9, 2); else cpu.execute_instruction<0x29>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19993: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19992.
    case 0xC19994: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19993.
    case 0xC19995: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/inventory_get_item_name.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19996: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/inventory_get_item_name.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19995.
    case 0xC19997: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19998: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19997.
    case 0xC19999: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/inventory_get_item_name.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19998.
    case 0xC1999A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/inventory_get_item_name.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1999B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/inventory_get_item_name.asm:116 LDY @LOCAL02
    case 0xC1999D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/misc/inventory_get_item_name.asm:117 TYA
    case 0xC1999F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:118 LDY #.SIZEOF(item)
    case 0xC199A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/misc/inventory_get_item_name.asm:118 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC199A0.
    case 0xC199A2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/inventory_get_item_name.asm:119 JSL MULT168
    case 0xC199A3: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/inventory_get_item_name.asm:120 CLC
    case 0xC199A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:121 ADC @VIRTUAL06
    case 0xC199A8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/inventory_get_item_name.asm:122 STA @VIRTUAL06
    case 0xC199AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/inventory_get_item_name.asm:123 STA @LOCAL00
    case 0xC199AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/inventory_get_item_name.asm:124 LDA @VIRTUAL06+2
    case 0xC199AE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/misc/inventory_get_item_name.asm:125 STA @LOCAL00+2
    case 0xC199B0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/inventory_get_item_name.asm:126 LDX #.SIZEOF(item::name)
    case 0xC199B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/misc/inventory_get_item_name.asm:126 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC199B2.
    case 0xC199B4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/misc/inventory_get_item_name.asm:127 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC199B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/misc/inventory_get_item_name.asm:127 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC199B5.
    case 0xC199B7: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/misc/inventory_get_item_name.asm:128 JSL MEMCPY16
    case 0xC199B8: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/misc/inventory_get_item_name.asm:128 JSL MEMCPY16
    // Overlapping static entry reached from 0xC199B7.
    case 0xC199BA: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/misc/inventory_get_item_name.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC199BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/inventory_get_item_name.asm:130 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC199BA.
    case 0xC199BD: cpu.execute_instruction<0x20>(0x00B89C, 3); return true;
    // src/misc/inventory_get_item_name.asm:131 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    case 0xC199BE: cpu.execute_instruction<0x9C>(0x009CB8, 3); return true;
    // src/misc/inventory_get_item_name.asm:131 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC199BD.
    case 0xC199C0: cpu.execute_instruction<0x9C>(0x0016A4, 3); return true;
    // src/misc/inventory_get_item_name.asm:133 LDY @LOCAL02
    case 0xC199C1: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/misc/inventory_get_item_name.asm:134 BEQ @UNKNOWN4
    case 0xC199C3: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/misc/inventory_get_item_name.asm:135 REP #PROC_FLAGS::ACCUM8
    case 0xC199C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC199C7.
    case 0xC199C9: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199CC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199CD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199CF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199D0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/misc/inventory_get_item_name.asm:136 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC199D2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/misc/inventory_get_item_name.asm:137 REP #PROC_FLAGS::ACCUM8
    case 0xC199D4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/inventory_get_item_name.asm:138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC199D6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC199D8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/inventory_get_item_name.asm:138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC199DA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/inventory_get_item_name.asm:138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC199DC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC199DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC199DE.
    case 0xC199E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC199E1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC199E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC199E3.
    case 0xC199E5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/inventory_get_item_name.asm:139 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC199E6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/inventory_get_item_name.asm:140 JSR UNKNOWN_C113D1
    case 0xC199E8: cpu.execute_instruction<0x20>(0x0013D1, 3); return true;
    // src/misc/inventory_get_item_name.asm:142 REP #PROC_FLAGS::ACCUM8
    case 0xC199EB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/inventory_get_item_name.asm:143 INC @VIRTUAL02
    case 0xC199ED: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/inventory_get_item_name.asm:145 LDA #.SIZEOF(char_struct::items)
    case 0xC199EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/inventory_get_item_name.asm:145 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC199EF.
    case 0xC199F1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/inventory_get_item_name.asm:146 CLC
    case 0xC199F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:147 SBC @VIRTUAL02
    case 0xC199F3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC199F5: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC199F7: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC199F9: cpu.execute_instruction<0x4C>(0x009936, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC199FC: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/misc/inventory_get_item_name.asm:148 JUMPGTS @UNKNOWN1
    case 0xC199FE: cpu.execute_instruction<0x4C>(0x009936, 3); return true;
    // src/misc/inventory_get_item_name.asm:150 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC19A01: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/misc/inventory_get_item_name.asm:152 LDY #0
    case 0xC19A05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/misc/inventory_get_item_name.asm:152 LDY #0
    // Overlapping static entry reached from 0xC19A05.
    case 0xC19A07: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/misc/inventory_get_item_name.asm:153 TYX
    case 0xC19A08: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/misc/inventory_get_item_name.asm:154 LDA #2
    case 0xC19A09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/inventory_get_item_name.asm:154 LDA #2
    // Overlapping static entry reached from 0xC19A09.
    case 0xC19A0B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/inventory_get_item_name.asm:155 JSR UNKNOWN_C1180D
    case 0xC19A0C: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/inventory_get_item_name.asm:156 END_C_FUNCTION
    case 0xC19A0F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/inventory_get_item_name.asm:156 END_C_FUNCTION
    case 0xC19A10: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/learn_special_psi.asm (source_named).
bool execute_miscellaneous_learn_special_psi_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/learn_special_psi.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC227C8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/learn_special_psi.asm:4 CMP #$0001
    case 0xC227CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/learn_special_psi.asm:4 CMP #$0001
    // Overlapping static entry reached from 0xC227CA.
    case 0xC227CC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/learn_special_psi.asm:5 BEQ @LEARN_TELEPORT_ALPHA
    case 0xC227CD: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/learn_special_psi.asm:6 CMP #$0002
    case 0xC227CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/learn_special_psi.asm:6 CMP #$0002
    // Overlapping static entry reached from 0xC227CF.
    case 0xC227D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/learn_special_psi.asm:7 BEQ @LEARN_TELEPORT_BETA
    case 0xC227D2: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/misc/learn_special_psi.asm:8 CMP #$0003
    case 0xC227D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/learn_special_psi.asm:8 CMP #$0003
    // Overlapping static entry reached from 0xC227D4.
    case 0xC227D6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/learn_special_psi.asm:9 BEQ @LEARN_STARSTORM_ALPHA
    case 0xC227D7: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/misc/learn_special_psi.asm:10 CMP #$0004
    case 0xC227D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/learn_special_psi.asm:10 CMP #$0004
    // Overlapping static entry reached from 0xC227D9.
    case 0xC227DB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/learn_special_psi.asm:11 BEQ @LEARN_STARSTORM_OMEGA
    case 0xC227DC: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/misc/learn_special_psi.asm:12 BRA @RETURN
    case 0xC227DE: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/misc/learn_special_psi.asm:14 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    case 0xC227E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000039, 2); else cpu.execute_instruction<0xA2>(0x009839, 3); return true;
    // src/misc/learn_special_psi.asm:14 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    // Overlapping static entry reached from 0xC227E0.
    case 0xC227E2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/learn_special_psi.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC227E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:16 LDA __BSS_START__,X
    case 0xC227E5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:17 ORA #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    case 0xC227E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x009D01, 3); return true;
    // src/misc/learn_special_psi.asm:18 STA __BSS_START__,X
    case 0xC227EA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:18 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC227E8.
    case 0xC227EB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/learn_special_psi.asm:19 BRA @RETURN
    case 0xC227ED: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/misc/learn_special_psi.asm:21 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    case 0xC227EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000039, 2); else cpu.execute_instruction<0xA2>(0x009839, 3); return true;
    // src/misc/learn_special_psi.asm:21 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    // Overlapping static entry reached from 0xC227EF.
    case 0xC227F1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/learn_special_psi.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC227F2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:23 LDA __BSS_START__,X
    case 0xC227F4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:24 ORA #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    case 0xC227F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000002, 2); else cpu.execute_instruction<0x09>(0x009D02, 3); return true;
    // src/misc/learn_special_psi.asm:25 STA __BSS_START__,X
    case 0xC227F9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:25 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC227F7.
    case 0xC227FA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/learn_special_psi.asm:26 BRA @RETURN
    case 0xC227FC: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/misc/learn_special_psi.asm:28 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    case 0xC227FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000039, 2); else cpu.execute_instruction<0xA2>(0x009839, 3); return true;
    // src/misc/learn_special_psi.asm:28 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    // Overlapping static entry reached from 0xC227FE.
    case 0xC22800: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/learn_special_psi.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC22801: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:30 LDA __BSS_START__,X
    case 0xC22803: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:31 ORA #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    case 0xC22806: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x009D04, 3); return true;
    // src/misc/learn_special_psi.asm:32 STA __BSS_START__,X
    case 0xC22808: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:32 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC22806.
    case 0xC22809: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/learn_special_psi.asm:33 BRA @RETURN
    case 0xC2280B: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/misc/learn_special_psi.asm:35 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    case 0xC2280D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000039, 2); else cpu.execute_instruction<0xA2>(0x009839, 3); return true;
    // src/misc/learn_special_psi.asm:35 LDX #.LOWORD(GAME_STATE) + game_state::party_psi
    // Overlapping static entry reached from 0xC2280D.
    case 0xC2280F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/learn_special_psi.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC22810: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:37 LDA __BSS_START__,X
    case 0xC22812: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:38 ORA #PARTY_PSI_FLAGS::TELEPORT_BETA
    case 0xC22815: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000008, 2); else cpu.execute_instruction<0x09>(0x009D08, 3); return true;
    // src/misc/learn_special_psi.asm:39 STA __BSS_START__,X
    case 0xC22817: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/learn_special_psi.asm:39 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC22815.
    case 0xC22818: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/learn_special_psi.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC2281A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/learn_special_psi.asm:42 RTL
    case 0xC2281C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/level_up_char.asm (source_named).
bool execute_miscellaneous_level_up_char_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/level_up_char.asm:3 BEGIN_C_FUNCTION
    case 0xC1D109: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/level_up_char.asm:15 END_STACK_VARS
    case 0xC1D10B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/level_up_char.asm:15 END_STACK_VARS
    case 0xC1D10C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/level_up_char.asm:15 END_STACK_VARS
    case 0xC1D10D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/level_up_char.asm:15 END_STACK_VARS
    case 0xC1D10E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E1, 2); else cpu.execute_instruction<0x69>(0x00FFE1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/level_up_char.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D10E.
    case 0xC1D110: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/level_up_char.asm:15 END_STACK_VARS
    case 0xC1D111: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/level_up_char.asm:15 END_STACK_VARS
    case 0xC1D112: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:16 STX @LOCAL07
    case 0xC1D113: cpu.execute_instruction<0x86>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:16 STX @LOCAL07
    // Overlapping static entry reached from 0xC1D110.
    case 0xC1D114: cpu.execute_instruction<0x1D>(0x009BAA, 3); return true;
    // src/misc/level_up_char.asm:17 TAX
    case 0xC1D115: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:18 TXY
    case 0xC1D116: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:19 DEY
    case 0xC1D117: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:20 STY @LOCAL06
    case 0xC1D118: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:21 TYA
    case 0xC1D11A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:22 LDY #.SIZEOF(char_struct)
    case 0xC1D11B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:22 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D11B.
    case 0xC1D11D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:23 JSL MULT168
    case 0xC1D11E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:24 STA @LOCAL05
    case 0xC1D122: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/misc/level_up_char.asm:25 CLC
    case 0xC1D124: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::level
    case 0xC1D125: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D3, 2); else cpu.execute_instruction<0x69>(0x0099D3, 3); return true;
    // src/misc/level_up_char.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::level
    // Overlapping static entry reached from 0xC1D125.
    case 0xC1D127: cpu.execute_instruction<0x99>(0x000285, 3); return true;
    // src/misc/level_up_char.asm:27 STA @VIRTUAL02
    case 0xC1D128: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:28 LDX @VIRTUAL02
    case 0xC1D12A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D12C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:30 LDA __BSS_START__,X
    case 0xC1D12E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:31 STA @LOCAL04
    case 0xC1D131: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/misc/level_up_char.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC1D133: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:33 AND #$00FF
    case 0xC1D135: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC1D135.
    case 0xC1D137: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/level_up_char.asm:34 STA @VIRTUAL04
    case 0xC1D138: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:35 STA @LOCAL03
    case 0xC1D13A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D13C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:37 LDA @LOCAL04
    case 0xC1D13E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/misc/level_up_char.asm:38 INC
    case 0xC1D140: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:39 LDX @VIRTUAL02
    case 0xC1D141: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:40 STA __BSS_START__,X
    case 0xC1D143: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC1D146: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:42 LDA @LOCAL07
    case 0xC1D148: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:43 BEQ @UNKNOWN0
    case 0xC1D14A: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/misc/level_up_char.asm:44 LDA #1
    case 0xC1D14C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/level_up_char.asm:44 LDA #1
    // Overlapping static entry reached from 0xC1D14C.
    case 0xC1D14E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:45 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1D14F: cpu.execute_instruction<0x20>(0x000036, 3); return true;
    // src/misc/level_up_char.asm:46 LDX #5
    case 0xC1D152: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/misc/level_up_char.asm:46 LDX #5
    // Overlapping static entry reached from 0xC1D152.
    case 0xC1D154: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/level_up_char.asm:47 LDA @LOCAL05
    case 0xC1D155: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/misc/level_up_char.asm:48 CLC
    case 0xC1D157: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:49 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1D158: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/misc/level_up_char.asm:49 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1D158.
    case 0xC1D15A: cpu.execute_instruction<0x99>(0x00A120, 3); return true;
    // src/misc/level_up_char.asm:50 JSR UNKNOWN_C1ACA1
    case 0xC1D15B: cpu.execute_instruction<0x20>(0x00ACA1, 3); return true;
    // src/misc/level_up_char.asm:50 JSR UNKNOWN_C1ACA1
    // Overlapping static entry reached from 0xC1D15A.
    case 0xC1D15D: cpu.execute_instruction<0xAC>(0x0002A6, 3); return true;
    // src/misc/level_up_char.asm:51 LDX @VIRTUAL02
    case 0xC1D15E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D160: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:53 LDA __BSS_START__,X
    case 0xC1D162: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/misc/level_up_char.asm:54 STORE_INT832 @VIRTUAL06
    case 0xC1D165: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/misc/level_up_char.asm:54 STORE_INT832 @VIRTUAL06
    case 0xC1D167: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:54 STORE_INT832 @VIRTUAL06
    case 0xC1D169: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/misc/level_up_char.asm:54 STORE_INT832 @VIRTUAL06
    case 0xC1D16B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/misc/level_up_char.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC1D16D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D16F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D171: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D173: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D175: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:57 JSR UNKNOWN_C1AD0A
    case 0xC1D177: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1D17A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000066, 2); else cpu.execute_instruction<0xA9>(0x007A66, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    // Overlapping static entry reached from 0xC1D17A.
    case 0xC1D17C: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1D17D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1D17F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    // Overlapping static entry reached from 0xC1D17F.
    case 0xC1D181: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1D182: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:58 DISPLAY_TEXT_PTR MSG_BTL_LEVEL_UP
    case 0xC1D184: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:59 LDA #2
    case 0xC1D188: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/level_up_char.asm:59 LDA #2
    // Overlapping static entry reached from 0xC1D188.
    case 0xC1D18A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:60 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1D18B: cpu.execute_instruction<0x20>(0x000036, 3); return true;
    // src/misc/level_up_char.asm:62 LDY @LOCAL06
    case 0xC1D18E: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:63 TYA
    case 0xC1D190: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC1D191: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D191.
    case 0xC1D193: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:65 JSL MULT168
    case 0xC1D194: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:66 CLC
    case 0xC1D198: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_offense
    case 0xC1D199: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x0099EA, 3); return true;
    // src/misc/level_up_char.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_offense
    // Overlapping static entry reached from 0xC1D199.
    case 0xC1D19B: cpu.execute_instruction<0x99>(0x0086AA, 3); return true;
    // src/misc/level_up_char.asm:68 TAX
    case 0xC1D19C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:69 STX @LOCAL02
    case 0xC1D19D: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:69 STX @LOCAL02
    // Overlapping static entry reached from 0xC1D19B.
    case 0xC1D19E: cpu.execute_instruction<0x14>(0x0000A4, 2); return true;
    // src/misc/level_up_char.asm:70 LDY @LOCAL06
    case 0xC1D19F: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:70 LDY @LOCAL06
    // Overlapping static entry reached from 0xC1D19E.
    case 0xC1D1A0: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:71 TYA
    case 0xC1D1A1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char.asm:72 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1A2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char.asm:72 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:72 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1A5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char.asm:72 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:72 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D1A8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:73 TAX
    case 0xC1D1AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D1AB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:75 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D1AD: cpu.execute_instruction<0xBF>(0xD5EA5B, 4); return true;
    // src/misc/level_up_char.asm:76 STA @LOCAL00
    case 0xC1D1B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char.asm:77 LDX @LOCAL02
    case 0xC1D1B3: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:78 LDA __BSS_START__,X
    case 0xC1D1B5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:79 STA @LOCAL00+1
    case 0xC1D1B8: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC1D1BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:81 LDA @LOCAL03
    case 0xC1D1BC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:82 STA @VIRTUAL04
    case 0xC1D1BE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:83 JSR UNKNOWN_C1D08B
    case 0xC1D1C0: cpu.execute_instruction<0x20>(0x00D08B, 3); return true;
    // src/misc/level_up_char.asm:84 STA @VIRTUAL02
    case 0xC1D1C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:85 CLC
    case 0xC1D1C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:86 SBC #0
    case 0xC1D1C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:86 SBC #0
    // Overlapping static entry reached from 0xC1D1C6.
    case 0xC1D1C8: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:87 BRANCHLTEQS @UNKNOWN4
    case 0xC1D1C9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:87 BRANCHLTEQS @UNKNOWN4
    case 0xC1D1CB: cpu.execute_instruction<0x10>(0x000048, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:87 BRANCHLTEQS @UNKNOWN4
    case 0xC1D1CD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:87 BRANCHLTEQS @UNKNOWN4
    case 0xC1D1CF: cpu.execute_instruction<0x30>(0x000044, 2); return true;
    // src/misc/level_up_char.asm:88 LDA @VIRTUAL02
    case 0xC1D1D1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D1D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:90 STA @VIRTUAL00
    case 0xC1D1D5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:91 LDX @LOCAL02
    case 0xC1D1D7: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:92 LDA __BSS_START__,X
    case 0xC1D1D9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:93 CLC
    case 0xC1D1DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:94 ADC @VIRTUAL00
    case 0xC1D1DD: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:95 STA __BSS_START__,X
    case 0xC1D1DF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:96 LDY @LOCAL06
    case 0xC1D1E2: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:97 REP #PROC_FLAGS::ACCUM8
    case 0xC1D1E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:98 TYA
    case 0xC1D1E6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:99 INC
    case 0xC1D1E7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:100 JSL RECALC_CHARACTER_POSTMATH_OFFENSE
    case 0xC1D1E8: cpu.execute_instruction<0x22>(0xC21857, 4); return true;
    // src/misc/level_up_char.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC1D1EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:102 LDA @LOCAL07
    case 0xC1D1EE: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:103 BEQ @UNKNOWN4
    case 0xC1D1F0: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char.asm:104 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D1F2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char.asm:104 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D1F4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:104 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D1F6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char.asm:104 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D1F8: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char.asm:104 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D1FA: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:105 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D1FC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:105 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D1FE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:105 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D200: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:105 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D202: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:106 JSR UNKNOWN_C1AD0A
    case 0xC1D204: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:107 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1D207: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x007A7D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:107 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    // Overlapping static entry reached from 0xC1D207.
    case 0xC1D209: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:107 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1D20A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:107 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1D20C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:107 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    // Overlapping static entry reached from 0xC1D20C.
    case 0xC1D20E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:107 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1D20F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:107 DISPLAY_TEXT_PTR MSG_BTL_LV_OFFENSE_UP
    case 0xC1D211: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:109 LDY @LOCAL06
    case 0xC1D215: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:110 TYA
    case 0xC1D217: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:111 LDY #.SIZEOF(char_struct)
    case 0xC1D218: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:111 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D218.
    case 0xC1D21A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:112 JSL MULT168
    case 0xC1D21B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:113 CLC
    case 0xC1D21F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:114 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_defense
    case 0xC1D220: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x0099EB, 3); return true;
    // src/misc/level_up_char.asm:114 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_defense
    // Overlapping static entry reached from 0xC1D220.
    case 0xC1D222: cpu.execute_instruction<0x99>(0x0086AA, 3); return true;
    // src/misc/level_up_char.asm:115 TAX
    case 0xC1D223: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:116 STX @LOCAL02
    case 0xC1D224: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:116 STX @LOCAL02
    // Overlapping static entry reached from 0xC1D222.
    case 0xC1D225: cpu.execute_instruction<0x14>(0x0000A4, 2); return true;
    // src/misc/level_up_char.asm:117 LDY @LOCAL06
    case 0xC1D226: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:117 LDY @LOCAL06
    // Overlapping static entry reached from 0xC1D225.
    case 0xC1D227: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:118 TYA
    case 0xC1D228: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char.asm:119 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D229: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char.asm:119 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D22B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:119 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D22C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char.asm:119 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D22E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:119 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D22F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:120 TAX
    case 0xC1D231: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:121 INX
    case 0xC1D232: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:122 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D233: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:123 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D235: cpu.execute_instruction<0xBF>(0xD5EA5B, 4); return true;
    // src/misc/level_up_char.asm:124 STA @LOCAL00
    case 0xC1D239: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char.asm:125 LDX @LOCAL02
    case 0xC1D23B: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:126 LDA __BSS_START__,X
    case 0xC1D23D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:127 STA @LOCAL00+1
    case 0xC1D240: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char.asm:128 REP #PROC_FLAGS::ACCUM8
    case 0xC1D242: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:129 LDA @LOCAL03
    case 0xC1D244: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:130 STA @VIRTUAL04
    case 0xC1D246: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:131 JSR UNKNOWN_C1D08B
    case 0xC1D248: cpu.execute_instruction<0x20>(0x00D08B, 3); return true;
    // src/misc/level_up_char.asm:132 STA @VIRTUAL02
    case 0xC1D24B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:133 CLC
    case 0xC1D24D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:134 SBC #0
    case 0xC1D24E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:134 SBC #0
    // Overlapping static entry reached from 0xC1D24E.
    case 0xC1D250: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:135 BRANCHLTEQS @UNKNOWN8
    case 0xC1D251: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:135 BRANCHLTEQS @UNKNOWN8
    case 0xC1D253: cpu.execute_instruction<0x10>(0x000048, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:135 BRANCHLTEQS @UNKNOWN8
    case 0xC1D255: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:135 BRANCHLTEQS @UNKNOWN8
    case 0xC1D257: cpu.execute_instruction<0x30>(0x000044, 2); return true;
    // src/misc/level_up_char.asm:136 LDA @VIRTUAL02
    case 0xC1D259: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D25B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:138 STA @VIRTUAL00
    case 0xC1D25D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:139 LDX @LOCAL02
    case 0xC1D25F: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:140 LDA __BSS_START__,X
    case 0xC1D261: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:141 CLC
    case 0xC1D264: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:142 ADC @VIRTUAL00
    case 0xC1D265: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:143 STA __BSS_START__,X
    case 0xC1D267: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:144 LDY @LOCAL06
    case 0xC1D26A: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:145 REP #PROC_FLAGS::ACCUM8
    case 0xC1D26C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:146 TYA
    case 0xC1D26E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:147 INC
    case 0xC1D26F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:148 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC1D270: cpu.execute_instruction<0x22>(0xC2192B, 4); return true;
    // src/misc/level_up_char.asm:149 REP #PROC_FLAGS::ACCUM8
    case 0xC1D274: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:150 LDA @LOCAL07
    case 0xC1D276: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:151 BEQ @UNKNOWN8
    case 0xC1D278: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char.asm:152 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D27A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char.asm:152 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D27C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:152 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D27E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char.asm:152 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D280: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char.asm:152 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D282: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:153 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D284: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:153 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D286: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:153 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D288: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:153 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D28A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:154 JSR UNKNOWN_C1AD0A
    case 0xC1D28C: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:155 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D28F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x007A97, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:155 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    // Overlapping static entry reached from 0xC1D28F.
    case 0xC1D291: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:155 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D292: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:155 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D294: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:155 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    // Overlapping static entry reached from 0xC1D294.
    case 0xC1D296: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:155 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D297: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:155 DISPLAY_TEXT_PTR MSG_BTL_LV_DEFENSE_UP
    case 0xC1D299: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:157 LDY @LOCAL06
    case 0xC1D29D: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:158 TYA
    case 0xC1D29F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:159 LDY #.SIZEOF(char_struct)
    case 0xC1D2A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:159 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D2A0.
    case 0xC1D2A2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:160 JSL MULT168
    case 0xC1D2A3: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:161 CLC
    case 0xC1D2A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:162 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_speed
    case 0xC1D2A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x0099EC, 3); return true;
    // src/misc/level_up_char.asm:162 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_speed
    // Overlapping static entry reached from 0xC1D2A8.
    case 0xC1D2AA: cpu.execute_instruction<0x99>(0x000285, 3); return true;
    // src/misc/level_up_char.asm:163 STA @VIRTUAL02
    case 0xC1D2AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:164 LDY @LOCAL06
    case 0xC1D2AD: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:165 TYA
    case 0xC1D2AF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char.asm:166 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2B0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char.asm:166 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:166 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2B3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char.asm:166 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:166 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D2B6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:167 TAX
    case 0xC1D2B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:168 INX
    case 0xC1D2B9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:169 INX
    case 0xC1D2BA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:170 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D2BB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:171 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D2BD: cpu.execute_instruction<0xBF>(0xD5EA5B, 4); return true;
    // src/misc/level_up_char.asm:172 STA @LOCAL00
    case 0xC1D2C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char.asm:173 LDX @VIRTUAL02
    case 0xC1D2C3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:174 LDA __BSS_START__,X
    case 0xC1D2C5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:175 STA @LOCAL00+1
    case 0xC1D2C8: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC1D2CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:177 LDA @LOCAL03
    case 0xC1D2CC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:178 STA @VIRTUAL04
    case 0xC1D2CE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:179 JSR UNKNOWN_C1D08B
    case 0xC1D2D0: cpu.execute_instruction<0x20>(0x00D08B, 3); return true;
    // src/misc/level_up_char.asm:180 TAX
    case 0xC1D2D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:181 STX @LOCAL02
    case 0xC1D2D4: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:182 TXA
    case 0xC1D2D6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:183 CLC
    case 0xC1D2D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:184 SBC #0
    case 0xC1D2D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:184 SBC #0
    // Overlapping static entry reached from 0xC1D2D8.
    case 0xC1D2DA: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:185 BRANCHLTEQS @UNKNOWN12
    case 0xC1D2DB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:185 BRANCHLTEQS @UNKNOWN12
    case 0xC1D2DD: cpu.execute_instruction<0x10>(0x00004D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:185 BRANCHLTEQS @UNKNOWN12
    case 0xC1D2DF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:185 BRANCHLTEQS @UNKNOWN12
    case 0xC1D2E1: cpu.execute_instruction<0x30>(0x000049, 2); return true;
    // src/misc/level_up_char.asm:186 SEP #PROC_FLAGS::INDEX8
    case 0xC1D2E3: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:187 STX @VIRTUAL00
    case 0xC1D2E5: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:188 REP #PROC_FLAGS::INDEX8
    case 0xC1D2E7: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:189 LDX @VIRTUAL02
    case 0xC1D2E9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:190 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D2EB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:191 LDA __BSS_START__,X
    case 0xC1D2ED: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:192 CLC
    case 0xC1D2F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:193 ADC @VIRTUAL00
    case 0xC1D2F1: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:194 LDX @VIRTUAL02
    case 0xC1D2F3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:195 STA __BSS_START__,X
    case 0xC1D2F5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:196 LDY @LOCAL06
    case 0xC1D2F8: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:197 REP #PROC_FLAGS::ACCUM8
    case 0xC1D2FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:198 TYA
    case 0xC1D2FC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:199 INC
    case 0xC1D2FD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:200 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC1D2FE: cpu.execute_instruction<0x22>(0xC21AEB, 4); return true;
    // src/misc/level_up_char.asm:201 REP #PROC_FLAGS::ACCUM8
    case 0xC1D302: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:202 LDA @LOCAL07
    case 0xC1D304: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:203 BEQ @UNKNOWN12
    case 0xC1D306: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/level_up_char.asm:204 LDX @LOCAL02
    case 0xC1D308: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:205 TXA
    case 0xC1D30A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char.asm:206 STORE_INT1632S @VIRTUAL06
    case 0xC1D30B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:206 STORE_INT1632S @VIRTUAL06
    case 0xC1D30D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/misc/level_up_char.asm:206 STORE_INT1632S @VIRTUAL06
    case 0xC1D30F: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/misc/level_up_char.asm:206 STORE_INT1632S @VIRTUAL06
    case 0xC1D311: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:207 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D313: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:207 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D315: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:207 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D317: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:207 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D319: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:208 JSR UNKNOWN_C1AD0A
    case 0xC1D31B: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:209 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D31E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B1, 2); else cpu.execute_instruction<0xA9>(0x007AB1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:209 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    // Overlapping static entry reached from 0xC1D31E.
    case 0xC1D320: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:209 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D321: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:209 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D323: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:209 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    // Overlapping static entry reached from 0xC1D323.
    case 0xC1D325: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:209 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D326: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:209 DISPLAY_TEXT_PTR MSG_BTL_LV_SPEED_UP
    case 0xC1D328: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:211 LDY @LOCAL06
    case 0xC1D32C: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:212 TYA
    case 0xC1D32E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:213 LDY #.SIZEOF(char_struct)
    case 0xC1D32F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:213 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D32F.
    case 0xC1D331: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:214 JSL MULT168
    case 0xC1D332: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:215 CLC
    case 0xC1D336: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:216 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_guts
    case 0xC1D337: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x0099ED, 3); return true;
    // src/misc/level_up_char.asm:216 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_guts
    // Overlapping static entry reached from 0xC1D337.
    case 0xC1D339: cpu.execute_instruction<0x99>(0x0086AA, 3); return true;
    // src/misc/level_up_char.asm:217 TAX
    case 0xC1D33A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:218 STX @LOCAL02
    case 0xC1D33B: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:218 STX @LOCAL02
    // Overlapping static entry reached from 0xC1D339.
    case 0xC1D33C: cpu.execute_instruction<0x14>(0x0000A4, 2); return true;
    // src/misc/level_up_char.asm:219 LDY @LOCAL06
    case 0xC1D33D: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:219 LDY @LOCAL06
    // Overlapping static entry reached from 0xC1D33C.
    case 0xC1D33E: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:220 TYA
    case 0xC1D33F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char.asm:221 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D340: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char.asm:221 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D342: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:221 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D343: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char.asm:221 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D345: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:221 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D346: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:222 TAX
    case 0xC1D348: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:223 INX
    case 0xC1D349: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:224 INX
    case 0xC1D34A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:225 INX
    case 0xC1D34B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D34C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:227 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D34E: cpu.execute_instruction<0xBF>(0xD5EA5B, 4); return true;
    // src/misc/level_up_char.asm:228 STA @LOCAL00
    case 0xC1D352: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char.asm:229 LDX @LOCAL02
    case 0xC1D354: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:230 LDA __BSS_START__,X
    case 0xC1D356: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:231 STA @LOCAL00+1
    case 0xC1D359: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char.asm:232 REP #PROC_FLAGS::ACCUM8
    case 0xC1D35B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:233 LDA @LOCAL03
    case 0xC1D35D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:234 STA @VIRTUAL04
    case 0xC1D35F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:235 JSR UNKNOWN_C1D08B
    case 0xC1D361: cpu.execute_instruction<0x20>(0x00D08B, 3); return true;
    // src/misc/level_up_char.asm:236 STA @VIRTUAL02
    case 0xC1D364: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:237 CLC
    case 0xC1D366: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:238 SBC #0
    case 0xC1D367: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:238 SBC #0
    // Overlapping static entry reached from 0xC1D367.
    case 0xC1D369: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:239 BRANCHLTEQS @UNKNOWN16
    case 0xC1D36A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:239 BRANCHLTEQS @UNKNOWN16
    case 0xC1D36C: cpu.execute_instruction<0x10>(0x000048, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:239 BRANCHLTEQS @UNKNOWN16
    case 0xC1D36E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:239 BRANCHLTEQS @UNKNOWN16
    case 0xC1D370: cpu.execute_instruction<0x30>(0x000044, 2); return true;
    // src/misc/level_up_char.asm:240 LDA @VIRTUAL02
    case 0xC1D372: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:241 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D374: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:242 STA @VIRTUAL00
    case 0xC1D376: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:243 LDX @LOCAL02
    case 0xC1D378: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:244 LDA __BSS_START__,X
    case 0xC1D37A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:245 CLC
    case 0xC1D37D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:246 ADC @VIRTUAL00
    case 0xC1D37E: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:247 STA __BSS_START__,X
    case 0xC1D380: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:248 LDY @LOCAL06
    case 0xC1D383: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:249 REP #PROC_FLAGS::ACCUM8
    case 0xC1D385: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:250 TYA
    case 0xC1D387: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:251 INC
    case 0xC1D388: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:252 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC1D389: cpu.execute_instruction<0x22>(0xC21BA4, 4); return true;
    // src/misc/level_up_char.asm:253 REP #PROC_FLAGS::ACCUM8
    case 0xC1D38D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:254 LDA @LOCAL07
    case 0xC1D38F: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:255 BEQ @UNKNOWN16
    case 0xC1D391: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char.asm:256 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D393: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char.asm:256 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D395: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:256 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D397: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char.asm:256 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D399: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char.asm:256 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D39B: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:257 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D39D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:257 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D39F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:257 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D3A1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:257 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D3A3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:258 JSR UNKNOWN_C1AD0A
    case 0xC1D3A5: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:259 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D3A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x007AC9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:259 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    // Overlapping static entry reached from 0xC1D3A8.
    case 0xC1D3AA: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:259 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D3AB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:259 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D3AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:259 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    // Overlapping static entry reached from 0xC1D3AD.
    case 0xC1D3AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:259 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D3B0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:259 DISPLAY_TEXT_PTR MSG_BTL_LV_GUTS_UP
    case 0xC1D3B2: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:261 LDA #10
    case 0xC1D3B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/misc/level_up_char.asm:261 LDA #10
    // Overlapping static entry reached from 0xC1D3B6.
    case 0xC1D3B8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char.asm:262 CLC
    case 0xC1D3B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:263 SBC @VIRTUAL04
    case 0xC1D3BA: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:264 BRANCHLTEQS @UNKNOWN19
    case 0xC1D3BC: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:264 BRANCHLTEQS @UNKNOWN19
    case 0xC1D3BE: cpu.execute_instruction<0x10>(0x00004C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:264 BRANCHLTEQS @UNKNOWN19
    case 0xC1D3C0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:264 BRANCHLTEQS @UNKNOWN19
    case 0xC1D3C2: cpu.execute_instruction<0x30>(0x000048, 2); return true;
    // src/misc/level_up_char.asm:265 LDY @LOCAL06
    case 0xC1D3C4: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:266 TYA
    case 0xC1D3C6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:267 LDY #.SIZEOF(char_struct)
    case 0xC1D3C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:267 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D3C7.
    case 0xC1D3C9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:268 JSL MULT168
    case 0xC1D3CA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:269 TAX
    case 0xC1D3CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:270 LDA PARTY_CHARACTERS+char_struct::base_vitality,X
    case 0xC1D3CF: cpu.execute_instruction<0xBD>(0x0099EF, 3); return true;
    // src/misc/level_up_char.asm:271 AND #$00FF
    case 0xC1D3D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:271 AND #$00FF
    // Overlapping static entry reached from 0xC1D3D2.
    case 0xC1D3D4: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/level_up_char.asm:272 DEC
    case 0xC1D3D5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:273 DEC
    case 0xC1D3D6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/misc/level_up_char.asm:274 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D3D7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/misc/level_up_char.asm:274 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D3D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/misc/level_up_char.asm:274 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D3DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:274 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D3DB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/misc/level_up_char.asm:274 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D3DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:275 STA @VIRTUAL02
    case 0xC1D3DE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:276 LDY @LOCAL06
    case 0xC1D3E0: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:277 TYA
    case 0xC1D3E2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char.asm:278 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D3E3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char.asm:278 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D3E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:278 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D3E6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char.asm:278 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D3E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:278 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D3E9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:279 TAX
    case 0xC1D3EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:280 INX
    case 0xC1D3EC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:281 INX
    case 0xC1D3ED: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:282 INX
    case 0xC1D3EE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:283 INX
    case 0xC1D3EF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:284 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D3F0: cpu.execute_instruction<0xBF>(0xD5EA5B, 4); return true;
    // src/misc/level_up_char.asm:285 AND #$00FF
    case 0xC1D3F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:285 AND #$00FF
    // Overlapping static entry reached from 0xC1D3F4.
    case 0xC1D3F6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/level_up_char.asm:286 TAY
    case 0xC1D3F7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:287 LDA @LOCAL03
    case 0xC1D3F8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:288 STA @VIRTUAL04
    case 0xC1D3FA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:289 JSL MULT16
    case 0xC1D3FC: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/misc/level_up_char.asm:290 SEC
    case 0xC1D400: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:291 SBC @VIRTUAL02
    case 0xC1D401: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:292 LDY #10
    case 0xC1D403: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/misc/level_up_char.asm:292 LDY #10
    // Overlapping static entry reached from 0xC1D403.
    case 0xC1D405: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:293 JSL DIVISION16
    case 0xC1D406: cpu.execute_instruction<0x22>(0xC090E6, 4); return true;
    // src/misc/level_up_char.asm:294 BRA @UNKNOWN20
    case 0xC1D40A: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/misc/level_up_char.asm:296 LDY @LOCAL06
    case 0xC1D40C: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:297 TYA
    case 0xC1D40E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char.asm:298 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D40F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char.asm:298 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D411: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:298 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D412: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char.asm:298 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D414: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:298 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D415: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:299 TAX
    case 0xC1D417: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:300 INX
    case 0xC1D418: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:301 INX
    case 0xC1D419: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:302 INX
    case 0xC1D41A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:303 INX
    case 0xC1D41B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:304 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D41C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:305 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D41E: cpu.execute_instruction<0xBF>(0xD5EA5B, 4); return true;
    // src/misc/level_up_char.asm:306 STA @LOCAL00
    case 0xC1D422: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char.asm:307 REP #PROC_FLAGS::ACCUM8
    case 0xC1D424: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:308 TYA
    case 0xC1D426: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:309 LDY #.SIZEOF(char_struct)
    case 0xC1D427: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:309 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D427.
    case 0xC1D429: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:310 JSL MULT168
    case 0xC1D42A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:311 TAX
    case 0xC1D42E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:312 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D42F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:313 LDA PARTY_CHARACTERS+char_struct::base_vitality,X
    case 0xC1D431: cpu.execute_instruction<0xBD>(0x0099EF, 3); return true;
    // src/misc/level_up_char.asm:314 STA @LOCAL00+1
    case 0xC1D434: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char.asm:315 REP #PROC_FLAGS::ACCUM8
    case 0xC1D436: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:316 LDA @LOCAL03
    case 0xC1D438: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:317 STA @VIRTUAL04
    case 0xC1D43A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:318 JSR UNKNOWN_C1D08B
    case 0xC1D43C: cpu.execute_instruction<0x20>(0x00D08B, 3); return true;
    // src/misc/level_up_char.asm:320 STA @VIRTUAL02
    case 0xC1D43F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:321 CLC
    case 0xC1D441: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:322 SBC #0
    case 0xC1D442: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:322 SBC #0
    // Overlapping static entry reached from 0xC1D442.
    case 0xC1D444: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:323 BRANCHLTEQS @UNKNOWN24
    case 0xC1D445: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:323 BRANCHLTEQS @UNKNOWN24
    case 0xC1D447: cpu.execute_instruction<0x10>(0x000055, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:323 BRANCHLTEQS @UNKNOWN24
    case 0xC1D449: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:323 BRANCHLTEQS @UNKNOWN24
    case 0xC1D44B: cpu.execute_instruction<0x30>(0x000051, 2); return true;
    // src/misc/level_up_char.asm:324 LDY @LOCAL06
    case 0xC1D44D: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:325 TYA
    case 0xC1D44F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:326 LDY #.SIZEOF(char_struct)
    case 0xC1D450: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:326 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D450.
    case 0xC1D452: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:327 JSL MULT168
    case 0xC1D453: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:328 CLC
    case 0xC1D457: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:329 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_vitality
    case 0xC1D458: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x0099EF, 3); return true;
    // src/misc/level_up_char.asm:329 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_vitality
    // Overlapping static entry reached from 0xC1D458.
    case 0xC1D45A: cpu.execute_instruction<0x99>(0x00A5AA, 3); return true;
    // src/misc/level_up_char.asm:330 TAX
    case 0xC1D45B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:331 LDA @VIRTUAL02
    case 0xC1D45C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:331 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1D45A.
    case 0xC1D45D: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // src/misc/level_up_char.asm:332 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D45E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:333 STA @VIRTUAL00
    case 0xC1D460: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:334 LDA __BSS_START__,X
    case 0xC1D462: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:335 CLC
    case 0xC1D465: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:336 ADC @VIRTUAL00
    case 0xC1D466: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:337 STA __BSS_START__,X
    case 0xC1D468: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:338 LDY @LOCAL06
    case 0xC1D46B: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:339 REP #PROC_FLAGS::ACCUM8
    case 0xC1D46D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:340 TYA
    case 0xC1D46F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:341 INC
    case 0xC1D470: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:342 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC1D471: cpu.execute_instruction<0x22>(0xC21D65, 4); return true;
    // src/misc/level_up_char.asm:343 REP #PROC_FLAGS::ACCUM8
    case 0xC1D475: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:344 LDA @LOCAL07
    case 0xC1D477: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:345 BEQ @UNKNOWN24
    case 0xC1D479: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char.asm:346 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D47B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char.asm:346 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D47D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:346 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D47F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char.asm:346 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D481: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char.asm:346 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D483: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:347 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D485: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:347 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D487: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:347 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D489: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:347 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D48B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:348 JSR UNKNOWN_C1AD0A
    case 0xC1D48D: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:349 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D490: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x007AE0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:349 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    // Overlapping static entry reached from 0xC1D490.
    case 0xC1D492: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:349 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D493: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:349 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D495: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:349 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    // Overlapping static entry reached from 0xC1D495.
    case 0xC1D497: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:349 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D498: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:349 DISPLAY_TEXT_PTR MSG_BTL_LV_VITA_UP
    case 0xC1D49A: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:351 LDA #10
    case 0xC1D49E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/misc/level_up_char.asm:351 LDA #10
    // Overlapping static entry reached from 0xC1D49E.
    case 0xC1D4A0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char.asm:352 CLC
    case 0xC1D4A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:353 SBC @VIRTUAL04
    case 0xC1D4A2: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:354 BRANCHLTEQS @UNKNOWN27
    case 0xC1D4A4: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:354 BRANCHLTEQS @UNKNOWN27
    case 0xC1D4A6: cpu.execute_instruction<0x10>(0x00004C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:354 BRANCHLTEQS @UNKNOWN27
    case 0xC1D4A8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:354 BRANCHLTEQS @UNKNOWN27
    case 0xC1D4AA: cpu.execute_instruction<0x30>(0x000048, 2); return true;
    // src/misc/level_up_char.asm:355 LDY @LOCAL06
    case 0xC1D4AC: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:356 TYA
    case 0xC1D4AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:357 LDY #.SIZEOF(char_struct)
    case 0xC1D4AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:357 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D4AF.
    case 0xC1D4B1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:358 JSL MULT168
    case 0xC1D4B2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:359 TAX
    case 0xC1D4B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:360 LDA PARTY_CHARACTERS+char_struct::base_iq,X
    case 0xC1D4B7: cpu.execute_instruction<0xBD>(0x0099F0, 3); return true;
    // src/misc/level_up_char.asm:361 AND #$00FF
    case 0xC1D4BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:361 AND #$00FF
    // Overlapping static entry reached from 0xC1D4BA.
    case 0xC1D4BC: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/level_up_char.asm:362 DEC
    case 0xC1D4BD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:363 DEC
    case 0xC1D4BE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/misc/level_up_char.asm:364 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D4BF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/misc/level_up_char.asm:364 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D4C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/misc/level_up_char.asm:364 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D4C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:364 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D4C3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/misc/level_up_char.asm:364 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D4C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:365 STA @VIRTUAL02
    case 0xC1D4C6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:366 LDY @LOCAL06
    case 0xC1D4C8: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:367 TYA
    case 0xC1D4CA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char.asm:368 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char.asm:368 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:368 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4CE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char.asm:368 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:368 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4D1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:369 CLC
    case 0xC1D4D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:370 ADC #5
    case 0xC1D4D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/level_up_char.asm:370 ADC #5
    // Overlapping static entry reached from 0xC1D4D4.
    case 0xC1D4D6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/level_up_char.asm:371 TAX
    case 0xC1D4D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:372 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D4D8: cpu.execute_instruction<0xBF>(0xD5EA5B, 4); return true;
    // src/misc/level_up_char.asm:373 AND #$00FF
    case 0xC1D4DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:373 AND #$00FF
    // Overlapping static entry reached from 0xC1D4DC.
    case 0xC1D4DE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/level_up_char.asm:374 TAY
    case 0xC1D4DF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:375 LDA @LOCAL03
    case 0xC1D4E0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:376 STA @VIRTUAL04
    case 0xC1D4E2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:377 JSL MULT16
    case 0xC1D4E4: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/misc/level_up_char.asm:378 SEC
    case 0xC1D4E8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:379 SBC @VIRTUAL02
    case 0xC1D4E9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:380 LDY #10
    case 0xC1D4EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/misc/level_up_char.asm:380 LDY #10
    // Overlapping static entry reached from 0xC1D4EB.
    case 0xC1D4ED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:381 JSL DIVISION16
    case 0xC1D4EE: cpu.execute_instruction<0x22>(0xC090E6, 4); return true;
    // src/misc/level_up_char.asm:382 BRA @UNKNOWN28
    case 0xC1D4F2: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/misc/level_up_char.asm:384 LDY @LOCAL06
    case 0xC1D4F4: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:385 TYA
    case 0xC1D4F6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char.asm:386 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4F7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char.asm:386 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:386 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4FA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char.asm:386 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:386 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D4FD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:387 CLC
    case 0xC1D4FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:388 ADC #5
    case 0xC1D500: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/misc/level_up_char.asm:388 ADC #5
    // Overlapping static entry reached from 0xC1D500.
    case 0xC1D502: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/level_up_char.asm:389 TAX
    case 0xC1D503: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:390 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D504: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:391 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D506: cpu.execute_instruction<0xBF>(0xD5EA5B, 4); return true;
    // src/misc/level_up_char.asm:392 STA @LOCAL00
    case 0xC1D50A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char.asm:393 REP #PROC_FLAGS::ACCUM8
    case 0xC1D50C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:394 TYA
    case 0xC1D50E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:395 LDY #.SIZEOF(char_struct)
    case 0xC1D50F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:395 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D50F.
    case 0xC1D511: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:396 JSL MULT168
    case 0xC1D512: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:397 TAX
    case 0xC1D516: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:398 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D517: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:399 LDA PARTY_CHARACTERS+char_struct::base_iq,X
    case 0xC1D519: cpu.execute_instruction<0xBD>(0x0099F0, 3); return true;
    // src/misc/level_up_char.asm:400 STA @LOCAL00+1
    case 0xC1D51C: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char.asm:401 REP #PROC_FLAGS::ACCUM8
    case 0xC1D51E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:402 LDA @LOCAL03
    case 0xC1D520: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:403 STA @VIRTUAL04
    case 0xC1D522: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:404 JSR UNKNOWN_C1D08B
    case 0xC1D524: cpu.execute_instruction<0x20>(0x00D08B, 3); return true;
    // src/misc/level_up_char.asm:406 STA @VIRTUAL02
    case 0xC1D527: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:407 CLC
    case 0xC1D529: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:408 SBC #0
    case 0xC1D52A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:408 SBC #0
    // Overlapping static entry reached from 0xC1D52A.
    case 0xC1D52C: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:409 BRANCHLTEQS @UNKNOWN32
    case 0xC1D52D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:409 BRANCHLTEQS @UNKNOWN32
    case 0xC1D52F: cpu.execute_instruction<0x10>(0x000055, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:409 BRANCHLTEQS @UNKNOWN32
    case 0xC1D531: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:409 BRANCHLTEQS @UNKNOWN32
    case 0xC1D533: cpu.execute_instruction<0x30>(0x000051, 2); return true;
    // src/misc/level_up_char.asm:410 LDY @LOCAL06
    case 0xC1D535: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:411 TYA
    case 0xC1D537: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:412 LDY #.SIZEOF(char_struct)
    case 0xC1D538: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:412 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D538.
    case 0xC1D53A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:413 JSL MULT168
    case 0xC1D53B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:414 CLC
    case 0xC1D53F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:415 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_iq
    case 0xC1D540: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x0099F0, 3); return true;
    // src/misc/level_up_char.asm:415 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_iq
    // Overlapping static entry reached from 0xC1D540.
    case 0xC1D542: cpu.execute_instruction<0x99>(0x00A5AA, 3); return true;
    // src/misc/level_up_char.asm:416 TAX
    case 0xC1D543: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:417 LDA @VIRTUAL02
    case 0xC1D544: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:417 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1D542.
    case 0xC1D545: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // src/misc/level_up_char.asm:418 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D546: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:419 STA @VIRTUAL00
    case 0xC1D548: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:420 LDA __BSS_START__,X
    case 0xC1D54A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:421 CLC
    case 0xC1D54D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:422 ADC @VIRTUAL00
    case 0xC1D54E: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:423 STA __BSS_START__,X
    case 0xC1D550: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:424 LDY @LOCAL06
    case 0xC1D553: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:425 REP #PROC_FLAGS::ACCUM8
    case 0xC1D555: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:426 TYA
    case 0xC1D557: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:427 INC
    case 0xC1D558: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:428 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC1D559: cpu.execute_instruction<0x22>(0xC21D7D, 4); return true;
    // src/misc/level_up_char.asm:429 REP #PROC_FLAGS::ACCUM8
    case 0xC1D55D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:430 LDA @LOCAL07
    case 0xC1D55F: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:431 BEQ @UNKNOWN32
    case 0xC1D561: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char.asm:432 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D563: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char.asm:432 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D565: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:432 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D567: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char.asm:432 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D569: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char.asm:432 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D56B: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:433 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D56D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:433 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D56F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:433 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D571: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:433 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D573: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:434 JSR UNKNOWN_C1AD0A
    case 0xC1D575: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:435 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D578: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x007AFB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:435 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    // Overlapping static entry reached from 0xC1D578.
    case 0xC1D57A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:435 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D57B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:435 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D57D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:435 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    // Overlapping static entry reached from 0xC1D57D.
    case 0xC1D57F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:435 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D580: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:435 DISPLAY_TEXT_PTR MSG_BTL_LV_IQ_UP
    case 0xC1D582: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:437 LDY @LOCAL06
    case 0xC1D586: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:438 TYA
    case 0xC1D588: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:439 LDY #.SIZEOF(char_struct)
    case 0xC1D589: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:439 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D589.
    case 0xC1D58B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:440 JSL MULT168
    case 0xC1D58C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:441 CLC
    case 0xC1D590: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:442 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_luck
    case 0xC1D591: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x0099EE, 3); return true;
    // src/misc/level_up_char.asm:442 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::base_luck
    // Overlapping static entry reached from 0xC1D591.
    case 0xC1D593: cpu.execute_instruction<0x99>(0x000285, 3); return true;
    // src/misc/level_up_char.asm:443 STA @VIRTUAL02
    case 0xC1D594: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:444 LDY @LOCAL06
    case 0xC1D596: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:445 TYA
    case 0xC1D598: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/misc/level_up_char.asm:446 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D599: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/misc/level_up_char.asm:446 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D59B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:446 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D59C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/misc/level_up_char.asm:446 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D59E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:446 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC1D59F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:447 CLC
    case 0xC1D5A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:448 ADC #6
    case 0xC1D5A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/misc/level_up_char.asm:448 ADC #6
    // Overlapping static entry reached from 0xC1D5A2.
    case 0xC1D5A4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/level_up_char.asm:449 TAX
    case 0xC1D5A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:450 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D5A6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:451 LDA f:STATS_GROWTH_VARS,X
    case 0xC1D5A8: cpu.execute_instruction<0xBF>(0xD5EA5B, 4); return true;
    // src/misc/level_up_char.asm:452 STA @LOCAL00
    case 0xC1D5AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/level_up_char.asm:453 LDX @VIRTUAL02
    case 0xC1D5AE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:454 LDA __BSS_START__,X
    case 0xC1D5B0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:455 STA @LOCAL00+1
    case 0xC1D5B3: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/level_up_char.asm:456 REP #PROC_FLAGS::ACCUM8
    case 0xC1D5B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:457 LDA @LOCAL03
    case 0xC1D5B7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:458 STA @VIRTUAL04
    case 0xC1D5B9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:459 JSR UNKNOWN_C1D08B
    case 0xC1D5BB: cpu.execute_instruction<0x20>(0x00D08B, 3); return true;
    // src/misc/level_up_char.asm:460 TAX
    case 0xC1D5BE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:461 STX @LOCAL02
    case 0xC1D5BF: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:462 TXA
    case 0xC1D5C1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:463 CLC
    case 0xC1D5C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:464 SBC #0
    case 0xC1D5C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:464 SBC #0
    // Overlapping static entry reached from 0xC1D5C3.
    case 0xC1D5C5: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:465 BRANCHLTEQS @UNKNOWN36
    case 0xC1D5C6: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:465 BRANCHLTEQS @UNKNOWN36
    case 0xC1D5C8: cpu.execute_instruction<0x10>(0x00004D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:465 BRANCHLTEQS @UNKNOWN36
    case 0xC1D5CA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:465 BRANCHLTEQS @UNKNOWN36
    case 0xC1D5CC: cpu.execute_instruction<0x30>(0x000049, 2); return true;
    // src/misc/level_up_char.asm:466 SEP #PROC_FLAGS::INDEX8
    case 0xC1D5CE: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:467 STX @VIRTUAL00
    case 0xC1D5D0: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:468 REP #PROC_FLAGS::INDEX8
    case 0xC1D5D2: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:469 LDX @VIRTUAL02
    case 0xC1D5D4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:470 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D5D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:471 LDA __BSS_START__,X
    case 0xC1D5D8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:472 CLC
    case 0xC1D5DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:473 ADC @VIRTUAL00
    case 0xC1D5DC: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:474 LDX @VIRTUAL02
    case 0xC1D5DE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:475 STA __BSS_START__,X
    case 0xC1D5E0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:476 LDY @LOCAL06
    case 0xC1D5E3: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:477 REP #PROC_FLAGS::ACCUM8
    case 0xC1D5E5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:478 TYA
    case 0xC1D5E7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:479 INC
    case 0xC1D5E8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:480 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC1D5E9: cpu.execute_instruction<0x22>(0xC21C5D, 4); return true;
    // src/misc/level_up_char.asm:481 REP #PROC_FLAGS::ACCUM8
    case 0xC1D5ED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:482 LDA @LOCAL07
    case 0xC1D5EF: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:483 BEQ @UNKNOWN36
    case 0xC1D5F1: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/level_up_char.asm:484 LDX @LOCAL02
    case 0xC1D5F3: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:485 TXA
    case 0xC1D5F5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char.asm:486 STORE_INT1632S @VIRTUAL06
    case 0xC1D5F6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:486 STORE_INT1632S @VIRTUAL06
    case 0xC1D5F8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/misc/level_up_char.asm:486 STORE_INT1632S @VIRTUAL06
    case 0xC1D5FA: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/misc/level_up_char.asm:486 STORE_INT1632S @VIRTUAL06
    case 0xC1D5FC: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:487 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D5FE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:487 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D600: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:487 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D602: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:487 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D604: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:488 JSR UNKNOWN_C1AD0A
    case 0xC1D606: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:489 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D609: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x007B11, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:489 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    // Overlapping static entry reached from 0xC1D609.
    case 0xC1D60B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:489 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D60C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:489 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D60E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:489 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    // Overlapping static entry reached from 0xC1D60E.
    case 0xC1D610: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:489 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D611: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:489 DISPLAY_TEXT_PTR MSG_BTL_LV_LUCK_UP
    case 0xC1D613: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:491 LDY @LOCAL06
    case 0xC1D617: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:492 TYA
    case 0xC1D619: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:493 LDY #.SIZEOF(char_struct)
    case 0xC1D61A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:493 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D61A.
    case 0xC1D61C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:494 JSL MULT168
    case 0xC1D61D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:495 TAX
    case 0xC1D621: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:496 LDA PARTY_CHARACTERS+char_struct::vitality,X
    case 0xC1D622: cpu.execute_instruction<0xBD>(0x0099E8, 3); return true;
    // src/misc/level_up_char.asm:497 AND #$00FF
    case 0xC1D625: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:497 AND #$00FF
    // Overlapping static entry reached from 0xC1D625.
    case 0xC1D627: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/level_up_char.asm:498 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D628: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/level_up_char.asm:498 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D62A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:498 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D62B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/level_up_char.asm:498 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D62D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:498 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D62E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/level_up_char.asm:498 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D630: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:498 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D631: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:499 SEC
    case 0xC1D633: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:500 SBC PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC1D634: cpu.execute_instruction<0xFD>(0x0099D8, 3); return true;
    // src/misc/level_up_char.asm:501 STA @LOCAL02
    case 0xC1D637: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:502 CLC
    case 0xC1D639: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:503 SBC #1
    case 0xC1D63A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000001, 2); else cpu.execute_instruction<0xE9>(0x000001, 3); return true;
    // src/misc/level_up_char.asm:503 SBC #1
    // Overlapping static entry reached from 0xC1D63A.
    case 0xC1D63C: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:504 BRANCHLTEQS @UNKNOWN39
    case 0xC1D63D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:504 BRANCHLTEQS @UNKNOWN39
    case 0xC1D63F: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:504 BRANCHLTEQS @UNKNOWN39
    case 0xC1D641: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:504 BRANCHLTEQS @UNKNOWN39
    case 0xC1D643: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/level_up_char.asm:505 LDA @LOCAL02
    case 0xC1D645: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:506 TAX
    case 0xC1D647: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:507 BRA @UNKNOWN40
    case 0xC1D648: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/misc/level_up_char.asm:509 LDA #2
    case 0xC1D64A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/level_up_char.asm:509 LDA #2
    // Overlapping static entry reached from 0xC1D64A.
    case 0xC1D64C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:510 JSL RAND_MOD
    case 0xC1D64D: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // src/misc/level_up_char.asm:511 TAX
    case 0xC1D651: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:512 INX
    case 0xC1D652: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:514 STX @VIRTUAL02
    case 0xC1D653: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:515 LDY @LOCAL06
    case 0xC1D655: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:516 TYA
    case 0xC1D657: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:517 LDY #.SIZEOF(char_struct)
    case 0xC1D658: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:517 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D658.
    case 0xC1D65A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:518 JSL MULT168
    case 0xC1D65B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:519 STA @LOCAL05
    case 0xC1D65F: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/misc/level_up_char.asm:520 CLC
    case 0xC1D661: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:521 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::max_hp
    case 0xC1D662: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x0099D8, 3); return true;
    // src/misc/level_up_char.asm:521 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::max_hp
    // Overlapping static entry reached from 0xC1D662.
    case 0xC1D664: cpu.execute_instruction<0x99>(0x00BDAA, 3); return true;
    // src/misc/level_up_char.asm:522 TAX
    case 0xC1D665: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:523 LDA __BSS_START__,X
    case 0xC1D666: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:523 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC1D664.
    case 0xC1D667: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/level_up_char.asm:524 CLC
    case 0xC1D669: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:525 ADC @VIRTUAL02
    case 0xC1D66A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:526 STA __BSS_START__,X
    case 0xC1D66C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:527 LDA @LOCAL05
    case 0xC1D66F: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/misc/level_up_char.asm:528 CLC
    case 0xC1D671: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:529 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_hp_target
    case 0xC1D672: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000015, 2); else cpu.execute_instruction<0x69>(0x009A15, 3); return true;
    // src/misc/level_up_char.asm:529 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_hp_target
    // Overlapping static entry reached from 0xC1D672.
    case 0xC1D674: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:530 TAX
    case 0xC1D675: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:531 LDA __BSS_START__,X
    case 0xC1D676: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:532 CLC
    case 0xC1D679: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:533 ADC @VIRTUAL02
    case 0xC1D67A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:534 STA __BSS_START__,X
    case 0xC1D67C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:535 LDA @LOCAL07
    case 0xC1D67F: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:536 BEQ @UNKNOWN42
    case 0xC1D681: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char.asm:537 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D683: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char.asm:537 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D685: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:537 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D687: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char.asm:537 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D689: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char.asm:537 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC1D68B: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D68D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D68F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D691: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D693: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:539 JSR UNKNOWN_C1AD0A
    case 0xC1D695: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:540 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D698: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x007B28, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:540 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    // Overlapping static entry reached from 0xC1D698.
    case 0xC1D69A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:540 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D69B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:540 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D69D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:540 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    // Overlapping static entry reached from 0xC1D69D.
    case 0xC1D69F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:540 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D6A0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:540 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXHP_UP
    case 0xC1D6A2: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:542 LDY @LOCAL06
    case 0xC1D6A6: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:543 CPY #2
    case 0xC1D6A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/misc/level_up_char.asm:543 CPY #2
    // Overlapping static entry reached from 0xC1D6A8.
    case 0xC1D6AA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/level_up_char.asm:544 BEQL @UNKNOWN66
    case 0xC1D6AB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/level_up_char.asm:544 BEQL @UNKNOWN66
    case 0xC1D6AD: cpu.execute_instruction<0x4C>(0x00D8C7, 3); return true;
    // src/misc/level_up_char.asm:545 CPY #0
    case 0xC1D6B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:545 CPY #0
    // Overlapping static entry reached from 0xC1D6B0.
    case 0xC1D6B2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/level_up_char.asm:546 BNE @UNKNOWN44
    case 0xC1D6B3: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:547 LDA #EVENT_FLAG::FLG_WIN_OSCAR
    case 0xC1D6B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x00004A, 3); return true;
    // src/misc/level_up_char.asm:547 LDA #EVENT_FLAG::FLG_WIN_OSCAR
    // Overlapping static entry reached from 0xC1D6B5.
    case 0xC1D6B7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:548 JSL GET_EVENT_FLAG
    case 0xC1D6B8: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/misc/level_up_char.asm:549 CMP #0
    case 0xC1D6BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:549 CMP #0
    // Overlapping static entry reached from 0xC1D6BC.
    case 0xC1D6BE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/level_up_char.asm:550 BEQ @UNKNOWN44
    case 0xC1D6BF: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:551 LDY @LOCAL06
    case 0xC1D6C1: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:552 TYA
    case 0xC1D6C3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:553 LDY #.SIZEOF(char_struct)
    case 0xC1D6C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:553 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D6C4.
    case 0xC1D6C6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:554 JSL MULT168
    case 0xC1D6C7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:555 TAX
    case 0xC1D6CB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:556 LDA PARTY_CHARACTERS+char_struct::iq,X
    case 0xC1D6CC: cpu.execute_instruction<0xBD>(0x0099E9, 3); return true;
    // src/misc/level_up_char.asm:557 AND #$00FF
    case 0xC1D6CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:557 AND #$00FF
    // Overlapping static entry reached from 0xC1D6CF.
    case 0xC1D6D1: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:558 ASL
    case 0xC1D6D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:559 BRA @UNKNOWN45
    case 0xC1D6D3: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/misc/level_up_char.asm:561 LDY @LOCAL06
    case 0xC1D6D5: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:562 TYA
    case 0xC1D6D7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:563 LDY #.SIZEOF(char_struct)
    case 0xC1D6D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:563 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D6D8.
    case 0xC1D6DA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:564 JSL MULT168
    case 0xC1D6DB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:565 TAX
    case 0xC1D6DF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:566 LDA PARTY_CHARACTERS+char_struct::iq,X
    case 0xC1D6E0: cpu.execute_instruction<0xBD>(0x0099E9, 3); return true;
    // src/misc/level_up_char.asm:567 AND #$00FF
    case 0xC1D6E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:567 AND #$00FF
    // Overlapping static entry reached from 0xC1D6E3.
    case 0xC1D6E5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/level_up_char.asm:569 STA @LOCAL01
    case 0xC1D6E6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/level_up_char.asm:570 LDY @LOCAL06
    case 0xC1D6E8: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:571 TYA
    case 0xC1D6EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:572 LDY #.SIZEOF(char_struct)
    case 0xC1D6EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:572 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D6EB.
    case 0xC1D6ED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:573 JSL MULT168
    case 0xC1D6EE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:574 TAX
    case 0xC1D6F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:575 LDA @LOCAL01
    case 0xC1D6F3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/misc/level_up_char.asm:576 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1D6F5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/misc/level_up_char.asm:576 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1D6F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/misc/level_up_char.asm:576 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1D6F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:576 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1D6F9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:577 SEC
    case 0xC1D6FB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:578 SBC PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC1D6FC: cpu.execute_instruction<0xFD>(0x0099DA, 3); return true;
    // src/misc/level_up_char.asm:579 STA @LOCAL02
    case 0xC1D6FF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:580 CLC
    case 0xC1D701: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:581 SBC #1
    case 0xC1D702: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000001, 2); else cpu.execute_instruction<0xE9>(0x000001, 3); return true;
    // src/misc/level_up_char.asm:581 SBC #1
    // Overlapping static entry reached from 0xC1D702.
    case 0xC1D704: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/level_up_char.asm:582 BRANCHLTEQS @UNKNOWN48
    case 0xC1D705: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/level_up_char.asm:582 BRANCHLTEQS @UNKNOWN48
    case 0xC1D707: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/level_up_char.asm:582 BRANCHLTEQS @UNKNOWN48
    case 0xC1D709: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/level_up_char.asm:582 BRANCHLTEQS @UNKNOWN48
    case 0xC1D70B: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/level_up_char.asm:583 LDA @LOCAL02
    case 0xC1D70D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:584 TAX
    case 0xC1D70F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:585 BRA @UNKNOWN49
    case 0xC1D710: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/level_up_char.asm:587 LDA #2
    case 0xC1D712: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/misc/level_up_char.asm:587 LDA #2
    // Overlapping static entry reached from 0xC1D712.
    case 0xC1D714: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:588 JSL RAND_MOD
    case 0xC1D715: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // src/misc/level_up_char.asm:589 TAX
    case 0xC1D719: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:591 TXA
    case 0xC1D71A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:592 STA @LOCAL02
    case 0xC1D71B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:593 BEQ @UNKNOWN51
    case 0xC1D71D: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/misc/level_up_char.asm:594 LDY @LOCAL06
    case 0xC1D71F: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:595 TYA
    case 0xC1D721: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:596 LDY #.SIZEOF(char_struct)
    case 0xC1D722: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/level_up_char.asm:596 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D722.
    case 0xC1D724: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/level_up_char.asm:597 JSL MULT168
    case 0xC1D725: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/level_up_char.asm:598 STA @VIRTUAL02
    case 0xC1D729: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:599 STA @LOCAL05
    case 0xC1D72B: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/misc/level_up_char.asm:600 LDA @VIRTUAL02
    case 0xC1D72D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:601 CLC
    case 0xC1D72F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:602 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::max_pp
    case 0xC1D730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x0099DA, 3); return true;
    // src/misc/level_up_char.asm:602 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::max_pp
    // Overlapping static entry reached from 0xC1D730.
    case 0xC1D732: cpu.execute_instruction<0x99>(0x00A5AA, 3); return true;
    // src/misc/level_up_char.asm:603 TAX
    case 0xC1D733: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:604 LDA @LOCAL02
    case 0xC1D734: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:604 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1D732.
    case 0xC1D735: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/misc/level_up_char.asm:605 STA @VIRTUAL02
    case 0xC1D736: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:605 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1D735.
    case 0xC1D737: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/misc/level_up_char.asm:606 LDA __BSS_START__,X
    case 0xC1D738: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:607 CLC
    case 0xC1D73B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:608 ADC @VIRTUAL02
    case 0xC1D73C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:609 STA __BSS_START__,X
    case 0xC1D73E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:610 LDA @LOCAL05
    case 0xC1D741: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/misc/level_up_char.asm:611 STA @VIRTUAL02
    case 0xC1D743: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:612 CLC
    case 0xC1D745: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:613 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_pp_target
    case 0xC1D746: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x009A1B, 3); return true;
    // src/misc/level_up_char.asm:613 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_pp_target
    // Overlapping static entry reached from 0xC1D746.
    case 0xC1D748: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:614 TAX
    case 0xC1D749: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:615 LDA @LOCAL02
    case 0xC1D74A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:616 STA @VIRTUAL02
    case 0xC1D74C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:617 LDA __BSS_START__,X
    case 0xC1D74E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:618 CLC
    case 0xC1D751: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:619 ADC @VIRTUAL02
    case 0xC1D752: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:620 STA __BSS_START__,X
    case 0xC1D754: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/level_up_char.asm:621 LDA @LOCAL07
    case 0xC1D757: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:622 BEQ @UNKNOWN51
    case 0xC1D759: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/misc/level_up_char.asm:623 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC1D75B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/misc/level_up_char.asm:623 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC1D75D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/misc/level_up_char.asm:623 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC1D75F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/misc/level_up_char.asm:623 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC1D761: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/misc/level_up_char.asm:623 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC1D763: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/misc/level_up_char.asm:624 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D765: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/misc/level_up_char.asm:624 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D767: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/misc/level_up_char.asm:624 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D769: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/misc/level_up_char.asm:624 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1D76B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:625 JSR UNKNOWN_C1AD0A
    case 0xC1D76D: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:626 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D770: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x007B46, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:626 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    // Overlapping static entry reached from 0xC1D770.
    case 0xC1D772: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:626 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D773: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:626 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D775: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:626 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    // Overlapping static entry reached from 0xC1D775.
    case 0xC1D777: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:626 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D778: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:626 DISPLAY_TEXT_PTR MSG_BTL_LV_MAXPP_UP
    case 0xC1D77A: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:628 LDA @LOCAL07
    case 0xC1D77E: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/level_up_char.asm:629 BEQL @UNKNOWN66
    case 0xC1D780: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/level_up_char.asm:629 BEQL @UNKNOWN66
    case 0xC1D782: cpu.execute_instruction<0x4C>(0x00D8C7, 3); return true;
    // src/misc/level_up_char.asm:630 LDA @LOCAL03
    case 0xC1D785: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:631 STA @VIRTUAL04
    case 0xC1D787: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:632 STA @VIRTUAL02
    case 0xC1D789: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:633 INC @VIRTUAL02
    case 0xC1D78B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:634 LDY @LOCAL06
    case 0xC1D78D: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:635 TYA
    case 0xC1D78F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:636 BEQ @UNKNOWN54
    case 0xC1D790: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/misc/level_up_char.asm:637 CMP #1
    case 0xC1D792: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/level_up_char.asm:637 CMP #1
    // Overlapping static entry reached from 0xC1D792.
    case 0xC1D794: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/level_up_char.asm:638 BEQ @UNKNOWN58
    case 0xC1D795: cpu.execute_instruction<0xF0>(0x00006E, 2); return true;
    // src/misc/level_up_char.asm:639 CMP #3
    case 0xC1D797: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/level_up_char.asm:639 CMP #3
    // Overlapping static entry reached from 0xC1D797.
    case 0xC1D799: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/level_up_char.asm:640 BEQL @UNKNOWN62
    case 0xC1D79A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/level_up_char.asm:640 BEQL @UNKNOWN62
    case 0xC1D79C: cpu.execute_instruction<0x4C>(0x00D867, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/level_up_char.asm:640 BEQL @UNKNOWN62
    // Overlapping static entry reached from 0xC178B6.
    case 0xC1D79E: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:641 JMP @UNKNOWN66
    case 0xC1D79F: cpu.execute_instruction<0x4C>(0x00D8C7, 3); return true;
    // src/misc/level_up_char.asm:643 LDX #1
    case 0xC1D7A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/level_up_char.asm:643 LDX #1
    // Overlapping static entry reached from 0xC1D7A2.
    case 0xC1D7A4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/level_up_char.asm:644 STX @LOCAL06
    case 0xC1D7A5: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:645 BRA @UNKNOWN57
    case 0xC1D7A7: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/misc/level_up_char.asm:647 LDA @LOCAL03
    case 0xC1D7A9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:648 CLC
    case 0xC1D7AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:649 ADC #6
    case 0xC1D7AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/misc/level_up_char.asm:649 ADC #6
    // Overlapping static entry reached from 0xC1D7AC.
    case 0xC1D7AE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char.asm:650 CLC
    case 0xC1D7AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:651 ADC @VIRTUAL06
    case 0xC1D7B0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/level_up_char.asm:652 STA @VIRTUAL06
    case 0xC1D7B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/level_up_char.asm:653 LDA [@VIRTUAL06]
    case 0xC1D7B4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/level_up_char.asm:654 AND #$00FF
    case 0xC1D7B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:654 AND #$00FF
    // Overlapping static entry reached from 0xC1D7B6.
    case 0xC1D7B8: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/level_up_char.asm:655 CMP @VIRTUAL02
    case 0xC1D7B9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:656 BNE @UNKNOWN56
    case 0xC1D7BB: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:657 TXA
    case 0xC1D7BD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:658 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D7BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:659 JSR UNKNOWN_C1ACF8
    case 0xC1D7C0: cpu.execute_instruction<0x20>(0x00ACF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:661 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D7C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x007B64, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:661 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D7C3.
    case 0xC1D7C5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:661 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D7C6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:661 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D7C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:661 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D7C8.
    case 0xC1D7CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:661 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D7CB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:661 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D7CD: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:664 LDX @LOCAL06
    case 0xC1D7D1: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:665 INX
    case 0xC1D7D3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:666 STX @LOCAL06
    case 0xC1D7D4: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:669 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D7D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:669 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D7D6.
    case 0xC1D7D8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:669 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D7D9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:669 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D7DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:669 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D7DB.
    case 0xC1D7DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:669 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D7DE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/level_up_char.asm:670 TXA
    case 0xC1D7E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/level_up_char.asm:671 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D7E1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/level_up_char.asm:671 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D7E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:671 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D7E4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/level_up_char.asm:671 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D7E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:671 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D7E7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/level_up_char.asm:671 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D7E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:671 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D7EA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:672 STA @LOCAL03
    case 0xC1D7EC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/level_up_char.asm:673 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D7EE: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/level_up_char.asm:673 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D7F0: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/level_up_char.asm:673 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D7F2: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/level_up_char.asm:673 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D7F4: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/level_up_char.asm:674 CLC
    case 0xC1D7F6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:675 ADC @VIRTUAL0A
    case 0xC1D7F7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:676 STA @VIRTUAL0A
    case 0xC1D7F9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:677 LDA [@VIRTUAL0A]
    case 0xC1D7FB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:678 AND #$00FF
    case 0xC1D7FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:678 AND #$00FF
    // Overlapping static entry reached from 0xC1D7FD.
    case 0xC1D7FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/level_up_char.asm:679 BNE @UNKNOWN55
    case 0xC1D800: cpu.execute_instruction<0xD0>(0x0000A7, 2); return true;
    // src/misc/level_up_char.asm:680 JMP @UNKNOWN66
    case 0xC1D802: cpu.execute_instruction<0x4C>(0x00D8C7, 3); return true;
    // src/misc/level_up_char.asm:682 LDX #1
    case 0xC1D805: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/level_up_char.asm:682 LDX #1
    // Overlapping static entry reached from 0xC1D805.
    case 0xC1D807: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/level_up_char.asm:683 STX @LOCAL06
    case 0xC1D808: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:684 BRA @UNKNOWN61
    case 0xC1D80A: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/misc/level_up_char.asm:686 LDA @LOCAL03
    case 0xC1D80C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:687 CLC
    case 0xC1D80E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:688 ADC #7
    case 0xC1D80F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/misc/level_up_char.asm:688 ADC #7
    // Overlapping static entry reached from 0xC1D80F.
    case 0xC1D811: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char.asm:689 CLC
    case 0xC1D812: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:690 ADC @VIRTUAL06
    case 0xC1D813: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/level_up_char.asm:691 STA @VIRTUAL06
    case 0xC1D815: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/level_up_char.asm:692 LDA [@VIRTUAL06]
    case 0xC1D817: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/level_up_char.asm:693 AND #$00FF
    case 0xC1D819: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:693 AND #$00FF
    // Overlapping static entry reached from 0xC1D819.
    case 0xC1D81B: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/level_up_char.asm:694 CMP @VIRTUAL02
    case 0xC1D81C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:695 BNE @UNKNOWN60
    case 0xC1D81E: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:696 TXA
    case 0xC1D820: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:697 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D821: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:698 JSR UNKNOWN_C1ACF8
    case 0xC1D823: cpu.execute_instruction<0x20>(0x00ACF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:700 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D826: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x007B64, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:700 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D826.
    case 0xC1D828: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:700 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D829: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:700 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D82B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:700 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D82B.
    case 0xC1D82D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:700 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D82E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:700 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D830: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:703 LDX @LOCAL06
    case 0xC1D834: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:704 INX
    case 0xC1D836: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:705 STX @LOCAL06
    case 0xC1D837: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:708 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D839: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:708 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D839.
    case 0xC1D83B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:708 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D83C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:708 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D83E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:708 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D83E.
    case 0xC1D840: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:708 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D841: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/level_up_char.asm:709 TXA
    case 0xC1D843: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/level_up_char.asm:710 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D844: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/level_up_char.asm:710 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D846: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:710 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D847: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/level_up_char.asm:710 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D849: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:710 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D84A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/level_up_char.asm:710 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D84C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:710 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D84D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:711 STA @LOCAL03
    case 0xC1D84F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/level_up_char.asm:712 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D851: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/level_up_char.asm:712 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D853: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/level_up_char.asm:712 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D855: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/level_up_char.asm:712 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D857: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/level_up_char.asm:713 CLC
    case 0xC1D859: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:714 ADC @VIRTUAL0A
    case 0xC1D85A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:715 STA @VIRTUAL0A
    case 0xC1D85C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:716 LDA [@VIRTUAL0A]
    case 0xC1D85E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:717 AND #$00FF
    case 0xC1D860: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:717 AND #$00FF
    // Overlapping static entry reached from 0xC1D860.
    case 0xC1D862: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/level_up_char.asm:718 BNE @UNKNOWN59
    case 0xC1D863: cpu.execute_instruction<0xD0>(0x0000A7, 2); return true;
    // src/misc/level_up_char.asm:719 BRA @UNKNOWN66
    case 0xC1D865: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/misc/level_up_char.asm:721 LDX #1
    case 0xC1D867: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/level_up_char.asm:721 LDX #1
    // Overlapping static entry reached from 0xC1D867.
    case 0xC1D869: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/level_up_char.asm:722 STX @LOCAL06
    case 0xC1D86A: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:723 BRA @UNKNOWN65
    case 0xC1D86C: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/misc/level_up_char.asm:725 LDA @LOCAL03
    case 0xC1D86E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/misc/level_up_char.asm:726 CLC
    case 0xC1D870: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:727 ADC #8
    case 0xC1D871: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/misc/level_up_char.asm:727 ADC #8
    // Overlapping static entry reached from 0xC1D871.
    case 0xC1D873: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/level_up_char.asm:728 CLC
    case 0xC1D874: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:729 ADC @VIRTUAL06
    case 0xC1D875: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/level_up_char.asm:730 STA @VIRTUAL06
    case 0xC1D877: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/level_up_char.asm:731 LDA [@VIRTUAL06]
    case 0xC1D879: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/level_up_char.asm:732 AND #$00FF
    case 0xC1D87B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:732 AND #$00FF
    // Overlapping static entry reached from 0xC1D87B.
    case 0xC1D87D: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/level_up_char.asm:733 CMP @VIRTUAL02
    case 0xC1D87E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/level_up_char.asm:734 BNE @UNKNOWN64
    case 0xC1D880: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/misc/level_up_char.asm:735 TXA
    case 0xC1D882: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:736 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D883: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/level_up_char.asm:737 JSR UNKNOWN_C1ACF8
    case 0xC1D885: cpu.execute_instruction<0x20>(0x00ACF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:739 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D888: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x007B64, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:739 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D888.
    case 0xC1D88A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:739 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D88B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:739 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D88D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:739 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    // Overlapping static entry reached from 0xC1D88D.
    case 0xC1D88F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:739 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D890: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/misc/level_up_char.asm:739 DISPLAY_TEXT_PTR MSG_BTL_LEARN_PSI
    case 0xC1D892: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/misc/level_up_char.asm:742 LDX @LOCAL06
    case 0xC1D896: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/misc/level_up_char.asm:743 INX
    case 0xC1D898: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:744 STX @LOCAL06
    case 0xC1D899: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:747 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D89B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/level_up_char.asm:747 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D89B.
    case 0xC1D89D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/level_up_char.asm:747 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D89E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:747 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D8A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/level_up_char.asm:747 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D8A0.
    case 0xC1D8A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/level_up_char.asm:747 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1D8A3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/level_up_char.asm:748 TXA
    case 0xC1D8A5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/misc/level_up_char.asm:749 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D8A6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/misc/level_up_char.asm:749 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D8A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:749 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D8A9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/misc/level_up_char.asm:749 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D8AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:749 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D8AC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/misc/level_up_char.asm:749 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D8AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/misc/level_up_char.asm:749 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1D8AF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/level_up_char.asm:750 STA @LOCAL03
    case 0xC1D8B1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/misc/level_up_char.asm:751 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D8B3: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/misc/level_up_char.asm:751 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D8B5: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/misc/level_up_char.asm:751 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D8B7: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/misc/level_up_char.asm:751 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1D8B9: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/misc/level_up_char.asm:752 CLC
    case 0xC1D8BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/level_up_char.asm:753 ADC @VIRTUAL0A
    case 0xC1D8BC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:754 STA @VIRTUAL0A
    case 0xC1D8BE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:755 LDA [@VIRTUAL0A]
    case 0xC1D8C0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/level_up_char.asm:756 AND #$00FF
    case 0xC1D8C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/level_up_char.asm:756 AND #$00FF
    // Overlapping static entry reached from 0xC1D8C2.
    case 0xC1D8C4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/level_up_char.asm:757 BNE @UNKNOWN63
    case 0xC1D8C5: cpu.execute_instruction<0xD0>(0x0000A7, 2); return true;
    // src/misc/level_up_char.asm:759 LDA @LOCAL07
    case 0xC1D8C7: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/misc/level_up_char.asm:760 BEQ @UNKNOWN67
    case 0xC1D8C9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/misc/level_up_char.asm:761 JSR CLEAR_BLINKING_PROMPT
    case 0xC1D8CB: cpu.execute_instruction<0x20>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/level_up_char.asm:763 END_C_FUNCTION
    case 0xC1D8CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/level_up_char.asm:763 END_C_FUNCTION
    case 0xC1D8CF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/party_add_char.asm (source_named).
bool execute_miscellaneous_party_add_char_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/party_add_char.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC228F8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/party_add_char.asm:7 END_STACK_VARS
    case 0xC228FA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/party_add_char.asm:7 END_STACK_VARS
    case 0xC228FB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/party_add_char.asm:7 END_STACK_VARS
    case 0xC228FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/party_add_char.asm:7 END_STACK_VARS
    case 0xC228FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/party_add_char.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC228FD.
    case 0xC228FF: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/party_add_char.asm:7 END_STACK_VARS
    case 0xC22900: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/party_add_char.asm:7 END_STACK_VARS
    case 0xC22901: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:8 STA @VIRTUAL04
    case 0xC22902: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/party_add_char.asm:8 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC228FF.
    case 0xC22903: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/misc/party_add_char.asm:9 LDA #0
    case 0xC22904: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/party_add_char.asm:9 LDA #0
    // Overlapping static entry reached from 0xC22903.
    case 0xC22905: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/party_add_char.asm:9 LDA #0
    // Overlapping static entry reached from 0xC22904.
    case 0xC22906: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/party_add_char.asm:10 STA @VIRTUAL02
    case 0xC22907: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/party_add_char.asm:11 STA @LOCAL00
    case 0xC22909: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/party_add_char.asm:12 JMP @UNKNOWN14
    case 0xC2290B: cpu.execute_instruction<0x4C>(0x0029A7, 3); return true;
    // src/misc/party_add_char.asm:14 LDX @VIRTUAL02
    case 0xC2290E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/party_add_char.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC22910: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_add_char.asm:16 LDA GAME_STATE + game_state::party_members,X
    case 0xC22912: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/misc/party_add_char.asm:17 STA @VIRTUAL00
    case 0xC22915: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/party_add_char.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC22917: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_add_char.asm:19 LDA @VIRTUAL00
    case 0xC22919: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/party_add_char.asm:20 AND #$00FF
    case 0xC2291B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_add_char.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2291B.
    case 0xC2291D: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/party_add_char.asm:21 CMP @VIRTUAL04
    case 0xC2291E: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/misc/party_add_char.asm:22 BEQL @UNKNOWN16
    case 0xC22920: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/misc/party_add_char.asm:22 BEQL @UNKNOWN16
    case 0xC22922: cpu.execute_instruction<0x4C>(0x0029B9, 3); return true;
    // src/misc/party_add_char.asm:23 CMP @VIRTUAL04
    case 0xC22925: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/misc/party_add_char.asm:24 BGT @UNKNOWN3
    case 0xC22927: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/misc/party_add_char.asm:24 BGT @UNKNOWN3
    case 0xC22929: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/misc/party_add_char.asm:25 LDA @VIRTUAL00
    case 0xC2292B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/party_add_char.asm:26 AND #$00FF
    case 0xC2292D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_add_char.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2292D.
    case 0xC2292F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/party_add_char.asm:27 BNE @UNKNOWN13
    case 0xC22930: cpu.execute_instruction<0xD0>(0x00006F, 2); return true;
    // src/misc/party_add_char.asm:29 LDY @VIRTUAL02
    case 0xC22932: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/misc/party_add_char.asm:30 BRA @UNKNOWN7
    case 0xC22934: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/misc/party_add_char.asm:32 STY @VIRTUAL02
    case 0xC22936: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/party_add_char.asm:33 LDA #6
    case 0xC22938: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/misc/party_add_char.asm:33 LDA #6
    // Overlapping static entry reached from 0xC22938.
    case 0xC2293A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/party_add_char.asm:34 CLC
    case 0xC2293B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:35 SBC @VIRTUAL02
    case 0xC2293C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/party_add_char.asm:36 BRANCHLTEQS @UNKNOWN16
    case 0xC2293E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/party_add_char.asm:36 BRANCHLTEQS @UNKNOWN16
    case 0xC22940: cpu.execute_instruction<0x10>(0x000077, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/party_add_char.asm:36 BRANCHLTEQS @UNKNOWN16
    case 0xC22942: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/party_add_char.asm:36 BRANCHLTEQS @UNKNOWN16
    case 0xC22944: cpu.execute_instruction<0x30>(0x000073, 2); return true;
    // src/misc/party_add_char.asm:37 INY
    case 0xC22946: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:39 LDA GAME_STATE + game_state::party_members,Y
    case 0xC22947: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/misc/party_add_char.asm:40 AND #$00FF
    case 0xC2294A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_add_char.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC2294A.
    case 0xC2294C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/party_add_char.asm:41 BNE @UNKNOWN4
    case 0xC2294D: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/misc/party_add_char.asm:42 BRA @UNKNOWN9
    case 0xC2294F: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/misc/party_add_char.asm:44 TYX
    case 0xC22951: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:45 DEX
    case 0xC22952: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC22953: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_add_char.asm:47 LDA GAME_STATE + game_state::party_members,X
    case 0xC22955: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/misc/party_add_char.asm:48 STA GAME_STATE + game_state::party_members,Y
    case 0xC22958: cpu.execute_instruction<0x99>(0x00986F, 3); return true;
    // src/misc/party_add_char.asm:49 TXY
    case 0xC2295B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC2295C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_add_char.asm:52 LDA @LOCAL00
    case 0xC2295E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_add_char.asm:53 STA @VIRTUAL02
    case 0xC22960: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/party_add_char.asm:54 TYA
    case 0xC22962: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:55 CLC
    case 0xC22963: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:56 SBC @VIRTUAL02
    case 0xC22964: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/party_add_char.asm:57 BRANCHGTS @UNKNOWN8
    case 0xC22966: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/party_add_char.asm:57 BRANCHGTS @UNKNOWN8
    case 0xC22968: cpu.execute_instruction<0x10>(0x0000E7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/party_add_char.asm:57 BRANCHGTS @UNKNOWN8
    case 0xC2296A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/party_add_char.asm:57 BRANCHGTS @UNKNOWN8
    case 0xC2296C: cpu.execute_instruction<0x30>(0x0000E3, 2); return true;
    // src/misc/party_add_char.asm:58 LDA @VIRTUAL04
    case 0xC2296E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/party_add_char.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC22970: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_add_char.asm:60 LDX @VIRTUAL02
    case 0xC22972: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/party_add_char.asm:61 STA GAME_STATE + game_state::party_members,X
    case 0xC22974: cpu.execute_instruction<0x9D>(0x00986F, 3); return true;
    // src/misc/party_add_char.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC22977: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_add_char.asm:63 LDA @VIRTUAL04
    case 0xC22979: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/party_add_char.asm:64 JSL UNKNOWN_C0369B
    case 0xC2297B: cpu.execute_instruction<0x22>(0xC0369B, 4); return true;
    // src/misc/party_add_char.asm:65 ASL
    case 0xC2297F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:66 CLC
    case 0xC22980: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:67 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC22981: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/misc/party_add_char.asm:67 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC22981.
    case 0xC22983: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/misc/party_add_char.asm:68 TAX
    case 0xC22984: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:69 LDA __BSS_START__,X
    case 0xC22985: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/party_add_char.asm:70 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC22988: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/misc/party_add_char.asm:70 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC22988.
    case 0xC2298A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/misc/party_add_char.asm:71 STA __BSS_START__,X
    case 0xC2298B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/party_add_char.asm:71 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2298A.
    case 0xC2298C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/party_add_char.asm:71 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2298A.
    case 0xC2298D: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/party_add_char.asm:72 LDA @VIRTUAL04
    case 0xC2298E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/party_add_char.asm:73 CMP #4
    case 0xC22990: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/party_add_char.asm:73 CMP #4
    // Overlapping static entry reached from 0xC22990.
    case 0xC22992: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/misc/party_add_char.asm:74 BGT @UNKNOWN16
    case 0xC22993: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/misc/party_add_char.asm:74 BGT @UNKNOWN16
    case 0xC22995: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/misc/party_add_char.asm:75 JSL UNKNOWN_C216DB
    case 0xC22997: cpu.execute_instruction<0x22>(0xC216DB, 4); return true;
    // src/misc/party_add_char.asm:76 JSL UNKNOWN_C3EBCA
    case 0xC2299B: cpu.execute_instruction<0x22>(0xC3EBCA, 4); return true;
    // src/misc/party_add_char.asm:77 BRA @UNKNOWN16
    case 0xC2299F: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/misc/party_add_char.asm:79 INC @VIRTUAL02
    case 0xC229A1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/party_add_char.asm:80 LDA @VIRTUAL02
    case 0xC229A3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/party_add_char.asm:81 STA @LOCAL00
    case 0xC229A5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/party_add_char.asm:83 LDA #6
    case 0xC229A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/misc/party_add_char.asm:83 LDA #6
    // Overlapping static entry reached from 0xC229A7.
    case 0xC229A9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/party_add_char.asm:84 CLC
    case 0xC229AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_add_char.asm:85 SBC @VIRTUAL02
    case 0xC229AB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/misc/party_add_char.asm:86 JUMPGTS @UNKNOWN0
    case 0xC229AD: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/misc/party_add_char.asm:86 JUMPGTS @UNKNOWN0
    case 0xC229AF: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/misc/party_add_char.asm:86 JUMPGTS @UNKNOWN0
    case 0xC229B1: cpu.execute_instruction<0x4C>(0x00290E, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/misc/party_add_char.asm:86 JUMPGTS @UNKNOWN0
    case 0xC229B4: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/misc/party_add_char.asm:86 JUMPGTS @UNKNOWN0
    case 0xC229B6: cpu.execute_instruction<0x4C>(0x00290E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/party_add_char.asm:88 END_C_FUNCTION
    case 0xC229B9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/party_add_char.asm:88 END_C_FUNCTION
    case 0xC229BA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/party_remove_char.asm (source_named).
bool execute_miscellaneous_party_remove_char_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/party_remove_char.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC229BB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/party_remove_char.asm:7 END_STACK_VARS
    case 0xC229BD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/party_remove_char.asm:7 END_STACK_VARS
    case 0xC229BE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/party_remove_char.asm:7 END_STACK_VARS
    case 0xC229BF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/party_remove_char.asm:7 END_STACK_VARS
    case 0xC229C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/party_remove_char.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC229C0.
    case 0xC229C2: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/party_remove_char.asm:7 END_STACK_VARS
    case 0xC229C3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/party_remove_char.asm:7 END_STACK_VARS
    case 0xC229C4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/party_remove_char.asm:8 TAY
    case 0xC229C5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/party_remove_char.asm:9 STY @LOCAL00
    case 0xC229C6: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/party_remove_char.asm:10 LDX #0
    case 0xC229C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/party_remove_char.asm:10 LDX #0
    // Overlapping static entry reached from 0xC229C8.
    case 0xC229CA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/party_remove_char.asm:11 BRA @UNKNOWN7
    case 0xC229CB: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/misc/party_remove_char.asm:13 STY @VIRTUAL02
    case 0xC229CD: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/party_remove_char.asm:14 LDA GAME_STATE + game_state::party_members,X
    case 0xC229CF: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/misc/party_remove_char.asm:15 AND #$00FF
    case 0xC229D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_remove_char.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC229D2.
    case 0xC229D4: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/party_remove_char.asm:16 CMP @VIRTUAL02
    case 0xC229D5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/party_remove_char.asm:17 BNE @UNKNOWN6
    case 0xC229D7: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // src/misc/party_remove_char.asm:18 BRA @UNKNOWN2
    case 0xC229D9: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/misc/party_remove_char.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC229DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_remove_char.asm:21 LDA GAME_STATE + game_state::party_members + 1,X
    case 0xC229DD: cpu.execute_instruction<0xBD>(0x009870, 3); return true;
    // src/misc/party_remove_char.asm:22 STA GAME_STATE + game_state::party_members,X
    case 0xC229E0: cpu.execute_instruction<0x9D>(0x00986F, 3); return true;
    // src/misc/party_remove_char.asm:23 INX
    case 0xC229E3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/party_remove_char.asm:25 STX @VIRTUAL02
    case 0xC229E4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/party_remove_char.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC229E6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_remove_char.asm:27 LDA #6
    case 0xC229E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/misc/party_remove_char.asm:27 LDA #6
    // Overlapping static entry reached from 0xC229E8.
    case 0xC229EA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/party_remove_char.asm:28 CLC
    case 0xC229EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_remove_char.asm:29 SBC @VIRTUAL02
    case 0xC229EC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/party_remove_char.asm:30 BRANCHGTS @UNKNOWN1
    case 0xC229EE: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/party_remove_char.asm:30 BRANCHGTS @UNKNOWN1
    case 0xC229F0: cpu.execute_instruction<0x10>(0x0000E9, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/party_remove_char.asm:30 BRANCHGTS @UNKNOWN1
    case 0xC229F2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/party_remove_char.asm:30 BRANCHGTS @UNKNOWN1
    case 0xC229F4: cpu.execute_instruction<0x30>(0x0000E5, 2); return true;
    // src/misc/party_remove_char.asm:31 DEX
    case 0xC229F6: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/party_remove_char.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC229F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_remove_char.asm:33 STZ GAME_STATE + game_state::party_members,X
    case 0xC229F9: cpu.execute_instruction<0x9E>(0x00986F, 3); return true;
    // src/misc/party_remove_char.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC229FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_remove_char.asm:35 TYA
    case 0xC229FE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/party_remove_char.asm:36 JSL UNKNOWN_C03903
    case 0xC229FF: cpu.execute_instruction<0x22>(0xC03903, 4); return true;
    // src/misc/party_remove_char.asm:37 LDY @LOCAL00
    case 0xC22A03: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/party_remove_char.asm:38 CPY #4
    case 0xC22A05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/misc/party_remove_char.asm:38 CPY #4
    // Overlapping static entry reached from 0xC22A05.
    case 0xC22A07: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/misc/party_remove_char.asm:39 BGT @UNKNOWN9
    case 0xC22A08: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/misc/party_remove_char.asm:39 BGT @UNKNOWN9
    case 0xC22A0A: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/misc/party_remove_char.asm:40 JSL UNKNOWN_C216DB
    case 0xC22A0C: cpu.execute_instruction<0x22>(0xC216DB, 4); return true;
    // src/misc/party_remove_char.asm:41 JSL UNKNOWN_C3EBCA
    case 0xC22A10: cpu.execute_instruction<0x22>(0xC3EBCA, 4); return true;
    // src/misc/party_remove_char.asm:42 BRA @UNKNOWN9
    case 0xC22A14: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/misc/party_remove_char.asm:44 INX
    case 0xC22A16: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/party_remove_char.asm:46 STX @VIRTUAL02
    case 0xC22A17: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/party_remove_char.asm:47 LDA GAME_STATE+game_state::party_count
    case 0xC22A19: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/misc/party_remove_char.asm:48 AND #$00FF
    case 0xC22A1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_remove_char.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC22A1C.
    case 0xC22A1E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/party_remove_char.asm:49 CLC
    case 0xC22A1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_remove_char.asm:50 SBC @VIRTUAL02
    case 0xC22A20: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/party_remove_char.asm:51 BRANCHGTS @UNKNOWN0
    case 0xC22A22: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/party_remove_char.asm:51 BRANCHGTS @UNKNOWN0
    case 0xC22A24: cpu.execute_instruction<0x10>(0x0000A7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/party_remove_char.asm:51 BRANCHGTS @UNKNOWN0
    case 0xC22A26: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/party_remove_char.asm:51 BRANCHGTS @UNKNOWN0
    case 0xC22A28: cpu.execute_instruction<0x30>(0x0000A3, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/party_remove_char.asm:53 END_C_FUNCTION
    case 0xC22A2A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/party_remove_char.asm:53 END_C_FUNCTION
    case 0xC22A2B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
