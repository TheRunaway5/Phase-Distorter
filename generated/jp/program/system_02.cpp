// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/system/saves/check_block_signature.asm (source_named).
bool execute_system_saves_check_block_signature_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/check_block_signature.asm:3 BEGIN_C_FUNCTION
    case 0xC0F56C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xC0F56E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xC0F56F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xC0F570: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xC0F571: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F571.
    case 0xC0F573: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xC0F574: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xC0F575: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:11 TAX
    case 0xC0F576: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:12 STX @LOCAL02
    case 0xC0F577: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/system/saves/check_block_signature.asm:13 LDY #.SIZEOF(save_block)
    case 0xC0F579: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/check_block_signature.asm:13 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F579.
    case 0xC0F57B: cpu.execute_instruction<0x05>(0x00008A, 2); return true;
    // src/system/saves/check_block_signature.asm:14 TXA
    case 0xC0F57C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:15 JSL MULT16
    case 0xC0F57D: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/check_block_signature.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xC0F581: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/check_block_signature.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xC0F583: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/system/saves/check_block_signature.asm:17 CLC
    case 0xC0F585: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xC0F586: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xC0F588: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F588.
    case 0xC0F58A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xC0F58B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xC0F58D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xC0F58F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F58F.
    case 0xC0F591: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xC0F592: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    case 0xC0F594: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x00F4ED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    // Overlapping static entry reached from 0xC0F594.
    case 0xC0F596: cpu.execute_instruction<0xF4>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    case 0xC0F597: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    case 0xC0F599: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    // Overlapping static entry reached from 0xC0F599.
    case 0xC0F59B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    case 0xC0F59C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/check_block_signature.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F59E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/check_block_signature.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F5A0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/check_block_signature.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F5A2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/check_block_signature.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F5A4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/check_block_signature.asm:21 JSL STRCMP
    case 0xC0F5A6: cpu.execute_instruction<0x22>(0xC08F20, 4); return true;
    // src/system/saves/check_block_signature.asm:22 CMP #0
    case 0xC0F5AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_block_signature.asm:22 CMP #0
    // Overlapping static entry reached from 0xC0F5AA.
    case 0xC0F5AC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_block_signature.asm:23 BEQ @UNKNOWN0
    case 0xC0F5AD: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/system/saves/check_block_signature.asm:24 LDX @LOCAL02
    case 0xC0F5AF: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/system/saves/check_block_signature.asm:25 TXA
    case 0xC0F5B1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:26 JSR ERASE_SAVE_BLOCK
    case 0xC0F5B2: cpu.execute_instruction<0x20>(0x00F505, 3); return true;
    // src/system/saves/check_block_signature.asm:27 LDA #TRUE
    case 0xC0F5B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/saves/check_block_signature.asm:27 LDA #TRUE
    // Overlapping static entry reached from 0xC0F5B5.
    case 0xC0F5B7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/saves/check_block_signature.asm:28 BRA @UNKNOWN1
    case 0xC0F5B8: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/saves/check_block_signature.asm:30 LDA #FALSE
    case 0xC0F5BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/saves/check_block_signature.asm:30 LDA #FALSE
    // Overlapping static entry reached from 0xC0F5BA.
    case 0xC0F5BC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/check_block_signature.asm:32 END_C_FUNCTION
    case 0xC0F5BD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/check_block_signature.asm:32 END_C_FUNCTION
    case 0xC0F5BE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/check_save_corruption.asm (source_named).
bool execute_system_saves_check_save_corruption_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/check_save_corruption.asm:3 BEGIN_C_FUNCTION
    case 0xC0F749: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xC0F74B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xC0F74C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xC0F74D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xC0F74E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F74E.
    case 0xC0F750: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xC0F751: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xC0F752: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:9 TAY
    case 0xC0F753: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:10 STY @LOCAL01
    case 0xC0F754: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:11 TYA
    case 0xC0F756: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:12 ASL
    case 0xC0F757: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:13 STA @VIRTUAL02
    case 0xC0F758: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:14 JSR VALIDATE_SAVE_BLOCK_CHECKSUMS
    case 0xC0F75A: cpu.execute_instruction<0x20>(0x00F6E4, 3); return true;
    // src/system/saves/check_save_corruption.asm:15 CMP #FALSE
    case 0xC0F75D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_save_corruption.asm:15 CMP #FALSE
    // Overlapping static entry reached from 0xC0F75D.
    case 0xC0F75F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_save_corruption.asm:16 BEQ @UNKNOWN1
    case 0xC0F760: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/system/saves/check_save_corruption.asm:17 LDA @VIRTUAL02
    case 0xC0F762: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:18 JSR ERASE_SAVE_BLOCK
    case 0xC0F764: cpu.execute_instruction<0x20>(0x00F505, 3); return true;
    // src/system/saves/check_save_corruption.asm:19 LDX @VIRTUAL02
    case 0xC0F767: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:20 INX
    case 0xC0F769: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:21 STX @LOCAL00
    case 0xC0F76A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:22 TXA
    case 0xC0F76C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:23 JSR VALIDATE_SAVE_BLOCK_CHECKSUMS
    case 0xC0F76D: cpu.execute_instruction<0x20>(0x00F6E4, 3); return true;
    // src/system/saves/check_save_corruption.asm:24 CMP #FALSE
    case 0xC0F770: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_save_corruption.asm:24 CMP #FALSE
    // Overlapping static entry reached from 0xC0F770.
    case 0xC0F772: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_save_corruption.asm:25 BEQ @UNKNOWN0
    case 0xC0F773: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/system/saves/check_save_corruption.asm:26 LDX @LOCAL00
    case 0xC0F775: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:27 TXA
    case 0xC0F777: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:28 JSR ERASE_SAVE_BLOCK
    case 0xC0F778: cpu.execute_instruction<0x20>(0x00F505, 3); return true;
    // src/system/saves/check_save_corruption.asm:29 LDY @LOCAL01
    case 0xC0F77B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:30 TYX
    case 0xC0F77D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F77E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/check_save_corruption.asm:32 LDA f:UNKNOWN_EF05A6,X
    case 0xC0F780: cpu.execute_instruction<0xBF>(0xC0F502, 4); return true;
    // src/system/saves/check_save_corruption.asm:33 ORA CORRUPTION_CHECK_RESULTS
    case 0xC0F784: cpu.execute_instruction<0x0D>(0x00A17B, 3); return true;
    // src/system/saves/check_save_corruption.asm:34 STA CORRUPTION_CHECK_RESULTS
    case 0xC0F787: cpu.execute_instruction<0x8D>(0x00A17B, 3); return true;
    // src/system/saves/check_save_corruption.asm:35 BRA @UNKNOWN2
    case 0xC0F78A: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/system/saves/check_save_corruption.asm:37 LDX @LOCAL00
    case 0xC0F78C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:38 LDA @VIRTUAL02
    case 0xC0F78E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:39 JSR COPY_SAVE_BLOCK
    case 0xC0F790: cpu.execute_instruction<0x20>(0x00F5DE, 3); return true;
    // src/system/saves/check_save_corruption.asm:41 LDY @VIRTUAL02
    case 0xC0F793: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:42 INY
    case 0xC0F795: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:43 STY @LOCAL01
    case 0xC0F796: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:44 TYA
    case 0xC0F798: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:45 JSR VALIDATE_SAVE_BLOCK_CHECKSUMS
    case 0xC0F799: cpu.execute_instruction<0x20>(0x00F6E4, 3); return true;
    // src/system/saves/check_save_corruption.asm:47 CMP #FALSE
    case 0xC0F79C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_save_corruption.asm:47 CMP #FALSE
    // Overlapping static entry reached from 0xC0F79C.
    case 0xC0F79E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_save_corruption.asm:48 BEQ @UNKNOWN2
    case 0xC0F79F: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:49 LDY @LOCAL01
    case 0xC0F7A1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:50 TYA
    case 0xC0F7A3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:51 JSR ERASE_SAVE_BLOCK
    case 0xC0F7A4: cpu.execute_instruction<0x20>(0x00F505, 3); return true;
    // src/system/saves/check_save_corruption.asm:52 LDX @VIRTUAL02
    case 0xC0F7A7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:53 LDY @LOCAL01
    case 0xC0F7A9: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:54 TYA
    case 0xC0F7AB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:55 JSR COPY_SAVE_BLOCK
    case 0xC0F7AC: cpu.execute_instruction<0x20>(0x00F5DE, 3); return true;
    // src/system/saves/check_save_corruption.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC0F7AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/check_save_corruption.asm:58 END_C_FUNCTION
    case 0xC0F7B1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/check_save_corruption.asm:58 END_C_FUNCTION
    case 0xC0F7B2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/check_sram_integrity.asm (source_named).
bool execute_system_saves_check_sram_integrity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/check_sram_integrity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0FAA4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    case 0xC0FAA6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    case 0xC0FAA7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    case 0xC0FAA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0FAA8.
    case 0xC0FAAA: cpu.execute_instruction<0xFF>(0x8AA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    case 0xC0FAAB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/saves/check_sram_integrity.asm:8 LDA #SRAM_VERSION
    case 0xC0FAAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x00048A, 3); return true;
    // src/system/saves/check_sram_integrity.asm:8 LDA #SRAM_VERSION
    // Overlapping static entry reached from 0xC0FAAC.
    case 0xC0FAAE: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/system/saves/check_sram_integrity.asm:9 STA SRAM_VERSION_LOADED
    case 0xC0FAAF: cpu.execute_instruction<0x8D>(0x00A179, 3); return true;
    // src/system/saves/check_sram_integrity.asm:9 STA SRAM_VERSION_LOADED
    // Overlapping static entry reached from 0xC0FAAE.
    case 0xC0FAB0: cpu.execute_instruction<0x79>(0x00A9A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    case 0xC0FAB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x007FFE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FAB0.
    case 0xC0FAB3: cpu.execute_instruction<0xFE>(0x00857F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FAB2.
    case 0xC0FAB4: cpu.execute_instruction<0x7F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    case 0xC0FAB5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FAB3.
    case 0xC0FAB6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    case 0xC0FAB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FAB4.
    case 0xC0FAB8: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FAB7.
    case 0xC0FAB9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    case 0xC0FABA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/check_sram_integrity.asm:11 LDA [@VIRTUAL06]
    case 0xC0FABC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/saves/check_sram_integrity.asm:12 CMP #SRAM_VERSION
    case 0xC0FABE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00008A, 2); else cpu.execute_instruction<0xC9>(0x00048A, 3); return true;
    // src/system/saves/check_sram_integrity.asm:12 CMP #SRAM_VERSION
    // Overlapping static entry reached from 0xC0FABE.
    case 0xC0FAC0: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/system/saves/check_sram_integrity.asm:13 BEQ @GOOD_SRAM
    case 0xC0FAC1: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/system/saves/check_sram_integrity.asm:13 BEQ @GOOD_SRAM
    // Overlapping static entry reached from 0xC0FAC0.
    case 0xC0FAC2: cpu.execute_instruction<0x15>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    case 0xC0FAC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    // Overlapping static entry reached from 0xC0FAC2.
    case 0xC0FAC4: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    // Overlapping static entry reached from 0xC0FAC3.
    case 0xC0FAC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    case 0xC0FAC6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    case 0xC0FAC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    // Overlapping static entry reached from 0xC0FAC8.
    case 0xC0FACA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    case 0xC0FACB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/check_sram_integrity.asm:15 LDX #$2000
    case 0xC0FACD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // src/system/saves/check_sram_integrity.asm:15 LDX #$2000
    // Overlapping static entry reached from 0xC0FACD.
    case 0xC0FACF: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // src/system/saves/check_sram_integrity.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FAD0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:17 LDA #0
    case 0xC0FAD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/saves/check_sram_integrity.asm:18 JSL MEMSET24
    case 0xC0FAD4: cpu.execute_instruction<0x22>(0xC08F06, 4); return true;
    // src/system/saves/check_sram_integrity.asm:18 JSL MEMSET24
    // Overlapping static entry reached from 0xC0FAD2.
    case 0xC0FAD5: cpu.execute_instruction<0x06>(0x00008F, 2); return true;
    // src/system/saves/check_sram_integrity.asm:18 JSL MEMSET24
    // Overlapping static entry reached from 0xC0FAD5.
    case 0xC0FAD7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x00BF20, 3); return true;
    // src/system/saves/check_sram_integrity.asm:20 JSR CHECK_ALL_BLOCKS_SIGNATURE
    case 0xC0FAD8: cpu.execute_instruction<0x20>(0x00F5BF, 3); return true;
    // src/system/saves/check_sram_integrity.asm:20 JSR CHECK_ALL_BLOCKS_SIGNATURE
    // Overlapping static entry reached from 0xC0FAD7.
    case 0xC0FAD9: cpu.execute_instruction<0xBF>(0x20E2F5, 4); return true;
    // src/system/saves/check_sram_integrity.asm:20 JSR CHECK_ALL_BLOCKS_SIGNATURE
    // Overlapping static entry reached from 0xC0FAD7.
    case 0xC0FADA: cpu.execute_instruction<0xF5>(0x0000E2, 2); return true;
    // src/system/saves/check_sram_integrity.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FADB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:21 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0FADA.
    case 0xC0FADC: cpu.execute_instruction<0x20>(0x007B9C, 3); return true;
    // src/system/saves/check_sram_integrity.asm:22 STZ CORRUPTION_CHECK_RESULTS
    case 0xC0FADD: cpu.execute_instruction<0x9C>(0x00A17B, 3); return true;
    // src/system/saves/check_sram_integrity.asm:22 STZ CORRUPTION_CHECK_RESULTS
    // Overlapping static entry reached from 0xC0FADC.
    case 0xC0FADF: cpu.execute_instruction<0xA1>(0x0000A2, 2); return true;
    // src/system/saves/check_sram_integrity.asm:23 LDX #0
    case 0xC0FAE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/check_sram_integrity.asm:23 LDX #0
    // Overlapping static entry reached from 0xC0FADF.
    case 0xC0FAE1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/saves/check_sram_integrity.asm:23 LDX #0
    // Overlapping static entry reached from 0xC0FAE0.
    case 0xC0FAE2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/saves/check_sram_integrity.asm:24 STX @LOCAL01
    case 0xC0FAE3: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/system/saves/check_sram_integrity.asm:25 BRA @LOOP_ENTRY
    case 0xC0FAE5: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/system/saves/check_sram_integrity.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC0FAE7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:28 TXA
    case 0xC0FAE9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_sram_integrity.asm:29 JSR CHECK_SAVE_CORRUPTION
    case 0xC0FAEA: cpu.execute_instruction<0x20>(0x00F749, 3); return true;
    // src/system/saves/check_sram_integrity.asm:30 LDX @LOCAL01
    case 0xC0FAED: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/system/saves/check_sram_integrity.asm:31 INX
    case 0xC0FAEF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/check_sram_integrity.asm:32 STX @LOCAL01
    case 0xC0FAF0: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/system/saves/check_sram_integrity.asm:34 CPX #3
    case 0xC0FAF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/system/saves/check_sram_integrity.asm:34 CPX #3
    // Overlapping static entry reached from 0xC0FAF2.
    case 0xC0FAF4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/saves/check_sram_integrity.asm:35 BCC @LOOP_BEGINNING
    case 0xC0FAF5: cpu.execute_instruction<0x90>(0x0000F0, 2); return true;
    // src/system/saves/check_sram_integrity.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC0FAF7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:37 LDA SRAM_VERSION_LOADED
    case 0xC0FAF9: cpu.execute_instruction<0xAD>(0x00A179, 3); return true;
    // src/system/saves/check_sram_integrity.asm:38 STA [@VIRTUAL06]
    case 0xC0FAFC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/check_sram_integrity.asm:39 END_C_FUNCTION
    case 0xC0FAFE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/saves/check_sram_integrity.asm:39 END_C_FUNCTION
    case 0xC0FAFF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/copy_save_block.asm (source_named).
bool execute_system_saves_copy_save_block_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/copy_save_block.asm:3 BEGIN_C_FUNCTION
    case 0xC0F5DE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xC0F5E0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xC0F5E1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xC0F5E2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xC0F5E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F5E3.
    case 0xC0F5E5: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xC0F5E6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xC0F5E7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/copy_save_block.asm:14 STA @LOCAL04
    case 0xC0F5E8: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/saves/copy_save_block.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xC0F5E5.
    case 0xC0F5E9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    case 0xC0F5EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F5EA.
    case 0xC0F5EC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    case 0xC0F5ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    case 0xC0F5EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F5EF.
    case 0xC0F5F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    case 0xC0F5F2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/copy_save_block.asm:16 LDY #.SIZEOF(save_block)
    case 0xC0F5F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/copy_save_block.asm:16 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F5F4.
    case 0xC0F5F6: cpu.execute_instruction<0x05>(0x0000A5, 2); return true;
    // src/system/saves/copy_save_block.asm:17 LDA @LOCAL04
    case 0xC0F5F7: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/system/saves/copy_save_block.asm:17 LDA @LOCAL04
    // Overlapping static entry reached from 0xC0F5F6.
    case 0xC0F5F8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/copy_save_block.asm:18 JSL MULT16
    case 0xC0F5F9: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:19 STORE_INT1632 @VIRTUAL0A
    case 0xC0F5FD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:19 STORE_INT1632 @VIRTUAL0A
    case 0xC0F5FF: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/saves/copy_save_block.asm:20 CLC
    case 0xC0F601: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC0F602: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC0F604: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC0F606: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC0F608: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC0F60A: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC0F60C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:22 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC0F60E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:22 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC0F610: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:22 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC0F612: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:22 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC0F614: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0F616: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0F618: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0F61A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0F61C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/saves/copy_save_block.asm:24 LDY #.SIZEOF(save_block)
    case 0xC0F61E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/copy_save_block.asm:24 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F61E.
    case 0xC0F620: cpu.execute_instruction<0x05>(0x00008A, 2); return true;
    // src/system/saves/copy_save_block.asm:25 TXA
    case 0xC0F621: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/copy_save_block.asm:26 JSL MULT16
    case 0xC0F622: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xC0F626: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xC0F628: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/system/saves/copy_save_block.asm:28 CLC
    case 0xC0F62A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0F62B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0F62D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0F62F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0F631: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0F633: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0F635: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:31 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC0F637: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:31 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC0F639: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:31 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC0F63B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:31 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC0F63D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:32 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC0F63F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:32 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC0F641: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:32 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC0F643: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:32 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC0F645: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:40 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F647: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:40 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F649: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:40 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F64B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:40 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F64D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/copy_save_block.asm:41 LDA #.SIZEOF(save_block)
    case 0xC0F64F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000500, 3); return true;
    // src/system/saves/copy_save_block.asm:41 LDA #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F64F.
    case 0xC0F651: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/system/saves/copy_save_block.asm:42 JSL MEMCPY24
    case 0xC0F652: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/system/saves/copy_save_block.asm:42 JSL MEMCPY24
    // Overlapping static entry reached from 0xC0F651.
    case 0xC0F653: cpu.execute_instruction<0xDE>(0x00C08E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/copy_save_block.asm:43 END_C_FUNCTION
    case 0xC0F656: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/copy_save_block.asm:43 END_C_FUNCTION
    case 0xC0F657: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/copy_save_slot.asm (source_named).
bool execute_system_saves_copy_save_slot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/copy_save_slot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0FB1B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xC0FB1D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xC0FB1E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xC0FB1F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xC0FB20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0FB20.
    case 0xC0FB22: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xC0FB23: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xC0FB24: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:10 STA @LOCAL01
    case 0xC0FB25: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/copy_save_slot.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC0FB22.
    case 0xC0FB26: cpu.execute_instruction<0x10>(0x00008A, 2); return true;
    // src/system/saves/copy_save_slot.asm:11 TXA
    case 0xC0FB27: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:12 ASL
    case 0xC0FB28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:13 TAY
    case 0xC0FB29: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:14 STY @LOCAL00
    case 0xC0FB2A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/system/saves/copy_save_slot.asm:15 LDA @LOCAL01
    case 0xC0FB2C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/system/saves/copy_save_slot.asm:16 ASL
    case 0xC0FB2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:17 STA @VIRTUAL02
    case 0xC0FB2F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/copy_save_slot.asm:18 TYX
    case 0xC0FB31: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:19 LDA @VIRTUAL02
    case 0xC0FB32: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/saves/copy_save_slot.asm:20 JSR COPY_SAVE_BLOCK
    case 0xC0FB34: cpu.execute_instruction<0x20>(0x00F5DE, 3); return true;
    // src/system/saves/copy_save_slot.asm:21 LDY @LOCAL00
    case 0xC0FB37: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/system/saves/copy_save_slot.asm:22 TYX
    case 0xC0FB39: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:23 INX
    case 0xC0FB3A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:24 LDA @VIRTUAL02
    case 0xC0FB3B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/saves/copy_save_slot.asm:25 INC
    case 0xC0FB3D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:26 JSR COPY_SAVE_BLOCK
    case 0xC0FB3E: cpu.execute_instruction<0x20>(0x00F5DE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/copy_save_slot.asm:27 END_C_FUNCTION
    case 0xC0FB41: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/saves/copy_save_slot.asm:27 END_C_FUNCTION
    case 0xC0FB42: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/corruption_check.asm (source_named).
bool execute_system_saves_corruption_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/corruption_check.asm:3 BEGIN_C_FUNCTION
    case 0xC1EC5A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    case 0xC1EC5C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    case 0xC1EC5D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    case 0xC1EC5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EC5E.
    case 0xC1EC60: cpu.execute_instruction<0xFF>(0x7BAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    case 0xC1EC61: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:8 LDA CORRUPTION_CHECK_RESULTS
    case 0xC1EC62: cpu.execute_instruction<0xAD>(0x00A17B, 3); return true;
    // src/system/saves/corruption_check.asm:8 LDA CORRUPTION_CHECK_RESULTS
    // Overlapping static entry reached from 0xC1EC60.
    case 0xC1EC64: cpu.execute_instruction<0xA1>(0x000029, 2); return true;
    // src/system/saves/corruption_check.asm:9 AND #$00FF
    case 0xC1EC65: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/saves/corruption_check.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC1EC64.
    case 0xC1EC66: cpu.execute_instruction<0xFF>(0x6DF000, 4); return true;
    // src/system/saves/corruption_check.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC1EC65.
    case 0xC1EC67: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/corruption_check.asm:10 BEQ @RETURN
    case 0xC1EC68: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // src/system/saves/corruption_check.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1EC6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/system/saves/corruption_check.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1EC6A.
    case 0xC1EC6C: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/system/saves/corruption_check.asm:12 JSL UNKNOWN_C20A20
    case 0xC1EC6D: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/system/saves/corruption_check.asm:12 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1EC6C.
    case 0xC1EC70: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    case 0xC1EC71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1EC70.
    case 0xC1EC72: cpu.execute_instruction<0x2F>(0xE42000, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1EC71.
    case 0xC1EC73: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    case 0xC1EC74: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1EC72.
    case 0xC1EC76: cpu.execute_instruction<0x06>(0x0000A2, 2); return true;
    // src/system/saves/corruption_check.asm:14 LDX #0
    case 0xC1EC77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/corruption_check.asm:14 LDX #0
    // Overlapping static entry reached from 0xC1EC76.
    case 0xC1EC78: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/saves/corruption_check.asm:14 LDX #0
    // Overlapping static entry reached from 0xC1EC77.
    case 0xC1EC79: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/saves/corruption_check.asm:15 STX @LOCAL01
    case 0xC1EC7A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/system/saves/corruption_check.asm:16 BRA @LOOP_ENTRY
    case 0xC1EC7C: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/system/saves/corruption_check.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EC7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/corruption_check.asm:19 LDA f:UNKNOWN_EF05A6,X
    case 0xC1EC80: cpu.execute_instruction<0xBF>(0xC0F502, 4); return true;
    // src/system/saves/corruption_check.asm:20 AND CORRUPTION_CHECK_RESULTS
    case 0xC1EC84: cpu.execute_instruction<0x2D>(0x00A17B, 3); return true;
    // src/system/saves/corruption_check.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1EC87: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/saves/corruption_check.asm:22 AND #$00FF
    case 0xC1EC89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/saves/corruption_check.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC1EC89.
    case 0xC1EC8B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/corruption_check.asm:23 BEQ @SIGNATURE_MATCH
    case 0xC1EC8C: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/system/saves/corruption_check.asm:24 TXA
    case 0xC1EC8E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:25 INC
    case 0xC1EC8F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/corruption_check.asm:26 STORE_INT1632S @VIRTUAL06
    case 0xC1EC90: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/corruption_check.asm:26 STORE_INT1632S @VIRTUAL06
    case 0xC1EC92: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/system/saves/corruption_check.asm:26 STORE_INT1632S @VIRTUAL06
    case 0xC1EC94: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/system/saves/corruption_check.asm:26 STORE_INT1632S @VIRTUAL06
    case 0xC1EC96: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/corruption_check.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC98: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/corruption_check.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC9A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/corruption_check.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC9C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/corruption_check.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC9E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/corruption_check.asm:28 JSR UNKNOWN_C1AD0A
    case 0xC1ECA0: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ECA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x0029B7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    // Overlapping static entry reached from 0xC1ECA3.
    case 0xC1ECA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ECA6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    // Overlapping static entry reached from 0xC1ECA5.
    case 0xC1ECA7: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ECA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    // Overlapping static entry reached from 0xC1ECA8.
    case 0xC1ECAA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ECAB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ECAD: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/system/saves/corruption_check.asm:31 LDX @LOCAL01
    case 0xC1ECB1: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/system/saves/corruption_check.asm:32 INX
    case 0xC1ECB3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:33 STX @LOCAL01
    case 0xC1ECB4: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/system/saves/corruption_check.asm:35 STX @VIRTUAL02
    case 0xC1ECB6: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/saves/corruption_check.asm:36 LDA #3
    case 0xC1ECB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/system/saves/corruption_check.asm:36 LDA #3
    // Overlapping static entry reached from 0xC1ECB8.
    case 0xC1ECBA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/saves/corruption_check.asm:37 CLC
    case 0xC1ECBB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:38 SBC @VIRTUAL02
    case 0xC1ECBC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/system/saves/corruption_check.asm:39 BRANCHGTS @LOOP_BEGIN
    case 0xC1ECBE: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/system/saves/corruption_check.asm:39 BRANCHGTS @LOOP_BEGIN
    case 0xC1ECC0: cpu.execute_instruction<0x10>(0x0000BC, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/system/saves/corruption_check.asm:39 BRANCHGTS @LOOP_BEGIN
    case 0xC1ECC2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/system/saves/corruption_check.asm:39 BRANCHGTS @LOOP_BEGIN
    case 0xC1ECC4: cpu.execute_instruction<0x30>(0x0000B8, 2); return true;
    // src/system/saves/corruption_check.asm:40 JSR CLOSE_FOCUS_WINDOW
    case 0xC1ECC6: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/system/saves/corruption_check.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ECC9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/corruption_check.asm:42 STZ CORRUPTION_CHECK_RESULTS
    case 0xC1ECCB: cpu.execute_instruction<0x9C>(0x00A17B, 3); return true;
    // src/system/saves/corruption_check.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC1ECCE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/saves/corruption_check.asm:44 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1ECD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/system/saves/corruption_check.asm:44 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1ECD0.
    case 0xC1ECD2: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/system/saves/corruption_check.asm:45 JSL UNKNOWN_C20ABC
    case 0xC1ECD3: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/system/saves/corruption_check.asm:45 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1ECD2.
    case 0xC1ECD6: cpu.execute_instruction<0xC2>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/corruption_check.asm:47 END_C_FUNCTION
    case 0xC1ECD7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/corruption_check.asm:47 END_C_FUNCTION
    case 0xC1ECD8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/erase_save_block.asm (source_named).
bool execute_system_saves_erase_save_block_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/saves/erase_save_block.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0F505: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xC0F507: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xC0F508: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xC0F509: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xC0F50A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F50A.
    case 0xC0F50C: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xC0F50D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xC0F50E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/erase_save_block.asm:13 LDY #$0500
    case 0xC0F50F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/erase_save_block.asm:13 LDY #$0500
    // Overlapping static entry reached from 0xC0F50C.
    case 0xC0F510: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/system/saves/erase_save_block.asm:13 LDY #$0500
    // Overlapping static entry reached from 0xC0F50F.
    case 0xC0F511: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/system/saves/erase_save_block.asm:14 JSL MULT16
    case 0xC0F512: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/system/saves/erase_save_block.asm:14 JSL MULT16
    // Overlapping static entry reached from 0xC0F511.
    case 0xC0F513: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/system/saves/erase_save_block.asm:14 JSL MULT16
    // Overlapping static entry reached from 0xC0F513.
    case 0xC0F515: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:15 STORE_INT1632 $0A
    case 0xC0F516: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:15 STORE_INT1632 $0A
    // Overlapping static entry reached from 0xC0F515.
    case 0xC0F517: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:15 STORE_INT1632 $0A
    case 0xC0F518: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/saves/erase_save_block.asm:16 CLC
    case 0xC0F51A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xC0F51B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xC0F51D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    // Overlapping static entry reached from 0xC0F51D.
    case 0xC0F51F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xC0F520: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xC0F522: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xC0F524: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    // Overlapping static entry reached from 0xC0F524.
    case 0xC0F526: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xC0F527: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:19 MOVE_INT $0A, $0E
    case 0xC0F529: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:19 MOVE_INT $0A, $0E
    case 0xC0F52B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:19 MOVE_INT $0A, $0E
    case 0xC0F52D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:19 MOVE_INT $0A, $0E
    case 0xC0F52F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/erase_save_block.asm:24 LDX #$0500
    case 0xC0F531: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000500, 3); return true;
    // src/system/saves/erase_save_block.asm:24 LDX #$0500
    // Overlapping static entry reached from 0xC0F531.
    case 0xC0F533: cpu.execute_instruction<0x05>(0x0000E2, 2); return true;
    // src/system/saves/erase_save_block.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F534: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/erase_save_block.asm:25 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F533.
    case 0xC0F535: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/system/saves/erase_save_block.asm:26 LDA #$0000
    case 0xC0F536: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/saves/erase_save_block.asm:27 JSL MEMSET24
    case 0xC0F538: cpu.execute_instruction<0x22>(0xC08F06, 4); return true;
    // src/system/saves/erase_save_block.asm:27 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F536.
    case 0xC0F539: cpu.execute_instruction<0x06>(0x00008F, 2); return true;
    // src/system/saves/erase_save_block.asm:27 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F539.
    case 0xC0F53B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00EDA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    case 0xC0F53C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x00F4ED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xC0F53B.
    case 0xC0F53D: cpu.execute_instruction<0xED>(0x0085F4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xC0F53C.
    case 0xC0F53E: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    case 0xC0F53F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xC0F53D.
    case 0xC0F540: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    case 0xC0F541: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xC0F540.
    case 0xC0F542: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xC0F541.
    case 0xC0F543: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    case 0xC0F544: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xC0F542.
    case 0xC0F545: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:33 MOVE_INT $06, $0E
    case 0xC0F546: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:33 MOVE_INT $06, $0E
    case 0xC0F548: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:33 MOVE_INT $06, $0E
    case 0xC0F54A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:33 MOVE_INT $06, $0E
    case 0xC0F54C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/erase_save_block.asm:34 JSL STRLEN
    case 0xC0F54E: cpu.execute_instruction<0x22>(0xC08F13, 4); return true;
    // src/system/saves/erase_save_block.asm:35 STA $16
    case 0xC0F552: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:37 MOVE_INT $0A, $0E
    case 0xC0F554: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:37 MOVE_INT $0A, $0E
    case 0xC0F556: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:37 MOVE_INT $0A, $0E
    case 0xC0F558: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:37 MOVE_INT $0A, $0E
    case 0xC0F55A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:43 MOVE_INT $06, @LOCAL01
    case 0xC0F55C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:43 MOVE_INT $06, @LOCAL01
    case 0xC0F55E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:43 MOVE_INT $06, @LOCAL01
    case 0xC0F560: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:43 MOVE_INT $06, @LOCAL01
    case 0xC0F562: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/erase_save_block.asm:44 LDA $16
    case 0xC0F564: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/saves/erase_save_block.asm:45 JSL MEMCPY24
    case 0xC0F566: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/system/saves/erase_save_block.asm:46 PLD
    case 0xC0F56A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/saves/erase_save_block.asm:47 RTS
    case 0xC0F56B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/erase_save_slot.asm (source_named).
bool execute_system_saves_erase_save_slot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/erase_save_slot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0FB00: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xC0FB02: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xC0FB03: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xC0FB04: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xC0FB05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0FB05.
    case 0xC0FB07: cpu.execute_instruction<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xC0FB08: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xC0FB09: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:8 ASL
    case 0xC0FB0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:9 TAX
    case 0xC0FB0B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:10 STX @LOCAL00
    case 0xC0FB0C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/erase_save_slot.asm:11 TXA
    case 0xC0FB0E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:12 JSR ERASE_SAVE_BLOCK
    case 0xC0FB0F: cpu.execute_instruction<0x20>(0x00F505, 3); return true;
    // src/system/saves/erase_save_slot.asm:13 LDX @LOCAL00
    case 0xC0FB12: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/erase_save_slot.asm:14 TXA
    case 0xC0FB14: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:15 INC
    case 0xC0FB15: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:16 JSR ERASE_SAVE_BLOCK
    case 0xC0FB16: cpu.execute_instruction<0x20>(0x00F505, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/erase_save_slot.asm:17 END_C_FUNCTION
    case 0xC0FB19: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/saves/erase_save_slot.asm:17 END_C_FUNCTION
    case 0xC0FB1A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/load_game_slot.asm (source_named).
bool execute_system_saves_load_game_slot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/saves/load_game_slot.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0F97D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xC0F97F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xC0F980: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xC0F981: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xC0F982: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F982.
    case 0xC0F984: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xC0F985: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xC0F986: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:19 LDY #$0A00
    case 0xC0F987: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000A00, 3); return true;
    // src/system/saves/load_game_slot.asm:19 LDY #$0A00
    // Overlapping static entry reached from 0xC0F984.
    case 0xC0F988: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/system/saves/load_game_slot.asm:19 LDY #$0A00
    // Overlapping static entry reached from 0xC0F987.
    case 0xC0F989: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:20 JSL MULT16
    case 0xC0F98A: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:21 STORE_INT1632 @VIRTUAL06
    case 0xC0F98E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:21 STORE_INT1632 @VIRTUAL06
    case 0xC0F990: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/system/saves/load_game_slot.asm:22 CLC
    case 0xC0F992: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xC0F993: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xC0F995: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    // Overlapping static entry reached from 0xC0F995.
    case 0xC0F997: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xC0F998: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xC0F99A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xC0F99C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    // Overlapping static entry reached from 0xC0F99C.
    case 0xC0F99E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xC0F99F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:24 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0F9A1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:24 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0F9A3: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:24 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0F9A5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:24 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0F9A7: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F9A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x009AA9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F9A9.
    case 0xC0F9AB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F9AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F9AE: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F9AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F9B1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F9B2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F9B4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/load_game_slot.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC0F9B6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F9B8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F9BA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F9BC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F9BE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:29 LDA #$007E
    case 0xC0F9C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/load_game_slot.asm:29 LDA #$007E
    // Overlapping static entry reached from 0xC0F9C0.
    case 0xC0F9C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/saves/load_game_slot.asm:30 STA @LOCAL02 + 2
    case 0xC0F9C3: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:40 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0F9C5: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:40 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0F9C7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:40 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0F9C9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:40 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0F9CB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:41 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0F9CD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:41 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0F9CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:41 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0F9D1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:41 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0F9D3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:42 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0F9D5: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:42 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0F9D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:42 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0F9D9: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:42 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0F9DB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F9DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F9DF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F9E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F9E3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/load_game_slot.asm:44 LDA #.SIZEOF(game_state)
    case 0xC0F9E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0001D6, 3); return true;
    // src/system/saves/load_game_slot.asm:44 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xC0F9E5.
    case 0xC0F9E7: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/system/saves/load_game_slot.asm:45 JSL MEMCPY24
    case 0xC0F9E8: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/system/saves/load_game_slot.asm:45 JSL MEMCPY24
    // Overlapping static entry reached from 0xC0F9E7.
    case 0xC0F9E9: cpu.execute_instruction<0xDE>(0x00C08E, 3); return true;
    // src/system/saves/load_game_slot.asm:46 LDA #.SIZEOF(game_state)
    case 0xC0F9EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0001D6, 3); return true;
    // src/system/saves/load_game_slot.asm:46 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xC0F9EC.
    case 0xC0F9EE: cpu.execute_instruction<0x01>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:47 CLC
    case 0xC0F9EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:48 ADC @VIRTUAL06
    case 0xC0F9F0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:49 STA @VIRTUAL06
    case 0xC0F9F2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:50 STA @LOCAL03
    case 0xC0F9F4: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/saves/load_game_slot.asm:51 LDA @VIRTUAL06 + 2
    case 0xC0F9F6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/saves/load_game_slot.asm:52 STA @LOCAL03 + 2
    case 0xC0F9F8: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F9FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x009C7F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F9FA.
    case 0xC0F9FC: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F9FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F9FF: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0FA00: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0FA02: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0FA03: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0FA05: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/load_game_slot.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC0FA07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:55 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0FA09: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:55 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0FA0B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:55 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0FA0D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:55 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0FA0F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:56 LDA #$007E
    case 0xC0FA11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/load_game_slot.asm:56 LDA #$007E
    // Overlapping static entry reached from 0xC0FA11.
    case 0xC0FA13: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/saves/load_game_slot.asm:58 STA @LOCAL02 + 2
    case 0xC0FA14: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:63 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0FA16: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:63 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0FA18: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:63 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0FA1A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:63 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0FA1C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:64 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0FA1E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:64 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0FA20: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:64 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0FA22: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:64 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0FA24: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:65 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FA26: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:65 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FA28: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:65 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FA2A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:65 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FA2C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:66 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0FA2E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:66 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0FA30: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:66 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0FA32: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:66 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0FA34: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/load_game_slot.asm:67 LDA #.SIZEOF(char_struct)*6
    case 0xC0FA36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000234, 3); return true;
    // src/system/saves/load_game_slot.asm:67 LDA #.SIZEOF(char_struct)*6
    // Overlapping static entry reached from 0xC0FA36.
    case 0xC0FA38: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/system/saves/load_game_slot.asm:68 JSL MEMCPY24
    case 0xC0FA39: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/system/saves/load_game_slot.asm:69 LDA #.SIZEOF(char_struct)*6
    case 0xC0FA3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000234, 3); return true;
    // src/system/saves/load_game_slot.asm:69 LDA #.SIZEOF(char_struct)*6
    // Overlapping static entry reached from 0xC0FA3D.
    case 0xC0FA3F: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:70 CLC
    case 0xC0FA40: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:71 ADC @VIRTUAL06
    case 0xC0FA41: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:72 STA @VIRTUAL06
    case 0xC0FA43: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:73 STA @LOCAL03
    case 0xC0FA45: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/saves/load_game_slot.asm:74 LDA @VIRTUAL06 + 2
    case 0xC0FA47: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/saves/load_game_slot.asm:75 STA @LOCAL03 + 2
    case 0xC0FA49: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0FA4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x009EB3, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FA4B.
    case 0xC0FA4D: cpu.execute_instruction<0x9E>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0FA4E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0FA50: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0FA51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0FA53: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0FA54: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0FA56: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/load_game_slot.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC0FA58: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:78 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0FA5A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:78 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0FA5C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:78 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0FA5E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:78 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0FA60: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:79 LDA #$007E
    case 0xC0FA62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/load_game_slot.asm:79 LDA #$007E
    // Overlapping static entry reached from 0xC0FA62.
    case 0xC0FA64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/saves/load_game_slot.asm:81 STA @LOCAL02 + 2
    case 0xC0FA65: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:86 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0FA67: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:86 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0FA69: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:86 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0FA6B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:86 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xC0FA6D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:87 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0FA6F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:87 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0FA71: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:87 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0FA73: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:87 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xC0FA75: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:88 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FA77: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:88 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FA79: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:88 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FA7B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:88 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FA7D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:89 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0FA7F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:89 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0FA81: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:89 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0FA83: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:89 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0FA85: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/load_game_slot.asm:90 LDA #$0080
    case 0xC0FA87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/system/saves/load_game_slot.asm:90 LDA #$0080
    // Overlapping static entry reached from 0xC0FA87.
    case 0xC0FA89: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/saves/load_game_slot.asm:91 JSL MEMCPY24
    case 0xC0FA8A: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:92 MOVE_INT GAME_STATE + game_state::timer, @VIRTUAL06
    case 0xC0FA8E: cpu.execute_instruction<0xAD>(0x009C7A, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:92 MOVE_INT GAME_STATE + game_state::timer, @VIRTUAL06
    case 0xC0FA91: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:92 MOVE_INT GAME_STATE + game_state::timer, @VIRTUAL06
    case 0xC0FA93: cpu.execute_instruction<0xAD>(0x009C7C, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:92 MOVE_INT GAME_STATE + game_state::timer, @VIRTUAL06
    case 0xC0FA96: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:93 MOVE_INT @VIRTUAL06, TIMER
    case 0xC0FA98: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:93 MOVE_INT @VIRTUAL06, TIMER
    case 0xC0FA9A: cpu.execute_instruction<0x8D>(0x0000A7, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:93 MOVE_INT @VIRTUAL06, TIMER
    case 0xC0FA9D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:93 MOVE_INT @VIRTUAL06, TIMER
    case 0xC0FA9F: cpu.execute_instruction<0x8D>(0x0000A9, 3); return true;
    // src/system/saves/load_game_slot.asm:94 PLD
    case 0xC0FAA2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:95 RTL
    case 0xC0FAA3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/save_game_block.asm (source_named).
bool execute_system_saves_save_game_block_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/save_game_block.asm:3 BEGIN_C_FUNCTION
    case 0xC0F7B3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xC0F7B5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xC0F7B6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xC0F7B7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xC0F7B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F7B8.
    case 0xC0F7BA: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xC0F7BB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xC0F7BC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:15 TAX
    case 0xC0F7BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:16 STX @LOCAL05
    case 0xC0F7BE: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:22 MOVE_INT TIMER, @VIRTUAL06
    case 0xC0F7C0: cpu.execute_instruction<0xAD>(0x0000A7, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:22 MOVE_INT TIMER, @VIRTUAL06
    case 0xC0F7C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:22 MOVE_INT TIMER, @VIRTUAL06
    case 0xC0F7C5: cpu.execute_instruction<0xAD>(0x0000A9, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:22 MOVE_INT TIMER, @VIRTUAL06
    case 0xC0F7C8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:23 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::timer
    case 0xC0F7CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:23 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::timer
    case 0xC0F7CC: cpu.execute_instruction<0x8D>(0x009C7A, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:23 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::timer
    case 0xC0F7CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:23 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::timer
    case 0xC0F7D1: cpu.execute_instruction<0x8D>(0x009C7C, 3); return true;
    // src/system/saves/save_game_block.asm:25 LDY #.SIZEOF(save_block)
    case 0xC0F7D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/save_game_block.asm:25 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F7D4.
    case 0xC0F7D6: cpu.execute_instruction<0x05>(0x0000A6, 2); return true;
    // src/system/saves/save_game_block.asm:26 LDX @LOCAL05
    case 0xC0F7D7: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:26 LDX @LOCAL05
    // Overlapping static entry reached from 0xC0F7D6.
    case 0xC0F7D8: cpu.execute_instruction<0x20>(0x00228A, 3); return true;
    // src/system/saves/save_game_block.asm:27 TXA
    case 0xC0F7D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:33 JSL MULT16
    case 0xC0F7DA: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/system/saves/save_game_block.asm:33 JSL MULT16
    // Overlapping static entry reached from 0xC0F7D8.
    case 0xC0F7DB: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/system/saves/save_game_block.asm:33 JSL MULT16
    // Overlapping static entry reached from 0xC0F7DB.
    case 0xC0F7DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:34 STORE_INT1632 @VIRTUAL0A
    case 0xC0F7DE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:34 STORE_INT1632 @VIRTUAL0A
    // Overlapping static entry reached from 0xC0F7DD.
    case 0xC0F7DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/save_game_block.asm:34 STORE_INT1632 @VIRTUAL0A
    case 0xC0F7E0: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F7E2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F7E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F7E6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F7E8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:36 CLC
    case 0xC0F7EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F7EB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F7ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F7ED.
    case 0xC0F7EF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F7F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F7F2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F7F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F7F4.
    case 0xC0F7F6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F7F7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:38 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F7F9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:38 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F7FB: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:38 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F7FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:38 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F7FF: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F801: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x009AA9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F801.
    case 0xC0F803: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F804: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F806: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F807: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F809: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F80A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xC0F80C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/save_game_block.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC0F80E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F810: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F812: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F814: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F816: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/save_game_block.asm:43 LDA #.HIWORD(__BSS_START__)
    case 0xC0F818: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/save_game_block.asm:43 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC0F818.
    case 0xC0F81A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/saves/save_game_block.asm:44 STA @LOCAL02+2
    case 0xC0F81B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F81D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F81F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F821: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F823: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F825: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F827: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F829: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F82B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F82D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F82F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F831: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F833: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F835: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F837: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F839: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F83B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/save_game_block.asm:58 LDA #.SIZEOF(game_state)
    case 0xC0F83D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0001D6, 3); return true;
    // src/system/saves/save_game_block.asm:58 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xC0F83D.
    case 0xC0F83F: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:59 JSL MEMCPY24
    case 0xC0F840: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/system/saves/save_game_block.asm:59 JSL MEMCPY24
    // Overlapping static entry reached from 0xC0F83F.
    case 0xC0F841: cpu.execute_instruction<0xDE>(0x00C08E, 3); return true;
    // src/system/saves/save_game_block.asm:60 LDA #.SIZEOF(game_state)
    case 0xC0F844: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0001D6, 3); return true;
    // src/system/saves/save_game_block.asm:60 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xC0F844.
    case 0xC0F846: cpu.execute_instruction<0x01>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F847: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F846.
    case 0xC0F848: cpu.execute_instruction<0x1C>(0x000686, 3); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F849: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F84B: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F84D: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:62 CLC
    case 0xC0F84F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:63 ADC @VIRTUAL06
    case 0xC0F850: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:64 STA @VIRTUAL06
    case 0xC0F852: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:65 STA @LOCAL04
    case 0xC0F854: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/saves/save_game_block.asm:66 LDA @VIRTUAL06+2
    case 0xC0F856: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:67 STA @LOCAL04+2
    case 0xC0F858: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F85A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x009C7F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F85A.
    case 0xC0F85C: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F85D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F85F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F860: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F862: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F863: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xC0F865: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/save_game_block.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC0F867: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:70 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F869: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:70 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F86B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:70 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F86D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:70 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F86F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/save_game_block.asm:71 LDA #.HIWORD(__BSS_START__)
    case 0xC0F871: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/save_game_block.asm:71 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC0F871.
    case 0xC0F873: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/saves/save_game_block.asm:73 STA @LOCAL02+2
    case 0xC0F874: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:78 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F876: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:78 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F878: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:78 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F87A: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:78 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F87C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F87E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F880: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F882: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F884: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:80 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F886: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:80 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F888: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:80 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F88A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:80 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F88C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:81 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F88E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:81 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F890: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:81 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F892: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:81 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F894: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/save_game_block.asm:82 LDA #.SIZEOF(char_struct) * 6
    case 0xC0F896: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000234, 3); return true;
    // src/system/saves/save_game_block.asm:82 LDA #.SIZEOF(char_struct) * 6
    // Overlapping static entry reached from 0xC0F896.
    case 0xC0F898: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:83 JSL MEMCPY24
    case 0xC0F899: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/system/saves/save_game_block.asm:84 LDA #.SIZEOF(char_struct) * 6
    case 0xC0F89D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000234, 3); return true;
    // src/system/saves/save_game_block.asm:84 LDA #.SIZEOF(char_struct) * 6
    // Overlapping static entry reached from 0xC0F89D.
    case 0xC0F89F: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/saves/save_game_block.asm:85 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F8A0: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/system/saves/save_game_block.asm:85 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F8A2: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/system/saves/save_game_block.asm:85 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F8A4: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/system/saves/save_game_block.asm:85 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F8A6: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:86 CLC
    case 0xC0F8A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:87 ADC @VIRTUAL06
    case 0xC0F8A9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:88 STA @VIRTUAL06
    case 0xC0F8AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:89 STA @LOCAL04
    case 0xC0F8AD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/saves/save_game_block.asm:90 LDA @VIRTUAL06+2
    case 0xC0F8AF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:91 STA @LOCAL04+2
    case 0xC0F8B1: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0F8B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x009EB3, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F8B3.
    case 0xC0F8B5: cpu.execute_instruction<0x9E>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0F8B6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0F8B8: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0F8B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0F8BB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0F8BC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xC0F8BE: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/save_game_block.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC0F8C0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:94 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F8C2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:94 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F8C4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:94 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F8C6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:94 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0F8C8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/save_game_block.asm:95 LDA #.HIWORD(__BSS_START__)
    case 0xC0F8CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/save_game_block.asm:95 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC0F8CA.
    case 0xC0F8CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/saves/save_game_block.asm:97 STA @LOCAL02+2
    case 0xC0F8CD: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:102 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F8CF: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:102 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F8D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:102 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F8D3: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:102 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F8D5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F8D7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F8D9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F8DB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F8DD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:104 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F8DF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:104 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F8E1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:104 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F8E3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:104 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0F8E5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F8E7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F8E9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F8EB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F8ED: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/save_game_block.asm:106 LDA #.SIZEOF(save_block::event_flags)
    case 0xC0F8EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/system/saves/save_game_block.asm:106 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xC0F8EF.
    case 0xC0F8F1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:107 JSL MEMCPY24
    case 0xC0F8F2: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F8F6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F8F8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F8FA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F8FC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:109 CLC
    case 0xC0F8FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F8FF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F901: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00601C, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F901.
    case 0xC0F903: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F904: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F906: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F908: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F908.
    case 0xC0F90A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F90B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:112 LDX @LOCAL05
    case 0xC0F90D: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:113 TXA
    case 0xC0F90F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:118 JSR CALC_SAVE_BLOCK_ADD_CHECKSUM
    case 0xC0F910: cpu.execute_instruction<0x20>(0x00F658, 3); return true;
    // src/system/saves/save_game_block.asm:120 TAY
    case 0xC0F913: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:121 STY @LOCAL03
    case 0xC0F914: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:122 TYA
    case 0xC0F916: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:128 STA [@VIRTUAL06]
    case 0xC0F917: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:130 LDX @LOCAL05
    case 0xC0F919: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:131 TXA
    case 0xC0F91B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:136 JSR CALC_SAVE_BLOCK_ADD_CHECKSUM
    case 0xC0F91C: cpu.execute_instruction<0x20>(0x00F658, 3); return true;
    // src/system/saves/save_game_block.asm:137 STA @VIRTUAL02
    case 0xC0F91F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/save_game_block.asm:139 LDY @LOCAL03
    case 0xC0F921: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:140 TYA
    case 0xC0F923: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:145 CMP @VIRTUAL02
    case 0xC0F924: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/saves/save_game_block.asm:146 BNEL @UNKNOWN0
    case 0xC0F926: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/saves/save_game_block.asm:146 BNEL @UNKNOWN0
    case 0xC0F928: cpu.execute_instruction<0x4C>(0x00F7C0, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F92B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F92D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F92F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F931: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:148 CLC
    case 0xC0F933: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xC0F934: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xC0F936: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00601E, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F936.
    case 0xC0F938: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xC0F939: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xC0F93B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xC0F93D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F93D.
    case 0xC0F93F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xC0F940: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:151 LDX @LOCAL05
    case 0xC0F942: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:152 TXA
    case 0xC0F944: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:157 JSR CALC_SAVE_BLOCK_XOR_CHECKSUM
    case 0xC0F945: cpu.execute_instruction<0x20>(0x00F69F, 3); return true;
    // src/system/saves/save_game_block.asm:159 TAY
    case 0xC0F948: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:160 STY @LOCAL03
    case 0xC0F949: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:161 TYA
    case 0xC0F94B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:167 STA [@VIRTUAL06]
    case 0xC0F94C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:169 LDX @LOCAL05
    case 0xC0F94E: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:170 TXA
    case 0xC0F950: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:175 JSR CALC_SAVE_BLOCK_XOR_CHECKSUM
    case 0xC0F951: cpu.execute_instruction<0x20>(0x00F69F, 3); return true;
    // src/system/saves/save_game_block.asm:176 STA @VIRTUAL02
    case 0xC0F954: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/save_game_block.asm:178 LDY @LOCAL03
    case 0xC0F956: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:179 TYA
    case 0xC0F958: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:184 CMP @VIRTUAL02
    case 0xC0F959: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/saves/save_game_block.asm:185 BNEL @UNKNOWN0
    case 0xC0F95B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/saves/save_game_block.asm:185 BNEL @UNKNOWN0
    case 0xC0F95D: cpu.execute_instruction<0x4C>(0x00F7C0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/save_game_block.asm:186 END_C_FUNCTION
    case 0xC0F960: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/save_game_block.asm:186 END_C_FUNCTION
    case 0xC0F961: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/save_game_slot.asm (source_named).
bool execute_system_saves_save_game_slot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/save_game_slot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F962: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xC0F964: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xC0F965: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xC0F966: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xC0F967: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F967.
    case 0xC0F969: cpu.execute_instruction<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xC0F96A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xC0F96B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:8 ASL
    case 0xC0F96C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:9 TAX
    case 0xC0F96D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:10 STX @LOCAL00
    case 0xC0F96E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/save_game_slot.asm:11 TXA
    case 0xC0F970: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:12 JSR SAVE_GAME_BLOCK
    case 0xC0F971: cpu.execute_instruction<0x20>(0x00F7B3, 3); return true;
    // src/system/saves/save_game_slot.asm:13 LDX @LOCAL00
    case 0xC0F974: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/save_game_slot.asm:14 TXA
    case 0xC0F976: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:15 INC
    case 0xC0F977: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:16 JSR SAVE_GAME_BLOCK
    case 0xC0F978: cpu.execute_instruction<0x20>(0x00F7B3, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/save_game_slot.asm:17 END_C_FUNCTION
    case 0xC0F97B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/saves/save_game_slot.asm:17 END_C_FUNCTION
    case 0xC0F97C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/validate_save_block_checksums.asm (source_named).
bool execute_system_saves_validate_save_block_checksums_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:3 BEGIN_C_FUNCTION
    case 0xC0F6E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xC0F6E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xC0F6E7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xC0F6E8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xC0F6E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F6E9.
    case 0xC0F6EB: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xC0F6EC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xC0F6ED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:9 TAX
    case 0xC0F6EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:10 STX @LOCAL00
    case 0xC0F6EF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:11 TXA
    case 0xC0F6F1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:12 JSR CALC_SAVE_BLOCK_ADD_CHECKSUM
    case 0xC0F6F2: cpu.execute_instruction<0x20>(0x00F658, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:13 STA @VIRTUAL04
    case 0xC0F6F5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:14 LDX @LOCAL00
    case 0xC0F6F7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:15 TXA
    case 0xC0F6F9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:16 JSR CALC_SAVE_BLOCK_XOR_CHECKSUM
    case 0xC0F6FA: cpu.execute_instruction<0x20>(0x00F69F, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:17 STA @VIRTUAL02
    case 0xC0F6FD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:18 LDY #.SIZEOF(save_block)
    case 0xC0F6FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:18 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F6FF.
    case 0xC0F701: cpu.execute_instruction<0x05>(0x0000A6, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:19 LDX @LOCAL00
    case 0xC0F702: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:19 LDX @LOCAL00
    // Overlapping static entry reached from 0xC0F701.
    case 0xC0F703: cpu.execute_instruction<0x0E>(0x00228A, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:20 TXA
    case 0xC0F704: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:21 JSL MULT16
    case 0xC0F705: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/system/saves/validate_save_block_checksums.asm:21 JSL MULT16
    // Overlapping static entry reached from 0xC0F703.
    case 0xC0F706: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:21 JSL MULT16
    // Overlapping static entry reached from 0xC0F706.
    case 0xC0F708: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xC0F709: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:22 STORE_INT1632 @VIRTUAL0A
    // Overlapping static entry reached from 0xC0F708.
    case 0xC0F70A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xC0F70B: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F70D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F70F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F711: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0F713: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:24 CLC
    case 0xC0F715: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F716: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F718: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00601C, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F718.
    case 0xC0F71A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F71B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F71D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F71F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DF7A.
    case 0xC0F720: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F71F.
    case 0xC0F721: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xC0F722: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:26 CLC
    case 0xC0F724: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xC0F725: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xC0F727: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00601E, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0F727.
    case 0xC0F729: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xC0F72A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xC0F72C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xC0F72E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0F72E.
    case 0xC0F730: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xC0F731: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:28 LDA [@VIRTUAL06]
    case 0xC0F733: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:29 CMP @VIRTUAL04
    case 0xC0F735: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:30 BNE @UNKNOWN0
    case 0xC0F737: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:31 LDA [@VIRTUAL0A]
    case 0xC0F739: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:32 CMP @VIRTUAL02
    case 0xC0F73B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:33 BEQ @UNKNOWN1
    case 0xC0F73D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:35 LDA #.LOWORD(-1)
    case 0xC0F73F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0F73F.
    case 0xC0F741: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/system/saves/validate_save_block_checksums.asm:36 BRA @UNKNOWN2
    case 0xC0F742: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:38 LDA #0
    case 0xC0F744: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:38 LDA #0
    // Overlapping static entry reached from 0xC0F741.
    case 0xC0F745: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:38 LDA #0
    // Overlapping static entry reached from 0xC0F744.
    case 0xC0F746: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:40 END_C_FUNCTION
    case 0xC0F747: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:40 END_C_FUNCTION
    case 0xC0F748: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/sbrk.asm (source_named).
bool execute_system_sbrk_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/sbrk.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC086D7: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/sbrk.asm:4 TAY
    case 0xC086D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/sbrk.asm:6 TYA
    case 0xC086DA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/sbrk.asm:7 CLC
    case 0xC086DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/sbrk.asm:8 ADC CURRENT_HEAP_ADDRESS
    case 0xC086DC: cpu.execute_instruction<0x6D>(0x0000A1, 3); return true;
    // src/system/sbrk.asm:9 SEC
    case 0xC086DF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/sbrk.asm:10 SBC #HEAPSIZE
    case 0xC086E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000400, 3); return true;
    // src/system/sbrk.asm:10 SBC #HEAPSIZE
    // Overlapping static entry reached from 0xC086E0.
    case 0xC086E2: cpu.execute_instruction<0x04>(0x0000CD, 2); return true;
    // src/system/sbrk.asm:11 CMP BASE_HEAP_ADDRESS
    case 0xC086E3: cpu.execute_instruction<0xCD>(0x0000A3, 3); return true;
    // src/system/sbrk.asm:11 CMP BASE_HEAP_ADDRESS
    // Overlapping static entry reached from 0xC086E2.
    case 0xC086E4: cpu.execute_instruction<0xA3>(0x000000, 2); return true;
    // src/system/sbrk.asm:12 BCS @UNKNOWN1
    case 0xC086E6: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/system/sbrk.asm:13 ADC #HEAPSIZE
    case 0xC086E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000400, 3); return true;
    // src/system/sbrk.asm:13 ADC #HEAPSIZE
    // Overlapping static entry reached from 0xC086E8.
    case 0xC086EA: cpu.execute_instruction<0x04>(0x0000AC, 2); return true;
    // src/system/sbrk.asm:14 LDY CURRENT_HEAP_ADDRESS
    case 0xC086EB: cpu.execute_instruction<0xAC>(0x0000A1, 3); return true;
    // src/system/sbrk.asm:14 LDY CURRENT_HEAP_ADDRESS
    // Overlapping static entry reached from 0xC086EA.
    case 0xC086EC: cpu.execute_instruction<0xA1>(0x000000, 2); return true;
    // src/system/sbrk.asm:15 STA CURRENT_HEAP_ADDRESS
    case 0xC086EE: cpu.execute_instruction<0x8D>(0x0000A1, 3); return true;
    // src/system/sbrk.asm:16 TYA
    case 0xC086F1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/sbrk.asm:17 RTL
    case 0xC086F2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/sbrk.asm:19 LDA NEW_FRAME_STARTED
    case 0xC086F3: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/system/sbrk.asm:20 BEQ @UNKNOWN1
    case 0xC086F6: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/system/sbrk.asm:21 STZ NEW_FRAME_STARTED
    case 0xC086F8: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/system/sbrk.asm:22 BRA @UNKNOWN0
    case 0xC086FB: cpu.execute_instruction<0x80>(0x0000DD, 2); return true;
    // src/system/sbrk.asm:23 PHP
    case 0xC086FD: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/sbrk.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC086FE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/sbrk.asm:25 LDA NMITIMEN_MIRROR
    case 0xC08700: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/system/sbrk.asm:26 AND #$007F
    case 0xC08703: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x008D7F, 3); return true;
    // src/system/sbrk.asm:27 STA NMITIMEN_MIRROR
    case 0xC08705: cpu.execute_instruction<0x8D>(0x00001E, 3); return true;
    // src/system/sbrk.asm:27 STA NMITIMEN_MIRROR
    // Overlapping static entry reached from 0xC08703.
    case 0xC08706: cpu.execute_instruction<0x1E>(0x008F00, 3); return true;
    // src/system/sbrk.asm:28 STA f:NMITIMEN
    case 0xC08708: cpu.execute_instruction<0x8F>(0x004200, 4); return true;
    // src/system/sbrk.asm:28 STA f:NMITIMEN
    // Overlapping static entry reached from 0xC08706.
    case 0xC08709: cpu.execute_instruction<0x00>(0x000042, 2); return true;
    // src/system/sbrk.asm:29 PLP
    case 0xC0870C: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/sbrk.asm:30 RTL
    case 0xC0870D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_bg1_vram_location.asm (source_named).
bool execute_system_set_bg1_vram_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_bg1_vram_location.asm:3 PHP
    case 0xC08D8F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D90: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:5 REP #PROC_FLAGS::INDEX8
    case 0xC08D92: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/set_bg1_vram_location.asm:6 AND #$0003
    case 0xC08D94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008D03, 3); return true;
    // src/system/set_bg1_vram_location.asm:7 STA BG1SC_MIRROR
    case 0xC08D96: cpu.execute_instruction<0x8D>(0x000011, 3); return true;
    // src/system/set_bg1_vram_location.asm:7 STA BG1SC_MIRROR
    // Overlapping static entry reached from 0xC08D94.
    case 0xC08D97: cpu.execute_instruction<0x11>(0x000000, 2); return true;
    // src/system/set_bg1_vram_location.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC08D99: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:9 TXA
    case 0xC08D9B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:10 XBA
    case 0xC08D9C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D9D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:12 AND #$00FC
    case 0xC08D9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x000DFC, 3); return true;
    // src/system/set_bg1_vram_location.asm:13 ORA BG1SC_MIRROR
    case 0xC08DA1: cpu.execute_instruction<0x0D>(0x000011, 3); return true;
    // src/system/set_bg1_vram_location.asm:13 ORA BG1SC_MIRROR
    // Overlapping static entry reached from 0xC08D9F.
    case 0xC08DA2: cpu.execute_instruction<0x11>(0x000000, 2); return true;
    // src/system/set_bg1_vram_location.asm:14 STA BG1SC_MIRROR
    case 0xC08DA4: cpu.execute_instruction<0x8D>(0x000011, 3); return true;
    // src/system/set_bg1_vram_location.asm:15 STA f:BG1SC
    case 0xC08DA7: cpu.execute_instruction<0x8F>(0x002107, 4); return true;
    // src/system/set_bg1_vram_location.asm:16 LDA BG12NBA_MIRROR
    case 0xC08DAB: cpu.execute_instruction<0xAD>(0x000015, 3); return true;
    // src/system/set_bg1_vram_location.asm:17 AND #$00F0
    case 0xC08DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x008DF0, 3); return true;
    // src/system/set_bg1_vram_location.asm:18 STA BG12NBA_MIRROR
    case 0xC08DB0: cpu.execute_instruction<0x8D>(0x000015, 3); return true;
    // src/system/set_bg1_vram_location.asm:18 STA BG12NBA_MIRROR
    // Overlapping static entry reached from 0xC08DAE.
    case 0xC08DB1: cpu.execute_instruction<0x15>(0x000000, 2); return true;
    // src/system/set_bg1_vram_location.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC08DB3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:20 STZ BG1_X_POS
    case 0xC08DB5: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/system/set_bg1_vram_location.asm:21 STZ BG1_Y_POS
    case 0xC08DB8: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/system/set_bg1_vram_location.asm:22 TYA
    case 0xC08DBB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:23 XBA
    case 0xC08DBC: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC08DBD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:25 LSR
    case 0xC08DBF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:26 LSR
    case 0xC08DC0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:27 LSR
    case 0xC08DC1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:28 LSR
    case 0xC08DC2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:29 ORA BG12NBA_MIRROR
    case 0xC08DC3: cpu.execute_instruction<0x0D>(0x000015, 3); return true;
    // src/system/set_bg1_vram_location.asm:30 STA BG12NBA_MIRROR
    case 0xC08DC6: cpu.execute_instruction<0x8D>(0x000015, 3); return true;
    // src/system/set_bg1_vram_location.asm:31 STA f:BG12NBA
    case 0xC08DC9: cpu.execute_instruction<0x8F>(0x00210B, 4); return true;
    // src/system/set_bg1_vram_location.asm:32 PLP
    case 0xC08DCD: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:33 RTL
    case 0xC08DCE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_bg2_vram_location.asm (source_named).
bool execute_system_set_bg2_vram_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_bg2_vram_location.asm:3 PHP
    case 0xC08DCF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08DD0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:5 REP #PROC_FLAGS::INDEX8
    case 0xC08DD2: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/set_bg2_vram_location.asm:6 AND #$0003
    case 0xC08DD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008D03, 3); return true;
    // src/system/set_bg2_vram_location.asm:7 STA BG2SC_MIRROR
    case 0xC08DD6: cpu.execute_instruction<0x8D>(0x000012, 3); return true;
    // src/system/set_bg2_vram_location.asm:7 STA BG2SC_MIRROR
    // Overlapping static entry reached from 0xC08DD4.
    case 0xC08DD7: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/system/set_bg2_vram_location.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC08DD9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:9 TXA
    case 0xC08DDB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:10 XBA
    case 0xC08DDC: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC08DDD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:12 AND #$00FC
    case 0xC08DDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x000DFC, 3); return true;
    // src/system/set_bg2_vram_location.asm:13 ORA BG2SC_MIRROR
    case 0xC08DE1: cpu.execute_instruction<0x0D>(0x000012, 3); return true;
    // src/system/set_bg2_vram_location.asm:13 ORA BG2SC_MIRROR
    // Overlapping static entry reached from 0xC08DDF.
    case 0xC08DE2: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/system/set_bg2_vram_location.asm:14 STA BG2SC_MIRROR
    case 0xC08DE4: cpu.execute_instruction<0x8D>(0x000012, 3); return true;
    // src/system/set_bg2_vram_location.asm:15 STA f:BG2SC
    case 0xC08DE7: cpu.execute_instruction<0x8F>(0x002108, 4); return true;
    // src/system/set_bg2_vram_location.asm:16 LDA BG12NBA_MIRROR
    case 0xC08DEB: cpu.execute_instruction<0xAD>(0x000015, 3); return true;
    // src/system/set_bg2_vram_location.asm:17 AND #$000F
    case 0xC08DEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x008D0F, 3); return true;
    // src/system/set_bg2_vram_location.asm:18 STA BG12NBA_MIRROR
    case 0xC08DF0: cpu.execute_instruction<0x8D>(0x000015, 3); return true;
    // src/system/set_bg2_vram_location.asm:18 STA BG12NBA_MIRROR
    // Overlapping static entry reached from 0xC08DEE.
    case 0xC08DF1: cpu.execute_instruction<0x15>(0x000000, 2); return true;
    // src/system/set_bg2_vram_location.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC08DF3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:20 STZ BG2_X_POS
    case 0xC08DF5: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/system/set_bg2_vram_location.asm:21 STZ BG2_Y_POS
    case 0xC08DF8: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/system/set_bg2_vram_location.asm:22 TYA
    case 0xC08DFB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:23 XBA
    case 0xC08DFC: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC08DFD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:25 AND #$00F0
    case 0xC08DFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x000DF0, 3); return true;
    // src/system/set_bg2_vram_location.asm:26 ORA BG12NBA_MIRROR
    case 0xC08E01: cpu.execute_instruction<0x0D>(0x000015, 3); return true;
    // src/system/set_bg2_vram_location.asm:26 ORA BG12NBA_MIRROR
    // Overlapping static entry reached from 0xC08DFF.
    case 0xC08E02: cpu.execute_instruction<0x15>(0x000000, 2); return true;
    // src/system/set_bg2_vram_location.asm:27 STA BG12NBA_MIRROR
    case 0xC08E04: cpu.execute_instruction<0x8D>(0x000015, 3); return true;
    // src/system/set_bg2_vram_location.asm:28 STA f:BG12NBA
    case 0xC08E07: cpu.execute_instruction<0x8F>(0x00210B, 4); return true;
    // src/system/set_bg2_vram_location.asm:29 PLP
    case 0xC08E0B: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:30 RTL
    case 0xC08E0C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_bg3_vram_location.asm (source_named).
bool execute_system_set_bg3_vram_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_bg3_vram_location.asm:3 PHP
    case 0xC08E0D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E0E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:5 REP #PROC_FLAGS::INDEX8
    case 0xC08E10: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/set_bg3_vram_location.asm:6 AND #$0003
    case 0xC08E12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008D03, 3); return true;
    // src/system/set_bg3_vram_location.asm:7 STA BG3SC_MIRROR
    case 0xC08E14: cpu.execute_instruction<0x8D>(0x000013, 3); return true;
    // src/system/set_bg3_vram_location.asm:7 STA BG3SC_MIRROR
    // Overlapping static entry reached from 0xC08E12.
    case 0xC08E15: cpu.execute_instruction<0x13>(0x000000, 2); return true;
    // src/system/set_bg3_vram_location.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC08E17: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:9 TXA
    case 0xC08E19: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:10 XBA
    case 0xC08E1A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E1B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:12 AND #$00FC
    case 0xC08E1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x000DFC, 3); return true;
    // src/system/set_bg3_vram_location.asm:13 ORA BG3SC_MIRROR
    case 0xC08E1F: cpu.execute_instruction<0x0D>(0x000013, 3); return true;
    // src/system/set_bg3_vram_location.asm:13 ORA BG3SC_MIRROR
    // Overlapping static entry reached from 0xC08E1D.
    case 0xC08E20: cpu.execute_instruction<0x13>(0x000000, 2); return true;
    // src/system/set_bg3_vram_location.asm:14 STA BG3SC_MIRROR
    case 0xC08E22: cpu.execute_instruction<0x8D>(0x000013, 3); return true;
    // src/system/set_bg3_vram_location.asm:15 STA f:BG3SC
    case 0xC08E25: cpu.execute_instruction<0x8F>(0x002109, 4); return true;
    // src/system/set_bg3_vram_location.asm:16 LDA BG34NBA_MIRROR
    case 0xC08E29: cpu.execute_instruction<0xAD>(0x000016, 3); return true;
    // src/system/set_bg3_vram_location.asm:17 AND #$00F0
    case 0xC08E2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x008DF0, 3); return true;
    // src/system/set_bg3_vram_location.asm:18 STA BG34NBA_MIRROR
    case 0xC08E2E: cpu.execute_instruction<0x8D>(0x000016, 3); return true;
    // src/system/set_bg3_vram_location.asm:18 STA BG34NBA_MIRROR
    // Overlapping static entry reached from 0xC08E2C.
    case 0xC08E2F: cpu.execute_instruction<0x16>(0x000000, 2); return true;
    // src/system/set_bg3_vram_location.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC08E31: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:20 STZ BG3_X_POS
    case 0xC08E33: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/system/set_bg3_vram_location.asm:21 STZ BG3_Y_POS
    case 0xC08E36: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/system/set_bg3_vram_location.asm:22 TYA
    case 0xC08E39: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:23 XBA
    case 0xC08E3A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E3B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:25 LSR
    case 0xC08E3D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:26 LSR
    case 0xC08E3E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:27 LSR
    case 0xC08E3F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:28 LSR
    case 0xC08E40: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:29 ORA BG34NBA_MIRROR
    case 0xC08E41: cpu.execute_instruction<0x0D>(0x000016, 3); return true;
    // src/system/set_bg3_vram_location.asm:30 STA BG34NBA_MIRROR
    case 0xC08E44: cpu.execute_instruction<0x8D>(0x000016, 3); return true;
    // src/system/set_bg3_vram_location.asm:30 STA BG34NBA_MIRROR
    // Overlapping static entry reached from 0xC08EB7.
    case 0xC08E46: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/system/set_bg3_vram_location.asm:31 STA f:BG34NBA
    case 0xC08E47: cpu.execute_instruction<0x8F>(0x00210C, 4); return true;
    // src/system/set_bg3_vram_location.asm:32 PLP
    case 0xC08E4B: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:33 RTL
    case 0xC08E4C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_bg4_vram_location.asm (source_named).
bool execute_system_set_bg4_vram_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_bg4_vram_location.asm:3 PHP
    case 0xC08E4D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E4E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:5 REP #PROC_FLAGS::INDEX8
    case 0xC08E50: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/set_bg4_vram_location.asm:6 AND #$0003
    case 0xC08E52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008D03, 3); return true;
    // src/system/set_bg4_vram_location.asm:7 STA BG4SC_MIRROR
    case 0xC08E54: cpu.execute_instruction<0x8D>(0x000014, 3); return true;
    // src/system/set_bg4_vram_location.asm:7 STA BG4SC_MIRROR
    // Overlapping static entry reached from 0xC08E52.
    case 0xC08E55: cpu.execute_instruction<0x14>(0x000000, 2); return true;
    // src/system/set_bg4_vram_location.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC08E57: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:9 TXA
    case 0xC08E59: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:10 XBA
    case 0xC08E5A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E5B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:12 AND #$00FC
    case 0xC08E5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x000DFC, 3); return true;
    // src/system/set_bg4_vram_location.asm:13 ORA BG4SC_MIRROR
    case 0xC08E5F: cpu.execute_instruction<0x0D>(0x000014, 3); return true;
    // src/system/set_bg4_vram_location.asm:13 ORA BG4SC_MIRROR
    // Overlapping static entry reached from 0xC08E5D.
    case 0xC08E60: cpu.execute_instruction<0x14>(0x000000, 2); return true;
    // src/system/set_bg4_vram_location.asm:14 STA BG4SC_MIRROR
    case 0xC08E62: cpu.execute_instruction<0x8D>(0x000014, 3); return true;
    // src/system/set_bg4_vram_location.asm:15 STA f:BG4SC
    case 0xC08E65: cpu.execute_instruction<0x8F>(0x00210A, 4); return true;
    // src/system/set_bg4_vram_location.asm:16 LDA BG34NBA_MIRROR
    case 0xC08E69: cpu.execute_instruction<0xAD>(0x000016, 3); return true;
    // src/system/set_bg4_vram_location.asm:17 AND #$000F
    case 0xC08E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x008D0F, 3); return true;
    // src/system/set_bg4_vram_location.asm:18 STA BG34NBA_MIRROR
    case 0xC08E6E: cpu.execute_instruction<0x8D>(0x000016, 3); return true;
    // src/system/set_bg4_vram_location.asm:18 STA BG34NBA_MIRROR
    // Overlapping static entry reached from 0xC08E6C.
    case 0xC08E6F: cpu.execute_instruction<0x16>(0x000000, 2); return true;
    // src/system/set_bg4_vram_location.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC08E71: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:20 STZ BG4_X_POS
    case 0xC08E73: cpu.execute_instruction<0x9C>(0x00003D, 3); return true;
    // src/system/set_bg4_vram_location.asm:21 STZ BG4_Y_POS
    case 0xC08E76: cpu.execute_instruction<0x9C>(0x00003F, 3); return true;
    // src/system/set_bg4_vram_location.asm:22 TYA
    case 0xC08E79: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:23 XBA
    case 0xC08E7A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E7B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:25 AND #$00F0
    case 0xC08E7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x000DF0, 3); return true;
    // src/system/set_bg4_vram_location.asm:26 ORA BG34NBA_MIRROR
    case 0xC08E7F: cpu.execute_instruction<0x0D>(0x000016, 3); return true;
    // src/system/set_bg4_vram_location.asm:26 ORA BG34NBA_MIRROR
    // Overlapping static entry reached from 0xC08E7D.
    case 0xC08E80: cpu.execute_instruction<0x16>(0x000000, 2); return true;
    // src/system/set_bg4_vram_location.asm:27 STA BG34NBA_MIRROR
    case 0xC08E82: cpu.execute_instruction<0x8D>(0x000016, 3); return true;
    // src/system/set_bg4_vram_location.asm:28 STA f:BG34NBA
    case 0xC08E85: cpu.execute_instruction<0x8F>(0x00210C, 4); return true;
    // src/system/set_bg4_vram_location.asm:29 PLP
    case 0xC08E89: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:30 RTL
    case 0xC08E8A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_coldata.asm (source_named).
bool execute_system_set_coldata_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_coldata.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AFF9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_coldata.asm:6 AND #$001F
    case 0xC0AFFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00091F, 3); return true;
    // src/system/set_coldata.asm:7 ORA #$0020
    case 0xC0AFFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000020, 2); else cpu.execute_instruction<0x09>(0x008F20, 3); return true;
    // src/system/set_coldata.asm:7 ORA #$0020
    // Overlapping static entry reached from 0xC0AFFB.
    case 0xC0AFFE: cpu.execute_instruction<0x20>(0x00328F, 3); return true;
    // src/system/set_coldata.asm:8 STA f:FIXED_COLOR_DATA
    case 0xC0AFFF: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/system/set_coldata.asm:8 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0AFFD.
    case 0xC0B000: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/system/set_coldata.asm:8 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0AFFE.
    case 0xC0B001: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/system/set_coldata.asm:8 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B000.
    case 0xC0B002: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/set_coldata.asm:9 TXA
    case 0xC0B003: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_coldata.asm:10 AND #$001F
    case 0xC0B004: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00091F, 3); return true;
    // src/system/set_coldata.asm:11 ORA #$0040
    case 0xC0B006: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000040, 2); else cpu.execute_instruction<0x09>(0x008F40, 3); return true;
    // src/system/set_coldata.asm:11 ORA #$0040
    // Overlapping static entry reached from 0xC0B004.
    case 0xC0B007: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/system/set_coldata.asm:12 STA f:FIXED_COLOR_DATA
    case 0xC0B008: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/system/set_coldata.asm:12 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B006.
    case 0xC0B009: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/system/set_coldata.asm:12 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B009.
    case 0xC0B00B: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/system/set_coldata.asm:13 TYA
    case 0xC0B00C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_coldata.asm:14 AND #$001F
    case 0xC0B00D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00091F, 3); return true;
    // src/system/set_coldata.asm:15 ORA #$0080
    case 0xC0B00F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x008F80, 3); return true;
    // src/system/set_coldata.asm:15 ORA #$0080
    // Overlapping static entry reached from 0xC0B00D.
    case 0xC0B010: cpu.execute_instruction<0x80>(0x00008F, 2); return true;
    // src/system/set_coldata.asm:16 STA f:FIXED_COLOR_DATA
    case 0xC0B011: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/system/set_coldata.asm:16 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B00F.
    case 0xC0B012: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/system/set_coldata.asm:16 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B012.
    case 0xC0B014: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/set_coldata.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC0B015: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_coldata.asm:18 RTL
    case 0xC0B017: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_colour_addsub_mode.asm (source_named).
bool execute_system_set_colour_addsub_mode_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_colour_addsub_mode.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B018: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_colour_addsub_mode.asm:5 STA f:CGWSEL
    case 0xC0B01A: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/system/set_colour_addsub_mode.asm:6 TXA
    case 0xC0B01E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_colour_addsub_mode.asm:7 STA f:CGADSUB
    case 0xC0B01F: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/system/set_colour_addsub_mode.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC0B023: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_colour_addsub_mode.asm:9 RTL
    case 0xC0B025: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_inidisp.asm (source_named).
bool execute_system_set_inidisp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_inidisp.asm:3 PHP
    case 0xC08793: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_inidisp.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08794: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_inidisp.asm:5 AND #$008F
    case 0xC08796: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00008F, 2); else cpu.execute_instruction<0x29>(0x008D8F, 3); return true;
    // src/system/set_inidisp.asm:6 STA INIDISP_MIRROR
    case 0xC08798: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/system/set_inidisp.asm:6 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xC08796.
    case 0xC08799: cpu.execute_instruction<0x0D>(0x002800, 3); return true;
    // src/system/set_inidisp.asm:7 PLP
    case 0xC0879B: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_inidisp.asm:8 RTS
    case 0xC0879C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_inidisp_far.asm (source_named).
bool execute_system_set_inidisp_far_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_inidisp_far.asm:3 JSR SET_INIDISP
    case 0xC0878F: cpu.execute_instruction<0x20>(0x008793, 3); return true;
    // src/system/set_inidisp_far.asm:4 RTL
    case 0xC08792: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_irq_callback.asm (source_named).
bool execute_system_set_irq_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_irq_callback.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0851C: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/set_irq_callback.asm:4 STA IRQ_CALLBACK
    case 0xC0851E: cpu.execute_instruction<0x8D>(0x000020, 3); return true;
    // src/system/set_irq_callback.asm:5 RTL
    case 0xC08521: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_oam_size.asm (source_named).
bool execute_system_set_oam_size_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_oam_size.asm:3 PHP
    case 0xC08D83: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_oam_size.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D84: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_oam_size.asm:5 STA OBSEL_MIRROR
    case 0xC08D86: cpu.execute_instruction<0x8D>(0x00000E, 3); return true;
    // src/system/set_oam_size.asm:6 STA f:OBSEL
    case 0xC08D89: cpu.execute_instruction<0x8F>(0x002101, 4); return true;
    // src/system/set_oam_size.asm:7 PLP
    case 0xC08D8D: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_oam_size.asm:8 RTL
    case 0xC08D8E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_window_mask.asm (source_named).
bool execute_system_set_window_mask_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_window_mask.asm:3 TXY
    case 0xC0B026: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B027: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_window_mask.asm:5 PHA
    case 0xC0B029: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:6 PHA
    case 0xC0B02A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:7 AND #$0003
    case 0xC0B02B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x00AA03, 3); return true;
    // src/system/set_window_mask.asm:8 TAX
    case 0xC0B02D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:9 LDA f:UNKNOWN_C0B0A6,X
    case 0xC0B02E: cpu.execute_instruction<0xBF>(0xC0B085, 4); return true;
    // src/system/set_window_mask.asm:10 CPY #$0000
    case 0xC0B032: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:10 CPY #$0000
    // Overlapping static entry reached from 0xC0B032.
    case 0xC0B034: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/set_window_mask.asm:11 BEQ @UNKNOWN0
    case 0xC0B035: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/system/set_window_mask.asm:12 AND #$00AA
    case 0xC0B037: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000AA, 2); else cpu.execute_instruction<0x29>(0x008FAA, 3); return true;
    // src/system/set_window_mask.asm:14 STA f:W12SEL
    case 0xC0B039: cpu.execute_instruction<0x8F>(0x002123, 4); return true;
    // src/system/set_window_mask.asm:14 STA f:W12SEL
    // Overlapping static entry reached from 0xC0B037.
    case 0xC0B03A: cpu.execute_instruction<0x23>(0x000021, 2); return true;
    // src/system/set_window_mask.asm:14 STA f:W12SEL
    // Overlapping static entry reached from 0xC0B03A.
    case 0xC0B03C: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/system/set_window_mask.asm:15 PLA
    case 0xC0B03D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:16 LSR
    case 0xC0B03E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:17 LSR
    case 0xC0B03F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:18 PHA
    case 0xC0B040: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:19 AND #$0003
    case 0xC0B041: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x00AA03, 3); return true;
    // src/system/set_window_mask.asm:20 TAX
    case 0xC0B043: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:21 LDA f:UNKNOWN_C0B0A6,X
    case 0xC0B044: cpu.execute_instruction<0xBF>(0xC0B085, 4); return true;
    // src/system/set_window_mask.asm:22 CPY #$0000
    case 0xC0B048: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:22 CPY #$0000
    // Overlapping static entry reached from 0xC0B048.
    case 0xC0B04A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/set_window_mask.asm:23 BEQ @UNKNOWN1
    case 0xC0B04B: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/system/set_window_mask.asm:24 AND #$00AA
    case 0xC0B04D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000AA, 2); else cpu.execute_instruction<0x29>(0x008FAA, 3); return true;
    // src/system/set_window_mask.asm:26 STA f:W34SEL
    case 0xC0B04F: cpu.execute_instruction<0x8F>(0x002124, 4); return true;
    // src/system/set_window_mask.asm:26 STA f:W34SEL
    // Overlapping static entry reached from 0xC0B04D.
    case 0xC0B050: cpu.execute_instruction<0x24>(0x000021, 2); return true;
    // src/system/set_window_mask.asm:26 STA f:W34SEL
    // Overlapping static entry reached from 0xC0B050.
    case 0xC0B052: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/system/set_window_mask.asm:27 PLA
    case 0xC0B053: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:28 LSR
    case 0xC0B054: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:29 LSR
    case 0xC0B055: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:30 AND #$0003
    case 0xC0B056: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x00AA03, 3); return true;
    // src/system/set_window_mask.asm:31 TAX
    case 0xC0B058: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:32 LDA f:UNKNOWN_C0B0A6,X
    case 0xC0B059: cpu.execute_instruction<0xBF>(0xC0B085, 4); return true;
    // src/system/set_window_mask.asm:33 CPY #$0000
    case 0xC0B05D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:33 CPY #$0000
    // Overlapping static entry reached from 0xC0B05D.
    case 0xC0B05F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/set_window_mask.asm:34 BEQ @UNKNOWN2
    case 0xC0B060: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/system/set_window_mask.asm:35 AND #$00AA
    case 0xC0B062: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000AA, 2); else cpu.execute_instruction<0x29>(0x008FAA, 3); return true;
    // src/system/set_window_mask.asm:37 STA f:WOBJSEL
    case 0xC0B064: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/system/set_window_mask.asm:37 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC0B062.
    case 0xC0B065: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/system/set_window_mask.asm:37 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC0B065.
    case 0xC0B067: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/system/set_window_mask.asm:38 PLA
    case 0xC0B068: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:39 AND #$001F
    case 0xC0B069: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x008F1F, 3); return true;
    // src/system/set_window_mask.asm:40 STA f:TMW
    case 0xC0B06B: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/system/set_window_mask.asm:40 STA f:TMW
    // Overlapping static entry reached from 0xC0B069.
    case 0xC0B06C: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/system/set_window_mask.asm:41 STA f:TSW
    case 0xC0B06F: cpu.execute_instruction<0x8F>(0x00212F, 4); return true;
    // src/system/set_window_mask.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC0B073: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_window_mask.asm:43 LDA #$5555
    case 0xC0B075: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000055, 2); else cpu.execute_instruction<0xA9>(0x005555, 3); return true;
    // src/system/set_window_mask.asm:43 LDA #$5555
    // Overlapping static entry reached from 0xC0B075.
    case 0xC0B077: cpu.execute_instruction<0x55>(0x0000C0, 2); return true;
    // src/system/set_window_mask.asm:44 CPY #$0000
    case 0xC0B078: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:44 CPY #$0000
    // Overlapping static entry reached from 0xC0B077.
    case 0xC0B079: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/set_window_mask.asm:44 CPY #$0000
    // Overlapping static entry reached from 0xC0B078.
    case 0xC0B07A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/set_window_mask.asm:45 BEQ @UNKNOWN3
    case 0xC0B07B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/system/set_window_mask.asm:46 LDA #$0000
    case 0xC0B07D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:46 LDA #$0000
    // Overlapping static entry reached from 0xC0B07D.
    case 0xC0B07F: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/system/set_window_mask.asm:48 STA f:WBGLOG
    case 0xC0B080: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/system/set_window_mask.asm:49 RTL
    case 0xC0B084: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/setjmp.asm (source_named).
bool execute_system_setjmp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/setjmp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F33: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/setjmp.asm:4 TAY
    case 0xC08F35: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/setjmp.asm:5 PHB
    case 0xC08F36: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/setjmp.asm:6 PEA $0000
    case 0xC08F37: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/setjmp.asm:7 PLB
    case 0xC08F3A: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/setjmp.asm:8 PLB
    case 0xC08F3B: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/setjmp.asm:9 LDA $01,S
    case 0xC08F3C: cpu.execute_instruction<0xA3>(0x000001, 2); return true;
    // src/system/setjmp.asm:10 STA __BSS_START__,Y
    case 0xC08F3E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/system/setjmp.asm:11 LDA $03,S
    case 0xC08F41: cpu.execute_instruction<0xA3>(0x000003, 2); return true;
    // src/system/setjmp.asm:12 STA __BSS_START__+2,Y
    case 0xC08F43: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/system/setjmp.asm:13 PHP
    case 0xC08F46: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/setjmp.asm:14 PHP
    case 0xC08F47: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/setjmp.asm:15 PLA
    case 0xC08F48: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/setjmp.asm:16 STA __BSS_START__+4,Y
    case 0xC08F49: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/system/setjmp.asm:17 TDC
    case 0xC08F4C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/setjmp.asm:18 STA __BSS_START__+5,Y
    case 0xC08F4D: cpu.execute_instruction<0x99>(0x000005, 3); return true;
    // src/system/setjmp.asm:19 TSC
    case 0xC08F50: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/system/setjmp.asm:20 STA __BSS_START__+7,Y
    case 0xC08F51: cpu.execute_instruction<0x99>(0x000007, 3); return true;
    // src/system/setjmp.asm:21 PLB
    case 0xC08F54: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/setjmp.asm:22 LDA #$0000
    case 0xC08F55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/setjmp.asm:22 LDA #$0000
    // Overlapping static entry reached from 0xC08F55.
    case 0xC08F57: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/system/setjmp.asm:23 RTL
    case 0xC08F58: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/strcmp.asm (source_named).
bool execute_system_strcmp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/strcmp.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08F20: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/strcmp.asm:4 LDY #$FFFF
    case 0xC08F22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/system/strcmp.asm:4 LDY #$FFFF
    // Overlapping static entry reached from 0xC08F22.
    case 0xC08F24: cpu.execute_instruction<0xFF>(0x0EB7C8, 4); return true;
    // src/system/strcmp.asm:6 INY
    case 0xC08F25: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/strcmp.asm:7 LDA [$0E],Y
    case 0xC08F26: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/system/strcmp.asm:8 BEQ @LOOP_EXIT
    case 0xC08F28: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/system/strcmp.asm:9 CMP [$12],Y
    case 0xC08F2A: cpu.execute_instruction<0xD7>(0x000012, 2); return true;
    // src/system/strcmp.asm:10 BEQ @LOOP_BODY
    case 0xC08F2C: cpu.execute_instruction<0xF0>(0x0000F7, 2); return true;
    // src/system/strcmp.asm:11 LDA #$0001
    case 0xC08F2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00C201, 3); return true;
    // src/system/strcmp.asm:13 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F30: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/strcmp.asm:13 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08F2E.
    case 0xC08F31: cpu.execute_instruction<0x30>(0x00006B, 2); return true;
    // src/system/strcmp.asm:14 RTL
    case 0xC08F32: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/strlen.asm (source_named).
bool execute_system_strlen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/strlen.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F13: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/system/strlen.asm:4 LDY #$00FF
    case 0xC08F15: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00C8FF, 3); return true;
    // src/system/strlen.asm:6 INY
    case 0xC08F17: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/strlen.asm:7 LDA [$0E],Y
    case 0xC08F18: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/system/strlen.asm:8 BNE @LOOP_BODY
    case 0xC08F1A: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/system/strlen.asm:9 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F1C: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/strlen.asm:10 TYA
    case 0xC08F1E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/strlen.asm:11 RTL
    case 0xC08F1F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/test_sram_size.asm (source_named).
bool execute_system_test_sram_size_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/test_sram_size.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08391: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/test_sram_size.asm:4 LDA #$0030
    case 0xC08393: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x008F30, 3); return true;
    // src/system/test_sram_size.asm:5 STA f:SRAM_SIZE_1_SCRATCH
    case 0xC08395: cpu.execute_instruction<0x8F>(0x307FF0, 4); return true;
    // src/system/test_sram_size.asm:5 STA f:SRAM_SIZE_1_SCRATCH
    // Overlapping static entry reached from 0xC08393.
    case 0xC08396: cpu.execute_instruction<0xF0>(0x00007F, 2); return true;
    // src/system/test_sram_size.asm:5 STA f:SRAM_SIZE_1_SCRATCH
    // Overlapping static entry reached from 0xC08396.
    case 0xC08398: cpu.execute_instruction<0x30>(0x00001A, 2); return true;
    // src/system/test_sram_size.asm:6 INC
    case 0xC08399: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/test_sram_size.asm:7 STA f:SRAM_SIZE_2_SCRATCH
    case 0xC0839A: cpu.execute_instruction<0x8F>(0x317FF0, 4); return true;
    // src/system/test_sram_size.asm:8 CMP f:SRAM_SIZE_1_SCRATCH
    case 0xC0839E: cpu.execute_instruction<0xCF>(0x307FF0, 4); return true;
    // src/system/test_sram_size.asm:9 BEQ @END_OF_SRAM_FOUND
    case 0xC083A2: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/system/test_sram_size.asm:10 INC
    case 0xC083A4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/test_sram_size.asm:11 STA f:SRAM_SIZE_3_SCRATCH
    case 0xC083A5: cpu.execute_instruction<0x8F>(0x327FF0, 4); return true;
    // src/system/test_sram_size.asm:12 CMP f:SRAM_SIZE_1_SCRATCH
    case 0xC083A9: cpu.execute_instruction<0xCF>(0x307FF0, 4); return true;
    // src/system/test_sram_size.asm:13 BEQ @END_OF_SRAM_FOUND
    case 0xC083AD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/system/test_sram_size.asm:14 STA LAST_SRAM_BANK
    case 0xC083AF: cpu.execute_instruction<0x8D>(0x000A2C, 3); return true;
    // src/system/test_sram_size.asm:16 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC083B2: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/test_sram_size.asm:17 LDA LAST_SRAM_BANK
    case 0xC083B4: cpu.execute_instruction<0xAD>(0x000A2C, 3); return true;
    // src/system/test_sram_size.asm:18 RTL
    case 0xC083B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/transfer_to_vram.asm (source_named).
bool execute_system_transfer_to_vram_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/transfer_to_vram.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC085B7: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/transfer_to_vram.asm:4 STA DMA_COPY_MODE
    case 0xC085B9: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/system/transfer_to_vram.asm:6 LDA DMA_BYTES_COPIED
    case 0xC085BC: cpu.execute_instruction<0xAD>(0x000099, 3); return true;
    // src/system/transfer_to_vram.asm:7 BNE @UNKNOWN0
    case 0xC085BF: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/transfer_to_vram.asm:8 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC085C1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/transfer_to_vram.asm:8 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC085C3: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/transfer_to_vram.asm:8 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC085C6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/transfer_to_vram.asm:8 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC085C8: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/system/transfer_to_vram.asm:9 STY DMA_COPY_VRAM_DEST
    case 0xC085CB: cpu.execute_instruction<0x8C>(0x000097, 3); return true;
    // src/system/transfer_to_vram.asm:10 CPX #$1201
    case 0xC085CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x001201, 3); return true;
    // src/system/transfer_to_vram.asm:10 CPX #$1201
    // Overlapping static entry reached from 0xC085CE.
    case 0xC085D0: cpu.execute_instruction<0x12>(0x000090, 2); return true;
    // src/system/transfer_to_vram.asm:11 BCC @UNKNOWN3
    case 0xC085D1: cpu.execute_instruction<0x90>(0x000031, 2); return true;
    // src/system/transfer_to_vram.asm:11 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC085D0.
    case 0xC085D2: cpu.execute_instruction<0x31>(0x0000A9, 2); return true;
    // src/system/transfer_to_vram.asm:12 LDA #$1200
    case 0xC085D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001200, 3); return true;
    // src/system/transfer_to_vram.asm:12 LDA #$1200
    // Overlapping static entry reached from 0xC085D2.
    case 0xC085D4: cpu.execute_instruction<0x00>(0x000012, 2); return true;
    // src/system/transfer_to_vram.asm:12 LDA #$1200
    // Overlapping static entry reached from 0xC085D3.
    case 0xC085D5: cpu.execute_instruction<0x12>(0x00008D, 2); return true;
    // src/system/transfer_to_vram.asm:13 STA DMA_COPY_SIZE
    case 0xC085D6: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/system/transfer_to_vram.asm:13 STA DMA_COPY_SIZE
    // Overlapping static entry reached from 0xC085D5.
    case 0xC085D7: cpu.execute_instruction<0x92>(0x000000, 2); return true;
    // src/system/transfer_to_vram.asm:15 CPX #$1201
    case 0xC085D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x001201, 3); return true;
    // src/system/transfer_to_vram.asm:15 CPX #$1201
    // Overlapping static entry reached from 0xC085D9.
    case 0xC085DB: cpu.execute_instruction<0x12>(0x000090, 2); return true;
    // src/system/transfer_to_vram.asm:16 BCC @UNKNOWN3
    case 0xC085DC: cpu.execute_instruction<0x90>(0x000026, 2); return true;
    // src/system/transfer_to_vram.asm:16 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC085DB.
    case 0xC085DD: cpu.execute_instruction<0x26>(0x0000AD, 2); return true;
    // src/system/transfer_to_vram.asm:18 LDA DMA_BYTES_COPIED
    case 0xC085DE: cpu.execute_instruction<0xAD>(0x000099, 3); return true;
    // src/system/transfer_to_vram.asm:18 LDA DMA_BYTES_COPIED
    // Overlapping static entry reached from 0xC085DD.
    case 0xC085DF: cpu.execute_instruction<0x99>(0x00D000, 3); return true;
    // src/system/transfer_to_vram.asm:19 BNE @UNKNOWN2
    case 0xC085E1: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/system/transfer_to_vram.asm:19 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC085DF.
    case 0xC085E2: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:20 PHX
    case 0xC085E3: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:21 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC085E4: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/system/transfer_to_vram.asm:23 LDA DMA_COPY_RAM_SRC
    case 0xC085E8: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/system/transfer_to_vram.asm:24 CLC
    case 0xC085EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:25 ADC #$1200
    case 0xC085EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001200, 3); return true;
    // src/system/transfer_to_vram.asm:25 ADC #$1200
    // Overlapping static entry reached from 0xC085EC.
    case 0xC085EE: cpu.execute_instruction<0x12>(0x00008D, 2); return true;
    // src/system/transfer_to_vram.asm:26 STA DMA_COPY_RAM_SRC
    case 0xC085EF: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/system/transfer_to_vram.asm:26 STA DMA_COPY_RAM_SRC
    // Overlapping static entry reached from 0xC085EE.
    case 0xC085F0: cpu.execute_instruction<0x94>(0x000000, 2); return true;
    // src/system/transfer_to_vram.asm:27 LDA DMA_COPY_VRAM_DEST
    case 0xC085F2: cpu.execute_instruction<0xAD>(0x000097, 3); return true;
    // src/system/transfer_to_vram.asm:28 CLC
    case 0xC085F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:29 ADC #$0900
    case 0xC085F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000900, 3); return true;
    // src/system/transfer_to_vram.asm:29 ADC #$0900
    // Overlapping static entry reached from 0xC085F6.
    case 0xC085F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x00008D, 2); else cpu.execute_instruction<0x09>(0x00978D, 3); return true;
    // src/system/transfer_to_vram.asm:30 STA DMA_COPY_VRAM_DEST
    case 0xC085F9: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/system/transfer_to_vram.asm:30 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC085F8.
    case 0xC085FA: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/system/transfer_to_vram.asm:30 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC085F8.
    case 0xC085FB: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/system/transfer_to_vram.asm:31 PLA
    case 0xC085FC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:32 SEC
    case 0xC085FD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:33 SBC #$1200
    case 0xC085FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x001200, 3); return true;
    // src/system/transfer_to_vram.asm:33 SBC #$1200
    // Overlapping static entry reached from 0xC085FE.
    case 0xC08600: cpu.execute_instruction<0x12>(0x0000AA, 2); return true;
    // src/system/transfer_to_vram.asm:34 TAX
    case 0xC08601: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:35 BRA @UNKNOWN1
    case 0xC08602: cpu.execute_instruction<0x80>(0x0000D5, 2); return true;
    // src/system/transfer_to_vram.asm:37 STX DMA_COPY_SIZE
    case 0xC08604: cpu.execute_instruction<0x8E>(0x000092, 3); return true;
    // src/system/transfer_to_vram.asm:39 LDA DMA_BYTES_COPIED
    case 0xC08607: cpu.execute_instruction<0xAD>(0x000099, 3); return true;
    // src/system/transfer_to_vram.asm:40 BNE @UNKNOWN4
    case 0xC0860A: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/system/transfer_to_vram.asm:41 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC0860C: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/system/transfer_to_vram.asm:44 LDA DMA_BYTES_COPIED
    case 0xC08610: cpu.execute_instruction<0xAD>(0x000099, 3); return true;
    // src/system/transfer_to_vram.asm:45 BNE @UNKNOWN5
    case 0xC08613: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/system/transfer_to_vram.asm:46 RTL
    case 0xC08615: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/wait.asm (source_named).
bool execute_system_wait_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/wait.asm:3 BEGIN_C_FUNCTION
    case 0xC268FD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC268FF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC26900: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC26901: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC26902: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26902.
    case 0xC26904: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC26905: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC26906: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/wait.asm:8 TAX
    case 0xC26907: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/wait.asm:9 STX @LOCAL00
    case 0xC26908: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/wait.asm:10 BRA @UNKNOWN1
    case 0xC2690A: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/system/wait.asm:12 JSL WINDOW_TICK
    case 0xC2690C: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/system/wait.asm:14 LDX @LOCAL00
    case 0xC26910: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/wait.asm:15 TXA
    case 0xC26912: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/wait.asm:16 DEX
    case 0xC26913: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/wait.asm:17 STX @LOCAL00
    case 0xC26914: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/wait.asm:18 CMP #0
    case 0xC26916: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/wait.asm:18 CMP #0
    // Overlapping static entry reached from 0xC26916.
    case 0xC26918: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/wait.asm:19 BNE @UNKNOWN0
    case 0xC26919: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/wait.asm:20 END_C_FUNCTION
    case 0xC2691B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/wait.asm:20 END_C_FUNCTION
    case 0xC2691C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/wait_until_next_frame.asm (source_named).
bool execute_system_wait_until_next_frame_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/wait_until_next_frame.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0874C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/wait_until_next_frame.asm:4 LDA NMITIMEN_MIRROR
    case 0xC0874E: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/system/wait_until_next_frame.asm:5 AND #$00B0
    case 0xC08751: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000B0, 2); else cpu.execute_instruction<0x29>(0x00F0B0, 3); return true;
    // src/system/wait_until_next_frame.asm:6 BEQ @WAITFORNOTVBLANK
    case 0xC08753: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/system/wait_until_next_frame.asm:6 BEQ @WAITFORNOTVBLANK
    // Overlapping static entry reached from 0xC08751.
    case 0xC08754: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:8 LDA NEW_FRAME_STARTED
    case 0xC08755: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/system/wait_until_next_frame.asm:9 BEQ @UNKNOWN0
    case 0xC08758: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/system/wait_until_next_frame.asm:10 STZ NEW_FRAME_STARTED
    case 0xC0875A: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/system/wait_until_next_frame.asm:11 BRA @UNKNOWN3
    case 0xC0875D: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/system/wait_until_next_frame.asm:13 LDA f:HVBJOY
    case 0xC0875F: cpu.execute_instruction<0xAF>(0x004212, 4); return true;
    // src/system/wait_until_next_frame.asm:14 BMI @WAITFORNOTVBLANK
    case 0xC08763: cpu.execute_instruction<0x30>(0x0000FA, 2); return true;
    // src/system/wait_until_next_frame.asm:16 LDA f:HVBJOY
    case 0xC08765: cpu.execute_instruction<0xAF>(0x004212, 4); return true;
    // src/system/wait_until_next_frame.asm:17 BPL @WAITFORVBLANK
    case 0xC08769: cpu.execute_instruction<0x10>(0x0000FA, 2); return true;
    // src/system/wait_until_next_frame.asm:19 STZ NEW_FRAME_STARTED
    case 0xC0876B: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/system/wait_until_next_frame.asm:20 PHD
    case 0xC0876E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:21 PEA $0000
    case 0xC0876F: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/wait_until_next_frame.asm:22 PLD
    case 0xC08772: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:23 PHB
    case 0xC08773: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:24 PEA $0000
    case 0xC08774: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/wait_until_next_frame.asm:25 PLB
    case 0xC08777: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:26 PLB
    case 0xC08778: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:27 JSR UNKNOWN_C08496
    case 0xC08779: cpu.execute_instruction<0x20>(0x008496, 3); return true;
    // src/system/wait_until_next_frame.asm:28 PLB
    case 0xC0877C: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:29 PLD
    case 0xC0877D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC0877E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/wait_until_next_frame.asm:31 RTL
    case 0xC08780: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
