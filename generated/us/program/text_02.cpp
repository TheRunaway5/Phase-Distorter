// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/text/ccs/set_character_visibility.asm (source_named).
bool execute_text_ccs_set_character_visibility_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_character_visibility.asm:3 BEGIN_C_FUNCTION
    case 0xC16D14: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16D16: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16D17: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16D18: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16D19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16D19.
    case 0xC16D1B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16D1C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16D1D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:11 STX @LOCAL01
    case 0xC16D1E: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/set_character_visibility.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16D1B.
    case 0xC16D1F: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/set_character_visibility.asm:12 LDA #1
    case 0xC16D20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/set_character_visibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16D1F.
    case 0xC16D21: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/set_character_visibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16D20.
    case 0xC16D22: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_character_visibility.asm:13 CLC
    case 0xC16D23: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D24: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_visibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16D27: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_visibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16D29: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_visibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16D2B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_visibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16D2D: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/set_character_visibility.asm:16 TXA
    case 0xC16D2F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16D30: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_visibility.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D32: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_character_visibility.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16D35: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_character_visibility.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16D38: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_visibility.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D3A: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_character_visibility.asm:22 LDA #.LOWORD(CC_1F_EC)
    case 0xC16D3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x006D14, 3); return true;
    // src/text/ccs/set_character_visibility.asm:22 LDA #.LOWORD(CC_1F_EC)
    // Overlapping static entry reached from 0xC16D3D.
    case 0xC16D3F: cpu.execute_instruction<0x6D>(0x001E80, 3); return true;
    // src/text/ccs/set_character_visibility.asm:23 BRA @UNKNOWN3
    case 0xC16D40: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/text/ccs/set_character_visibility.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC16D42: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_character_visibility.asm:26 AND #$00FF
    case 0xC16D45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_visibility.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16D45.
    case 0xC16D47: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/set_character_visibility.asm:27 TAY
    case 0xC16D48: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:28 STY @LOCAL00
    case 0xC16D49: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/set_character_visibility.asm:29 TYA
    case 0xC16D4B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:30 JSL UNKNOWN_C4608C
    case 0xC16D4C: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/text/ccs/set_character_visibility.asm:31 LDX @LOCAL01
    case 0xC16D50: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/set_character_visibility.asm:32 JSL UNKNOWN_C4C91A
    case 0xC16D52: cpu.execute_instruction<0x22>(0xC4C91A, 4); return true;
    // src/text/ccs/set_character_visibility.asm:33 LDY @LOCAL00
    case 0xC16D56: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/set_character_visibility.asm:34 TYA
    case 0xC16D58: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:35 JSL UNKNOWN_C4645A
    case 0xC16D59: cpu.execute_instruction<0x22>(0xC4645A, 4); return true;
    // src/text/ccs/set_character_visibility.asm:36 LDA #NULL
    case 0xC16D5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_character_visibility.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC16D5D.
    case 0xC16D5F: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_character_visibility.asm:38 END_C_FUNCTION
    case 0xC16D60: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_character_visibility.asm:38 END_C_FUNCTION
    case 0xC16D61: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_entity_direction_sprite.asm (source_named).
bool execute_text_ccs_set_entity_direction_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC16B2B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16B2D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16B2E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16B2F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16B30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16B30.
    case 0xC16B32: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16B33: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16B34: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:11 STX @LOCAL01
    case 0xC16B35: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16B32.
    case 0xC16B36: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:12 LDA #2
    case 0xC16B37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:12 LDA #2
    // Overlapping static entry reached from 0xC16B36.
    case 0xC16B38: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:12 LDA #2
    // Overlapping static entry reached from 0xC16B37.
    case 0xC16B39: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:13 CLC
    case 0xC16B3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16B3B: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16B3E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16B40: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16B42: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16B44: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:16 TXA
    case 0xC16B46: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B47: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16B49: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16B4C: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16B4F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16B51: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:22 LDA #.LOWORD(CC_1F_E4)
    case 0xC16B54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x006B2B, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:22 LDA #.LOWORD(CC_1F_E4)
    // Overlapping static entry reached from 0xC16B54.
    case 0xC16B56: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:23 BRA @UNKNOWN7
    case 0xC16B57: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B59: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:26 LDA #8
    case 0xC16B5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC16B5D: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16B5B.
    case 0xC16B5E: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:28 TAY
    case 0xC16B5F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC16B60: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16B62: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:31 AND #$00FF
    case 0xC16B65: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16B65.
    case 0xC16B67: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:32 JSL ASL16_ENTRY2
    case 0xC16B68: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:33 STA @VIRTUAL02
    case 0xC16B6C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:34 LDA CC_ARGUMENT_STORAGE
    case 0xC16B6E: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:35 AND #$00FF
    case 0xC16B71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC16B71.
    case 0xC16B73: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:36 ORA @VIRTUAL02
    case 0xC16B74: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:37 BEQ @ARG_1_IS_ZERO
    case 0xC16B76: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC16B78: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC16B7A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:39 BRA @ARG_1_IS_NONZERO
    case 0xC16B7C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:41 JSR GET_WORKING_MEMORY
    case 0xC16B7E: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:43 LDA @VIRTUAL06
    case 0xC16B81: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:44 STA @LOCAL00
    case 0xC16B83: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:45 REP #PROC_FLAGS::INDEX8
    case 0xC16B85: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:46 LDX @LOCAL01
    case 0xC16B87: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:47 BEQ @ARG_2_IS_ZERO
    case 0xC16B89: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:48 TXA
    case 0xC16B8B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16B8C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16B8E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:50 BRA @ARG_2_IS_NONZERO
    case 0xC16B90: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:52 JSR GET_ARGUMENT_MEMORY
    case 0xC16B92: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:54 LDA @VIRTUAL06
    case 0xC16B95: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:55 TAX
    case 0xC16B97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:56 DEX
    case 0xC16B98: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:57 LDA @LOCAL00
    case 0xC16B99: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:58 JSL UNKNOWN_C46331
    case 0xC16B9B: cpu.execute_instruction<0x22>(0xC46331, 4); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:59 LDA #NULL
    case 0xC16B9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC16B9F.
    case 0xC16BA1: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:61 END_C_FUNCTION
    case 0xC16BA2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:61 END_C_FUNCTION
    case 0xC16BA3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_event_flag.asm (source_named).
bool execute_text_ccs_set_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC14265: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC14267: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC14268: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC14269: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC1426A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1426A.
    case 0xC1426C: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC1426D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC1426E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_event_flag.asm:10 TXA
    case 0xC1426F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_event_flag.asm:11 STA @LOCAL00
    case 0xC14270: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_event_flag.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14272: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/set_event_flag.asm:13 BNE @UNKNOWN0
    case 0xC14275: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/set_event_flag.asm:14 LDA @LOCAL00
    case 0xC14277: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_event_flag.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14279: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_event_flag.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1427B: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_event_flag.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC1427E: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_event_flag.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14281: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_event_flag.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14283: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_event_flag.asm:20 LDA #.LOWORD(CC_04)
    case 0xC14286: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000065, 2); else cpu.execute_instruction<0xA9>(0x004265, 3); return true;
    // src/text/ccs/set_event_flag.asm:20 LDA #.LOWORD(CC_04)
    // Overlapping static entry reached from 0xC14286.
    case 0xC14288: cpu.execute_instruction<0x42>(0x000080, 2); return true;
    // src/text/ccs/set_event_flag.asm:21 BRA @UNKNOWN1
    case 0xC14289: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/text/ccs/set_event_flag.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC14288.
    case 0xC1428A: cpu.execute_instruction<0x20>(0x0010E2, 3); return true;
    // src/text/ccs/set_event_flag.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC1428B: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_event_flag.asm:24 LDY #8
    case 0xC1428D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/set_event_flag.asm:25 LDA @LOCAL00
    case 0xC1428F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_event_flag.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC1428D.
    case 0xC14290: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/set_event_flag.asm:26 JSL ASL16_ENTRY2
    case 0xC14291: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/set_event_flag.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC14290.
    case 0xC14293: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/set_event_flag.asm:27 STA @VIRTUAL02
    case 0xC14295: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_event_flag.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC14297: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_event_flag.asm:29 AND #$00FF
    case 0xC1429A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_event_flag.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1429A.
    case 0xC1429C: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_event_flag.asm:30 ORA @VIRTUAL02
    case 0xC1429D: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_event_flag.asm:31 REP #PROC_FLAGS::INDEX8
    case 0xC1429F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_event_flag.asm:32 LDX #1
    case 0xC142A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/set_event_flag.asm:32 LDX #1
    // Overlapping static entry reached from 0xC142A1.
    case 0xC142A3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_event_flag.asm:33 JSL SET_EVENT_FLAG
    case 0xC142A4: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/text/ccs/set_event_flag.asm:34 LDA #NULL
    case 0xC142A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_event_flag.asm:34 LDA #NULL
    // Overlapping static entry reached from 0xC142A8.
    case 0xC142AA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_event_flag.asm:36 END_C_FUNCTION
    case 0xC142AB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_event_flag.asm:36 END_C_FUNCTION
    case 0xC142AC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_map_palette.asm (source_named).
bool execute_text_ccs_set_map_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_map_palette.asm:3 BEGIN_C_FUNCTION
    case 0xC166FE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16700: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16701: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16702: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16703: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16703.
    case 0xC16705: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16706: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16707: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:11 LDA #2
    case 0xC16708: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/set_map_palette.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16705.
    case 0xC16709: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/ccs/set_map_palette.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16708.
    case 0xC1670A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_map_palette.asm:12 CLC
    case 0xC1670B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1670C: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC1670F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16711: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16713: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16715: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    // Overlapping static entry reached from 0xC16774.
    case 0xC16716: cpu.execute_instruction<0x13>(0x00008A, 2); return true;
    // src/text/ccs/set_map_palette.asm:15 TXA
    case 0xC16717: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16718: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1671A: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_map_palette.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC1671D: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_map_palette.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16720: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16722: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_map_palette.asm:21 LDA #.LOWORD(CC_1F_E1)
    case 0xC16725: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0066FE, 3); return true;
    // src/text/ccs/set_map_palette.asm:21 LDA #.LOWORD(CC_1F_E1)
    // Overlapping static entry reached from 0xC16725.
    case 0xC16727: cpu.execute_instruction<0x66>(0x000080, 2); return true;
    // src/text/ccs/set_map_palette.asm:22 BRA @UNKNOWN3
    case 0xC16728: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/text/ccs/set_map_palette.asm:22 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC16727.
    case 0xC16729: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC1672A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:25 LDA CC_ARGUMENT_STORAGE+1
    case 0xC1672C: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/set_map_palette.asm:26 STA @LOCAL00
    case 0xC1672F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_map_palette.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC16731: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:28 TXA
    case 0xC16733: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC16734: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:30 STA @LOCAL01
    case 0xC16736: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/text/ccs/set_map_palette.asm:31 LDA CC_ARGUMENT_STORAGE
    case 0xC16738: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_map_palette.asm:32 JSL UNKNOWN_C4939C
    case 0xC1673B: cpu.execute_instruction<0x22>(0xC4939C, 4); return true;
    // src/text/ccs/set_map_palette.asm:34 LDA #NULL
    case 0xC1673F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_map_palette.asm:34 LDA #NULL
    // Overlapping static entry reached from 0xC1673F.
    case 0xC16741: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_map_palette.asm:36 END_C_FUNCTION
    case 0xC16742: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_map_palette.asm:36 END_C_FUNCTION
    case 0xC16743: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_music_effect.asm (source_named).
bool execute_text_ccs_set_music_effect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_music_effect.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1741F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC17421: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC17422: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC17423: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC17424: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC17424.
    case 0xC17426: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC17427: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC17428: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_music_effect.asm:9 TXA
    case 0xC17429: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_music_effect.asm:10 BEQ @ARG_IS_ZERO
    case 0xC1742A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_music_effect.asm:11 STORE_INT1632 $06
    case 0xC1742C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_music_effect.asm:11 STORE_INT1632 $06
    case 0xC1742E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_music_effect.asm:12 BRA @ARG_IS_NONZERO
    case 0xC17430: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_music_effect.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC17432: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/set_music_effect.asm:16 LDA @VIRTUAL06
    case 0xC17435: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_music_effect.asm:17 JSL UNKNOWN_C0AC0C
    case 0xC17437: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/text/ccs/set_music_effect.asm:18 LDA #NULL
    case 0xC1743B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_music_effect.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC1743B.
    case 0xC1743D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_music_effect.asm:19 PLD
    case 0xC1743E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_music_effect.asm:20 RTS
    case 0xC1743F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_party_direction.asm (source_named).
bool execute_text_ccs_set_party_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_party_direction.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1646E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC16470: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC16471: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC16472: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC16473: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16473.
    case 0xC16475: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC16476: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC16477: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_party_direction.asm:9 TXA
    case 0xC16478: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_party_direction.asm:10 BEQ @ARG_IS_ZERO
    case 0xC16479: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_party_direction.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC1647B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_party_direction.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC1647D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_party_direction.asm:12 BRA @ARG_IS_NONZERO
    case 0xC1647F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_party_direction.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC16481: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/set_party_direction.asm:16 LDA @VIRTUAL06
    case 0xC16484: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_party_direction.asm:17 DEC
    case 0xC16486: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/set_party_direction.asm:18 JSL UNKNOWN_C46397
    case 0xC16487: cpu.execute_instruction<0x22>(0xC46397, 4); return true;
    // src/text/ccs/set_party_direction.asm:19 LDA #NULL
    case 0xC1648B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_party_direction.asm:19 LDA #NULL
    // Overlapping static entry reached from 0xC1648B.
    case 0xC1648D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_party_direction.asm:20 PLD
    case 0xC1648E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_party_direction.asm:21 RTS
    case 0xC1648F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_player_movement_lock.asm (source_named).
bool execute_text_ccs_set_player_movement_lock_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_player_movement_lock.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16BA4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/set_player_movement_lock.asm:4 TXA
    case 0xC16BA6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_player_movement_lock.asm:5 JSL UNKNOWN_C46594
    case 0xC16BA7: cpu.execute_instruction<0x22>(0xC46594, 4); return true;
    // src/text/ccs/set_player_movement_lock.asm:6 LDA #NULL
    case 0xC16BAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_player_movement_lock.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC16BAB.
    case 0xC16BAD: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/set_player_movement_lock.asm:7 RTS
    case 0xC16BAE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_player_movement_lock_if_camera_refocused.asm (source_named).
bool execute_text_ccs_set_player_movement_lock_if_camera_refocused_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16C35: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:4 TXA
    case 0xC16C37: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:5 JSL UNKNOWN_C46631
    case 0xC16C38: cpu.execute_instruction<0x22>(0xC46631, 4); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:6 LDA #NULL
    case 0xC16C3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC16C3C.
    case 0xC16C3E: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:7 RTS
    case 0xC16C3F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_respawn_point.asm (source_named).
bool execute_text_ccs_set_respawn_point_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_respawn_point.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC17037: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC17039: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC1703A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC1703B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC1703C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1703C.
    case 0xC1703E: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC1703F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC17040: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_respawn_point.asm:9 TXA
    case 0xC17041: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_respawn_point.asm:10 BEQ @UNKNOWN0
    case 0xC17042: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_respawn_point.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17044: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_respawn_point.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17046: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_respawn_point.asm:12 BRA @UNKNOWN1
    case 0xC17048: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_respawn_point.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC1704A: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/set_respawn_point.asm:16 LDA @VIRTUAL06
    case 0xC1704D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_respawn_point.asm:17 JSL SET_TELEPORT_BOX_DESTINATION
    case 0xC1704F: cpu.execute_instruction<0x22>(0xC230F3, 4); return true;
    // src/text/ccs/set_respawn_point.asm:18 LDA #NULL
    case 0xC17053: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_respawn_point.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC17053.
    case 0xC17055: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_respawn_point.asm:19 PLD
    case 0xC17056: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_respawn_point.asm:20 RTS
    case 0xC17057: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_secmem.asm (source_named).
bool execute_text_ccs_set_secmem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_secmem.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1461A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC1461C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC1461D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC1461E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC1461F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1461F.
    case 0xC14621: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC14622: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC14623: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_secmem.asm:9 CPX #$0000
    case 0xC14624: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/set_secmem.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14621.
    case 0xC14625: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/set_secmem.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14624.
    case 0xC14626: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/set_secmem.asm:10 BNE @UNKNOWN0
    case 0xC14627: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/text/ccs/set_secmem.asm:11 JSR GET_ARGUMENT_MEMORY
    case 0xC14629: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/set_secmem.asm:12 LDA @VIRTUAL06
    case 0xC1462C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_secmem.asm:13 AND #$00FF
    case 0xC1462E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_secmem.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC1462E.
    case 0xC14630: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/set_secmem.asm:14 TAX
    case 0xC14631: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_secmem.asm:16 TXA
    case 0xC14632: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_secmem.asm:17 JSR SET_SECONDARY_MEMORY
    case 0xC14633: cpu.execute_instruction<0x20>(0x000443, 3); return true;
    // src/text/ccs/set_secmem.asm:18 LDA #NULL
    case 0xC14636: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_secmem.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC14636.
    case 0xC14638: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_secmem.asm:19 PLD
    case 0xC14639: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_secmem.asm:20 RTS
    case 0xC1463A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_sprite_entity_movement.asm (source_named).
bool execute_text_ccs_set_sprite_entity_movement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:3 BEGIN_C_FUNCTION
    case 0xC16F2F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F31: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F32: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F33: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16F11.
    case 0xC16F35: cpu.execute_instruction<0xEE>(0x005BFF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16F34.
    case 0xC16F36: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F37: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F38: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:11 TXA
    case 0xC16F39: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:12 STA @LOCAL01
    case 0xC16F3A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:13 LDA #3
    case 0xC16F3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:13 LDA #3
    // Overlapping static entry reached from 0xC16F3C.
    case 0xC16F3E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:14 CLC
    case 0xC16F3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F40: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16F43: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16F45: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16F47: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16F49: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:17 LDA @LOCAL01
    case 0xC16F4B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16F4D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F4F: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16F52: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16F55: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F57: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F2)
    case 0xC16F5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x006F2F, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F2)
    // Overlapping static entry reached from 0xC16F5A.
    case 0xC16F5C: cpu.execute_instruction<0x6F>(0xE23E80, 4); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:24 BRA @UNKNOWN3
    case 0xC16F5D: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16F5F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16F5C.
    case 0xC16F60: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:27 LDY #8
    case 0xC16F61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:27 LDY #8
    // Overlapping static entry reached from 0xC16F60.
    case 0xC16F62: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16F63: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16F61.
    case 0xC16F64: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16F64.
    case 0xC16F65: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:29 AND #$00FF
    case 0xC16F66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16F65.
    case 0xC16F67: cpu.execute_instruction<0xFF>(0x3E2200, 4); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16F66.
    case 0xC16F68: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:30 JSL ASL16_ENTRY2
    case 0xC16F69: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:30 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16F67.
    case 0xC16F6B: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:31 STA @VIRTUAL02
    case 0xC16F6D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC16F6F: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:33 AND #$00FF
    case 0xC16F72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC16F72.
    case 0xC16F74: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:34 ORA @VIRTUAL02
    case 0xC16F75: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:35 REP #PROC_FLAGS::INDEX8
    case 0xC16F77: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:36 TAY
    case 0xC16F79: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:37 STY @LOCAL00
    case 0xC16F7A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:38 SEP #PROC_FLAGS::INDEX8
    case 0xC16F7C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:39 LDY #8
    case 0xC16F7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:40 LDA @LOCAL01
    case 0xC16F80: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:40 LDA @LOCAL01
    // Overlapping static entry reached from 0xC16F7E.
    case 0xC16F81: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:41 JSL ASL16_ENTRY2
    case 0xC16F82: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:41 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16F81.
    case 0xC16F83: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:42 STA @VIRTUAL02
    case 0xC16F86: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:43 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16F88: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:44 AND #$00FF
    case 0xC16F8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC16F8B.
    case 0xC16F8D: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:45 ORA @VIRTUAL02
    case 0xC16F8E: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:46 REP #PROC_FLAGS::INDEX8
    case 0xC16F90: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:47 TAX
    case 0xC16F92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:48 LDY @LOCAL00
    case 0xC16F93: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:49 TYA
    case 0xC16F95: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:50 JSL UNKNOWN_C461CC
    case 0xC16F96: cpu.execute_instruction<0x22>(0xC461CC, 4); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:51 LDA #NULL
    case 0xC16F9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC16F9A.
    case 0xC16F9C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:53 END_C_FUNCTION
    case 0xC16F9D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:53 END_C_FUNCTION
    case 0xC16F9E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_tpt_direction.asm (source_named).
bool execute_text_ccs_set_tpt_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_tpt_direction.asm:3 BEGIN_C_FUNCTION
    case 0xC16490: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16492: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16493: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16494: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16495: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16495.
    case 0xC16497: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16498: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16499: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:11 STX @LOCAL01
    case 0xC1649A: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16497.
    case 0xC1649B: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    case 0xC1649C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    // Overlapping static entry reached from 0xC1649B.
    case 0xC1649D: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    // Overlapping static entry reached from 0xC1649C.
    case 0xC1649E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:13 CLC
    case 0xC1649F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC164A0: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC164A3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC164A5: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC164A7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC164A9: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:16 TXA
    case 0xC164AB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC164AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC164AE: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC164B1: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC164B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC164B6: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:22 LDA #.LOWORD(CC_1F_16)
    case 0xC164B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x006490, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:22 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC164B9.
    case 0xC164BB: cpu.execute_instruction<0x64>(0x000080, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:23 BRA @UNKNOWN7
    case 0xC164BC: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC164BB.
    case 0xC164BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000E2, 2); else cpu.execute_instruction<0x49>(0x0020E2, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC164BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:25 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC164BD.
    case 0xC164BF: cpu.execute_instruction<0x20>(0x0008A9, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:26 LDA #8
    case 0xC164C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC164C2: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC164C0.
    case 0xC164C3: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:28 TAY
    case 0xC164C4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC164C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC164C7: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:31 AND #$00FF
    case 0xC164CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC164CA.
    case 0xC164CC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:32 JSL ASL16_ENTRY2
    case 0xC164CD: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/set_tpt_direction.asm:33 STA @VIRTUAL02
    case 0xC164D1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:34 LDA CC_ARGUMENT_STORAGE
    case 0xC164D3: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:35 AND #$00FF
    case 0xC164D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC164D6.
    case 0xC164D8: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:36 ORA @VIRTUAL02
    case 0xC164D9: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:37 BEQ @ARG_1_IS_ZERO
    case 0xC164DB: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC164DD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_tpt_direction.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC164DF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:39 BRA @ARG_1_IS_NONZERO
    case 0xC164E1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:41 JSR GET_WORKING_MEMORY
    case 0xC164E3: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:43 LDA @VIRTUAL06
    case 0xC164E6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:44 STA @LOCAL00
    case 0xC164E8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:45 REP #PROC_FLAGS::INDEX8
    case 0xC164EA: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:46 LDX @LOCAL01
    case 0xC164EC: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:47 BEQ @ARG_2_IS_ZERO
    case 0xC164EE: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:48 TXA
    case 0xC164F0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC164F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_tpt_direction.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC164F3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:50 BRA @ARG_2_IS_NONZERO
    case 0xC164F5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:52 JSR GET_ARGUMENT_MEMORY
    case 0xC164F7: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:54 LDA @VIRTUAL06
    case 0xC164FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:55 TAX
    case 0xC164FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:56 DEX
    case 0xC164FD: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:57 LDA @LOCAL00
    case 0xC164FE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:58 JSL UNKNOWN_C462FF
    case 0xC16500: cpu.execute_instruction<0x22>(0xC462FF, 4); return true;
    // src/text/ccs/set_tpt_direction.asm:59 LDA #NULL
    case 0xC16504: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC16504.
    case 0xC16506: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:61 END_C_FUNCTION
    case 0xC16507: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_tpt_direction.asm:61 END_C_FUNCTION
    case 0xC16508: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_tpt_entity_delay.asm (source_named).
bool execute_text_ccs_set_tpt_entity_delay_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:3 BEGIN_C_FUNCTION
    case 0xC16BAF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16BB1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16BB2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16BB3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16BB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16BB4.
    case 0xC16BB6: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16BB7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16BB8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:10 TXA
    case 0xC16BB9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:11 STA @LOCAL00
    case 0xC16BBA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BBC: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:13 BNE @UNKNOWN0
    case 0xC16BBF: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:14 LDA @LOCAL00
    case 0xC16BC1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16BC3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BC5: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16BC8: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16BCB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BCD: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:20 LDA #.LOWORD(CC_1F_E6)
    case 0xC16BD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x006BAF, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:20 LDA #.LOWORD(CC_1F_E6)
    // Overlapping static entry reached from 0xC16BD0.
    case 0xC16BD2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:21 BRA @UNKNOWN1
    case 0xC16BD3: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16BD5: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:24 LDY #8
    case 0xC16BD7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:25 LDA @LOCAL00
    case 0xC16BD9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16BD7.
    case 0xC16BDA: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:26 JSL ASL16_ENTRY2
    case 0xC16BDB: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16BDA.
    case 0xC16BDD: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:27 STA @VIRTUAL02
    case 0xC16BDF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16BE1: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:29 AND #$00FF
    case 0xC16BE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16BE4.
    case 0xC16BE6: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:30 ORA @VIRTUAL02
    case 0xC16BE7: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:31 JSL UNKNOWN_C4655E
    case 0xC16BE9: cpu.execute_instruction<0x22>(0xC4655E, 4); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:32 LDA #NULL
    case 0xC16BED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16BED.
    case 0xC16BEF: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:34 END_C_FUNCTION
    case 0xC16BF0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:34 END_C_FUNCTION
    case 0xC16BF1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_tpt_entity_movement.asm (source_named).
bool execute_text_ccs_set_tpt_entity_movement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:3 BEGIN_C_FUNCTION
    case 0xC16EBF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC16EC1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC16EC2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC16EC3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC16EC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16EC4.
    case 0xC16EC6: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC16EC7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC16EC8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:11 TXA
    case 0xC16EC9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:12 STA @LOCAL01
    case 0xC16ECA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:13 LDA #3
    case 0xC16ECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:13 LDA #3
    // Overlapping static entry reached from 0xC16ECC.
    case 0xC16ECE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:14 CLC
    case 0xC16ECF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16ED0: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16ED3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16ED5: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16ED7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16ED9: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:17 LDA @LOCAL01
    case 0xC16EDB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16EDD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16EDF: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16EE2: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16EE5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16EE7: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F1)
    case 0xC16EEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x006EBF, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F1)
    // Overlapping static entry reached from 0xC16EEA.
    case 0xC16EEC: cpu.execute_instruction<0x6E>(0x003E80, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:24 BRA @UNKNOWN3
    case 0xC16EED: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16EEF: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:27 LDY #8
    case 0xC16EF1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16EF3: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16EF1.
    case 0xC16EF4: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16EF4.
    case 0xC16EF5: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:29 AND #$00FF
    case 0xC16EF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16EF5.
    case 0xC16EF7: cpu.execute_instruction<0xFF>(0x3E2200, 4); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16EF6.
    case 0xC16EF8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:30 JSL ASL16_ENTRY2
    case 0xC16EF9: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:30 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16EF7.
    case 0xC16EFB: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:31 STA @VIRTUAL02
    case 0xC16EFD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC16EFF: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:33 AND #$00FF
    case 0xC16F02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC16F02.
    case 0xC16F04: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:34 ORA @VIRTUAL02
    case 0xC16F05: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:35 REP #PROC_FLAGS::INDEX8
    case 0xC16F07: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:36 TAY
    case 0xC16F09: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:37 STY @LOCAL00
    case 0xC16F0A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:38 SEP #PROC_FLAGS::INDEX8
    case 0xC16F0C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:39 LDY #8
    case 0xC16F0E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:40 LDA @LOCAL01
    case 0xC16F10: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:40 LDA @LOCAL01
    // Overlapping static entry reached from 0xC16F0E.
    case 0xC16F11: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:41 JSL ASL16_ENTRY2
    case 0xC16F12: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:41 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16F11.
    case 0xC16F13: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:42 STA @VIRTUAL02
    case 0xC16F16: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:43 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16F18: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:44 AND #$00FF
    case 0xC16F1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC16F1B.
    case 0xC16F1D: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:45 ORA @VIRTUAL02
    case 0xC16F1E: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:46 REP #PROC_FLAGS::INDEX8
    case 0xC16F20: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:47 TAX
    case 0xC16F22: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:48 LDY @LOCAL00
    case 0xC16F23: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:49 TYA
    case 0xC16F25: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:50 JSL UNKNOWN_C4617C
    case 0xC16F26: cpu.execute_instruction<0x22>(0xC4617C, 4); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:51 LDA #NULL
    case 0xC16F2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC16F2A.
    case 0xC16F2C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:53 END_C_FUNCTION
    case 0xC16F2D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:53 END_C_FUNCTION
    case 0xC16F2E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/show_character_inventory.asm (source_named).
bool execute_text_ccs_show_character_inventory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/show_character_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC1549E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC154A3.
    case 0xC154A5: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:14 STX @LOCAL01
    case 0xC154A8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/show_character_inventory.asm:14 STX @LOCAL01
    // Overlapping static entry reached from 0xC154A5.
    case 0xC154A9: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/show_character_inventory.asm:16 TAY
    case 0xC154AA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:17 STY @LOCAL00
    case 0xC154AB: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    case 0xC154AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    // Overlapping static entry reached from 0xC154AD.
    case 0xC154AF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/show_character_inventory.asm:21 CLC
    case 0xC154B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:22 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC154B1: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC154B4: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC154B6: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC154B8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC154BA: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/show_character_inventory.asm:24 TXA
    case 0xC154BC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC154BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/show_character_inventory.asm:26 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC154BF: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/show_character_inventory.asm:27 STA CC_ARGUMENT_STORAGE,X
    case 0xC154C2: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/show_character_inventory.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC154C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/show_character_inventory.asm:29 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC154C7: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/show_character_inventory.asm:30 LDA #.LOWORD(CC_1A_05)
    case 0xC154CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00549E, 3); return true;
    // src/text/ccs/show_character_inventory.asm:30 LDA #.LOWORD(CC_1A_05)
    // Overlapping static entry reached from 0xC154CA.
    case 0xC154CC: cpu.execute_instruction<0x54>(0x005880, 3); return true;
    // src/text/ccs/show_character_inventory.asm:31 BRA @UNKNOWN6
    case 0xC154CD: cpu.execute_instruction<0x80>(0x000058, 2); return true;
    // src/text/ccs/show_character_inventory.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC154CF: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/show_character_inventory.asm:34 AND #$00FF
    case 0xC154D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/show_character_inventory.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC154D2.
    case 0xC154D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/show_character_inventory.asm:44 STA @VIRTUAL02
    case 0xC154D5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/show_character_inventory.asm:46 LDA CURRENT_FOCUS_WINDOW
    case 0xC154D7: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/ccs/show_character_inventory.asm:47 CMP #1
    case 0xC154DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/show_character_inventory.asm:47 CMP #1
    // Overlapping static entry reached from 0xC154DA.
    case 0xC154DC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/show_character_inventory.asm:48 BNE @UNKNOWN3
    case 0xC154DD: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/text/ccs/show_character_inventory.asm:49 LDA #1
    case 0xC154DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/show_character_inventory.asm:49 LDA #1
    // Overlapping static entry reached from 0xC154DF.
    case 0xC154E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/show_character_inventory.asm:50 JSL UNKNOWN_EF0115
    case 0xC154E2: cpu.execute_instruction<0x22>(0xEF0115, 4); return true;
    // src/text/ccs/show_character_inventory.asm:52 LDA CURRENT_FOCUS_WINDOW
    case 0xC154E6: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/ccs/show_character_inventory.asm:53 ASL
    case 0xC154E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:54 TAX
    case 0xC154EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:55 LDA OPEN_WINDOW_TABLE,X
    case 0xC154EB: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/ccs/show_character_inventory.asm:56 LDY #.SIZEOF(window_stats)
    case 0xC154EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/ccs/show_character_inventory.asm:56 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC154EE.
    case 0xC154F0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/show_character_inventory.asm:57 JSL MULT168
    case 0xC154F1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/show_character_inventory.asm:58 CLC
    case 0xC154F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:59 ADC #.LOWORD(WINDOW_STATS)
    case 0xC154F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/ccs/show_character_inventory.asm:59 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC154F6.
    case 0xC154F8: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/text/ccs/show_character_inventory.asm:60 TAX
    case 0xC154F9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:61 STZ a:window_stats::text_y,X
    case 0xC154FA: cpu.execute_instruction<0x9E>(0x000010, 3); return true;
    // src/text/ccs/show_character_inventory.asm:62 TAX
    case 0xC154FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:63 STZ a:window_stats::text_x,X
    case 0xC154FE: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/text/ccs/show_character_inventory.asm:64 LDY @LOCAL00
    case 0xC15501: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/show_character_inventory.asm:65 TYA
    case 0xC15503: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:66 CLC
    case 0xC15504: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:67 ADC #6
    case 0xC15505: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/text/ccs/show_character_inventory.asm:67 ADC #6
    // Overlapping static entry reached from 0xC15505.
    case 0xC15507: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/show_character_inventory.asm:68 JSL UNKNOWN_C20A20
    case 0xC15508: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/text/ccs/show_character_inventory.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC1550C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/show_character_inventory.asm:71 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1550E: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/text/ccs/show_character_inventory.asm:73 LDX @LOCAL01
    case 0xC15511: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/show_character_inventory.asm:75 BEQ @UNKNOWN4
    case 0xC15513: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/show_character_inventory.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC15515: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/show_character_inventory.asm:79 TXA
    case 0xC15517: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:80 BRA @UNKNOWN5
    case 0xC15518: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/show_character_inventory.asm:82 JSR GET_ARGUMENT_MEMORY
    case 0xC1551A: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/show_character_inventory.asm:83 LDA @VIRTUAL06
    case 0xC1551D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/show_character_inventory.asm:89 LDX @VIRTUAL02
    case 0xC1551F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/show_character_inventory.asm:91 JSR INVENTORY_GET_ITEM_NAME
    case 0xC15521: cpu.execute_instruction<0x20>(0x0098DE, 3); return true;
    // src/text/ccs/show_character_inventory.asm:92 LDA #NULL
    case 0xC15524: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/show_character_inventory.asm:92 LDA #NULL
    // Overlapping static entry reached from 0xC15524.
    case 0xC15526: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/show_character_inventory.asm:94 END_C_FUNCTION
    case 0xC15527: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/show_character_inventory.asm:94 END_C_FUNCTION
    case 0xC15528: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/stop_music.asm (source_named).
bool execute_text_ccs_stop_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/stop_music.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC147A0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/stop_music.asm:4 TXA
    case 0xC147A2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/stop_music.asm:5 JSL REDIRECT_STOP_MUSIC
    case 0xC147A3: cpu.execute_instruction<0x22>(0xC216C9, 4); return true;
    // src/text/ccs/stop_music.asm:6 LDA #NULL
    case 0xC147A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/stop_music.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC147A7.
    case 0xC147A9: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/stop_music.asm:7 RTS
    case 0xC147AA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/switch_gender_etc.asm (source_named).
bool execute_text_ccs_switch_gender_etc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/switch_gender_etc.asm:3 BEGIN_C_FUNCTION
    case 0xC151FC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC151FE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC151FF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC15200: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC15201: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15201.
    case 0xC15203: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC15204: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC15205: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/switch_gender_etc.asm:11 STX @LOCAL01
    case 0xC15206: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC15203.
    case 0xC15207: cpu.execute_instruction<0x12>(0x0000AE, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:12 LDX CURRENT_TARGET
    case 0xC15208: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:12 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC15207.
    case 0xC15209: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:13 LDA a:battler::ally_or_enemy,X
    case 0xC1520B: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:14 AND #$00FF
    case 0xC1520E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC1520E.
    case 0xC15210: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:15 CMP #1
    case 0xC15211: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:15 CMP #1
    // Overlapping static entry reached from 0xC15211.
    case 0xC15213: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:16 BNE @HANDLE_ALLY
    case 0xC15214: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:17 LDX @LOCAL01
    case 0xC15216: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:18 CPX #1
    case 0xC15218: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:18 CPX #1
    // Overlapping static entry reached from 0xC15218.
    case 0xC1521A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:19 BEQ @RETURN_ENEMY_GENDER
    case 0xC1521B: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:20 LDA ENEMIES_IN_BATTLE
    case 0xC1521D: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:21 CMP #3
    case 0xC15220: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:21 CMP #3
    // Overlapping static entry reached from 0xC15220.
    case 0xC15222: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:22 BLTEQ @THREE_OR_FEWER_ENEMIES
    case 0xC15223: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:22 BLTEQ @THREE_OR_FEWER_ENEMIES
    case 0xC15225: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:23 LDX #3
    case 0xC15227: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:23 LDX #3
    // Overlapping static entry reached from 0xC15227.
    case 0xC15229: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:24 BRA @RETURN_CAPPED_ENEMY_COUNT
    case 0xC1522A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:26 LDX ENEMIES_IN_BATTLE
    case 0xC1522C: cpu.execute_instruction<0xAE>(0x009F8A, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:28 TXA
    case 0xC1522F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/switch_gender_etc.asm:29 BRA @RETURN
    case 0xC15230: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:31 LDX CURRENT_TARGET
    case 0xC15232: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:32 LDA __BSS_START__,X
    case 0xC15235: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:33 LDY #.SIZEOF(enemy_data)
    case 0xC15238: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:33 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC15238.
    case 0xC1523A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:34 JSL MULT168
    case 0xC1523B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/switch_gender_etc.asm:35 CLC
    case 0xC1523F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/switch_gender_etc.asm:36 ADC #enemy_data::gender
    case 0xC15240: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x00001A, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:36 ADC #enemy_data::gender
    // Overlapping static entry reached from 0xC15240.
    case 0xC15242: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:37 TAX
    case 0xC15243: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/switch_gender_etc.asm:38 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC15244: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/text/ccs/switch_gender_etc.asm:39 AND #$00FF
    case 0xC15248: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC15248.
    case 0xC1524A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:40 BRA @RETURN
    case 0xC1524B: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:42 LDX @LOCAL01
    case 0xC1524D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:43 CPX #1
    case 0xC1524F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:43 CPX #1
    // Overlapping static entry reached from 0xC1524F.
    case 0xC15251: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:44 BEQ @RETURN_ALLY_GENDER
    case 0xC15252: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:45 JSL UNKNOWN_C2272F
    case 0xC15254: cpu.execute_instruction<0x22>(0xC2272F, 4); return true;
    // src/text/ccs/switch_gender_etc.asm:46 TAX
    case 0xC15258: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/switch_gender_etc.asm:47 CPX #3
    case 0xC15259: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:47 CPX #3
    // Overlapping static entry reached from 0xC15259.
    case 0xC1525B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:48 BLTEQ @RETURN_CAPPED_ALLY_COUNT
    case 0xC1525C: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:48 BLTEQ @RETURN_CAPPED_ALLY_COUNT
    case 0xC1525E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:49 LDX #3
    case 0xC15260: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:49 LDX #3
    // Overlapping static entry reached from 0xC15260.
    case 0xC15262: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:51 TXA
    case 0xC15263: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/switch_gender_etc.asm:52 BRA @RETURN
    case 0xC15264: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:54 LDX CURRENT_TARGET
    case 0xC15266: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:55 LDA a:battler::id,X
    case 0xC15269: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:56 CMP #2
    case 0xC1526C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:56 CMP #2
    // Overlapping static entry reached from 0xC1526C.
    case 0xC1526E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:57 BNE @NOT_PAULA
    case 0xC1526F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:58 LDA #2
    case 0xC15271: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:58 LDA #2
    // Overlapping static entry reached from 0xC15271.
    case 0xC15273: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:59 BRA @RETURN
    case 0xC15274: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:61 LDA #1
    case 0xC15276: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:61 LDA #1
    // Overlapping static entry reached from 0xC15276.
    case 0xC15278: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:63 STORE_INT1632 @VIRTUAL06
    case 0xC15279: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/switch_gender_etc.asm:63 STORE_INT1632 @VIRTUAL06
    case 0xC1527B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/switch_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1527D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1527F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/switch_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15281: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/switch_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15283: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/switch_gender_etc.asm:65 JSR SET_WORKING_MEMORY
    case 0xC15285: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:66 LDA #NULL
    case 0xC15288: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/switch_gender_etc.asm:66 LDA #NULL
    // Overlapping static entry reached from 0xC15288.
    case 0xC1528A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/switch_gender_etc.asm:67 END_C_FUNCTION
    case 0xC1528B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/switch_gender_etc.asm:67 END_C_FUNCTION
    case 0xC1528C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/switch_to_window.asm (source_named).
bool execute_text_ccs_switch_to_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/switch_to_window.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC143CC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/switch_to_window.asm:4 TXA
    case 0xC143CE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/switch_to_window.asm:5 JSR SET_WINDOW_FOCUS
    case 0xC143CF: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/text/ccs/switch_to_window.asm:6 LDA #NULL
    case 0xC143D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/switch_to_window.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC143D2.
    case 0xC143D4: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/switch_to_window.asm:7 RTS
    case 0xC143D5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/take_item_from_character.asm (source_named).
bool execute_text_ccs_take_item_from_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/take_item_from_character.asm:3 BEGIN_C_FUNCTION
    case 0xC14C86: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC14C88: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC14C89: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC14C8A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC14C8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC14C8B.
    case 0xC14C8D: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC14C8E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC14C8F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character.asm:12 LDA #1
    case 0xC14C90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/take_item_from_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14C8D.
    case 0xC14C91: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/take_item_from_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14C90.
    case 0xC14C92: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/take_item_from_character.asm:13 CLC
    case 0xC14C93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14C94: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/take_item_from_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14C97: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/take_item_from_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14C99: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/take_item_from_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14C9B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/take_item_from_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14C9D: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/take_item_from_character.asm:16 TXA
    case 0xC14C9F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14CA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/take_item_from_character.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14CA2: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/take_item_from_character.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14CA5: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/take_item_from_character.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC14CA8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/take_item_from_character.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14CAA: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/take_item_from_character.asm:22 LDA #.LOWORD(CC_1D_01)
    case 0xC14CAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x004C86, 3); return true;
    // src/text/ccs/take_item_from_character.asm:22 LDA #.LOWORD(CC_1D_01)
    // Overlapping static entry reached from 0xC14CAD.
    case 0xC14CAF: cpu.execute_instruction<0x4C>(0x003A80, 3); return true;
    // src/text/ccs/take_item_from_character.asm:23 BRA @UNKNOWN6
    case 0xC14CB0: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/take_item_from_character.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC14CB2: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/take_item_from_character.asm:26 AND #$00FF
    case 0xC14CB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/take_item_from_character.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC14CB5.
    case 0xC14CB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/take_item_from_character.asm:27 STA @LOCAL02
    case 0xC14CB8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/take_item_from_character.asm:28 CPX #0
    case 0xC14CBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/take_item_from_character.asm:28 CPX #0
    // Overlapping static entry reached from 0xC14CBA.
    case 0xC14CBC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/take_item_from_character.asm:29 BEQ @UNKNOWN3
    case 0xC14CBD: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/take_item_from_character.asm:30 STX @LOCAL01
    case 0xC14CBF: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character.asm:31 BRA @UNKNOWN4
    case 0xC14CC1: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/take_item_from_character.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC14CC3: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/take_item_from_character.asm:34 LDA @VIRTUAL06
    case 0xC14CC6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/take_item_from_character.asm:35 TAX
    case 0xC14CC8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character.asm:36 STX @LOCAL01
    case 0xC14CC9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character.asm:38 LDA @LOCAL02
    case 0xC14CCB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/take_item_from_character.asm:39 BNE @UNKNOWN5
    case 0xC14CCD: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/take_item_from_character.asm:40 JSR GET_WORKING_MEMORY
    case 0xC14CCF: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/take_item_from_character.asm:41 LDA @VIRTUAL06
    case 0xC14CD2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/take_item_from_character.asm:43 LDX @LOCAL01
    case 0xC14CD4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character.asm:44 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC14CD6: cpu.execute_instruction<0x22>(0xC18EAD, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/take_item_from_character.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC14CDA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/take_item_from_character.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC14CDC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/take_item_from_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14CDE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/take_item_from_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14CE0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/take_item_from_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14CE2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/take_item_from_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14CE4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/take_item_from_character.asm:47 JSR SET_WORKING_MEMORY
    case 0xC14CE6: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/take_item_from_character.asm:48 LDA #NULL
    case 0xC14CE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/take_item_from_character.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC14CE9.
    case 0xC14CEB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/take_item_from_character.asm:50 END_C_FUNCTION
    case 0xC14CEC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/take_item_from_character.asm:50 END_C_FUNCTION
    case 0xC14CED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/take_item_from_character_2.asm (source_named).
bool execute_text_ccs_take_item_from_character_2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:3 BEGIN_C_FUNCTION
    case 0xC156DB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156DD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156DE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156DF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC156E0.
    case 0xC156E2: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156E3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156E4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:11 STX @LOCAL01
    case 0xC156E5: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC156E2.
    case 0xC156E6: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:12 LDA #1
    case 0xC156E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:12 LDA #1
    // Overlapping static entry reached from 0xC156E6.
    case 0xC156E8: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:12 LDA #1
    // Overlapping static entry reached from 0xC156E7.
    case 0xC156E9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:13 CLC
    case 0xC156EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC156EB: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC156EE: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC156F0: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC156F2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC156F4: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:16 TXA
    case 0xC156F6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC156F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC156F9: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC156FC: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC156FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15701: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:22 LDA #.LOWORD(CC_1D_0F)
    case 0xC15704: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DB, 2); else cpu.execute_instruction<0xA9>(0x0056DB, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:22 LDA #.LOWORD(CC_1D_0F)
    // Overlapping static entry reached from 0xC15704.
    case 0xC15706: cpu.execute_instruction<0x56>(0x000080, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:23 BRA @UNKNOWN7
    case 0xC15707: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC15706.
    case 0xC15708: cpu.execute_instruction<0x52>(0x0000AD, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15709: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC15708.
    case 0xC1570A: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1570A.
    case 0xC1570B: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:26 AND #$00FF
    case 0xC1570C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1570B.
    case 0xC1570D: cpu.execute_instruction<0xFF>(0xF0A800, 4); return true;
    // src/text/ccs/take_item_from_character_2.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1570C.
    case 0xC1570E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:27 TAY
    case 0xC1570F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:28 BEQ @UNKNOWN3
    case 0xC15710: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:28 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC1570D.
    case 0xC15711: cpu.execute_instruction<0x03>(0x000098, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:29 TYA
    case 0xC15712: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:30 BRA @UNKNOWN4
    case 0xC15713: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:32 JSR GET_WORKING_MEMORY
    case 0xC15715: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:33 LDA @VIRTUAL06
    case 0xC15718: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:35 STA @VIRTUAL02
    case 0xC1571A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:36 LDX @LOCAL01
    case 0xC1571C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:37 BEQ @UNKNOWN5
    case 0xC1571E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:38 TXA
    case 0xC15720: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:39 BRA @UNKNOWN6
    case 0xC15721: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:41 JSR GET_ARGUMENT_MEMORY
    case 0xC15723: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:42 LDA @VIRTUAL06
    case 0xC15726: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:44 TAY
    case 0xC15728: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:45 STY @LOCAL01
    case 0xC15729: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:46 TYX
    case 0xC1572B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:47 LDA @VIRTUAL02
    case 0xC1572C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:48 JSL GET_CHARACTER_ITEM
    case 0xC1572E: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC15732: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC15734: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15736: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15738: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1573A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1573C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:51 JSR SET_ARGUMENT_MEMORY
    case 0xC1573E: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:52 LDY @LOCAL01
    case 0xC15741: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:53 TYX
    case 0xC15743: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:54 LDA @VIRTUAL02
    case 0xC15744: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:55 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC15746: cpu.execute_instruction<0x20>(0x008C27, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:56 STORE_INT1632 @VIRTUAL06
    case 0xC15749: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:56 STORE_INT1632 @VIRTUAL06
    case 0xC1574B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1574D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1574F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15751: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15753: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:58 JSR SET_WORKING_MEMORY
    case 0xC15755: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:59 LDA #NULL
    case 0xC15758: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC15758.
    case 0xC1575A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:61 END_C_FUNCTION
    case 0xC1575B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:61 END_C_FUNCTION
    case 0xC1575C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/teleport_party_to_tpt_entity.asm (source_named).
bool execute_text_ccs_teleport_party_to_tpt_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16D62: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16D64: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16D65: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16D66: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16D67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16D67.
    case 0xC16D69: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16D6A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16D6B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:10 TXA
    case 0xC16D6C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:11 STA @LOCAL00
    case 0xC16D6D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D6F: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:13 BNE @UNKNOWN0
    case 0xC16D72: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:14 LDA @LOCAL00
    case 0xC16D74: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16D76: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D78: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16D7B: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16D7E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D80: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_EE)
    case 0xC16D83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x006D62, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_EE)
    // Overlapping static entry reached from 0xC16D83.
    case 0xC16D85: cpu.execute_instruction<0x6D>(0x001B80, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:21 BRA @UNKNOWN1
    case 0xC16D86: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16D88: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:24 LDY #8
    case 0xC16D8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:25 LDA @LOCAL00
    case 0xC16D8C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16D8A.
    case 0xC16D8D: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:26 JSL ASL16_ENTRY2
    case 0xC16D8E: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16D8D.
    case 0xC16D90: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:27 STA @VIRTUAL02
    case 0xC16D92: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16D94: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:29 AND #$00FF
    case 0xC16D97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16D97.
    case 0xC16D99: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:30 ORA @VIRTUAL02
    case 0xC16D9A: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:31 JSL UNKNOWN_C46698
    case 0xC16D9C: cpu.execute_instruction<0x22>(0xC46698, 4); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:32 LDA #NULL
    case 0xC16DA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16DA0.
    case 0xC16DA2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC16DA3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC16DA4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_atm_has_enough_money.asm (source_named).
bool execute_text_ccs_test_atm_has_enough_money_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:3 BEGIN_C_FUNCTION
    case 0xC15E5C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15E5E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15E5F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15E60: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15E61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15E61.
    case 0xC15E63: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15E64: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15E65: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:11 TXA
    case 0xC15E66: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:12 STA @LOCAL01
    case 0xC15E67: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:13 LDA #3
    case 0xC15E69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15E69.
    case 0xC15E6B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:14 CLC
    case 0xC15E6C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15E6D: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15E70: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15E72: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15E74: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15E76: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:17 LDA @LOCAL01
    case 0xC15E78: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15E7A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15E7C: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15E7F: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15E82: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15E84: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_17)
    case 0xC15E87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x005E5C, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_17)
    // Overlapping static entry reached from 0xC15E87.
    case 0xC15E89: cpu.execute_instruction<0x5E>(0x006F4C, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:24 JMP @UNKNOWN7
    case 0xC15E8A: cpu.execute_instruction<0x4C>(0x005F6F, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC15E89.
    case 0xC15E8C: cpu.execute_instruction<0x5F>(0xA010E2, 4); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15E8D: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:27 LDY #24
    case 0xC15E8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:27 LDY #24
    // Overlapping static entry reached from 0xC15E8C.
    case 0xC15E90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15E91: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15E8F.
    case 0xC15E92: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15E93: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15E92.
    case 0xC15E94: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15E95: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15E94.
    case 0xC15E96: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:29 JSL ASL32_ENTRY2
    case 0xC15E97: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15E9B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15E9D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15E9E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15EA0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:31 LDY #16
    case 0xC15EA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15EA3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15EA1.
    case 0xC15EA4: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15EA5: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15EA4.
    case 0xC15EA7: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15EA8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15EA7.
    case 0xC15EA9: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15EAA: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15EA9.
    case 0xC15EAB: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15EAC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15EAB.
    case 0xC15EAD: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15EAE: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15EB0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:35 JSL ASL32_ENTRY2
    case 0xC15EB2: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15EB6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15EB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15EB9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15EBB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:37 LDY #8
    case 0xC15EBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15EBE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15EBC.
    case 0xC15EBF: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15EC0: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15EBF.
    case 0xC15EC2: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15EC3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15EC2.
    case 0xC15EC4: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15EC5: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15EC4.
    case 0xC15EC6: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15EC7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15EC6.
    case 0xC15EC8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15EC9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15ECB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:41 JSL ASL32_ENTRY2
    case 0xC15ECD: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15ED1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15ED3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15ED5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15ED7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC15ED9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15EDB: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15EDE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15EE0: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15EE2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15EE4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15EE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15EE8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15EEA: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15EEC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15EEE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15EF0: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15EF2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15EF4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15EF5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15EF7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15EF8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15EFA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15EFC: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15EFE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F00: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F02: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F04: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15F06: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15F07: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15F09: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15F0A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F0C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F0E: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F10: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F12: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F14: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F16: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15F18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15F18.
    case 0xC15F1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15F1B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15F1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15F1D.
    case 0xC15F1F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15F20: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15F22: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15F24: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15F26: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15F28: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15F2A: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:53 BNE @ARG_IS_NONZERO
    case 0xC15F2C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC15F2E: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:56 LDA #0
    case 0xC15F31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:56 LDA #0
    // Overlapping static entry reached from 0xC15F31.
    case 0xC15F33: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:57 STA @LOCAL01
    case 0xC15F34: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F36: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F38: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F3A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F3C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC15F3E: cpu.execute_instruction<0xAD>(0x009835, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC15F41: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC15F43: cpu.execute_instruction<0xAD>(0x009837, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC15F46: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:60 LDA @VIRTUAL06
    case 0xC15F48: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:61 CMP @VIRTUAL0A
    case 0xC15F4A: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:62 LDA @VIRTUAL06+2
    case 0xC15F4C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:63 SBC @VIRTUAL0A+2
    case 0xC15F4E: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:64 BCS @UNKNOWN5
    case 0xC15F50: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:65 LDA #1
    case 0xC15F52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:65 LDA #1
    // Overlapping static entry reached from 0xC15F52.
    case 0xC15F54: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:66 STA @LOCAL01
    case 0xC15F55: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15F57: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15F59: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15F5B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15F5D: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15F5F: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15F61: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15F63: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15F65: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15F67: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:70 JSR SET_WORKING_MEMORY
    case 0xC15F69: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:71 LDA #NULL
    case 0xC15F6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:71 LDA #NULL
    // Overlapping static entry reached from 0xC15F6C.
    case 0xC15F6E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15F6F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15F70: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_character_can_equip_item.asm (source_named).
bool execute_text_ccs_test_character_can_equip_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:3 BEGIN_C_FUNCTION
    case 0xC14F6F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC14F71: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC14F72: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC14F73: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC14F74: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC14F74.
    case 0xC14F76: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC14F77: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC14F78: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:12 LDA #1
    case 0xC14F79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14F76.
    case 0xC14F7A: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14F79.
    case 0xC14F7B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:13 CLC
    case 0xC14F7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F7D: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14F80: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14F82: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14F84: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14F86: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:16 TXA
    case 0xC14F88: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14F89: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F8B: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14F8E: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC14F91: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F93: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:22 LDA #.LOWORD(CC_1F_81)
    case 0xC14F96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006F, 2); else cpu.execute_instruction<0xA9>(0x004F6F, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:22 LDA #.LOWORD(CC_1F_81)
    // Overlapping static entry reached from 0xC14F96.
    case 0xC14F98: cpu.execute_instruction<0x4F>(0xAD3A80, 4); return true;
    // src/text/ccs/test_character_can_equip_item.asm:23 BRA @UNKNOWN6
    case 0xC14F99: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC14F9B: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14F98.
    case 0xC14F9C: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14F9C.
    case 0xC14F9D: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:26 AND #$00FF
    case 0xC14F9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC14F9D.
    case 0xC14F9F: cpu.execute_instruction<0xFF>(0x148500, 4); return true;
    // src/text/ccs/test_character_can_equip_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC14F9E.
    case 0xC14FA0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:27 STA @LOCAL02
    case 0xC14FA1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:28 CPX #0
    case 0xC14FA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:28 CPX #0
    // Overlapping static entry reached from 0xC14FA3.
    case 0xC14FA5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:29 BEQ @UNKNOWN3
    case 0xC14FA6: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:30 STX @LOCAL01
    case 0xC14FA8: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:31 BRA @UNKNOWN4
    case 0xC14FAA: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC14FAC: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:34 LDA @VIRTUAL06
    case 0xC14FAF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:35 TAX
    case 0xC14FB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:36 STX @LOCAL01
    case 0xC14FB2: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:38 LDA @LOCAL02
    case 0xC14FB4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:39 BNE @UNKNOWN5
    case 0xC14FB6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:40 JSR GET_WORKING_MEMORY
    case 0xC14FB8: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:41 LDA @VIRTUAL06
    case 0xC14FBB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:43 LDX @LOCAL01
    case 0xC14FBD: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:44 JSL UNKNOWN_C3EE14
    case 0xC14FBF: cpu.execute_instruction<0x22>(0xC3EE14, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC14FC3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC14FC5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14FC7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14FC9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14FCB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14FCD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:47 JSR SET_WORKING_MEMORY
    case 0xC14FCF: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:48 LDA #NULL
    case 0xC14FD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC14FD2.
    case 0xC14FD4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:50 END_C_FUNCTION
    case 0xC14FD5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:50 END_C_FUNCTION
    case 0xC14FD6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_character_doesnt_have_item.asm (source_named).
bool execute_text_ccs_test_character_doesnt_have_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:3 BEGIN_C_FUNCTION
    case 0xC14D24: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D26: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D27: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D28: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC14D29.
    case 0xC14D2B: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D2C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D2D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    case 0xC14D2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14D2B.
    case 0xC14D2F: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14D2E.
    case 0xC14D30: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:13 CLC
    case 0xC14D31: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D32: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14D35: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14D37: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14D39: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14D3B: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:16 TXA
    case 0xC14D3D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14D3E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D40: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14D43: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC14D46: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D48: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:22 LDA #.LOWORD(CC_1D_04)
    case 0xC14D4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x004D24, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:22 LDA #.LOWORD(CC_1D_04)
    // Overlapping static entry reached from 0xC14D4B.
    case 0xC14D4D: cpu.execute_instruction<0x4D>(0x004180, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:23 BRA @UNKNOWN7
    case 0xC14D4E: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC14D50: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    case 0xC14D53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC14D53.
    case 0xC14D55: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:27 STA @LOCAL02
    case 0xC14D56: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:28 CPX #0
    case 0xC14D58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:28 CPX #0
    // Overlapping static entry reached from 0xC14D58.
    case 0xC14D5A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:29 BEQ @UNKNOWN3
    case 0xC14D5B: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:30 STX @LOCAL01
    case 0xC14D5D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:31 BRA @UNKNOWN4
    case 0xC14D5F: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC14D61: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:34 LDA @VIRTUAL06
    case 0xC14D64: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:35 TAX
    case 0xC14D66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:36 STX @LOCAL01
    case 0xC14D67: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:38 LDA @LOCAL02
    case 0xC14D69: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:39 BNE @UNKNOWN5
    case 0xC14D6B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:40 JSR GET_WORKING_MEMORY
    case 0xC14D6D: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:41 LDA @VIRTUAL06
    case 0xC14D70: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:43 LDX @LOCAL01
    case 0xC14D72: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:44 JSL UNKNOWN_C3E9F7
    case 0xC14D74: cpu.execute_instruction<0x22>(0xC3E9F7, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC14D78.
    case 0xC14D7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D7B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D7D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D7F: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D81: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D83: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D85: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D87: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D89: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:47 JSR SET_WORKING_MEMORY
    case 0xC14D8B: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:48 LDA #NULL
    case 0xC14D8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC14D8E.
    case 0xC14D90: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:50 END_C_FUNCTION
    case 0xC14D91: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:50 END_C_FUNCTION
    case 0xC14D92: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_character_has_item.asm (source_named).
bool execute_text_ccs_test_character_has_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_has_item.asm:3 BEGIN_C_FUNCTION
    case 0xC14D93: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC14D95: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC14D96: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC14D97: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC14D98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC14D98.
    case 0xC14D9A: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC14D9B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC14D9C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_character_has_item.asm:12 LDA #1
    case 0xC14D9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_character_has_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14D9A.
    case 0xC14D9E: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/test_character_has_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14D9D.
    case 0xC14D9F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_character_has_item.asm:13 CLC
    case 0xC14DA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_character_has_item.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14DA1: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_has_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14DA4: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_has_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14DA6: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_has_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14DA8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_has_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14DAA: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/test_character_has_item.asm:16 TXA
    case 0xC14DAC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_character_has_item.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14DAD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_character_has_item.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14DAF: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/test_character_has_item.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14DB2: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/test_character_has_item.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC14DB5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_character_has_item.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14DB7: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/test_character_has_item.asm:22 LDA #.LOWORD(CC_1D_05)
    case 0xC14DBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x004D93, 3); return true;
    // src/text/ccs/test_character_has_item.asm:22 LDA #.LOWORD(CC_1D_05)
    // Overlapping static entry reached from 0xC14DBA.
    case 0xC14DBC: cpu.execute_instruction<0x4D>(0x003A80, 3); return true;
    // src/text/ccs/test_character_has_item.asm:23 BRA @UNKNOWN6
    case 0xC14DBD: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/test_character_has_item.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC14DBF: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/test_character_has_item.asm:26 AND #$00FF
    case 0xC14DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_has_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC14DC2.
    case 0xC14DC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_character_has_item.asm:27 STA @LOCAL02
    case 0xC14DC5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/test_character_has_item.asm:28 CPX #0
    case 0xC14DC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_character_has_item.asm:28 CPX #0
    // Overlapping static entry reached from 0xC14DC7.
    case 0xC14DC9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_character_has_item.asm:29 BEQ @UNKNOWN3
    case 0xC14DCA: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/test_character_has_item.asm:30 STX @LOCAL01
    case 0xC14DCC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_has_item.asm:31 BRA @UNKNOWN4
    case 0xC14DCE: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/test_character_has_item.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC14DD0: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_character_has_item.asm:34 LDA @VIRTUAL06
    case 0xC14DD3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_has_item.asm:35 TAX
    case 0xC14DD5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_has_item.asm:36 STX @LOCAL01
    case 0xC14DD6: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_has_item.asm:38 LDA @LOCAL02
    case 0xC14DD8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/test_character_has_item.asm:39 BNE @UNKNOWN5
    case 0xC14DDA: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_has_item.asm:40 JSR GET_WORKING_MEMORY
    case 0xC14DDC: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/test_character_has_item.asm:41 LDA @VIRTUAL06
    case 0xC14DDF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_has_item.asm:43 LDX @LOCAL01
    case 0xC14DE1: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_character_has_item.asm:44 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC14DE3: cpu.execute_instruction<0x22>(0xC45683, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_character_has_item.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC14DE7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_character_has_item.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC14DE9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_has_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_has_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_has_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DEF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_has_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DF1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_character_has_item.asm:47 JSR SET_WORKING_MEMORY
    case 0xC14DF3: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_character_has_item.asm:48 LDA #NULL
    case 0xC14DF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_character_has_item.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC14DF6.
    case 0xC14DF8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_has_item.asm:50 END_C_FUNCTION
    case 0xC14DF9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_has_item.asm:50 END_C_FUNCTION
    case 0xC14DFA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_character_status.asm (source_named).
bool execute_text_ccs_test_character_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_status.asm:3 BEGIN_C_FUNCTION
    case 0xC150E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC150E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC150E7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC150E8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC150E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC150E9.
    case 0xC150EB: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC150EC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC150ED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_character_status.asm:13 STX @VIRTUAL02
    case 0xC150EE: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/test_character_status.asm:13 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC150EB.
    case 0xC150EF: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/test_character_status.asm:14 LDA #2
    case 0xC150F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/test_character_status.asm:14 LDA #2
    // Overlapping static entry reached from 0xC150F0.
    case 0xC150F2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_character_status.asm:15 CLC
    case 0xC150F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_character_status.asm:16 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC150F4: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_status.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC150F7: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_status.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC150F9: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_status.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC150FB: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_status.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC150FD: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/test_character_status.asm:18 LDA @VIRTUAL02
    case 0xC150FF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/test_character_status.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC15101: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_character_status.asm:20 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15103: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/test_character_status.asm:21 STA CC_ARGUMENT_STORAGE,X
    case 0xC15106: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/test_character_status.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC15109: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_character_status.asm:23 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1510B: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/test_character_status.asm:24 LDA #.LOWORD(CC_1D_0D)
    case 0xC1510E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x0050E4, 3); return true;
    // src/text/ccs/test_character_status.asm:24 LDA #.LOWORD(CC_1D_0D)
    // Overlapping static entry reached from 0xC1510E.
    case 0xC15110: cpu.execute_instruction<0x50>(0x000080, 2); return true;
    // src/text/ccs/test_character_status.asm:25 BRA @UNKNOWN8
    case 0xC15111: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/text/ccs/test_character_status.asm:25 BRA @UNKNOWN8
    // Overlapping static entry reached from 0xC15110.
    case 0xC15112: cpu.execute_instruction<0x56>(0x0000AD, 2); return true;
    // src/text/ccs/test_character_status.asm:27 LDA CC_ARGUMENT_STORAGE
    case 0xC15113: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/test_character_status.asm:27 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC15112.
    case 0xC15114: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/text/ccs/test_character_status.asm:27 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC15114.
    case 0xC15115: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/test_character_status.asm:28 AND #$00FF
    case 0xC15116: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_status.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC15115.
    case 0xC15117: cpu.execute_instruction<0xFF>(0x168500, 4); return true;
    // src/text/ccs/test_character_status.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC15116.
    case 0xC15118: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_character_status.asm:29 STA @LOCAL03
    case 0xC15119: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/ccs/test_character_status.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC1511B: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/test_character_status.asm:31 AND #$00FF
    case 0xC1511E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_status.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC1511E.
    case 0xC15120: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/test_character_status.asm:32 TAX
    case 0xC15121: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_status.asm:33 LDY #0
    case 0xC15122: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/test_character_status.asm:33 LDY #0
    // Overlapping static entry reached from 0xC15178.
    case 0xC15123: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/test_character_status.asm:33 LDY #0
    // Overlapping static entry reached from 0xC15122.
    case 0xC15124: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/test_character_status.asm:34 STY @LOCAL02
    case 0xC15125: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/test_character_status.asm:35 CPX #0
    case 0xC15127: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_character_status.asm:35 CPX #0
    // Overlapping static entry reached from 0xC15127.
    case 0xC15129: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_character_status.asm:36 BEQ @UNKNOWN3
    case 0xC1512A: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/test_character_status.asm:37 STX @LOCAL01
    case 0xC1512C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_status.asm:38 BRA @UNKNOWN4
    case 0xC1512E: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/test_character_status.asm:40 JSR GET_ARGUMENT_MEMORY
    case 0xC15130: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_character_status.asm:41 LDA @VIRTUAL06
    case 0xC15133: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_status.asm:42 TAX
    case 0xC15135: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_status.asm:43 STX @LOCAL01
    case 0xC15136: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_status.asm:45 LDA @LOCAL03
    case 0xC15138: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/ccs/test_character_status.asm:46 BNE @UNKNOWN5
    case 0xC1513A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_status.asm:47 JSR GET_WORKING_MEMORY
    case 0xC1513C: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/test_character_status.asm:48 LDA @VIRTUAL06
    case 0xC1513F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_status.asm:50 LDX @LOCAL01
    case 0xC15141: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_character_status.asm:51 JSL CHECK_STATUS_GROUP
    case 0xC15143: cpu.execute_instruction<0x22>(0xC458AF, 4); return true;
    // src/text/ccs/test_character_status.asm:52 CMP @VIRTUAL02
    case 0xC15147: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/test_character_status.asm:53 BNE @UNKNOWN6
    case 0xC15149: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_status.asm:54 LDY #1
    case 0xC1514B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/test_character_status.asm:54 LDY #1
    // Overlapping static entry reached from 0xC1514B.
    case 0xC1514D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/test_character_status.asm:55 STY @LOCAL02
    case 0xC1514E: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/test_character_status.asm:57 LDY @LOCAL02
    case 0xC15150: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/test_character_status.asm:58 TYA
    case 0xC15152: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_character_status.asm:59 STORE_INT1632S @VIRTUAL06
    case 0xC15153: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_character_status.asm:59 STORE_INT1632S @VIRTUAL06
    case 0xC15155: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/test_character_status.asm:59 STORE_INT1632S @VIRTUAL06
    case 0xC15157: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/test_character_status.asm:59 STORE_INT1632S @VIRTUAL06
    case 0xC15159: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_status.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1515B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_status.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1515D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_status.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1515F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_status.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15161: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_character_status.asm:61 JSR SET_WORKING_MEMORY
    case 0xC15163: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_character_status.asm:62 LDA #NULL
    case 0xC15166: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_character_status.asm:62 LDA #NULL
    // Overlapping static entry reached from 0xC15166.
    case 0xC15168: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_status.asm:64 END_C_FUNCTION
    case 0xC15169: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_status.asm:64 END_C_FUNCTION
    case 0xC1516A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_equality.asm (source_named).
bool execute_text_ccs_test_equality_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_equality.asm:3 BEGIN_C_FUNCTION
    case 0xC1528D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC1528F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC15290: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC15291: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC15292: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15292.
    case 0xC15294: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC15295: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC15296: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_equality.asm:11 STX @LOCAL01
    case 0xC15297: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_equality.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC15294.
    case 0xC15298: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/text/ccs/test_equality.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15299: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/test_equality.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC15298.
    case 0xC1529A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/test_equality.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC1529A.
    case 0xC1529B: cpu.execute_instruction<0x97>(0x0000C9, 2); return true;
    // src/text/ccs/test_equality.asm:13 CMP #4
    case 0xC1529C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/test_equality.asm:13 CMP #4
    // Overlapping static entry reached from 0xC1529B.
    case 0xC1529D: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/text/ccs/test_equality.asm:13 CMP #4
    // Overlapping static entry reached from 0xC1529C.
    case 0xC1529E: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/text/ccs/test_equality.asm:14 BCS @UNKNOWN0
    case 0xC1529F: cpu.execute_instruction<0xB0>(0x000014, 2); return true;
    // src/text/ccs/test_equality.asm:14 BCS @UNKNOWN0
    // Overlapping static entry reached from 0xC107BA.
    case 0xC152A0: cpu.execute_instruction<0x14>(0x00008A, 2); return true;
    // src/text/ccs/test_equality.asm:15 TXA
    case 0xC152A1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_equality.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC152A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC152A4: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/test_equality.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC152A7: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/test_equality.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC152AA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC152AC: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/test_equality.asm:21 LDA #.LOWORD(CC_18_07)
    case 0xC152AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x00528D, 3); return true;
    // src/text/ccs/test_equality.asm:21 LDA #.LOWORD(CC_18_07)
    // Overlapping static entry reached from 0xC152AF.
    case 0xC152B1: cpu.execute_instruction<0x52>(0x00004C, 2); return true;
    // src/text/ccs/test_equality.asm:22 JMP @UNKNOWN10
    case 0xC152B2: cpu.execute_instruction<0x4C>(0x005382, 3); return true;
    // src/text/ccs/test_equality.asm:22 JMP @UNKNOWN10
    // Overlapping static entry reached from 0xC152B1.
    case 0xC152B3: cpu.execute_instruction<0x82>(0x00E253, 3); return true;
    // src/text/ccs/test_equality.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC152B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:25 LDA #8
    case 0xC152B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/test_equality.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC152B9: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/test_equality.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC152B7.
    case 0xC152BA: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/test_equality.asm:27 TAY
    case 0xC152BB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC152BC: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC152BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC152C1: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC152C3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC152C5: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_equality.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC152C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:30 JSL ASL32_ENTRY2
    case 0xC152C9: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // src/text/ccs/test_equality.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC152CD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC152CF: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC152D2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC152D4: cpu.execute_instruction<0x64>(0x00000B, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC152D6: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC152D8: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/text/ccs/test_equality.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC152DA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC152DC: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC152DE: cpu.execute_instruction<0x05>(0x000006, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC152E0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC152E2: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC152E4: cpu.execute_instruction<0x05>(0x000008, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC152E6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_equality.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC152E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:36 LDA #16
    case 0xC152EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00A810, 3); return true;
    // src/text/ccs/test_equality.asm:37 TAY
    case 0xC152EC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC152ED: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC152F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC152F2: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC152F4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC152F6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_equality.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC152F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:40 JSL ASL32_ENTRY2
    case 0xC152FA: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC152FE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15300: cpu.execute_instruction<0x05>(0x000006, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15302: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15304: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15306: cpu.execute_instruction<0x05>(0x000008, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15308: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_equality.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC1530A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:43 LDA #24
    case 0xC1530C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x00A818, 3); return true;
    // src/text/ccs/test_equality.asm:44 TAY
    case 0xC1530E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC1530F: cpu.execute_instruction<0xAD>(0x0097BD, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC15312: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC15314: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC15316: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC15318: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_equality.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC1531A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:47 JSL ASL32_ENTRY2
    case 0xC1531C: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15320: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15322: cpu.execute_instruction<0x05>(0x000006, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15324: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15326: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15328: cpu.execute_instruction<0x05>(0x000008, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC1532A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_equality.asm:49 REP #PROC_FLAGS::INDEX8
    case 0xC1532C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/test_equality.asm:50 LDX @LOCAL01
    case 0xC1532E: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_equality.asm:51 BNE @UNKNOWN1
    case 0xC15330: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_equality.asm:52 JSR GET_WORKING_MEMORY
    case 0xC15332: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/test_equality.asm:53 BRA @UNKNOWN3
    case 0xC15335: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/test_equality.asm:55 CPX #1
    case 0xC15337: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/text/ccs/test_equality.asm:55 CPX #1
    // Overlapping static entry reached from 0xC15337.
    case 0xC15339: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/test_equality.asm:56 BNE @UNKNOWN2
    case 0xC1533A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_equality.asm:57 JSR GET_ARGUMENT_MEMORY
    case 0xC1533C: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_equality.asm:58 BRA @UNKNOWN3
    case 0xC1533F: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/text/ccs/test_equality.asm:60 JSR GET_SECONDARY_MEMORY
    case 0xC15341: cpu.execute_instruction<0x20>(0x000400, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC15344: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC15346: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/test_equality.asm:63 LDA @VIRTUAL06
    case 0xC15348: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_equality.asm:64 CMP @VIRTUAL0A
    case 0xC1534A: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_equality.asm:65 LDA @VIRTUAL06+2
    case 0xC1534C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/test_equality.asm:66 SBC @VIRTUAL0A+2
    case 0xC1534E: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/test_equality.asm:67 BCS @UNKNOWN4
    case 0xC15350: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/test_equality.asm:68 LDA #0
    case 0xC15352: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_equality.asm:68 LDA #0
    // Overlapping static entry reached from 0xC15352.
    case 0xC15354: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/test_equality.asm:69 BRA @UNKNOWN8
    case 0xC15355: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15357: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15359: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1535B: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1535D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1535F: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/text/ccs/test_equality.asm:72 BNE @UNKNOWN6
    case 0xC15361: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_equality.asm:73 LDX #1
    case 0xC15363: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/test_equality.asm:73 LDX #1
    // Overlapping static entry reached from 0xC15363.
    case 0xC15365: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/test_equality.asm:74 BRA @UNKNOWN7
    case 0xC15366: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/test_equality.asm:76 LDX #2
    case 0xC15368: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/test_equality.asm:76 LDX #2
    // Overlapping static entry reached from 0xC15368.
    case 0xC1536A: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/ccs/test_equality.asm:78 TXA
    case 0xC1536B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC1536C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC1536E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC15370: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC15372: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15374: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15376: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15378: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1537A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_equality.asm:82 JSR SET_WORKING_MEMORY
    case 0xC1537C: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_equality.asm:83 LDA #NULL
    case 0xC1537F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_equality.asm:83 LDA #NULL
    // Overlapping static entry reached from 0xC1537F.
    case 0xC15381: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_equality.asm:85 END_C_FUNCTION
    case 0xC15382: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_equality.asm:85 END_C_FUNCTION
    case 0xC15383: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_has_enough_money.asm (source_named).
bool execute_text_ccs_test_has_enough_money_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_has_enough_money.asm:3 BEGIN_C_FUNCTION
    case 0xC159F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC159FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC159FC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC159FD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC159FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC159FE.
    case 0xC15A00: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15A01: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15A02: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:11 TXA
    case 0xC15A03: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:12 STA @LOCAL01
    case 0xC15A04: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:13 LDA #3
    case 0xC15A06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15A06.
    case 0xC15A08: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:14 CLC
    case 0xC15A09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15A0A: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A0D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A0F: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A11: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A13: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:17 LDA @LOCAL01
    case 0xC15A15: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15A17: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15A19: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15A1C: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15A1F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15A21: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_14)
    case 0xC15A24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F9, 2); else cpu.execute_instruction<0xA9>(0x0059F9, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_14)
    // Overlapping static entry reached from 0xC15A24.
    case 0xC15A26: cpu.execute_instruction<0x59>(0x000C4C, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:24 JMP @UNKNOWN7
    case 0xC15A27: cpu.execute_instruction<0x4C>(0x005B0C, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC15A26.
    case 0xC15A29: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15A2A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:27 LDY #24
    case 0xC15A2C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15A2E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A2C.
    case 0xC15A2F: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15A30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A2F.
    case 0xC15A31: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15A32: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A31.
    case 0xC15A33: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:29 JSL ASL32_ENTRY2
    case 0xC15A34: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15A38: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15A3A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15A3B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15A3D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:31 LDY #16
    case 0xC15A3E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15A40: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15A3E.
    case 0xC15A41: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A42: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A41.
    case 0xC15A44: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A45: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A44.
    case 0xC15A46: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A47: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A46.
    case 0xC15A48: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A49: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A48.
    case 0xC15A4A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A4B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15A4D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:35 JSL ASL32_ENTRY2
    case 0xC15A4F: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15A53: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15A55: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15A56: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15A58: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:37 LDY #8
    case 0xC15A59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15A5B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15A59.
    case 0xC15A5C: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A5D: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A5C.
    case 0xC15A5F: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A60: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A5F.
    case 0xC15A61: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A62: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A61.
    case 0xC15A63: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A64: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A63.
    case 0xC15A65: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A66: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15A68: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:41 JSL ASL32_ENTRY2
    case 0xC15A6A: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15A6E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15A70: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15A72: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15A74: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC15A76: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A78: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A7B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A7D: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A7F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A81: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15A83: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A85: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A87: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A89: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A8B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A8D: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A8F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15A91: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15A92: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15A94: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15A95: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A97: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A99: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A9D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A9F: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AA1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15AA3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15AA4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15AA6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15AA7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AA9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AAB: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AAD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AAF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AB1: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AB3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:51 LDA #0
    case 0xC15AB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:51 LDA #0
    // Overlapping static entry reached from 0xC15AB5.
    case 0xC15AB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:52 STA @LOCAL01
    case 0xC15AB8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15ABA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15ABA.
    case 0xC15ABC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15ABD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15ABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15ABF.
    case 0xC15AC1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15AC2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15AC4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15AC6: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15AC8: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15ACA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15ACC: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:55 BNE @ARG_IS_NONZERO
    case 0xC15ACE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:56 JSR GET_ARGUMENT_MEMORY
    case 0xC15AD0: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15AD3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15AD5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15AD7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15AD9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15ADB: cpu.execute_instruction<0xAD>(0x009831, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15ADE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15AE0: cpu.execute_instruction<0xAD>(0x009833, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15AE3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:60 LDA @VIRTUAL06
    case 0xC15AE5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:61 CMP @VIRTUAL0A
    case 0xC15AE7: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:62 LDA @VIRTUAL06+2
    case 0xC15AE9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:63 SBC @VIRTUAL0A+2
    case 0xC15AEB: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:64 BCS @UNKNOWN5
    case 0xC15AED: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:65 LDA #1
    case 0xC15AEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:65 LDA #1
    // Overlapping static entry reached from 0xC15AEF.
    case 0xC15AF1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:66 STA @LOCAL01
    case 0xC15AF2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AF4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AF6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AF8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AFA: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AFC: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15AFE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B00: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B02: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B04: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:70 JSR SET_WORKING_MEMORY
    case 0xC15B06: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:71 LDA #NULL
    case 0xC15B09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:71 LDA #NULL
    // Overlapping static entry reached from 0xC15B09.
    case 0xC15B0B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15B0C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15B0D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_inventory_full.asm (source_named).
bool execute_text_ccs_test_inventory_full_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_inventory_full.asm:3 BEGIN_C_FUNCTION
    case 0xC148AC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC148AE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC148AF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC148B0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC148B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC148B1.
    case 0xC148B3: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC148B4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC148B5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_inventory_full.asm:11 STX @VIRTUAL02
    case 0xC148B6: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/test_inventory_full.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC148B3.
    case 0xC148B7: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/text/ccs/test_inventory_full.asm:12 LDX #0
    case 0xC148B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/test_inventory_full.asm:12 LDX #0
    // Overlapping static entry reached from 0xC148B8.
    case 0xC148BA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/test_inventory_full.asm:13 STX @LOCAL01
    case 0xC148BB: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_inventory_full.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC148BD: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_inventory_full.asm:15 LDA @VIRTUAL06
    case 0xC148C0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_inventory_full.asm:16 JSR GET_ITEM_TYPE
    case 0xC148C2: cpu.execute_instruction<0x20>(0x009EE6, 3); return true;
    // src/text/ccs/test_inventory_full.asm:17 CMP @VIRTUAL02
    case 0xC148C5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/test_inventory_full.asm:18 BNE @UNKNOWN0
    case 0xC148C7: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_inventory_full.asm:19 LDX #1
    case 0xC148C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/test_inventory_full.asm:19 LDX #1
    // Overlapping static entry reached from 0xC148C9.
    case 0xC148CB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/test_inventory_full.asm:20 STX @LOCAL01
    case 0xC148CC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_inventory_full.asm:22 LDX @LOCAL01
    case 0xC148CE: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_inventory_full.asm:23 TXA
    case 0xC148D0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_inventory_full.asm:24 STORE_INT1632S @VIRTUAL06
    case 0xC148D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_inventory_full.asm:24 STORE_INT1632S @VIRTUAL06
    case 0xC148D3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/test_inventory_full.asm:24 STORE_INT1632S @VIRTUAL06
    case 0xC148D5: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/test_inventory_full.asm:24 STORE_INT1632S @VIRTUAL06
    case 0xC148D7: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_inventory_full.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148D9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_inventory_full.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_inventory_full.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_inventory_full.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148DF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_inventory_full.asm:26 JSR SET_WORKING_MEMORY
    case 0xC148E1: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_inventory_full.asm:27 LDA #NULL
    case 0xC148E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_inventory_full.asm:27 LDA #NULL
    // Overlapping static entry reached from 0xC148E4.
    case 0xC148E6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_inventory_full.asm:28 END_C_FUNCTION
    case 0xC148E7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_inventory_full.asm:28 END_C_FUNCTION
    case 0xC148E8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_inventory_not_full.asm (source_named).
bool execute_text_ccs_test_inventory_not_full_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:3 BEGIN_C_FUNCTION
    case 0xC14CEE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC14CF0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC14CF1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC14CF2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC14CF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14CF3.
    case 0xC14CF5: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC14CF6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC14CF7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_inventory_not_full.asm:10 CPX #0
    case 0xC14CF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_inventory_not_full.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14CF5.
    case 0xC14CF9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14CF8.
    case 0xC14CFA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:11 BEQ @UNKNOWN0
    case 0xC14CFB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:12 TXA
    case 0xC14CFD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_inventory_not_full.asm:13 BRA @UNKNOWN1
    case 0xC14CFE: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC14D00: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_inventory_not_full.asm:16 LDA @VIRTUAL06
    case 0xC14D03: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:18 JSL FIND_INVENTORY_SPACE2
    case 0xC14D05: cpu.execute_instruction<0x22>(0xC4572B, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC14D09.
    case 0xC14D0B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D0E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D10: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D12: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D14: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D16: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D18: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D1A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:21 JSR SET_WORKING_MEMORY
    case 0xC14D1C: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_inventory_not_full.asm:22 LDA #NULL
    case 0xC14D1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_inventory_not_full.asm:22 LDA #NULL
    // Overlapping static entry reached from 0xC14D1F.
    case 0xC14D21: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:23 END_C_FUNCTION
    case 0xC14D22: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:23 END_C_FUNCTION
    case 0xC14D23: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_item_is_condiment.asm (source_named).
bool execute_text_ccs_test_item_is_condiment_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:3 BEGIN_C_FUNCTION
    case 0xC16F9F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC16FA1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC16FA2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC16FA3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC16FA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16F81.
    case 0xC16FA5: cpu.execute_instruction<0xEE>(0x005BFF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16FA4.
    case 0xC16FA6: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC16FA7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC16FA8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_item_is_condiment.asm:10 TXA
    case 0xC16FA9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_item_is_condiment.asm:11 BEQ @ARG_IS_ZERO
    case 0xC16FAA: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC16FAC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC16FAE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:13 BRA @ARG_IS_NONZERO
    case 0xC16FB0: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC16FB2: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_item_is_condiment.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16FB5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:18 LDA @VIRTUAL06
    case 0xC16FB7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:19 JSL FIND_CONDIMENT
    case 0xC16FB9: cpu.execute_instruction<0x22>(0xC1DB33, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:20 STORE_INT1632 @VIRTUAL06
    case 0xC16FBD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:20 STORE_INT1632 @VIRTUAL06
    case 0xC16FBF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16FC1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16FC3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16FC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16FC7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:22 JSR SET_WORKING_MEMORY
    case 0xC16FC9: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_item_is_condiment.asm:24 LDA #NULL
    case 0xC16FCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_item_is_condiment.asm:24 LDA #NULL
    // Overlapping static entry reached from 0xC16FCC.
    case 0xC16FCE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:25 END_C_FUNCTION
    case 0xC16FCF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:25 END_C_FUNCTION
    case 0xC16FD0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_item_is_drink.asm (source_named).
bool execute_text_ccs_test_item_is_drink_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_item_is_drink.asm:3 BEGIN_C_FUNCTION
    case 0xC16143: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC16145: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC16146: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC16147: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC16148: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16148.
    case 0xC1614A: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC1614B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC1614C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_item_is_drink.asm:10 CPX #0
    case 0xC1614D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_item_is_drink.asm:10 CPX #0
    // Overlapping static entry reached from 0xC1614A.
    case 0xC1614E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:10 CPX #0
    // Overlapping static entry reached from 0xC1614D.
    case 0xC1614F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:11 BEQ @ARG_IS_ZERO
    case 0xC16150: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:12 TXA
    case 0xC16152: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_item_is_drink.asm:13 BRA @ARG_IS_NONZERO
    case 0xC16153: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC16155: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/test_item_is_drink.asm:16 LDA @VIRTUAL06
    case 0xC16158: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:18 JSL GET_ITEM_SUBTYPE_2
    case 0xC1615A: cpu.execute_instruction<0x22>(0xC22524, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_item_is_drink.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC1615E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_item_is_drink.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC16160: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_item_is_drink.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16162: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_item_is_drink.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16164: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_item_is_drink.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16166: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_item_is_drink.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16168: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:21 JSR SET_WORKING_MEMORY
    case 0xC1616A: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_item_is_drink.asm:22 LDA #NULL
    case 0xC1616D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_item_is_drink.asm:22 LDA #NULL
    // Overlapping static entry reached from 0xC1616D.
    case 0xC1616F: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_item_is_drink.asm:23 END_C_FUNCTION
    case 0xC16170: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_item_is_drink.asm:23 END_C_FUNCTION
    case 0xC16171: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_party_enough_characters.asm (source_named).
bool execute_text_ccs_test_party_enough_characters_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:3 BEGIN_C_FUNCTION
    case 0xC16172: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC16174: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC16175: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC16176: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC16177: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16177.
    case 0xC16179: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC1617A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC1617B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_party_enough_characters.asm:11 TXA
    case 0xC1617C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_party_enough_characters.asm:12 LDX #0
    case 0xC1617D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:12 LDX #0
    // Overlapping static entry reached from 0xC1617D.
    case 0xC1617F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:13 STX @LOCAL01
    case 0xC16180: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:14 CMP #0
    case 0xC16182: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:14 CMP #0
    // Overlapping static entry reached from 0xC16182.
    case 0xC16184: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:15 BEQ @ARG_IS_ZERO
    case 0xC16185: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xC16187: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xC16189: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:17 BRA @ARG_IS_NONZERO
    case 0xC1618B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:19 JSR GET_ARGUMENT_MEMORY
    case 0xC1618D: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:21 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16190: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:21 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16192: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:21 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16194: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:21 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16196: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC16198: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC1619A: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC1619D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC1619F: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC161A1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC161A3: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC161A5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:25 LDA @VIRTUAL06
    case 0xC161A7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:26 CMP @VIRTUAL0A
    case 0xC161A9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:27 LDA @VIRTUAL06+2
    case 0xC161AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:28 SBC @VIRTUAL0A+2
    case 0xC161AD: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:29 BCS @UNKNOWN2
    case 0xC161AF: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:30 LDX #1
    case 0xC161B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:30 LDX #1
    // Overlapping static entry reached from 0xC161B1.
    case 0xC161B3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:31 STX @LOCAL01
    case 0xC161B4: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:33 LDX @LOCAL01
    case 0xC161B6: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:34 TXA
    case 0xC161B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC161B9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC161BB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC161BD: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC161BF: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC161C1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC161C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC161C5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC161C7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:37 JSR SET_WORKING_MEMORY
    case 0xC161C9: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:38 LDA #NULL
    case 0xC161CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:38 LDA #NULL
    // Overlapping static entry reached from 0xC161CC.
    case 0xC161CE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:39 END_C_FUNCTION
    case 0xC161CF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:39 END_C_FUNCTION
    case 0xC161D0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/text_effects.asm (source_named).
bool execute_text_ccs_text_effects_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/text_effects.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC140F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/text_effects.asm:4 TXA
    case 0xC140FB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/text_effects.asm:5 JSR UNKNOWN_C10FEA
    case 0xC140FC: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/text/ccs/text_effects.asm:6 LDA #NULL
    case 0xC140FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/text_effects.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC140FF.
    case 0xC14101: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/text_effects.asm:7 RTS
    case 0xC14102: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/toggle_text_printing_sound.asm (source_named).
bool execute_text_ccs_toggle_text_printing_sound_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/toggle_text_printing_sound.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC17254: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC17256: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC17257: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC17258: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC17259: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC17259.
    case 0xC1725B: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC1725C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC1725D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:9 TXA
    case 0xC1725E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:10 BEQ @UNKNOWN0
    case 0xC1725F: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17261: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17263: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:12 BRA @UNKNOWN1
    case 0xC17265: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC17267: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:16 LDA @VIRTUAL06
    case 0xC1726A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:17 JSR SET_TEXT_SOUND_MODE
    case 0xC1726C: cpu.execute_instruction<0x20>(0x000048, 3); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:18 LDA #NULL
    case 0xC1726F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC1726F.
    case 0xC17271: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:19 PLD
    case 0xC17272: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:20 RTS
    case 0xC17273: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_18.asm (source_named).
bool execute_text_ccs_tree_18_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_18.asm:3 BEGIN_C_FUNCTION
    case 0xC1790B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC1790D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC1790E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC1790F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17910: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17910.
    case 0xC17912: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17913: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17914: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:10 TAY
    case 0xC17915: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:11 STY @LOCAL00
    case 0xC17916: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/tree_18.asm:12 TXA
    case 0xC17918: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:13 BEQ @UNKNOWN0
    case 0xC17919: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/text/ccs/tree_18.asm:14 CMP #$01
    case 0xC1791B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_18.asm:14 CMP #$01
    // Overlapping static entry reached from 0xC1791B.
    case 0xC1791D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:15 BEQ @UNKNOWN1
    case 0xC1791E: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/text/ccs/tree_18.asm:16 CMP #$02
    case 0xC17920: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_18.asm:16 CMP #$02
    // Overlapping static entry reached from 0xC17920.
    case 0xC17922: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:17 BEQ @UNKNOWN2
    case 0xC17923: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/text/ccs/tree_18.asm:18 CMP #$03
    case 0xC17925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_18.asm:18 CMP #$03
    // Overlapping static entry reached from 0xC17925.
    case 0xC17927: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:19 BEQ @UNKNOWN3
    case 0xC17928: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/text/ccs/tree_18.asm:20 CMP #$04
    case 0xC1792A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_18.asm:20 CMP #$04
    // Overlapping static entry reached from 0xC1792A.
    case 0xC1792C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:21 BEQ @UNKNOWN4
    case 0xC1792D: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/text/ccs/tree_18.asm:22 CMP #$05
    case 0xC1792F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_18.asm:22 CMP #$05
    // Overlapping static entry reached from 0xC1792F.
    case 0xC17931: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:23 BEQ @UNKNOWN5
    case 0xC17932: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:24 CMP #$06
    case 0xC17934: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_18.asm:24 CMP #$06
    // Overlapping static entry reached from 0xC17934.
    case 0xC17936: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:25 BEQ @UNKNOWN6
    case 0xC17937: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:26 CMP #$07
    case 0xC17939: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_18.asm:26 CMP #$07
    // Overlapping static entry reached from 0xC17939.
    case 0xC1793B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:27 BEQ @UNKNOWN7
    case 0xC1793C: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:28 CMP #$08
    case 0xC1793E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_18.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC1793E.
    case 0xC17940: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:29 BEQ @UNKNOWN8
    case 0xC17941: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:30 CMP #$09
    case 0xC17943: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_18.asm:30 CMP #$09
    // Overlapping static entry reached from 0xC17943.
    case 0xC17945: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:31 BEQ @UNKNOWN9
    case 0xC17946: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:32 CMP #$0A
    case 0xC17948: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_18.asm:32 CMP #$0A
    // Overlapping static entry reached from 0xC17948.
    case 0xC1794A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:33 BEQ @UNKNOWN10
    case 0xC1794B: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:34 CMP #$0D
    case 0xC1794D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/ccs/tree_18.asm:34 CMP #$0D
    // Overlapping static entry reached from 0xC1794D.
    case 0xC1794F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:35 BEQ @UNKNOWN11
    case 0xC17950: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:36 BRA @UNKNOWN12
    case 0xC17952: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/text/ccs/tree_18.asm:38 JSR CLOSE_FOCUS_WINDOW
    case 0xC17954: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/text/ccs/tree_18.asm:39 BRA @UNKNOWN12
    case 0xC17957: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/text/ccs/tree_18.asm:41 LDA #.LOWORD(CC_18_01)
    case 0xC17959: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0043C2, 3); return true;
    // src/text/ccs/tree_18.asm:41 LDA #.LOWORD(CC_18_01)
    // Overlapping static entry reached from 0xC17959.
    case 0xC1795B: cpu.execute_instruction<0x43>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:42 BRA @UNKNOWN13
    case 0xC1795C: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/text/ccs/tree_18.asm:42 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC1795B.
    case 0xC1795D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:44 TYA
    case 0xC1795E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:45 CLC
    case 0xC1795F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:46 ADC #6
    case 0xC17960: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/text/ccs/tree_18.asm:46 ADC #6
    // Overlapping static entry reached from 0xC17960.
    case 0xC17962: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_18.asm:47 JSL UNKNOWN_C20A20
    case 0xC17963: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/text/ccs/tree_18.asm:48 LDA #1
    case 0xC17967: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/tree_18.asm:48 LDA #1
    // Overlapping static entry reached from 0xC17967.
    case 0xC17969: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/text/ccs/tree_18.asm:49 LDY @LOCAL00
    case 0xC1796A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/tree_18.asm:50 STA __BSS_START__+4,Y
    case 0xC1796C: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/text/ccs/tree_18.asm:51 BRA @UNKNOWN12
    case 0xC1796F: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/text/ccs/tree_18.asm:53 LDA #.LOWORD(CC_18_03)
    case 0xC17971: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0043CC, 3); return true;
    // src/text/ccs/tree_18.asm:53 LDA #.LOWORD(CC_18_03)
    // Overlapping static entry reached from 0xC17971.
    case 0xC17973: cpu.execute_instruction<0x43>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:54 BRA @UNKNOWN13
    case 0xC17974: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/text/ccs/tree_18.asm:54 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17973.
    case 0xC17975: cpu.execute_instruction<0x32>(0x000020, 2); return true;
    // src/text/ccs/tree_18.asm:56 JSR UNKNOWN_C1008E
    case 0xC17976: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/text/ccs/tree_18.asm:56 JSR UNKNOWN_C1008E
    // Overlapping static entry reached from 0xC17975.
    case 0xC17977: cpu.execute_instruction<0x8E>(0x002000, 3); return true;
    // src/text/ccs/tree_18.asm:57 JSR HIDE_HPPP_WINDOWS
    case 0xC17979: cpu.execute_instruction<0x20>(0x000A1D, 3); return true;
    // src/text/ccs/tree_18.asm:57 JSR HIDE_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC17977.
    case 0xC1797A: cpu.execute_instruction<0x1D>(0x00220A, 3); return true;
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    case 0xC1797C: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC1797A.
    case 0xC1797D: cpu.execute_instruction<0xD5>(0x00002D, 2); return true;
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC1797D.
    case 0xC1797F: cpu.execute_instruction<0xC1>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:59 BRA @UNKNOWN12
    case 0xC17980: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/text/ccs/tree_18.asm:59 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC1797F.
    case 0xC17981: cpu.execute_instruction<0x23>(0x0000A9, 2); return true;
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    case 0xC17982: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x004509, 3); return true;
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC17981.
    case 0xC17983: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000045, 2); else cpu.execute_instruction<0x09>(0x008045, 3); return true;
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC17982.
    case 0xC17984: cpu.execute_instruction<0x45>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:62 BRA @UNKNOWN13
    case 0xC17985: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/ccs/tree_18.asm:62 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17984.
    case 0xC17986: cpu.execute_instruction<0x21>(0x000020, 2); return true;
    // src/text/ccs/tree_18.asm:64 JSR UNKNOWN_C10FA3
    case 0xC17987: cpu.execute_instruction<0x20>(0x000FA3, 3); return true;
    // src/text/ccs/tree_18.asm:64 JSR UNKNOWN_C10FA3
    // Overlapping static entry reached from 0xC17986.
    case 0xC17988: cpu.execute_instruction<0xA3>(0x00000F, 2); return true;
    // src/text/ccs/tree_18.asm:65 BRA @UNKNOWN12
    case 0xC1798A: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/text/ccs/tree_18.asm:67 LDA #.LOWORD(CC_18_07)
    case 0xC1798C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x00528D, 3); return true;
    // src/text/ccs/tree_18.asm:67 LDA #.LOWORD(CC_18_07)
    // Overlapping static entry reached from 0xC1798C.
    case 0xC1798E: cpu.execute_instruction<0x52>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:68 BRA @UNKNOWN13
    case 0xC1798F: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/ccs/tree_18.asm:68 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC1798E.
    case 0xC17990: cpu.execute_instruction<0x17>(0x0000A9, 2); return true;
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    case 0xC17991: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x005529, 3); return true;
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    // Overlapping static entry reached from 0xC17990.
    case 0xC17992: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000055, 2); else cpu.execute_instruction<0x29>(0x008055, 3); return true;
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    // Overlapping static entry reached from 0xC17991.
    case 0xC17993: cpu.execute_instruction<0x55>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:71 BRA @UNKNOWN13
    case 0xC17994: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_18.asm:71 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17993.
    case 0xC17995: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    case 0xC17996: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00554E, 3); return true;
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    // Overlapping static entry reached from 0xC17995.
    case 0xC17997: cpu.execute_instruction<0x4E>(0x008055, 3); return true;
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    // Overlapping static entry reached from 0xC17996.
    case 0xC17998: cpu.execute_instruction<0x55>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:74 BRA @UNKNOWN13
    case 0xC17999: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_18.asm:74 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17998.
    case 0xC1799A: cpu.execute_instruction<0x0D>(0x001820, 3); return true;
    // src/text/ccs/tree_18.asm:76 JSR UNKNOWN_C1AA18
    case 0xC1799B: cpu.execute_instruction<0x20>(0x00AA18, 3); return true;
    // src/text/ccs/tree_18.asm:76 JSR UNKNOWN_C1AA18
    // Overlapping static entry reached from 0xC1799A.
    case 0xC1799D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:77 BRA @UNKNOWN12
    case 0xC1799E: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/tree_18.asm:79 LDA #.LOWORD(CC_18_0D)
    case 0xC179A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x005B46, 3); return true;
    // src/text/ccs/tree_18.asm:79 LDA #.LOWORD(CC_18_0D)
    // Overlapping static entry reached from 0xC179A0.
    case 0xC179A2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:80 BRA @UNKNOWN13
    case 0xC179A3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_18.asm:82 LDA #0
    case 0xC179A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_18.asm:82 LDA #0
    // Overlapping static entry reached from 0xC179A5.
    case 0xC179A7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_18.asm:84 END_C_FUNCTION
    case 0xC179A8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_18.asm:84 END_C_FUNCTION
    case 0xC179A9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_19.asm (source_named).
bool execute_text_ccs_tree_19_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_19.asm:3 BEGIN_C_FUNCTION
    case 0xC179AA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179AC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179AD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179AE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC179AF.
    case 0xC179B1: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179B2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179B3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:10 TXA
    case 0xC179B4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:11 CMP #$02
    case 0xC179B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_19.asm:11 CMP #$02
    // Overlapping static entry reached from 0xC179B5.
    case 0xC179B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:12 BEQL @UNKNOWN24
    case 0xC179B8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:12 BEQL @UNKNOWN24
    case 0xC179BA: cpu.execute_instruction<0x4C>(0x007A78, 3); return true;
    // src/text/ccs/tree_19.asm:13 CMP #$04
    case 0xC179BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_19.asm:13 CMP #$04
    // Overlapping static entry reached from 0xC179BD.
    case 0xC179BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:14 BEQL @UNKNOWN25
    case 0xC179C0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:14 BEQL @UNKNOWN25
    case 0xC179C2: cpu.execute_instruction<0x4C>(0x007A7E, 3); return true;
    // src/text/ccs/tree_19.asm:15 CMP #$05
    case 0xC179C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_19.asm:15 CMP #$05
    // Overlapping static entry reached from 0xC179C5.
    case 0xC179C7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:16 BEQL @UNKNOWN26
    case 0xC179C8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:16 BEQL @UNKNOWN26
    case 0xC179CA: cpu.execute_instruction<0x4C>(0x007A84, 3); return true;
    // src/text/ccs/tree_19.asm:17 CMP #$10
    case 0xC179CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/ccs/tree_19.asm:17 CMP #$10
    // Overlapping static entry reached from 0xC179CD.
    case 0xC179CF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:18 BEQL @UNKNOWN27
    case 0xC179D0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:18 BEQL @UNKNOWN27
    case 0xC179D2: cpu.execute_instruction<0x4C>(0x007A8A, 3); return true;
    // src/text/ccs/tree_19.asm:19 CMP #$11
    case 0xC179D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/ccs/tree_19.asm:19 CMP #$11
    // Overlapping static entry reached from 0xC179D5.
    case 0xC179D7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:20 BEQL @UNKNOWN28
    case 0xC179D8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:20 BEQL @UNKNOWN28
    case 0xC179DA: cpu.execute_instruction<0x4C>(0x007A90, 3); return true;
    // src/text/ccs/tree_19.asm:21 CMP #$14
    case 0xC179DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/ccs/tree_19.asm:21 CMP #$14
    // Overlapping static entry reached from 0xC179DD.
    case 0xC179DF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:22 BEQL @UNKNOWN29
    case 0xC179E0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:22 BEQL @UNKNOWN29
    case 0xC179E2: cpu.execute_instruction<0x4C>(0x007A96, 3); return true;
    // src/text/ccs/tree_19.asm:23 CMP #$16
    case 0xC179E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000016, 2); else cpu.execute_instruction<0xC9>(0x000016, 3); return true;
    // src/text/ccs/tree_19.asm:23 CMP #$16
    // Overlapping static entry reached from 0xC179E5.
    case 0xC179E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:24 BEQL @UNKNOWN30
    case 0xC179E8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:24 BEQL @UNKNOWN30
    case 0xC179EA: cpu.execute_instruction<0x4C>(0x007ABB, 3); return true;
    // src/text/ccs/tree_19.asm:25 CMP #$18
    case 0xC179ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/ccs/tree_19.asm:25 CMP #$18
    // Overlapping static entry reached from 0xC179ED.
    case 0xC179EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:26 BEQL @UNKNOWN31
    case 0xC179F0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:26 BEQL @UNKNOWN31
    case 0xC179F2: cpu.execute_instruction<0x4C>(0x007AC1, 3); return true;
    // src/text/ccs/tree_19.asm:27 CMP #$19
    case 0xC179F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/text/ccs/tree_19.asm:27 CMP #$19
    // Overlapping static entry reached from 0xC179F5.
    case 0xC179F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:28 BEQL @UNKNOWN32
    case 0xC179F8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:28 BEQL @UNKNOWN32
    case 0xC179FA: cpu.execute_instruction<0x4C>(0x007AC7, 3); return true;
    // src/text/ccs/tree_19.asm:29 CMP #$1A
    case 0xC179FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001A, 2); else cpu.execute_instruction<0xC9>(0x00001A, 3); return true;
    // src/text/ccs/tree_19.asm:29 CMP #$1A
    // Overlapping static entry reached from 0xC179FD.
    case 0xC179FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:30 BEQL @UNKNOWN33
    case 0xC17A00: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:30 BEQL @UNKNOWN33
    case 0xC17A02: cpu.execute_instruction<0x4C>(0x007ACD, 3); return true;
    // src/text/ccs/tree_19.asm:31 CMP #$1B
    case 0xC17A05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001B, 2); else cpu.execute_instruction<0xC9>(0x00001B, 3); return true;
    // src/text/ccs/tree_19.asm:31 CMP #$1B
    // Overlapping static entry reached from 0xC17A05.
    case 0xC17A07: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:32 BEQL @UNKNOWN34
    case 0xC17A08: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:32 BEQL @UNKNOWN34
    case 0xC17A0A: cpu.execute_instruction<0x4C>(0x007AD3, 3); return true;
    // src/text/ccs/tree_19.asm:33 CMP #$1C
    case 0xC17A0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001C, 2); else cpu.execute_instruction<0xC9>(0x00001C, 3); return true;
    // src/text/ccs/tree_19.asm:33 CMP #$1C
    // Overlapping static entry reached from 0xC17A0D.
    case 0xC17A0F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:34 BEQL @UNKNOWN35
    case 0xC17A10: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:34 BEQL @UNKNOWN35
    case 0xC17A12: cpu.execute_instruction<0x4C>(0x007AD9, 3); return true;
    // src/text/ccs/tree_19.asm:35 CMP #$1D
    case 0xC17A15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/text/ccs/tree_19.asm:35 CMP #$1D
    // Overlapping static entry reached from 0xC17A15.
    case 0xC17A17: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:36 BEQL @UNKNOWN36
    case 0xC17A18: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:36 BEQL @UNKNOWN36
    case 0xC17A1A: cpu.execute_instruction<0x4C>(0x007ADE, 3); return true;
    // src/text/ccs/tree_19.asm:37 CMP #$1E
    case 0xC17A1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/text/ccs/tree_19.asm:37 CMP #$1E
    // Overlapping static entry reached from 0xC17A1D.
    case 0xC17A1F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:38 BEQL @UNKNOWN37
    case 0xC17A20: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:38 BEQL @UNKNOWN37
    case 0xC17A22: cpu.execute_instruction<0x4C>(0x007AE3, 3); return true;
    // src/text/ccs/tree_19.asm:39 CMP #$1F
    case 0xC17A25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/text/ccs/tree_19.asm:39 CMP #$1F
    // Overlapping static entry reached from 0xC17A25.
    case 0xC17A27: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:40 BEQL @UNKNOWN38
    case 0xC17A28: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:40 BEQL @UNKNOWN38
    case 0xC17A2A: cpu.execute_instruction<0x4C>(0x007AF3, 3); return true;
    // src/text/ccs/tree_19.asm:41 CMP #$20
    case 0xC17A2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/text/ccs/tree_19.asm:41 CMP #$20
    // Overlapping static entry reached from 0xC17A2D.
    case 0xC17A2F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:42 BEQL @UNKNOWN39
    case 0xC17A30: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:42 BEQL @UNKNOWN39
    case 0xC17A32: cpu.execute_instruction<0x4C>(0x007B0D, 3); return true;
    // src/text/ccs/tree_19.asm:43 CMP #$21
    case 0xC17A35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000021, 2); else cpu.execute_instruction<0xC9>(0x000021, 3); return true;
    // src/text/ccs/tree_19.asm:43 CMP #$21
    // Overlapping static entry reached from 0xC17A35.
    case 0xC17A37: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:44 BEQL @UNKNOWN40
    case 0xC17A38: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:44 BEQL @UNKNOWN40
    case 0xC17A3A: cpu.execute_instruction<0x4C>(0x007B29, 3); return true;
    // src/text/ccs/tree_19.asm:45 CMP #$22
    case 0xC17A3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/text/ccs/tree_19.asm:45 CMP #$22
    // Overlapping static entry reached from 0xC17A3D.
    case 0xC17A3F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:46 BEQL @UNKNOWN41
    case 0xC17A40: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:46 BEQL @UNKNOWN41
    case 0xC17A42: cpu.execute_instruction<0x4C>(0x007B2E, 3); return true;
    // src/text/ccs/tree_19.asm:47 CMP #$23
    case 0xC17A45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000023, 3); return true;
    // src/text/ccs/tree_19.asm:47 CMP #$23
    // Overlapping static entry reached from 0xC17A45.
    case 0xC17A47: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:48 BEQL @UNKNOWN42
    case 0xC17A48: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:48 BEQL @UNKNOWN42
    case 0xC17A4A: cpu.execute_instruction<0x4C>(0x007B33, 3); return true;
    // src/text/ccs/tree_19.asm:49 CMP #$24
    case 0xC17A4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/text/ccs/tree_19.asm:49 CMP #$24
    // Overlapping static entry reached from 0xC17A4D.
    case 0xC17A4F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:50 BEQL @UNKNOWN43
    case 0xC17A50: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:50 BEQL @UNKNOWN43
    case 0xC17A52: cpu.execute_instruction<0x4C>(0x007B38, 3); return true;
    // src/text/ccs/tree_19.asm:51 CMP #$25
    case 0xC17A55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000025, 2); else cpu.execute_instruction<0xC9>(0x000025, 3); return true;
    // src/text/ccs/tree_19.asm:51 CMP #$25
    // Overlapping static entry reached from 0xC17A55.
    case 0xC17A57: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:52 BEQL @UNKNOWN44
    case 0xC17A58: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:52 BEQL @UNKNOWN44
    case 0xC17A5A: cpu.execute_instruction<0x4C>(0x007B3D, 3); return true;
    // src/text/ccs/tree_19.asm:53 CMP #$26
    case 0xC17A5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000026, 2); else cpu.execute_instruction<0xC9>(0x000026, 3); return true;
    // src/text/ccs/tree_19.asm:53 CMP #$26
    // Overlapping static entry reached from 0xC17A5D.
    case 0xC17A5F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:54 BEQL @UNKNOWN45
    case 0xC17A60: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:54 BEQL @UNKNOWN45
    case 0xC17A62: cpu.execute_instruction<0x4C>(0x007B42, 3); return true;
    // src/text/ccs/tree_19.asm:55 CMP #$27
    case 0xC17A65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000027, 2); else cpu.execute_instruction<0xC9>(0x000027, 3); return true;
    // src/text/ccs/tree_19.asm:55 CMP #$27
    // Overlapping static entry reached from 0xC17A65.
    case 0xC17A67: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:56 BEQL @UNKNOWN46
    case 0xC17A68: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:56 BEQL @UNKNOWN46
    case 0xC17A6A: cpu.execute_instruction<0x4C>(0x007B47, 3); return true;
    // src/text/ccs/tree_19.asm:57 CMP #$28
    case 0xC17A6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000028, 3); return true;
    // src/text/ccs/tree_19.asm:57 CMP #$28
    // Overlapping static entry reached from 0xC17A6D.
    case 0xC17A6F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:58 BEQL @UNKNOWN47
    case 0xC17A70: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:58 BEQL @UNKNOWN47
    case 0xC17A72: cpu.execute_instruction<0x4C>(0x007B4C, 3); return true;
    // src/text/ccs/tree_19.asm:59 JMP @UNKNOWN48
    case 0xC17A75: cpu.execute_instruction<0x4C>(0x007B51, 3); return true;
    // src/text/ccs/tree_19.asm:61 LDA #.LOWORD(CC_19_02)
    case 0xC17A78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F7, 2); else cpu.execute_instruction<0xA9>(0x0078F7, 3); return true;
    // src/text/ccs/tree_19.asm:61 LDA #.LOWORD(CC_19_02)
    // Overlapping static entry reached from 0xC17A78.
    case 0xC17A7A: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:62 JMP @UNKNOWN49
    case 0xC17A7B: cpu.execute_instruction<0x4C>(0x007B54, 3); return true;
    // src/text/ccs/tree_19.asm:64 JSR UNKNOWN_C11383
    case 0xC17A7E: cpu.execute_instruction<0x20>(0x001383, 3); return true;
    // src/text/ccs/tree_19.asm:65 JMP @UNKNOWN48
    case 0xC17A81: cpu.execute_instruction<0x4C>(0x007B51, 3); return true;
    // src/text/ccs/tree_19.asm:67 LDA #.LOWORD(CC_19_05)
    case 0xC17A84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006F, 2); else cpu.execute_instruction<0xA9>(0x00506F, 3); return true;
    // src/text/ccs/tree_19.asm:67 LDA #.LOWORD(CC_19_05)
    // Overlapping static entry reached from 0xC17A84.
    case 0xC17A86: cpu.execute_instruction<0x50>(0x00004C, 2); return true;
    // src/text/ccs/tree_19.asm:68 JMP @UNKNOWN49
    case 0xC17A87: cpu.execute_instruction<0x4C>(0x007B54, 3); return true;
    // src/text/ccs/tree_19.asm:68 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17A86.
    case 0xC17A88: cpu.execute_instruction<0x54>(0x00A97B, 3); return true;
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    case 0xC17A8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x004723, 3); return true;
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    // Overlapping static entry reached from 0xC17A88.
    case 0xC17A8B: cpu.execute_instruction<0x23>(0x000047, 2); return true;
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    // Overlapping static entry reached from 0xC17A8A.
    case 0xC17A8C: cpu.execute_instruction<0x47>(0x00004C, 2); return true;
    // src/text/ccs/tree_19.asm:71 JMP @UNKNOWN49
    case 0xC17A8D: cpu.execute_instruction<0x4C>(0x007B54, 3); return true;
    // src/text/ccs/tree_19.asm:71 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17A8C.
    case 0xC17A8E: cpu.execute_instruction<0x54>(0x00A97B, 3); return true;
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    case 0xC17A90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0047CC, 3); return true;
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    // Overlapping static entry reached from 0xC17A8E.
    case 0xC17A91: cpu.execute_instruction<0xCC>(0x004C47, 3); return true;
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    // Overlapping static entry reached from 0xC17A90.
    case 0xC17A92: cpu.execute_instruction<0x47>(0x00004C, 2); return true;
    // src/text/ccs/tree_19.asm:74 JMP @UNKNOWN49
    case 0xC17A93: cpu.execute_instruction<0x4C>(0x007B54, 3); return true;
    // src/text/ccs/tree_19.asm:74 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17A92.
    case 0xC17A94: cpu.execute_instruction<0x54>(0x00207B, 3); return true;
    // src/text/ccs/tree_19.asm:76 JSR GET_SECONDARY_MEMORY
    case 0xC17A96: cpu.execute_instruction<0x20>(0x000400, 3); return true;
    // src/text/ccs/tree_19.asm:76 JSR GET_SECONDARY_MEMORY
    // Overlapping static entry reached from 0xC17A94.
    case 0xC17A97: cpu.execute_instruction<0x00>(0x000004, 2); return true;
    // src/text/ccs/tree_19.asm:85 TAX
    case 0xC17A99: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:86 DEX
    case 0xC17A9A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC17A9B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/tree_19.asm:88 LDA GAME_STATE+game_state::escargo_express_items,X
    case 0xC17A9D: cpu.execute_instruction<0xBD>(0x00984B, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17AA0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17AA2: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17AA4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17AA6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_19.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC17AA8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AAA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AAC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AAE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AB0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_19.asm:93 JSR SET_WORKING_MEMORY
    case 0xC17AB2: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_19.asm:94 JSR INCREMENT_SECONDARY_MEMORY
    case 0xC17AB5: cpu.execute_instruction<0x20>(0x00042E, 3); return true;
    // src/text/ccs/tree_19.asm:95 JMP @UNKNOWN48
    case 0xC17AB8: cpu.execute_instruction<0x4C>(0x007B51, 3); return true;
    // src/text/ccs/tree_19.asm:97 LDA #.LOWORD(CC_19_16)
    case 0xC17ABB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x005007, 3); return true;
    // src/text/ccs/tree_19.asm:97 LDA #.LOWORD(CC_19_16)
    // Overlapping static entry reached from 0xC17ABB.
    case 0xC17ABD: cpu.execute_instruction<0x50>(0x00004C, 2); return true;
    // src/text/ccs/tree_19.asm:98 JMP @UNKNOWN49
    case 0xC17ABE: cpu.execute_instruction<0x4C>(0x007B54, 3); return true;
    // src/text/ccs/tree_19.asm:98 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17ABD.
    case 0xC17ABF: cpu.execute_instruction<0x54>(0x00A97B, 3); return true;
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    case 0xC17AC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x005384, 3); return true;
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    // Overlapping static entry reached from 0xC17ABF.
    case 0xC17AC2: cpu.execute_instruction<0x84>(0x000053, 2); return true;
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    // Overlapping static entry reached from 0xC17AC1.
    case 0xC17AC3: cpu.execute_instruction<0x53>(0x00004C, 2); return true;
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    case 0xC17AC4: cpu.execute_instruction<0x4C>(0x007B54, 3); return true;
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17AC3.
    case 0xC17AC5: cpu.execute_instruction<0x54>(0x00A97B, 3); return true;
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17B44.
    case 0xC17AC6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    case 0xC17AC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00597F, 3); return true;
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC17AC5.
    case 0xC17AC8: cpu.execute_instruction<0x7F>(0x544C59, 4); return true;
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC17AC7.
    case 0xC17AC9: cpu.execute_instruction<0x59>(0x00544C, 3); return true;
    // src/text/ccs/tree_19.asm:104 JMP @UNKNOWN49
    case 0xC17ACA: cpu.execute_instruction<0x4C>(0x007B54, 3); return true;
    // src/text/ccs/tree_19.asm:104 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17AC9.
    case 0xC17ACC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:106 LDA #.LOWORD(CC_19_1A)
    case 0xC17ACD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x005B0E, 3); return true;
    // src/text/ccs/tree_19.asm:106 LDA #.LOWORD(CC_19_1A)
    // Overlapping static entry reached from 0xC17ACD.
    case 0xC17ACF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:107 JMP @UNKNOWN49
    case 0xC17AD0: cpu.execute_instruction<0x4C>(0x007B54, 3); return true;
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    case 0xC17AD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000036, 2); else cpu.execute_instruction<0xA9>(0x005C36, 3); return true;
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    // Overlapping static entry reached from 0xC17A86.
    case 0xC17AD4: cpu.execute_instruction<0x36>(0x00005C, 2); return true;
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    // Overlapping static entry reached from 0xC17AD3.
    case 0xC17AD5: cpu.execute_instruction<0x5C>(0x7B544C, 4); return true;
    // src/text/ccs/tree_19.asm:110 JMP @UNKNOWN49
    case 0xC17AD6: cpu.execute_instruction<0x4C>(0x007B54, 3); return true;
    // src/text/ccs/tree_19.asm:112 LDA #.LOWORD(CC_19_1C)
    case 0xC17AD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F7, 2); else cpu.execute_instruction<0xA9>(0x005FF7, 3); return true;
    // src/text/ccs/tree_19.asm:112 LDA #.LOWORD(CC_19_1C)
    // Overlapping static entry reached from 0xC17AD9.
    case 0xC17ADB: cpu.execute_instruction<0x5F>(0xA97680, 4); return true;
    // src/text/ccs/tree_19.asm:113 BRA @UNKNOWN49
    case 0xC17ADC: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    case 0xC17ADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x006080, 3); return true;
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    // Overlapping static entry reached from 0xC17ADB.
    case 0xC17ADF: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    // Overlapping static entry reached from 0xC17ADE.
    case 0xC17AE0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:116 BRA @UNKNOWN49
    case 0xC17AE1: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/text/ccs/tree_19.asm:118 JSR UNKNOWN_C1AD26
    case 0xC17AE3: cpu.execute_instruction<0x20>(0x00AD26, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AE6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AE8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AEA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AEC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_19.asm:120 JSR SET_WORKING_MEMORY
    case 0xC17AEE: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_19.asm:121 BRA @UNKNOWN48
    case 0xC17AF1: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/text/ccs/tree_19.asm:123 JSR UNKNOWN_C1AD02
    case 0xC17AF3: cpu.execute_instruction<0x20>(0x00AD02, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17AF6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17AF8: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17AFA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17AFC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_19.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC17AFE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B00: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B02: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B04: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B06: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_19.asm:127 JSR SET_WORKING_MEMORY
    case 0xC17B08: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_19.asm:128 BRA @UNKNOWN48
    case 0xC17B0B: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/tree_19.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC17B0D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B0F: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B12: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B14: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B16: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B18: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_19.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC17B1A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B1C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B1E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B20: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B22: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_19.asm:134 JSR SET_WORKING_MEMORY
    case 0xC17B24: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_19.asm:135 BRA @UNKNOWN48
    case 0xC17B27: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/text/ccs/tree_19.asm:137 LDA #.LOWORD(CC_19_21)
    case 0xC17B29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000043, 2); else cpu.execute_instruction<0xA9>(0x006143, 3); return true;
    // src/text/ccs/tree_19.asm:137 LDA #.LOWORD(CC_19_21)
    // Overlapping static entry reached from 0xC17B29.
    case 0xC17B2B: cpu.execute_instruction<0x61>(0x000080, 2); return true;
    // src/text/ccs/tree_19.asm:138 BRA @UNKNOWN49
    case 0xC17B2C: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/text/ccs/tree_19.asm:138 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B2B.
    case 0xC17B2D: cpu.execute_instruction<0x26>(0x0000A9, 2); return true;
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    case 0xC17B2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x0068A0, 3); return true;
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC17B2D.
    case 0xC17B2F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000068, 2); else cpu.execute_instruction<0xA0>(0x008068, 3); return true;
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC17B2E.
    case 0xC17B30: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:141 BRA @UNKNOWN49
    case 0xC17B31: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/ccs/tree_19.asm:141 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B2F.
    case 0xC17B32: cpu.execute_instruction<0x21>(0x0000A9, 2); return true;
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    case 0xC17B33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x006947, 3); return true;
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC17B32.
    case 0xC17B34: cpu.execute_instruction<0x47>(0x000069, 2); return true;
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC17B33.
    case 0xC17B35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x001C80, 3); return true;
    // src/text/ccs/tree_19.asm:144 BRA @UNKNOWN49
    case 0xC17B36: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/tree_19.asm:144 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B35.
    case 0xC17B37: cpu.execute_instruction<0x1C>(0x007BA9, 3); return true;
    // src/text/ccs/tree_19.asm:146 LDA #.LOWORD(CC_19_24)
    case 0xC17B38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x006A7B, 3); return true;
    // src/text/ccs/tree_19.asm:146 LDA #.LOWORD(CC_19_24)
    // Overlapping static entry reached from 0xC17B38.
    case 0xC17B3A: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:147 BRA @UNKNOWN49
    case 0xC17B3B: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/ccs/tree_19.asm:149 LDA #.LOWORD(CC_19_25)
    case 0xC17B3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x006F9F, 3); return true;
    // src/text/ccs/tree_19.asm:149 LDA #.LOWORD(CC_19_25)
    // Overlapping static entry reached from 0xC17B3D.
    case 0xC17B3F: cpu.execute_instruction<0x6F>(0xA91280, 4); return true;
    // src/text/ccs/tree_19.asm:150 BRA @UNKNOWN49
    case 0xC17B40: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_19.asm:150 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17ADF.
    case 0xC17B41: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    case 0xC17B42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x007037, 3); return true;
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    // Overlapping static entry reached from 0xC17B3F.
    case 0xC17B43: cpu.execute_instruction<0x37>(0x000070, 2); return true;
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    // Overlapping static entry reached from 0xC17B42.
    case 0xC17B44: cpu.execute_instruction<0x70>(0x000080, 2); return true;
    // src/text/ccs/tree_19.asm:153 BRA @UNKNOWN49
    case 0xC17B45: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_19.asm:153 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B44.
    case 0xC17B46: cpu.execute_instruction<0x0D>(0x006AA9, 3); return true;
    // src/text/ccs/tree_19.asm:155 LDA #.LOWORD(CC_19_27)
    case 0xC17B47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006A, 2); else cpu.execute_instruction<0xA9>(0x00776A, 3); return true;
    // src/text/ccs/tree_19.asm:155 LDA #.LOWORD(CC_19_27)
    // Overlapping static entry reached from 0xC17B47.
    case 0xC17B49: cpu.execute_instruction<0x77>(0x000080, 2); return true;
    // src/text/ccs/tree_19.asm:156 BRA @UNKNOWN49
    case 0xC17B4A: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_19.asm:156 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B49.
    case 0xC17B4B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:158 LDA #.LOWORD(CC_19_28)
    case 0xC17B4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x004819, 3); return true;
    // src/text/ccs/tree_19.asm:158 LDA #.LOWORD(CC_19_28)
    // Overlapping static entry reached from 0xC17B4C.
    case 0xC17B4E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:159 BRA @UNKNOWN49
    case 0xC17B4F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_19.asm:161 LDA #0
    case 0xC17B51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_19.asm:161 LDA #0
    // Overlapping static entry reached from 0xC17B51.
    case 0xC17B53: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_19.asm:163 END_C_FUNCTION
    case 0xC17B54: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_19.asm:163 END_C_FUNCTION
    case 0xC17B55: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1A.asm (source_named).
bool execute_text_ccs_tree_1a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1A.asm:3 BEGIN_C_FUNCTION
    case 0xC17B56: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B58: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B59: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B5A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17B5B.
    case 0xC17B5D: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B5E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B5F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1A.asm:10 TXA
    case 0xC17B60: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1A.asm:11 BEQ @UNKNOWN2
    case 0xC17B61: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/text/ccs/tree_1A.asm:12 CMP #$01
    case 0xC17B63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1A.asm:12 CMP #$01
    // Overlapping static entry reached from 0xC17B63.
    case 0xC17B65: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:13 BEQ @UNKNOWN3
    case 0xC17B66: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/text/ccs/tree_1A.asm:14 CMP #$04
    case 0xC17B68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1A.asm:14 CMP #$04
    // Overlapping static entry reached from 0xC17B68.
    case 0xC17B6A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:15 BEQ @UNKNOWN4
    case 0xC17B6B: cpu.execute_instruction<0xF0>(0x000038, 2); return true;
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    case 0xC17B6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    // Overlapping static entry reached from 0xC17B6D.
    case 0xC17B6F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:17 BEQ @UNKNOWN5
    case 0xC17B70: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/text/ccs/tree_1A.asm:18 CMP #$06
    case 0xC17B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1A.asm:18 CMP #$06
    // Overlapping static entry reached from 0xC17B72.
    case 0xC17B74: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:19 BEQ @UNKNOWN6
    case 0xC17B75: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/text/ccs/tree_1A.asm:20 CMP #$07
    case 0xC17B77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1A.asm:20 CMP #$07
    // Overlapping static entry reached from 0xC17B77.
    case 0xC17B79: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:21 BEQ @UNKNOWN7
    case 0xC17B7A: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/text/ccs/tree_1A.asm:22 CMP #$08
    case 0xC17B7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_1A.asm:22 CMP #$08
    // Overlapping static entry reached from 0xC17B7C.
    case 0xC17B7E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:23 BEQ @UNKNOWN8
    case 0xC17B7F: cpu.execute_instruction<0xF0>(0x00005C, 2); return true;
    // src/text/ccs/tree_1A.asm:24 CMP #$09
    case 0xC17B81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_1A.asm:24 CMP #$09
    // Overlapping static entry reached from 0xC17B81.
    case 0xC17B83: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:25 BEQ @UNKNOWN9
    case 0xC17B84: cpu.execute_instruction<0xF0>(0x00006E, 2); return true;
    // src/text/ccs/tree_1A.asm:26 CMP #$0A
    case 0xC17B86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_1A.asm:26 CMP #$0A
    // Overlapping static entry reached from 0xC17B86.
    case 0xC17B88: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1A.asm:27 BEQL @UNKNOWN10
    case 0xC17B89: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1A.asm:27 BEQL @UNKNOWN10
    case 0xC17B8B: cpu.execute_instruction<0x4C>(0x007C0B, 3); return true;
    // src/text/ccs/tree_1A.asm:28 CMP #$0B
    case 0xC17B8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/ccs/tree_1A.asm:28 CMP #$0B
    // Overlapping static entry reached from 0xC17B8E.
    case 0xC17B90: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1A.asm:29 BEQL @UNKNOWN11
    case 0xC17B91: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1A.asm:29 BEQL @UNKNOWN11
    case 0xC17B93: cpu.execute_instruction<0x4C>(0x007C1F, 3); return true;
    // src/text/ccs/tree_1A.asm:30 JMP @UNKNOWN12
    case 0xC17B96: cpu.execute_instruction<0x4C>(0x007C31, 3); return true;
    // src/text/ccs/tree_1A.asm:32 LDA #.LOWORD(CC_1A_00)
    case 0xC17B99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00463B, 3); return true;
    // src/text/ccs/tree_1A.asm:32 LDA #.LOWORD(CC_1A_00)
    // Overlapping static entry reached from 0xC17B99.
    case 0xC17B9B: cpu.execute_instruction<0x46>(0x00004C, 2); return true;
    // src/text/ccs/tree_1A.asm:33 JMP @UNKNOWN13
    case 0xC17B9C: cpu.execute_instruction<0x4C>(0x007C34, 3); return true;
    // src/text/ccs/tree_1A.asm:33 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC17B9B.
    case 0xC17B9D: cpu.execute_instruction<0x34>(0x00007C, 2); return true;
    // src/text/ccs/tree_1A.asm:35 LDA #.LOWORD(CC_1A_01)
    case 0xC17B9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00467D, 3); return true;
    // src/text/ccs/tree_1A.asm:35 LDA #.LOWORD(CC_1A_01)
    // Overlapping static entry reached from 0xC17B9F.
    case 0xC17BA1: cpu.execute_instruction<0x46>(0x00004C, 2); return true;
    // src/text/ccs/tree_1A.asm:36 JMP @UNKNOWN13
    case 0xC17BA2: cpu.execute_instruction<0x4C>(0x007C34, 3); return true;
    // src/text/ccs/tree_1A.asm:36 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC17BA1.
    case 0xC17BA3: cpu.execute_instruction<0x34>(0x00007C, 2); return true;
    // src/text/ccs/tree_1A.asm:38 LDA #0
    case 0xC17BA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1A.asm:38 LDA #0
    // Overlapping static entry reached from 0xC17BA5.
    case 0xC17BA7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1A.asm:39 JSR SELECTION_MENU
    case 0xC17BA8: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC17BAB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC17BAD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BAF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BB1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BB3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BB5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:42 JSR SET_WORKING_MEMORY
    case 0xC17BB7: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1A.asm:43 JSR UNKNOWN_C11383
    case 0xC17BBA: cpu.execute_instruction<0x20>(0x001383, 3); return true;
    // src/text/ccs/tree_1A.asm:44 BRA @UNKNOWN12
    case 0xC17BBD: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // src/text/ccs/tree_1A.asm:46 LDA #.LOWORD(CC_1A_05)
    case 0xC17BBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00549E, 3); return true;
    // src/text/ccs/tree_1A.asm:46 LDA #.LOWORD(CC_1A_05)
    // Overlapping static entry reached from 0xC17BBF.
    case 0xC17BC1: cpu.execute_instruction<0x54>(0x007080, 3); return true;
    // src/text/ccs/tree_1A.asm:47 BRA @UNKNOWN13
    case 0xC17BC2: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    case 0xC17BC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x004EB5, 3); return true;
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    // Overlapping static entry reached from 0xC17BC4.
    case 0xC17BC6: cpu.execute_instruction<0x4E>(0x006B80, 3); return true;
    // src/text/ccs/tree_1A.asm:50 BRA @UNKNOWN13
    case 0xC17BC7: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/text/ccs/tree_1A.asm:52 JSR UNKNOWN_C19A43
    case 0xC17BC9: cpu.execute_instruction<0x20>(0x009A43, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC17BCC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC17BCE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BD0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BD2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BD4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BD6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:55 JSR SET_WORKING_MEMORY
    case 0xC17BD8: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1A.asm:56 BRA @UNKNOWN12
    case 0xC17BDB: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/text/ccs/tree_1A.asm:58 LDA #0
    case 0xC17BDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1A.asm:58 LDA #0
    // Overlapping static entry reached from 0xC17BDD.
    case 0xC17BDF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1A.asm:59 JSR SELECTION_MENU
    case 0xC17BE0: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:60 STORE_INT1632 @VIRTUAL06
    case 0xC17BE3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:60 STORE_INT1632 @VIRTUAL06
    case 0xC17BE5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BE7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BE9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BEB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:62 JSR SET_WORKING_MEMORY
    case 0xC17BEF: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1A.asm:63 BRA @UNKNOWN12
    case 0xC17BF2: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/text/ccs/tree_1A.asm:65 LDA #1
    case 0xC17BF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/tree_1A.asm:65 LDA #1
    // Overlapping static entry reached from 0xC17BF4.
    case 0xC17BF6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1A.asm:66 JSR SELECTION_MENU
    case 0xC17BF7: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:67 STORE_INT1632 @VIRTUAL06
    case 0xC17BFA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:67 STORE_INT1632 @VIRTUAL06
    case 0xC17BFC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BFE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C00: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C02: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C04: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:69 JSR SET_WORKING_MEMORY
    case 0xC17C06: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1A.asm:70 BRA @UNKNOWN12
    case 0xC17C09: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/text/ccs/tree_1A.asm:72 JSR UNKNOWN_C1AC00
    case 0xC17C0B: cpu.execute_instruction<0x20>(0x00AC00, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC17C0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC17C10: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C12: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C14: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C16: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C18: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:75 JSR SET_WORKING_MEMORY
    case 0xC17C1A: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1A.asm:76 BRA @UNKNOWN12
    case 0xC17C1D: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_1A.asm:78 JSR UNKNOWN_C1AAFA
    case 0xC17C1F: cpu.execute_instruction<0x20>(0x00AAFA, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:79 STORE_INT1632 @VIRTUAL06
    case 0xC17C22: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:79 STORE_INT1632 @VIRTUAL06
    case 0xC17C24: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C26: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C2A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C2C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:81 JSR SET_WORKING_MEMORY
    case 0xC17C2E: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1A.asm:83 LDA #NULL
    case 0xC17C31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1A.asm:83 LDA #NULL
    // Overlapping static entry reached from 0xC17C31.
    case 0xC17C33: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1A.asm:85 END_C_FUNCTION
    case 0xC17C34: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1A.asm:85 END_C_FUNCTION
    case 0xC17C35: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1B.asm (source_named).
bool execute_text_ccs_tree_1b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1B.asm:3 BEGIN_C_FUNCTION
    case 0xC17C36: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C38: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C39: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C3A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17C3B.
    case 0xC17C3D: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C3E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C3F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:12 TAY
    case 0xC17C40: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:13 STY @LOCAL02
    case 0xC17C41: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/ccs/tree_1B.asm:14 TXA
    case 0xC17C43: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:15 BEQ @UNKNOWN3
    case 0xC17C44: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/text/ccs/tree_1B.asm:16 CMP #$01
    case 0xC17C46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1B.asm:16 CMP #$01
    // Overlapping static entry reached from 0xC17C46.
    case 0xC17C48: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1B.asm:17 BEQ @UNKNOWN4
    case 0xC17C49: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/text/ccs/tree_1B.asm:18 CMP #$02
    case 0xC17C4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1B.asm:18 CMP #$02
    // Overlapping static entry reached from 0xC17C4B.
    case 0xC17C4D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1B.asm:19 BEQ @UNKNOWN5
    case 0xC17C4E: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/text/ccs/tree_1B.asm:20 CMP #$03
    case 0xC17C50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1B.asm:20 CMP #$03
    // Overlapping static entry reached from 0xC17C50.
    case 0xC17C52: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1B.asm:21 BEQ @UNKNOWN8
    case 0xC17C53: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // src/text/ccs/tree_1B.asm:22 CMP #$04
    case 0xC17C55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1B.asm:22 CMP #$04
    // Overlapping static entry reached from 0xC17C55.
    case 0xC17C57: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:23 BEQL @UNKNOWN11
    case 0xC17C58: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:23 BEQL @UNKNOWN11
    case 0xC17C5A: cpu.execute_instruction<0x4C>(0x007CF8, 3); return true;
    // src/text/ccs/tree_1B.asm:24 CMP #$05
    case 0xC17C5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1B.asm:24 CMP #$05
    // Overlapping static entry reached from 0xC17C5D.
    case 0xC17C5F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:25 BEQL @UNKNOWN12
    case 0xC17C60: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:25 BEQL @UNKNOWN12
    case 0xC17C62: cpu.execute_instruction<0x4C>(0x007D36, 3); return true;
    // src/text/ccs/tree_1B.asm:26 CMP #$06
    case 0xC17C65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1B.asm:26 CMP #$06
    // Overlapping static entry reached from 0xC17C65.
    case 0xC17C67: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:27 BEQL @UNKNOWN13
    case 0xC17C68: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:27 BEQL @UNKNOWN13
    case 0xC17C6A: cpu.execute_instruction<0x4C>(0x007D5A, 3); return true;
    // src/text/ccs/tree_1B.asm:28 JMP @UNKNOWN14
    case 0xC17C6D: cpu.execute_instruction<0x4C>(0x007D8D, 3); return true;
    // src/text/ccs/tree_1B.asm:30 JSR TRANSFER_ACTIVE_MEM_STORAGE
    case 0xC17C70: cpu.execute_instruction<0x20>(0x000324, 3); return true;
    // src/text/ccs/tree_1B.asm:31 JMP @UNKNOWN14
    case 0xC17C73: cpu.execute_instruction<0x4C>(0x007D8D, 3); return true;
    // src/text/ccs/tree_1B.asm:33 JSR TRANSFER_STORAGE_MEM_ACTIVE
    case 0xC17C76: cpu.execute_instruction<0x20>(0x000380, 3); return true;
    // src/text/ccs/tree_1B.asm:34 JMP @UNKNOWN14
    case 0xC17C79: cpu.execute_instruction<0x4C>(0x007D8D, 3); return true;
    // src/text/ccs/tree_1B.asm:36 JSR GET_WORKING_MEMORY
    case 0xC17C7C: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17C7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17C7F.
    case 0xC17C81: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17C82: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17C84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17C84.
    case 0xC17C86: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17C87: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C89: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C8B: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C8D: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C8F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C91: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/tree_1B.asm:39 BNE @UNKNOWN7
    case 0xC17C93: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:40 LDA #.LOWORD(CC_0A)
    case 0xC17C95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x004103, 3); return true;
    // src/text/ccs/tree_1B.asm:40 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC17C95.
    case 0xC17C97: cpu.execute_instruction<0x41>(0x00004C, 2); return true;
    // src/text/ccs/tree_1B.asm:41 JMP @UNKNOWN15
    case 0xC17C98: cpu.execute_instruction<0x4C>(0x007D92, 3); return true;
    // src/text/ccs/tree_1B.asm:41 JMP @UNKNOWN15
    // Overlapping static entry reached from 0xC17C97.
    case 0xC17C99: cpu.execute_instruction<0x92>(0x00007D, 2); return true;
    // src/text/ccs/tree_1B.asm:43 LDY @LOCAL02
    case 0xC17C9B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17C9D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CA0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CA2: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CA5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/tree_1B.asm:45 LDA #4
    case 0xC17CA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/tree_1B.asm:45 LDA #4
    // Overlapping static entry reached from 0xC17CA7.
    case 0xC17CA9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/tree_1B.asm:46 CLC
    case 0xC17CAA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:47 ADC @VIRTUAL06
    case 0xC17CAB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:48 STA @VIRTUAL06
    case 0xC17CAD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:49 STA __BSS_START__,Y
    case 0xC17CAF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/tree_1B.asm:50 LDA @VIRTUAL06+2
    case 0xC17CB2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/tree_1B.asm:51 STA __BSS_START__+2,Y
    case 0xC17CB4: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/tree_1B.asm:52 JMP @UNKNOWN14
    case 0xC17CB7: cpu.execute_instruction<0x4C>(0x007D8D, 3); return true;
    // src/text/ccs/tree_1B.asm:54 JSR GET_WORKING_MEMORY
    case 0xC17CBA: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17CBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17CBD.
    case 0xC17CBF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17CC0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17CC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17CC2.
    case 0xC17CC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17CC5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CC7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CC9: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CCB: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CCD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CCF: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/tree_1B.asm:57 BEQ @UNKNOWN10
    case 0xC17CD1: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:58 LDA #.LOWORD(CC_0A)
    case 0xC17CD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x004103, 3); return true;
    // src/text/ccs/tree_1B.asm:58 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC17CD3.
    case 0xC17CD5: cpu.execute_instruction<0x41>(0x00004C, 2); return true;
    // src/text/ccs/tree_1B.asm:59 JMP @UNKNOWN15
    case 0xC17CD6: cpu.execute_instruction<0x4C>(0x007D92, 3); return true;
    // src/text/ccs/tree_1B.asm:59 JMP @UNKNOWN15
    // Overlapping static entry reached from 0xC17CD5.
    case 0xC17CD7: cpu.execute_instruction<0x92>(0x00007D, 2); return true;
    // src/text/ccs/tree_1B.asm:61 LDY @LOCAL02
    case 0xC17CD9: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CDB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CDE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CE0: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CE3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/tree_1B.asm:63 LDA #4
    case 0xC17CE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/tree_1B.asm:63 LDA #4
    // Overlapping static entry reached from 0xC17CE5.
    case 0xC17CE7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/tree_1B.asm:64 CLC
    case 0xC17CE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:65 ADC @VIRTUAL06
    case 0xC17CE9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:66 STA @VIRTUAL06
    case 0xC17CEB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:67 STA __BSS_START__,Y
    case 0xC17CED: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/tree_1B.asm:68 LDA @VIRTUAL06+2
    case 0xC17CF0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/tree_1B.asm:69 STA __BSS_START__+2,Y
    case 0xC17CF2: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/tree_1B.asm:70 JMP @UNKNOWN14
    case 0xC17CF5: cpu.execute_instruction<0x4C>(0x007D8D, 3); return true;
    // src/text/ccs/tree_1B.asm:72 JSR GET_WORKING_MEMORY
    case 0xC17CF8: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17CFB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17CFD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17CFF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17D01: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/tree_1B.asm:74 JSR GET_ARGUMENT_MEMORY
    case 0xC17D03: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17D06: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17D08: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17D0A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17D0C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:79 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC17D0E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:79 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC17D10: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:79 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC17D12: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:79 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC17D14: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D16: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D18: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D1A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D1C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1B.asm:82 JSR SET_WORKING_MEMORY
    case 0xC17D1E: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17D21: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17D23: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17D25: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17D27: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D29: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D2B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D2D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D2F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1B.asm:85 JSR SET_ARGUMENT_MEMORY
    case 0xC17D31: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/tree_1B.asm:86 BRA @UNKNOWN14
    case 0xC17D34: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/text/ccs/tree_1B.asm:88 JSR GET_WORKING_MEMORY
    case 0xC17D36: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17D39: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17D3B: cpu.execute_instruction<0x8D>(0x0097CC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17D3E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17D40: cpu.execute_instruction<0x8D>(0x0097CE, 3); return true;
    // src/text/ccs/tree_1B.asm:90 JSR GET_ARGUMENT_MEMORY
    case 0xC17D43: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17D46: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17D48: cpu.execute_instruction<0x8D>(0x0097D0, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17D4B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17D4D: cpu.execute_instruction<0x8D>(0x0097D2, 3); return true;
    // src/text/ccs/tree_1B.asm:92 JSR GET_SECONDARY_MEMORY
    case 0xC17D50: cpu.execute_instruction<0x20>(0x000400, 3); return true;
    // src/text/ccs/tree_1B.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC17D53: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/tree_1B.asm:94 STA TEXT_LOOP_REGISTER_BACKUP
    case 0xC17D55: cpu.execute_instruction<0x8D>(0x0097D4, 3); return true;
    // src/text/ccs/tree_1B.asm:95 BRA @UNKNOWN14
    case 0xC17D58: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D5A: cpu.execute_instruction<0xAD>(0x0097CC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D5D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D5F: cpu.execute_instruction<0xAD>(0x0097CE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D62: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D64: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D66: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D68: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D6A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1B.asm:100 JSR SET_WORKING_MEMORY
    case 0xC17D6C: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D6F: cpu.execute_instruction<0xAD>(0x0097D0, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D72: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D74: cpu.execute_instruction<0xAD>(0x0097D2, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D7B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D7D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D7F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1B.asm:103 JSR SET_ARGUMENT_MEMORY
    case 0xC17D81: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/tree_1B.asm:104 LDA TEXT_LOOP_REGISTER_BACKUP
    case 0xC17D84: cpu.execute_instruction<0xAD>(0x0097D4, 3); return true;
    // src/text/ccs/tree_1B.asm:105 AND #$00FF
    case 0xC17D87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/tree_1B.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC17D87.
    case 0xC17D89: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1B.asm:106 JSR SET_SECONDARY_MEMORY
    case 0xC17D8A: cpu.execute_instruction<0x20>(0x000443, 3); return true;
    // src/text/ccs/tree_1B.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC17D8D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/tree_1B.asm:109 LDA #NULL
    case 0xC17D8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1B.asm:109 LDA #NULL
    // Overlapping static entry reached from 0xC17D8F.
    case 0xC17D91: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1B.asm:111 END_C_FUNCTION
    case 0xC17D92: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1B.asm:111 END_C_FUNCTION
    case 0xC17D93: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1C.asm (source_named).
bool execute_text_ccs_tree_1c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1C.asm:3 BEGIN_C_FUNCTION
    case 0xC17D94: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D96: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D97: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D98: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17D99.
    case 0xC17D9B: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D9C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D9D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:10 TXA
    case 0xC17D9E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:11 BEQL @UNKNOWN21
    case 0xC17D9F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:11 BEQL @UNKNOWN21
    case 0xC17DA1: cpu.execute_instruction<0x4C>(0x007E47, 3); return true;
    // src/text/ccs/tree_1C.asm:12 CMP #$01
    case 0xC17DA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1C.asm:12 CMP #$01
    // Overlapping static entry reached from 0xC17DA4.
    case 0xC17DA6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:13 BEQL @UNKNOWN22
    case 0xC17DA7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:13 BEQL @UNKNOWN22
    case 0xC17DA9: cpu.execute_instruction<0x4C>(0x007E4D, 3); return true;
    // src/text/ccs/tree_1C.asm:14 CMP #$02
    case 0xC17DAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1C.asm:14 CMP #$02
    // Overlapping static entry reached from 0xC17DAC.
    case 0xC17DAE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:15 BEQL @UNKNOWN23
    case 0xC17DAF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:15 BEQL @UNKNOWN23
    case 0xC17DB1: cpu.execute_instruction<0x4C>(0x007E53, 3); return true;
    // src/text/ccs/tree_1C.asm:16 CMP #$03
    case 0xC17DB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1C.asm:16 CMP #$03
    // Overlapping static entry reached from 0xC17DB4.
    case 0xC17DB6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:17 BEQL @UNKNOWN24
    case 0xC17DB7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:17 BEQL @UNKNOWN24
    case 0xC17DB9: cpu.execute_instruction<0x4C>(0x007E59, 3); return true;
    // src/text/ccs/tree_1C.asm:18 CMP #$04
    case 0xC17DBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1C.asm:18 CMP #$04
    // Overlapping static entry reached from 0xC17DBC.
    case 0xC17DBE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:19 BEQL @UNKNOWN25
    case 0xC17DBF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:19 BEQL @UNKNOWN25
    case 0xC17DC1: cpu.execute_instruction<0x4C>(0x007E5F, 3); return true;
    // src/text/ccs/tree_1C.asm:20 CMP #$05
    case 0xC17DC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1C.asm:20 CMP #$05
    // Overlapping static entry reached from 0xC17DC4.
    case 0xC17DC6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:21 BEQL @UNKNOWN26
    case 0xC17DC7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:21 BEQL @UNKNOWN26
    case 0xC17DC9: cpu.execute_instruction<0x4C>(0x007E65, 3); return true;
    // src/text/ccs/tree_1C.asm:22 CMP #@VIRTUAL06
    case 0xC17DCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1C.asm:22 CMP #@VIRTUAL06
    // Overlapping static entry reached from 0xC17DCC.
    case 0xC17DCE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:23 BEQL @UNKNOWN27
    case 0xC17DCF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:23 BEQL @UNKNOWN27
    case 0xC17DD1: cpu.execute_instruction<0x4C>(0x007E6B, 3); return true;
    // src/text/ccs/tree_1C.asm:24 CMP #$07
    case 0xC17DD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1C.asm:24 CMP #$07
    // Overlapping static entry reached from 0xC17DD4.
    case 0xC17DD6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:25 BEQL @UNKNOWN28
    case 0xC17DD7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:25 BEQL @UNKNOWN28
    case 0xC17DD9: cpu.execute_instruction<0x4C>(0x007E71, 3); return true;
    // src/text/ccs/tree_1C.asm:26 CMP #$08
    case 0xC17DDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_1C.asm:26 CMP #$08
    // Overlapping static entry reached from 0xC17DDC.
    case 0xC17DDE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:27 BEQL @UNKNOWN29
    case 0xC17DDF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:27 BEQL @UNKNOWN29
    case 0xC17DE1: cpu.execute_instruction<0x4C>(0x007E77, 3); return true;
    // src/text/ccs/tree_1C.asm:28 CMP #$09
    case 0xC17DE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_1C.asm:28 CMP #$09
    // Overlapping static entry reached from 0xC17DE4.
    case 0xC17DE6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:29 BEQL @UNKNOWN30
    case 0xC17DE7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:29 BEQL @UNKNOWN30
    case 0xC17DE9: cpu.execute_instruction<0x4C>(0x007E7D, 3); return true;
    // src/text/ccs/tree_1C.asm:30 CMP #$0A
    case 0xC17DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_1C.asm:30 CMP #$0A
    // Overlapping static entry reached from 0xC17DEC.
    case 0xC17DEE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:31 BEQL @UNKNOWN31
    case 0xC17DEF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:31 BEQL @UNKNOWN31
    case 0xC17DF1: cpu.execute_instruction<0x4C>(0x007E83, 3); return true;
    // src/text/ccs/tree_1C.asm:32 CMP #$0B
    case 0xC17DF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/ccs/tree_1C.asm:32 CMP #$0B
    // Overlapping static entry reached from 0xC17DF4.
    case 0xC17DF6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:33 BEQL @UNKNOWN32
    case 0xC17DF7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:33 BEQL @UNKNOWN32
    case 0xC17DF9: cpu.execute_instruction<0x4C>(0x007E89, 3); return true;
    // src/text/ccs/tree_1C.asm:34 CMP #$0C
    case 0xC17DFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/ccs/tree_1C.asm:34 CMP #$0C
    // Overlapping static entry reached from 0xC17DFC.
    case 0xC17DFE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:35 BEQL @UNKNOWN33
    case 0xC17DFF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:35 BEQL @UNKNOWN33
    case 0xC17E01: cpu.execute_instruction<0x4C>(0x007E8F, 3); return true;
    // src/text/ccs/tree_1C.asm:37 CMP #$14
    case 0xC17E04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/ccs/tree_1C.asm:37 CMP #$14
    // Overlapping static entry reached from 0xC17E04.
    case 0xC17E06: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:38 BEQL @UNKNOWN34
    case 0xC17E07: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:38 BEQL @UNKNOWN34
    case 0xC17E09: cpu.execute_instruction<0x4C>(0x007E95, 3); return true;
    // src/text/ccs/tree_1C.asm:39 CMP #$15
    case 0xC17E0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000015, 2); else cpu.execute_instruction<0xC9>(0x000015, 3); return true;
    // src/text/ccs/tree_1C.asm:39 CMP #$15
    // Overlapping static entry reached from 0xC17E0C.
    case 0xC17E0E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:40 BEQL @UNKNOWN35
    case 0xC17E0F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:40 BEQL @UNKNOWN35
    case 0xC17E11: cpu.execute_instruction<0x4C>(0x007E9A, 3); return true;
    // src/text/ccs/tree_1C.asm:42 CMP #$0D
    case 0xC17E14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/ccs/tree_1C.asm:42 CMP #$0D
    // Overlapping static entry reached from 0xC17E14.
    case 0xC17E16: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:43 BEQL @UNKNOWN36
    case 0xC17E17: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:43 BEQL @UNKNOWN36
    case 0xC17E19: cpu.execute_instruction<0x4C>(0x007E9F, 3); return true;
    // src/text/ccs/tree_1C.asm:44 CMP #$0E
    case 0xC17E1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/text/ccs/tree_1C.asm:44 CMP #$0E
    // Overlapping static entry reached from 0xC17E1C.
    case 0xC17E1E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:45 BEQL @UNKNOWN37
    case 0xC17E1F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:45 BEQL @UNKNOWN37
    case 0xC17E21: cpu.execute_instruction<0x4C>(0x007EC6, 3); return true;
    // src/text/ccs/tree_1C.asm:46 CMP #$0F
    case 0xC17E24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/text/ccs/tree_1C.asm:46 CMP #$0F
    // Overlapping static entry reached from 0xC17E24.
    case 0xC17E26: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:47 BEQL @UNKNOWN38
    case 0xC17E27: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:47 BEQL @UNKNOWN38
    case 0xC17E29: cpu.execute_instruction<0x4C>(0x007EED, 3); return true;
    // src/text/ccs/tree_1C.asm:48 CMP #$11
    case 0xC17E2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/ccs/tree_1C.asm:48 CMP #$11
    // Overlapping static entry reached from 0xC17E2C.
    case 0xC17E2E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:49 BEQL @UNKNOWN39
    case 0xC17E2F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:49 BEQL @UNKNOWN39
    case 0xC17E31: cpu.execute_instruction<0x4C>(0x007EFD, 3); return true;
    // src/text/ccs/tree_1C.asm:50 CMP #$12
    case 0xC17E34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/text/ccs/tree_1C.asm:50 CMP #$12
    // Overlapping static entry reached from 0xC17E34.
    case 0xC17E36: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:51 BEQL @UNKNOWN40
    case 0xC17E37: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:51 BEQL @UNKNOWN40
    case 0xC17E39: cpu.execute_instruction<0x4C>(0x007F02, 3); return true;
    // src/text/ccs/tree_1C.asm:52 CMP #$13
    case 0xC17E3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/ccs/tree_1C.asm:52 CMP #$13
    // Overlapping static entry reached from 0xC17E3C.
    case 0xC17E3E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:53 BEQL @UNKNOWN41
    case 0xC17E3F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:53 BEQL @UNKNOWN41
    case 0xC17E41: cpu.execute_instruction<0x4C>(0x007F07, 3); return true;
    // src/text/ccs/tree_1C.asm:54 JMP @UNKNOWN42
    case 0xC17E44: cpu.execute_instruction<0x4C>(0x007F0C, 3); return true;
    // src/text/ccs/tree_1C.asm:56 LDA #.LOWORD(CC_1C_00)
    case 0xC17E47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F9, 2); else cpu.execute_instruction<0xA9>(0x0040F9, 3); return true;
    // src/text/ccs/tree_1C.asm:56 LDA #.LOWORD(CC_1C_00)
    // Overlapping static entry reached from 0xC17E47.
    case 0xC17E49: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:57 JMP @UNKNOWN43
    case 0xC17E4A: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:59 LDA #.LOWORD(CC_1C_01)
    case 0xC17E4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x0040B0, 3); return true;
    // src/text/ccs/tree_1C.asm:59 LDA #.LOWORD(CC_1C_01)
    // Overlapping static entry reached from 0xC17E4D.
    case 0xC17E4F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:60 JMP @UNKNOWN43
    case 0xC17E50: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    case 0xC17E53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x004FD7, 3); return true;
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    // Overlapping static entry reached from 0xC17E53.
    case 0xC17E55: cpu.execute_instruction<0x4F>(0x7F0F4C, 4); return true;
    // src/text/ccs/tree_1C.asm:63 JMP @UNKNOWN43
    case 0xC17E56: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:65 LDA #.LOWORD(CC_1C_03)
    case 0xC17E59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x00488D, 3); return true;
    // src/text/ccs/tree_1C.asm:65 LDA #.LOWORD(CC_1C_03)
    // Overlapping static entry reached from 0xC17E59.
    case 0xC17E5B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:66 JMP @UNKNOWN43
    case 0xC17E5C: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:68 JSR SHOW_HPPP_WINDOWS
    case 0xC17E5F: cpu.execute_instruction<0x20>(0x000A04, 3); return true;
    // src/text/ccs/tree_1C.asm:69 JMP @UNKNOWN42
    case 0xC17E62: cpu.execute_instruction<0x4C>(0x007F0C, 3); return true;
    // src/text/ccs/tree_1C.asm:71 LDA #.LOWORD(CC_1C_05)
    case 0xC17E65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x0046BF, 3); return true;
    // src/text/ccs/tree_1C.asm:71 LDA #.LOWORD(CC_1C_05)
    // Overlapping static entry reached from 0xC17E65.
    case 0xC17E67: cpu.execute_instruction<0x46>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:72 JMP @UNKNOWN43
    case 0xC17E68: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:72 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E67.
    case 0xC17E69: cpu.execute_instruction<0x0F>(0xDEA97F, 4); return true;
    // src/text/ccs/tree_1C.asm:74 LDA #.LOWORD(CC_1C_06)
    case 0xC17E6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DE, 2); else cpu.execute_instruction<0xA9>(0x0046DE, 3); return true;
    // src/text/ccs/tree_1C.asm:74 LDA #.LOWORD(CC_1C_06)
    // Overlapping static entry reached from 0xC17E6B.
    case 0xC17E6D: cpu.execute_instruction<0x46>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:75 JMP @UNKNOWN43
    case 0xC17E6E: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:75 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E6D.
    case 0xC17E6F: cpu.execute_instruction<0x0F>(0xCAA97F, 4); return true;
    // src/text/ccs/tree_1C.asm:77 LDA #.LOWORD(CC_1C_07)
    case 0xC17E71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0045CA, 3); return true;
    // src/text/ccs/tree_1C.asm:77 LDA #.LOWORD(CC_1C_07)
    // Overlapping static entry reached from 0xC17E71.
    case 0xC17E73: cpu.execute_instruction<0x45>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    case 0xC17E74: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E73.
    case 0xC17E75: cpu.execute_instruction<0x0F>(0xB8A97F, 4); return true;
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    case 0xC17E77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x0043B8, 3); return true;
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    // Overlapping static entry reached from 0xC17E77.
    case 0xC17E79: cpu.execute_instruction<0x43>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:81 JMP @UNKNOWN43
    case 0xC17E7A: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:81 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E79.
    case 0xC17E7B: cpu.execute_instruction<0x0F>(0xEFA97F, 4); return true;
    // src/text/ccs/tree_1C.asm:83 LDA #.LOWORD(CC_1C_09)
    case 0xC17E7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0040EF, 3); return true;
    // src/text/ccs/tree_1C.asm:83 LDA #.LOWORD(CC_1C_09)
    // Overlapping static entry reached from 0xC17E7D.
    case 0xC17E7F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:84 JMP @UNKNOWN43
    case 0xC17E80: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:86 LDA #.LOWORD(CC_1C_0A)
    case 0xC17E83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x0053AF, 3); return true;
    // src/text/ccs/tree_1C.asm:86 LDA #.LOWORD(CC_1C_0A)
    // Overlapping static entry reached from 0xC17E83.
    case 0xC17E85: cpu.execute_instruction<0x53>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:87 JMP @UNKNOWN43
    case 0xC17E86: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:87 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E85.
    case 0xC17E87: cpu.execute_instruction<0x0F>(0x73A97F, 4); return true;
    // src/text/ccs/tree_1C.asm:89 LDA #.LOWORD(CC_1C_0B)
    case 0xC17E89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x005573, 3); return true;
    // src/text/ccs/tree_1C.asm:89 LDA #.LOWORD(CC_1C_0B)
    // Overlapping static entry reached from 0xC17E89.
    case 0xC17E8B: cpu.execute_instruction<0x55>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:90 JMP @UNKNOWN43
    case 0xC17E8C: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:90 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E8B.
    case 0xC17E8D: cpu.execute_instruction<0x0F>(0xA7A97F, 4); return true;
    // src/text/ccs/tree_1C.asm:92 LDA #.LOWORD(CC_1C_0C)
    case 0xC17E8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x005BA7, 3); return true;
    // src/text/ccs/tree_1C.asm:92 LDA #.LOWORD(CC_1C_0C)
    // Overlapping static entry reached from 0xC17E8F.
    case 0xC17E91: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:93 JMP @UNKNOWN43
    case 0xC17E92: cpu.execute_instruction<0x4C>(0x007F0F, 3); return true;
    // src/text/ccs/tree_1C.asm:96 LDA #.LOWORD(CC_1C_14)
    case 0xC17E95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006B, 2); else cpu.execute_instruction<0xA9>(0x00516B, 3); return true;
    // src/text/ccs/tree_1C.asm:96 LDA #.LOWORD(CC_1C_14)
    // Overlapping static entry reached from 0xC17E95.
    case 0xC17E97: cpu.execute_instruction<0x51>(0x000080, 2); return true;
    // src/text/ccs/tree_1C.asm:100 BRA @UNKNOWN43
    case 0xC17E98: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/text/ccs/tree_1C.asm:100 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC17E97.
    case 0xC17E99: cpu.execute_instruction<0x75>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1C.asm:103 LDA #.LOWORD(CC_1C_15)
    case 0xC17E9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0051FC, 3); return true;
    // src/text/ccs/tree_1C.asm:103 LDA #.LOWORD(CC_1C_15)
    // Overlapping static entry reached from 0xC17E99.
    case 0xC17E9B: cpu.execute_instruction<0xFC>(0x008051, 3); return true;
    // src/text/ccs/tree_1C.asm:103 LDA #.LOWORD(CC_1C_15)
    // Overlapping static entry reached from 0xC17E9A.
    case 0xC17E9C: cpu.execute_instruction<0x51>(0x000080, 2); return true;
    // src/text/ccs/tree_1C.asm:107 BRA @UNKNOWN43
    case 0xC17E9D: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/text/ccs/tree_1C.asm:107 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC17E9C.
    case 0xC17E9E: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1C.asm:112 LDA #0
    case 0xC17E9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1C.asm:112 LDA #0
    // Overlapping static entry reached from 0xC17E9E.
    case 0xC17EA0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1C.asm:112 LDA #0
    // Overlapping static entry reached from 0xC17E9F.
    case 0xC17EA1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1C.asm:113 JSL UNKNOWN_C3E75D
    case 0xC17EA2: cpu.execute_instruction<0x22>(0xC3E75D, 4); return true;
    // src/text/ccs/tree_1C.asm:115 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC17EA6: cpu.execute_instruction<0x20>(0x00AC9B, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EAB: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EAE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EAF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EB1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_1C.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC17EB3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EB5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EB7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EB9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EBB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1C.asm:119 LDA #80
    case 0xC17EBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/text/ccs/tree_1C.asm:119 LDA #80
    // Overlapping static entry reached from 0xC17EBD.
    case 0xC17EBF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1C.asm:123 JSL UNKNOWN_C447FB
    case 0xC17EC0: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/text/ccs/tree_1C.asm:125 BRA @UNKNOWN42
    case 0xC17EC4: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/text/ccs/tree_1C.asm:128 LDA #1
    case 0xC17EC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/tree_1C.asm:128 LDA #1
    // Overlapping static entry reached from 0xC17EC6.
    case 0xC17EC8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1C.asm:129 JSL UNKNOWN_C3E75D
    case 0xC17EC9: cpu.execute_instruction<0x22>(0xC3E75D, 4); return true;
    // src/text/ccs/tree_1C.asm:131 JSR RETURN_BATTLE_TARGET_ADDRESS
    case 0xC17ECD: cpu.execute_instruction<0x20>(0x00ACF2, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED2: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_1C.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC17EDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EDC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EDE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EE0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EE2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1C.asm:135 LDA #80
    case 0xC17EE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/text/ccs/tree_1C.asm:135 LDA #80
    // Overlapping static entry reached from 0xC17EE4.
    case 0xC17EE6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1C.asm:139 JSL UNKNOWN_C447FB
    case 0xC17EE7: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/text/ccs/tree_1C.asm:141 BRA @UNKNOWN42
    case 0xC17EEB: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/text/ccs/tree_1C.asm:143 JSR UNKNOWN_C1AD26
    case 0xC17EED: cpu.execute_instruction<0x20>(0x00AD26, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EF0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EF2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EF4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EF6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1C.asm:145 JSR PRINT_NUMBER
    case 0xC17EF8: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/text/ccs/tree_1C.asm:146 BRA @UNKNOWN42
    case 0xC17EFB: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/text/ccs/tree_1C.asm:163 LDA #.LOWORD(CC_1C_11)
    case 0xC17EFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0040CF, 3); return true;
    // src/text/ccs/tree_1C.asm:163 LDA #.LOWORD(CC_1C_11)
    // Overlapping static entry reached from 0xC17EFD.
    case 0xC17EFF: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:164 BRA @UNKNOWN43
    case 0xC17F00: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_1C.asm:167 LDA #.LOWORD(CC_1C_12)
    case 0xC17F02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x0061D1, 3); return true;
    // src/text/ccs/tree_1C.asm:167 LDA #.LOWORD(CC_1C_12)
    // Overlapping static entry reached from 0xC17F02.
    case 0xC17F04: cpu.execute_instruction<0x61>(0x000080, 2); return true;
    // src/text/ccs/tree_1C.asm:168 BRA @UNKNOWN43
    case 0xC17F05: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_1C.asm:168 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC17F04.
    case 0xC17F06: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:170 LDA #.LOWORD(CC_1C_13)
    case 0xC17F07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0073C0, 3); return true;
    // src/text/ccs/tree_1C.asm:170 LDA #.LOWORD(CC_1C_13)
    // Overlapping static entry reached from 0xC17F07.
    case 0xC17F09: cpu.execute_instruction<0x73>(0x000080, 2); return true;
    // src/text/ccs/tree_1C.asm:171 BRA @UNKNOWN43
    case 0xC17F0A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_1C.asm:171 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC17F09.
    case 0xC17F0B: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    case 0xC17F0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    // Overlapping static entry reached from 0xC17F0B.
    case 0xC17F0D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    // Overlapping static entry reached from 0xC17F0C.
    case 0xC17F0E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1C.asm:175 END_C_FUNCTION
    case 0xC17F0F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1C.asm:175 END_C_FUNCTION
    case 0xC17F10: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1D.asm (source_named).
bool execute_text_ccs_tree_1d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1D.asm:3 BEGIN_C_FUNCTION
    case 0xC17F11: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F13: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F14: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F15: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17F16.
    case 0xC17F18: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F19: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F1A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:12 TXA
    case 0xC17F1B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:13 BEQL @UNKNOWN30
    case 0xC17F1C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:13 BEQL @UNKNOWN30
    case 0xC17F1E: cpu.execute_instruction<0x4C>(0x00800C, 3); return true;
    // src/text/ccs/tree_1D.asm:14 CMP #$01
    case 0xC17F21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1D.asm:14 CMP #$01
    // Overlapping static entry reached from 0xC17F21.
    case 0xC17F23: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:15 BEQL @UNKNOWN31
    case 0xC17F24: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:15 BEQL @UNKNOWN31
    case 0xC17F26: cpu.execute_instruction<0x4C>(0x008012, 3); return true;
    // src/text/ccs/tree_1D.asm:16 CMP #$02
    case 0xC17F29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1D.asm:16 CMP #$02
    // Overlapping static entry reached from 0xC17F29.
    case 0xC17F2B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:17 BEQL @UNKNOWN32
    case 0xC17F2C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:17 BEQL @UNKNOWN32
    case 0xC17F2E: cpu.execute_instruction<0x4C>(0x008018, 3); return true;
    // src/text/ccs/tree_1D.asm:18 CMP #$03
    case 0xC17F31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1D.asm:18 CMP #$03
    // Overlapping static entry reached from 0xC17F31.
    case 0xC17F33: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:19 BEQL @UNKNOWN33
    case 0xC17F34: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:19 BEQL @UNKNOWN33
    case 0xC17F36: cpu.execute_instruction<0x4C>(0x00801E, 3); return true;
    // src/text/ccs/tree_1D.asm:20 CMP #$04
    case 0xC17F39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1D.asm:20 CMP #$04
    // Overlapping static entry reached from 0xC17F39.
    case 0xC17F3B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:21 BEQL @UNKNOWN34
    case 0xC17F3C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:21 BEQL @UNKNOWN34
    case 0xC17F3E: cpu.execute_instruction<0x4C>(0x008024, 3); return true;
    // src/text/ccs/tree_1D.asm:22 CMP #$05
    case 0xC17F41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1D.asm:22 CMP #$05
    // Overlapping static entry reached from 0xC17F41.
    case 0xC17F43: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:23 BEQL @UNKNOWN35
    case 0xC17F44: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:23 BEQL @UNKNOWN35
    case 0xC17F46: cpu.execute_instruction<0x4C>(0x00802A, 3); return true;
    // src/text/ccs/tree_1D.asm:24 CMP #$06
    case 0xC17F49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1D.asm:24 CMP #$06
    // Overlapping static entry reached from 0xC17F49.
    case 0xC17F4B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:25 BEQL @UNKNOWN36
    case 0xC17F4C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:25 BEQL @UNKNOWN36
    case 0xC17F4E: cpu.execute_instruction<0x4C>(0x008030, 3); return true;
    // src/text/ccs/tree_1D.asm:26 CMP #$07
    case 0xC17F51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1D.asm:26 CMP #$07
    // Overlapping static entry reached from 0xC17F51.
    case 0xC17F53: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:27 BEQL @UNKNOWN37
    case 0xC17F54: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:27 BEQL @UNKNOWN37
    case 0xC17F56: cpu.execute_instruction<0x4C>(0x008036, 3); return true;
    // src/text/ccs/tree_1D.asm:28 CMP #$08
    case 0xC17F59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_1D.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC17F59.
    case 0xC17F5B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:29 BEQL @UNKNOWN38
    case 0xC17F5C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:29 BEQL @UNKNOWN38
    case 0xC17F5E: cpu.execute_instruction<0x4C>(0x00803C, 3); return true;
    // src/text/ccs/tree_1D.asm:30 CMP #$09
    case 0xC17F61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_1D.asm:30 CMP #$09
    // Overlapping static entry reached from 0xC17F61.
    case 0xC17F63: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:31 BEQL @UNKNOWN39
    case 0xC17F64: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:31 BEQL @UNKNOWN39
    case 0xC17F66: cpu.execute_instruction<0x4C>(0x008042, 3); return true;
    // src/text/ccs/tree_1D.asm:32 CMP #$0A
    case 0xC17F69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_1D.asm:32 CMP #$0A
    // Overlapping static entry reached from 0xC17F69.
    case 0xC17F6B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:33 BEQL @UNKNOWN40
    case 0xC17F6C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:33 BEQL @UNKNOWN40
    case 0xC17F6E: cpu.execute_instruction<0x4C>(0x008048, 3); return true;
    // src/text/ccs/tree_1D.asm:34 CMP #$0B
    case 0xC17F71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/ccs/tree_1D.asm:34 CMP #$0B
    // Overlapping static entry reached from 0xC17F71.
    case 0xC17F73: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:35 BEQL @UNKNOWN41
    case 0xC17F74: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:35 BEQL @UNKNOWN41
    case 0xC17F76: cpu.execute_instruction<0x4C>(0x00804E, 3); return true;
    // src/text/ccs/tree_1D.asm:36 CMP #$0C
    case 0xC17F79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/ccs/tree_1D.asm:36 CMP #$0C
    // Overlapping static entry reached from 0xC17F79.
    case 0xC17F7B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:37 BEQL @UNKNOWN42
    case 0xC17F7C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:37 BEQL @UNKNOWN42
    case 0xC17F7E: cpu.execute_instruction<0x4C>(0x008054, 3); return true;
    // src/text/ccs/tree_1D.asm:38 CMP #$0D
    case 0xC17F81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/ccs/tree_1D.asm:38 CMP #$0D
    // Overlapping static entry reached from 0xC17F81.
    case 0xC17F83: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:39 BEQL @UNKNOWN43
    case 0xC17F84: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:39 BEQL @UNKNOWN43
    case 0xC17F86: cpu.execute_instruction<0x4C>(0x00805A, 3); return true;
    // src/text/ccs/tree_1D.asm:40 CMP #$0E
    case 0xC17F89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/text/ccs/tree_1D.asm:40 CMP #$0E
    // Overlapping static entry reached from 0xC17F89.
    case 0xC17F8B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:41 BEQL @UNKNOWN44
    case 0xC17F8C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:41 BEQL @UNKNOWN44
    case 0xC17F8E: cpu.execute_instruction<0x4C>(0x008060, 3); return true;
    // src/text/ccs/tree_1D.asm:42 CMP #$0F
    case 0xC17F91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/text/ccs/tree_1D.asm:42 CMP #$0F
    // Overlapping static entry reached from 0xC17F91.
    case 0xC17F93: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:43 BEQL @UNKNOWN45
    case 0xC17F94: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:43 BEQL @UNKNOWN45
    case 0xC17F96: cpu.execute_instruction<0x4C>(0x008066, 3); return true;
    // src/text/ccs/tree_1D.asm:44 CMP #$10
    case 0xC17F99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/ccs/tree_1D.asm:44 CMP #$10
    // Overlapping static entry reached from 0xC17F99.
    case 0xC17F9B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:45 BEQL @UNKNOWN46
    case 0xC17F9C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:45 BEQL @UNKNOWN46
    case 0xC17F9E: cpu.execute_instruction<0x4C>(0x00806C, 3); return true;
    // src/text/ccs/tree_1D.asm:46 CMP #$11
    case 0xC17FA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/ccs/tree_1D.asm:46 CMP #$11
    // Overlapping static entry reached from 0xC17FA1.
    case 0xC17FA3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:47 BEQL @UNKNOWN47
    case 0xC17FA4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:47 BEQL @UNKNOWN47
    case 0xC17FA6: cpu.execute_instruction<0x4C>(0x008072, 3); return true;
    // src/text/ccs/tree_1D.asm:48 CMP #$12
    case 0xC17FA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/text/ccs/tree_1D.asm:48 CMP #$12
    // Overlapping static entry reached from 0xC17FA9.
    case 0xC17FAB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:49 BEQL @UNKNOWN48
    case 0xC17FAC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:49 BEQL @UNKNOWN48
    case 0xC17FAE: cpu.execute_instruction<0x4C>(0x008078, 3); return true;
    // src/text/ccs/tree_1D.asm:50 CMP #$13
    case 0xC17FB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/ccs/tree_1D.asm:50 CMP #$13
    // Overlapping static entry reached from 0xC17FB1.
    case 0xC17FB3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:51 BEQL @UNKNOWN49
    case 0xC17FB4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:51 BEQL @UNKNOWN49
    case 0xC17FB6: cpu.execute_instruction<0x4C>(0x00807E, 3); return true;
    // src/text/ccs/tree_1D.asm:52 CMP #$14
    case 0xC17FB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/ccs/tree_1D.asm:52 CMP #$14
    // Overlapping static entry reached from 0xC17FB9.
    case 0xC17FBB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:53 BEQL @UNKNOWN50
    case 0xC17FBC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:53 BEQL @UNKNOWN50
    case 0xC17FBE: cpu.execute_instruction<0x4C>(0x008084, 3); return true;
    // src/text/ccs/tree_1D.asm:54 CMP #$15
    case 0xC17FC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000015, 2); else cpu.execute_instruction<0xC9>(0x000015, 3); return true;
    // src/text/ccs/tree_1D.asm:54 CMP #$15
    // Overlapping static entry reached from 0xC17FC1.
    case 0xC17FC3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:55 BEQL @UNKNOWN51
    case 0xC17FC4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:55 BEQL @UNKNOWN51
    case 0xC17FC6: cpu.execute_instruction<0x4C>(0x00808A, 3); return true;
    // src/text/ccs/tree_1D.asm:56 CMP #$17
    case 0xC17FC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/text/ccs/tree_1D.asm:56 CMP #$17
    // Overlapping static entry reached from 0xC17FC9.
    case 0xC17FCB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:57 BEQL @UNKNOWN52
    case 0xC17FCC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:57 BEQL @UNKNOWN52
    case 0xC17FCE: cpu.execute_instruction<0x4C>(0x008090, 3); return true;
    // src/text/ccs/tree_1D.asm:58 CMP #$18
    case 0xC17FD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/ccs/tree_1D.asm:58 CMP #$18
    // Overlapping static entry reached from 0xC17FD1.
    case 0xC17FD3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:59 BEQL @UNKNOWN53
    case 0xC17FD4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:59 BEQL @UNKNOWN53
    case 0xC17FD6: cpu.execute_instruction<0x4C>(0x008096, 3); return true;
    // src/text/ccs/tree_1D.asm:60 CMP #$19
    case 0xC17FD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/text/ccs/tree_1D.asm:60 CMP #$19
    // Overlapping static entry reached from 0xC17FD9.
    case 0xC17FDB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:61 BEQL @UNKNOWN54
    case 0xC17FDC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:61 BEQL @UNKNOWN54
    case 0xC17FDE: cpu.execute_instruction<0x4C>(0x00809C, 3); return true;
    // src/text/ccs/tree_1D.asm:62 CMP #$20
    case 0xC17FE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/text/ccs/tree_1D.asm:62 CMP #$20
    // Overlapping static entry reached from 0xC17FE1.
    case 0xC17FE3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:63 BEQL @UNKNOWN55
    case 0xC17FE4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:63 BEQL @UNKNOWN55
    case 0xC17FE6: cpu.execute_instruction<0x4C>(0x0080A2, 3); return true;
    // src/text/ccs/tree_1D.asm:64 CMP #$21
    case 0xC17FE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000021, 2); else cpu.execute_instruction<0xC9>(0x000021, 3); return true;
    // src/text/ccs/tree_1D.asm:64 CMP #$21
    // Overlapping static entry reached from 0xC17FE9.
    case 0xC17FEB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:65 BEQL @UNKNOWN58
    case 0xC17FEC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:65 BEQL @UNKNOWN58
    case 0xC17FEE: cpu.execute_instruction<0x4C>(0x0080D7, 3); return true;
    // src/text/ccs/tree_1D.asm:66 CMP #$22
    case 0xC17FF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/text/ccs/tree_1D.asm:66 CMP #$22
    // Overlapping static entry reached from 0xC17FF1.
    case 0xC17FF3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:67 BEQL @UNKNOWN59
    case 0xC17FF4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:67 BEQL @UNKNOWN59
    case 0xC17FF6: cpu.execute_instruction<0x4C>(0x0080DC, 3); return true;
    // src/text/ccs/tree_1D.asm:68 CMP #$23
    case 0xC17FF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000023, 3); return true;
    // src/text/ccs/tree_1D.asm:68 CMP #$23
    // Overlapping static entry reached from 0xC17FF9.
    case 0xC17FFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:69 BEQL @UNKNOWN62
    case 0xC17FFC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:69 BEQL @UNKNOWN62
    case 0xC17FFE: cpu.execute_instruction<0x4C>(0x008110, 3); return true;
    // src/text/ccs/tree_1D.asm:70 CMP #$24
    case 0xC18001: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/text/ccs/tree_1D.asm:70 CMP #$24
    // Overlapping static entry reached from 0xC18001.
    case 0xC18003: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:71 BEQL @UNKNOWN63
    case 0xC18004: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:71 BEQL @UNKNOWN63
    case 0xC18006: cpu.execute_instruction<0x4C>(0x008115, 3); return true;
    // src/text/ccs/tree_1D.asm:72 JMP @UNKNOWN64
    case 0xC18009: cpu.execute_instruction<0x4C>(0x00811A, 3); return true;
    // src/text/ccs/tree_1D.asm:74 LDA #.LOWORD(CC_1D_00)
    case 0xC1800C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x004C1E, 3); return true;
    // src/text/ccs/tree_1D.asm:74 LDA #.LOWORD(CC_1D_00)
    // Overlapping static entry reached from 0xC1800C.
    case 0xC1800E: cpu.execute_instruction<0x4C>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:75 JMP @UNKNOWN65
    case 0xC1800F: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:77 LDA #.LOWORD(CC_1D_01)
    case 0xC18012: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x004C86, 3); return true;
    // src/text/ccs/tree_1D.asm:77 LDA #.LOWORD(CC_1D_01)
    // Overlapping static entry reached from 0xC18012.
    case 0xC18014: cpu.execute_instruction<0x4C>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:78 JMP @UNKNOWN65
    case 0xC18015: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:80 LDA #.LOWORD(CC_1D_02)
    case 0xC18018: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x0048AC, 3); return true;
    // src/text/ccs/tree_1D.asm:80 LDA #.LOWORD(CC_1D_02)
    // Overlapping static entry reached from 0xC18018.
    case 0xC1801A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:81 JMP @UNKNOWN65
    case 0xC1801B: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:83 LDA #.LOWORD(CC_1D_03)
    case 0xC1801E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x004CEE, 3); return true;
    // src/text/ccs/tree_1D.asm:83 LDA #.LOWORD(CC_1D_03)
    // Overlapping static entry reached from 0xC1801E.
    case 0xC18020: cpu.execute_instruction<0x4C>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:84 JMP @UNKNOWN65
    case 0xC18021: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:86 LDA #.LOWORD(CC_1D_04)
    case 0xC18024: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x004D24, 3); return true;
    // src/text/ccs/tree_1D.asm:86 LDA #.LOWORD(CC_1D_04)
    // Overlapping static entry reached from 0xC18024.
    case 0xC18026: cpu.execute_instruction<0x4D>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:87 JMP @UNKNOWN65
    case 0xC18027: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:87 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18026.
    case 0xC18029: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    case 0xC1802A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x004D93, 3); return true;
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    // Overlapping static entry reached from 0xC18029.
    case 0xC1802B: cpu.execute_instruction<0x93>(0x00004D, 2); return true;
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    // Overlapping static entry reached from 0xC1802A.
    case 0xC1802C: cpu.execute_instruction<0x4D>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:90 JMP @UNKNOWN65
    case 0xC1802D: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:90 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1802C.
    case 0xC1802F: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    case 0xC18030: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x005C85, 3); return true;
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    // Overlapping static entry reached from 0xC1802F.
    case 0xC18031: cpu.execute_instruction<0x85>(0x00005C, 2); return true;
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    // Overlapping static entry reached from 0xC18030.
    case 0xC18032: cpu.execute_instruction<0x5C>(0x811D4C, 4); return true;
    // src/text/ccs/tree_1D.asm:93 JMP @UNKNOWN65
    case 0xC18033: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:95 LDA #.LOWORD(CC_1D_07)
    case 0xC18036: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006B, 2); else cpu.execute_instruction<0xA9>(0x005D6B, 3); return true;
    // src/text/ccs/tree_1D.asm:95 LDA #.LOWORD(CC_1D_07)
    // Overlapping static entry reached from 0xC18036.
    case 0xC18038: cpu.execute_instruction<0x5D>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:96 JMP @UNKNOWN65
    case 0xC18039: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:96 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18038.
    case 0xC1803B: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    case 0xC1803C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x0048E9, 3); return true;
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    // Overlapping static entry reached from 0xC1803B.
    case 0xC1803D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000048, 2); else cpu.execute_instruction<0xE9>(0x004C48, 3); return true;
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    // Overlapping static entry reached from 0xC1803C.
    case 0xC1803E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:99 JMP @UNKNOWN65
    case 0xC1803F: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:99 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1803D.
    case 0xC18040: cpu.execute_instruction<0x1D>(0x00A981, 3); return true;
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    case 0xC18042: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x00494A, 3); return true;
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC18040.
    case 0xC18043: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC18042.
    case 0xC18044: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00004C, 2); else cpu.execute_instruction<0x49>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    case 0xC18045: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18044.
    case 0xC18046: cpu.execute_instruction<0x1D>(0x00A981, 3); return true;
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18044.
    case 0xC18047: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    case 0xC18048: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x004EF8, 3); return true;
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    // Overlapping static entry reached from 0xC18047.
    case 0xC18049: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    // Overlapping static entry reached from 0xC18048.
    case 0xC1804A: cpu.execute_instruction<0x4E>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:105 JMP @UNKNOWN65
    case 0xC1804B: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:105 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1804A.
    case 0xC1804D: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    case 0xC1804E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x004F33, 3); return true;
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    // Overlapping static entry reached from 0xC1804D.
    case 0xC1804F: cpu.execute_instruction<0x33>(0x00004F, 2); return true;
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    // Overlapping static entry reached from 0xC1804E.
    case 0xC18050: cpu.execute_instruction<0x4F>(0x811D4C, 4); return true;
    // src/text/ccs/tree_1D.asm:108 JMP @UNKNOWN65
    case 0xC18051: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:110 LDA #.LOWORD(CC_1D_0C)
    case 0xC18054: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x007058, 3); return true;
    // src/text/ccs/tree_1D.asm:110 LDA #.LOWORD(CC_1D_0C)
    // Overlapping static entry reached from 0xC18054.
    case 0xC18056: cpu.execute_instruction<0x70>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:111 JMP @UNKNOWN65
    case 0xC18057: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:111 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18056.
    case 0xC18058: cpu.execute_instruction<0x1D>(0x00A981, 3); return true;
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    case 0xC1805A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x0050E4, 3); return true;
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    // Overlapping static entry reached from 0xC18058.
    case 0xC1805B: cpu.execute_instruction<0xE4>(0x000050, 2); return true;
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    // Overlapping static entry reached from 0xC1805A.
    case 0xC1805C: cpu.execute_instruction<0x50>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:114 JMP @UNKNOWN65
    case 0xC1805D: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:114 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1805C.
    case 0xC1805E: cpu.execute_instruction<0x1D>(0x00A981, 3); return true;
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    case 0xC18060: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x005659, 3); return true;
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC1805E.
    case 0xC18061: cpu.execute_instruction<0x59>(0x004C56, 3); return true;
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC18060.
    case 0xC18062: cpu.execute_instruction<0x56>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:117 JMP @UNKNOWN65
    case 0xC18063: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:117 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18062.
    case 0xC18064: cpu.execute_instruction<0x1D>(0x00A981, 3); return true;
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    case 0xC18066: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DB, 2); else cpu.execute_instruction<0xA9>(0x0056DB, 3); return true;
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    // Overlapping static entry reached from 0xC18064.
    case 0xC18067: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    // Overlapping static entry reached from 0xC18066.
    case 0xC18068: cpu.execute_instruction<0x56>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:120 JMP @UNKNOWN65
    case 0xC18069: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:120 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18068.
    case 0xC1806A: cpu.execute_instruction<0x1D>(0x00A981, 3); return true;
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    case 0xC1806C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00575D, 3); return true;
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC1806A.
    case 0xC1806D: cpu.execute_instruction<0x5D>(0x004C57, 3); return true;
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC1806C.
    case 0xC1806E: cpu.execute_instruction<0x57>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:123 JMP @UNKNOWN65
    case 0xC1806F: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:123 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1806E.
    case 0xC18070: cpu.execute_instruction<0x1D>(0x00A981, 3); return true;
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    case 0xC18072: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CD, 2); else cpu.execute_instruction<0xA9>(0x0057CD, 3); return true;
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC18070.
    case 0xC18073: cpu.execute_instruction<0xCD>(0x004C57, 3); return true;
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC18072.
    case 0xC18074: cpu.execute_instruction<0x57>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:126 JMP @UNKNOWN65
    case 0xC18075: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:126 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18074.
    case 0xC18076: cpu.execute_instruction<0x1D>(0x00A981, 3); return true;
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    case 0xC18078: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x0058A5, 3); return true;
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    // Overlapping static entry reached from 0xC18076.
    case 0xC18079: cpu.execute_instruction<0xA5>(0x000058, 2); return true;
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    // Overlapping static entry reached from 0xC18078.
    case 0xC1807A: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:129 JMP @UNKNOWN65
    case 0xC1807B: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:131 LDA #.LOWORD(CC_1D_13)
    case 0xC1807E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0058FE, 3); return true;
    // src/text/ccs/tree_1D.asm:131 LDA #.LOWORD(CC_1D_13)
    // Overlapping static entry reached from 0xC1807E.
    case 0xC18080: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:132 JMP @UNKNOWN65
    case 0xC18081: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:134 LDA #.LOWORD(CC_1D_14)
    case 0xC18084: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F9, 2); else cpu.execute_instruction<0xA9>(0x0059F9, 3); return true;
    // src/text/ccs/tree_1D.asm:134 LDA #.LOWORD(CC_1D_14)
    // Overlapping static entry reached from 0xC18084.
    case 0xC18086: cpu.execute_instruction<0x59>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:135 JMP @UNKNOWN65
    case 0xC18087: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:135 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18086.
    case 0xC18089: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    case 0xC1808A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x005BCA, 3); return true;
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    // Overlapping static entry reached from 0xC18089.
    case 0xC1808B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    // Overlapping static entry reached from 0xC1808A.
    case 0xC1808C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:138 JMP @UNKNOWN65
    case 0xC1808D: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    case 0xC18090: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x005E5C, 3); return true;
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    // Overlapping static entry reached from 0xC18090.
    case 0xC18092: cpu.execute_instruction<0x5E>(0x001D4C, 3); return true;
    // src/text/ccs/tree_1D.asm:141 JMP @UNKNOWN65
    case 0xC18093: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:141 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18092.
    case 0xC18095: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    case 0xC18096: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x006124, 3); return true;
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    // Overlapping static entry reached from 0xC18095.
    case 0xC18097: cpu.execute_instruction<0x24>(0x000061, 2); return true;
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    // Overlapping static entry reached from 0xC18096.
    case 0xC18098: cpu.execute_instruction<0x61>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:144 JMP @UNKNOWN65
    case 0xC18099: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:144 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18098.
    case 0xC1809A: cpu.execute_instruction<0x1D>(0x00A981, 3); return true;
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    case 0xC1809C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000072, 2); else cpu.execute_instruction<0xA9>(0x006172, 3); return true;
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    // Overlapping static entry reached from 0xC1809A.
    case 0xC1809D: cpu.execute_instruction<0x72>(0x000061, 2); return true;
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    // Overlapping static entry reached from 0xC1809C.
    case 0xC1809E: cpu.execute_instruction<0x61>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:147 JMP @UNKNOWN65
    case 0xC1809F: cpu.execute_instruction<0x4C>(0x00811D, 3); return true;
    // src/text/ccs/tree_1D.asm:147 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1809E.
    case 0xC180A0: cpu.execute_instruction<0x1D>(0x00A081, 3); return true;
    // src/text/ccs/tree_1D.asm:149 LDY #0
    case 0xC180A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/tree_1D.asm:149 LDY #0
    // Overlapping static entry reached from 0xC180A0.
    case 0xC180A3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1D.asm:149 LDY #0
    // Overlapping static entry reached from 0xC180A2.
    case 0xC180A4: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1D.asm:150 STY @LOCAL02
    case 0xC180A5: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:151 JSR RETURN_BATTLE_TARGET_ADDRESS
    case 0xC180A7: cpu.execute_instruction<0x20>(0x00ACF2, 3); return true;
    // src/text/ccs/tree_1D.asm:152 STA @LOCAL01
    case 0xC180AA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/tree_1D.asm:153 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC180AC: cpu.execute_instruction<0x20>(0x00AC9B, 3); return true;
    // src/text/ccs/tree_1D.asm:154 TAX
    case 0xC180AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:155 LDA @LOCAL01
    case 0xC180B0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/tree_1D.asm:156 JSR UNKNOWN_C14070
    case 0xC180B2: cpu.execute_instruction<0x20>(0x004070, 3); return true;
    // src/text/ccs/tree_1D.asm:157 CMP #0
    case 0xC180B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/tree_1D.asm:157 CMP #0
    // Overlapping static entry reached from 0xC180B5.
    case 0xC180B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/tree_1D.asm:158 BNE @UNKNOWN56
    case 0xC180B8: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/tree_1D.asm:159 LDY #1
    case 0xC180BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/tree_1D.asm:159 LDY #1
    // Overlapping static entry reached from 0xC180BA.
    case 0xC180BC: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1D.asm:160 STY @LOCAL02
    case 0xC180BD: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:162 LDY @LOCAL02
    case 0xC180BF: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:163 TYA
    case 0xC180C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC180C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC180C4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC180C6: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC180C8: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC180CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC180CC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC180CE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC180D0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1D.asm:166 JSR SET_WORKING_MEMORY
    case 0xC180D2: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1D.asm:167 BRA @UNKNOWN64
    case 0xC180D5: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/text/ccs/tree_1D.asm:169 LDA #.LOWORD(CC_1D_21)
    case 0xC180D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0061F0, 3); return true;
    // src/text/ccs/tree_1D.asm:169 LDA #.LOWORD(CC_1D_21)
    // Overlapping static entry reached from 0xC180D7.
    case 0xC180D9: cpu.execute_instruction<0x61>(0x000080, 2); return true;
    // src/text/ccs/tree_1D.asm:170 BRA @UNKNOWN65
    case 0xC180DA: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/text/ccs/tree_1D.asm:170 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC180D9.
    case 0xC180DB: cpu.execute_instruction<0x41>(0x0000A0, 2); return true;
    // src/text/ccs/tree_1D.asm:172 LDY #0
    case 0xC180DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/tree_1D.asm:172 LDY #0
    // Overlapping static entry reached from 0xC180DB.
    case 0xC180DD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1D.asm:172 LDY #0
    // Overlapping static entry reached from 0xC180DC.
    case 0xC180DE: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1D.asm:173 STY @LOCAL02
    case 0xC180DF: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:174 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC180E1: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/text/ccs/tree_1D.asm:175 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC180E4: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/text/ccs/tree_1D.asm:176 JSL LOAD_SECTOR_ATTRS
    case 0xC180E7: cpu.execute_instruction<0x22>(0xC00AA1, 4); return true;
    // src/text/ccs/tree_1D.asm:177 AND #$0007
    case 0xC180EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/text/ccs/tree_1D.asm:177 AND #$0007
    // Overlapping static entry reached from 0xC180EB.
    case 0xC180ED: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/ccs/tree_1D.asm:178 CMP #2
    case 0xC180EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1D.asm:178 CMP #2
    // Overlapping static entry reached from 0xC180EE.
    case 0xC180F0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/tree_1D.asm:179 BNE @UNKNOWN60
    case 0xC180F1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/tree_1D.asm:180 LDY #1
    case 0xC180F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/tree_1D.asm:180 LDY #1
    // Overlapping static entry reached from 0xC180F3.
    case 0xC180F5: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1D.asm:181 STY @LOCAL02
    case 0xC180F6: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:183 LDY @LOCAL02
    case 0xC180F8: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:184 TYA
    case 0xC180FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC180FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC180FD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC180FF: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC18101: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18103: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18105: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18107: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18109: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1D.asm:187 JSR SET_WORKING_MEMORY
    case 0xC1810B: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1D.asm:188 BRA @UNKNOWN64
    case 0xC1810E: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/text/ccs/tree_1D.asm:190 LDA #.LOWORD(CC_1D_23)
    case 0xC18110: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x007708, 3); return true;
    // src/text/ccs/tree_1D.asm:190 LDA #.LOWORD(CC_1D_23)
    // Overlapping static entry reached from 0xC18110.
    case 0xC18112: cpu.execute_instruction<0x77>(0x000080, 2); return true;
    // src/text/ccs/tree_1D.asm:191 BRA @UNKNOWN65
    case 0xC18113: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_1D.asm:191 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC18112.
    case 0xC18114: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:193 LDA #.LOWORD(CC_1D_24)
    case 0xC18115: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000074, 2); else cpu.execute_instruction<0xA9>(0x007274, 3); return true;
    // src/text/ccs/tree_1D.asm:193 LDA #.LOWORD(CC_1D_24)
    // Overlapping static entry reached from 0xC18115.
    case 0xC18117: cpu.execute_instruction<0x72>(0x000080, 2); return true;
    // src/text/ccs/tree_1D.asm:194 BRA @UNKNOWN65
    case 0xC18118: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_1D.asm:194 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC18117.
    case 0xC18119: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    case 0xC1811A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    // Overlapping static entry reached from 0xC18119.
    case 0xC1811B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    // Overlapping static entry reached from 0xC1811A.
    case 0xC1811C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1D.asm:198 END_C_FUNCTION
    case 0xC1811D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1D.asm:198 END_C_FUNCTION
    case 0xC1811E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1E.asm (source_named).
bool execute_text_ccs_tree_1e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/tree_1E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1811F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/tree_1E.asm:4 TXA
    case 0xC18121: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:5 BEQ @UNKNOWN0
    case 0xC18122: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:6 CMP #$0001
    case 0xC18124: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1E.asm:6 CMP #$0001
    // Overlapping static entry reached from 0xC18124.
    case 0xC18126: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:7 BEQ @UNKNOWN1
    case 0xC18127: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:8 CMP #$0002
    case 0xC18129: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1E.asm:8 CMP #$0002
    // Overlapping static entry reached from 0xC18129.
    case 0xC1812B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:9 BEQ @UNKNOWN2
    case 0xC1812C: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:10 CMP #$0003
    case 0xC1812E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1E.asm:10 CMP #$0003
    // Overlapping static entry reached from 0xC1812E.
    case 0xC18130: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:11 BEQ @UNKNOWN3
    case 0xC18131: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:12 CMP #$0004
    case 0xC18133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1E.asm:12 CMP #$0004
    // Overlapping static entry reached from 0xC18133.
    case 0xC18135: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:13 BEQ @UNKNOWN4
    case 0xC18136: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:14 CMP #$0005
    case 0xC18138: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1E.asm:14 CMP #$0005
    // Overlapping static entry reached from 0xC18138.
    case 0xC1813A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:15 BEQ @UNKNOWN5
    case 0xC1813B: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:16 CMP #$0006
    case 0xC1813D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1E.asm:16 CMP #$0006
    // Overlapping static entry reached from 0xC1813D.
    case 0xC1813F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:17 BEQ @UNKNOWN6
    case 0xC18140: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:18 CMP #$0007
    case 0xC18142: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1E.asm:18 CMP #$0007
    // Overlapping static entry reached from 0xC18142.
    case 0xC18144: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:19 BEQ @UNKNOWN7
    case 0xC18145: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:20 CMP #$0008
    case 0xC18147: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_1E.asm:20 CMP #$0008
    // Overlapping static entry reached from 0xC18147.
    case 0xC18149: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:21 BEQ @UNKNOWN8
    case 0xC1814A: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:22 CMP #$0009
    case 0xC1814C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_1E.asm:22 CMP #$0009
    // Overlapping static entry reached from 0xC1814C.
    case 0xC1814E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:23 BEQ @UNKNOWN9
    case 0xC1814F: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:24 CMP #$000A
    case 0xC18151: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_1E.asm:24 CMP #$000A
    // Overlapping static entry reached from 0xC18151.
    case 0xC18153: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:25 BEQ @UNKNOWN10
    case 0xC18154: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:26 CMP #$000B
    case 0xC18156: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/ccs/tree_1E.asm:26 CMP #$000B
    // Overlapping static entry reached from 0xC18156.
    case 0xC18158: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:27 BEQ @UNKNOWN11
    case 0xC18159: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:28 CMP #$000C
    case 0xC1815B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/ccs/tree_1E.asm:28 CMP #$000C
    // Overlapping static entry reached from 0xC1815B.
    case 0xC1815D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:29 BEQ @UNKNOWN12
    case 0xC1815E: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:30 CMP #$000D
    case 0xC18160: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/ccs/tree_1E.asm:30 CMP #$000D
    // Overlapping static entry reached from 0xC18160.
    case 0xC18162: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:31 BEQ @UNKNOWN13
    case 0xC18163: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:32 CMP #$000E
    case 0xC18165: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/text/ccs/tree_1E.asm:32 CMP #$000E
    // Overlapping static entry reached from 0xC18165.
    case 0xC18167: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:33 BEQ @UNKNOWN14
    case 0xC18168: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:34 BRA @UNKNOWN15
    case 0xC1816A: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/text/ccs/tree_1E.asm:36 LDA #.LOWORD(CC_1E_00)
    case 0xC1816C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B6, 2); else cpu.execute_instruction<0xA9>(0x0049B6, 3); return true;
    // src/text/ccs/tree_1E.asm:36 LDA #.LOWORD(CC_1E_00)
    // Overlapping static entry reached from 0xC1816C.
    case 0xC1816E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x004980, 3); return true;
    // src/text/ccs/tree_1E.asm:37 BRA @UNKNOWN16
    case 0xC1816F: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/text/ccs/tree_1E.asm:37 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC1816E.
    case 0xC18170: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000A9, 2); else cpu.execute_instruction<0x49>(0x0003A9, 3); return true;
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    case 0xC18171: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x004A03, 3); return true;
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    // Overlapping static entry reached from 0xC18170.
    case 0xC18172: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    // Overlapping static entry reached from 0xC18171.
    case 0xC18173: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:40 BRA @UNKNOWN16
    case 0xC18174: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/tree_1E.asm:42 LDA #.LOWORD(CC_1E_02)
    case 0xC18176: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x004A50, 3); return true;
    // src/text/ccs/tree_1E.asm:42 LDA #.LOWORD(CC_1E_02)
    // Overlapping static entry reached from 0xC18176.
    case 0xC18178: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:43 BRA @UNKNOWN16
    case 0xC18179: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/text/ccs/tree_1E.asm:45 LDA #.LOWORD(CC_1E_03)
    case 0xC1817B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x004A9D, 3); return true;
    // src/text/ccs/tree_1E.asm:45 LDA #.LOWORD(CC_1E_03)
    // Overlapping static entry reached from 0xC1817B.
    case 0xC1817D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:46 BRA @UNKNOWN16
    case 0xC1817E: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/tree_1E.asm:48 LDA #.LOWORD(CC_1E_04)
    case 0xC18180: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EA, 2); else cpu.execute_instruction<0xA9>(0x004AEA, 3); return true;
    // src/text/ccs/tree_1E.asm:48 LDA #.LOWORD(CC_1E_04)
    // Overlapping static entry reached from 0xC18180.
    case 0xC18182: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:49 BRA @UNKNOWN16
    case 0xC18183: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/text/ccs/tree_1E.asm:51 LDA #.LOWORD(CC_1E_05)
    case 0xC18185: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x004B37, 3); return true;
    // src/text/ccs/tree_1E.asm:51 LDA #.LOWORD(CC_1E_05)
    // Overlapping static entry reached from 0xC18185.
    case 0xC18187: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:52 BRA @UNKNOWN16
    case 0xC18188: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    case 0xC1818A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x004B84, 3); return true;
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    // Overlapping static entry reached from 0xC1818A.
    case 0xC1818C: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:55 BRA @UNKNOWN16
    case 0xC1818D: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    case 0xC1818F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x004BD1, 3); return true;
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    // Overlapping static entry reached from 0xC1818F.
    case 0xC18191: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:58 BRA @UNKNOWN16
    case 0xC18192: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    case 0xC18194: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x006A01, 3); return true;
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC18194.
    case 0xC18196: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:61 BRA @UNKNOWN16
    case 0xC18197: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/ccs/tree_1E.asm:63 LDA #.LOWORD(CC_1E_09)
    case 0xC18199: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x00744B, 3); return true;
    // src/text/ccs/tree_1E.asm:63 LDA #.LOWORD(CC_1E_09)
    // Overlapping static entry reached from 0xC18199.
    case 0xC1819B: cpu.execute_instruction<0x74>(0x000080, 2); return true;
    // src/text/ccs/tree_1E.asm:64 BRA @UNKNOWN16
    case 0xC1819C: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/tree_1E.asm:64 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC1819B.
    case 0xC1819D: cpu.execute_instruction<0x1C>(0x0023A9, 3); return true;
    // src/text/ccs/tree_1E.asm:66 LDA #.LOWORD(CC_1E_0A)
    case 0xC1819E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x007523, 3); return true;
    // src/text/ccs/tree_1E.asm:66 LDA #.LOWORD(CC_1E_0A)
    // Overlapping static entry reached from 0xC1819E.
    case 0xC181A0: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/tree_1E.asm:67 BRA @UNKNOWN16
    case 0xC181A1: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/ccs/tree_1E.asm:67 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181A0.
    case 0xC181A2: cpu.execute_instruction<0x17>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    case 0xC181A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x007584, 3); return true;
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC181A2.
    case 0xC181A4: cpu.execute_instruction<0x84>(0x000075, 2); return true;
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC181A3.
    case 0xC181A5: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/tree_1E.asm:70 BRA @UNKNOWN16
    case 0xC181A6: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_1E.asm:70 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181A5.
    case 0xC181A7: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    case 0xC181A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E5, 2); else cpu.execute_instruction<0xA9>(0x0075E5, 3); return true;
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    // Overlapping static entry reached from 0xC181A7.
    case 0xC181A9: cpu.execute_instruction<0xE5>(0x000075, 2); return true;
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    // Overlapping static entry reached from 0xC181A8.
    case 0xC181AA: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/tree_1E.asm:73 BRA @UNKNOWN16
    case 0xC181AB: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_1E.asm:73 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181AA.
    case 0xC181AC: cpu.execute_instruction<0x0D>(0x0046A9, 3); return true;
    // src/text/ccs/tree_1E.asm:75 LDA #.LOWORD(CC_1E_0D)
    case 0xC181AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x007646, 3); return true;
    // src/text/ccs/tree_1E.asm:75 LDA #.LOWORD(CC_1E_0D)
    // Overlapping static entry reached from 0xC181AD.
    case 0xC181AF: cpu.execute_instruction<0x76>(0x000080, 2); return true;
    // src/text/ccs/tree_1E.asm:76 BRA @UNKNOWN16
    case 0xC181B0: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_1E.asm:76 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181AF.
    case 0xC181B1: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:78 LDA #.LOWORD(CC_1E_0E)
    case 0xC181B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x0076A7, 3); return true;
    // src/text/ccs/tree_1E.asm:78 LDA #.LOWORD(CC_1E_0E)
    // Overlapping static entry reached from 0xC181B2.
    case 0xC181B4: cpu.execute_instruction<0x76>(0x000080, 2); return true;
    // src/text/ccs/tree_1E.asm:79 BRA @UNKNOWN16
    case 0xC181B5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_1E.asm:79 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181B4.
    case 0xC181B6: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    case 0xC181B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    // Overlapping static entry reached from 0xC181B6.
    case 0xC181B8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    // Overlapping static entry reached from 0xC181B7.
    case 0xC181B9: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/tree_1E.asm:83 RTS
    case 0xC181BA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1F.asm (source_named).
bool execute_text_ccs_tree_1f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1F.asm:3 BEGIN_C_FUNCTION
    case 0xC181BB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181BD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181BE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181BF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC181C0.
    case 0xC181C2: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181C3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181C4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:11 TXA
    case 0xC181C5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:12 BEQL @UNKNOWN74
    case 0xC181C6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:12 BEQL @UNKNOWN74
    case 0xC181C8: cpu.execute_instruction<0x4C>(0x008416, 3); return true;
    // src/text/ccs/tree_1F.asm:13 CMP #$01
    case 0xC181CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:13 CMP #$01
    // Overlapping static entry reached from 0xC181CB.
    case 0xC181CD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:14 BEQL @UNKNOWN75
    case 0xC181CE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:14 BEQL @UNKNOWN75
    case 0xC181D0: cpu.execute_instruction<0x4C>(0x00841C, 3); return true;
    // src/text/ccs/tree_1F.asm:15 CMP #$02
    case 0xC181D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1F.asm:15 CMP #$02
    // Overlapping static entry reached from 0xC181D3.
    case 0xC181D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:16 BEQL @UNKNOWN76
    case 0xC181D6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:16 BEQL @UNKNOWN76
    case 0xC181D8: cpu.execute_instruction<0x4C>(0x008422, 3); return true;
    // src/text/ccs/tree_1F.asm:17 CMP #$03
    case 0xC181DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1F.asm:17 CMP #$03
    // Overlapping static entry reached from 0xC181DB.
    case 0xC181DD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:18 BEQL @UNKNOWN77
    case 0xC181DE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:18 BEQL @UNKNOWN77
    case 0xC181E0: cpu.execute_instruction<0x4C>(0x008428, 3); return true;
    // src/text/ccs/tree_1F.asm:19 CMP #$04
    case 0xC181E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1F.asm:19 CMP #$04
    // Overlapping static entry reached from 0xC181E3.
    case 0xC181E5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:20 BEQL @UNKNOWN78
    case 0xC181E6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:20 BEQL @UNKNOWN78
    case 0xC181E8: cpu.execute_instruction<0x4C>(0x008436, 3); return true;
    // src/text/ccs/tree_1F.asm:21 CMP #$05
    case 0xC181EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1F.asm:21 CMP #$05
    // Overlapping static entry reached from 0xC181EB.
    case 0xC181ED: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:22 BEQL @UNKNOWN79
    case 0xC181EE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:22 BEQL @UNKNOWN79
    case 0xC181F0: cpu.execute_instruction<0x4C>(0x00843C, 3); return true;
    // src/text/ccs/tree_1F.asm:23 CMP #$06
    case 0xC181F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1F.asm:23 CMP #$06
    // Overlapping static entry reached from 0xC181F3.
    case 0xC181F5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:24 BEQL @UNKNOWN80
    case 0xC181F6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:24 BEQL @UNKNOWN80
    case 0xC181F8: cpu.execute_instruction<0x4C>(0x008446, 3); return true;
    // src/text/ccs/tree_1F.asm:25 CMP #$07
    case 0xC181FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1F.asm:25 CMP #$07
    // Overlapping static entry reached from 0xC181FB.
    case 0xC181FD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:26 BEQL @UNKNOWN81
    case 0xC181FE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:26 BEQL @UNKNOWN81
    case 0xC18200: cpu.execute_instruction<0x4C>(0x008450, 3); return true;
    // src/text/ccs/tree_1F.asm:27 CMP #$11
    case 0xC18203: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/ccs/tree_1F.asm:27 CMP #$11
    // Overlapping static entry reached from 0xC18203.
    case 0xC18205: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:28 BEQL @UNKNOWN82
    case 0xC18206: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:28 BEQL @UNKNOWN82
    case 0xC18208: cpu.execute_instruction<0x4C>(0x008456, 3); return true;
    // src/text/ccs/tree_1F.asm:29 CMP #$12
    case 0xC1820B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/text/ccs/tree_1F.asm:29 CMP #$12
    // Overlapping static entry reached from 0xC1820B.
    case 0xC1820D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:30 BEQL @UNKNOWN83
    case 0xC1820E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:30 BEQL @UNKNOWN83
    case 0xC18210: cpu.execute_instruction<0x4C>(0x00845C, 3); return true;
    // src/text/ccs/tree_1F.asm:31 CMP #$13
    case 0xC18213: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/ccs/tree_1F.asm:31 CMP #$13
    // Overlapping static entry reached from 0xC18213.
    case 0xC18215: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:32 BEQL @UNKNOWN84
    case 0xC18216: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:32 BEQL @UNKNOWN84
    case 0xC18218: cpu.execute_instruction<0x4C>(0x008462, 3); return true;
    // src/text/ccs/tree_1F.asm:33 CMP #$14
    case 0xC1821B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/ccs/tree_1F.asm:33 CMP #$14
    // Overlapping static entry reached from 0xC1821B.
    case 0xC1821D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:34 BEQL @UNKNOWN85
    case 0xC1821E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:34 BEQL @UNKNOWN85
    case 0xC18220: cpu.execute_instruction<0x4C>(0x008468, 3); return true;
    // src/text/ccs/tree_1F.asm:35 CMP #$15
    case 0xC18223: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000015, 2); else cpu.execute_instruction<0xC9>(0x000015, 3); return true;
    // src/text/ccs/tree_1F.asm:35 CMP #$15
    // Overlapping static entry reached from 0xC18223.
    case 0xC18225: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:36 BEQL @UNKNOWN86
    case 0xC18226: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:36 BEQL @UNKNOWN86
    case 0xC18228: cpu.execute_instruction<0x4C>(0x00846E, 3); return true;
    // src/text/ccs/tree_1F.asm:37 CMP #$16
    case 0xC1822B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000016, 2); else cpu.execute_instruction<0xC9>(0x000016, 3); return true;
    // src/text/ccs/tree_1F.asm:37 CMP #$16
    // Overlapping static entry reached from 0xC1822B.
    case 0xC1822D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:38 BEQL @UNKNOWN87
    case 0xC1822E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:38 BEQL @UNKNOWN87
    case 0xC18230: cpu.execute_instruction<0x4C>(0x008474, 3); return true;
    // src/text/ccs/tree_1F.asm:39 CMP #$17
    case 0xC18233: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/text/ccs/tree_1F.asm:39 CMP #$17
    // Overlapping static entry reached from 0xC18233.
    case 0xC18235: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:40 BEQL @UNKNOWN88
    case 0xC18236: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:40 BEQL @UNKNOWN88
    case 0xC18238: cpu.execute_instruction<0x4C>(0x00847A, 3); return true;
    // src/text/ccs/tree_1F.asm:41 CMP #$18
    case 0xC1823B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/ccs/tree_1F.asm:41 CMP #$18
    // Overlapping static entry reached from 0xC1823B.
    case 0xC1823D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:42 BEQL @UNKNOWN89
    case 0xC1823E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:42 BEQL @UNKNOWN89
    case 0xC18240: cpu.execute_instruction<0x4C>(0x008480, 3); return true;
    // src/text/ccs/tree_1F.asm:43 CMP #$19
    case 0xC18243: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/text/ccs/tree_1F.asm:43 CMP #$19
    // Overlapping static entry reached from 0xC18243.
    case 0xC18245: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:44 BEQL @UNKNOWN90
    case 0xC18246: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:44 BEQL @UNKNOWN90
    case 0xC18248: cpu.execute_instruction<0x4C>(0x008486, 3); return true;
    // src/text/ccs/tree_1F.asm:45 CMP #$1A
    case 0xC1824B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001A, 2); else cpu.execute_instruction<0xC9>(0x00001A, 3); return true;
    // src/text/ccs/tree_1F.asm:45 CMP #$1A
    // Overlapping static entry reached from 0xC1824B.
    case 0xC1824D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:46 BEQL @UNKNOWN91
    case 0xC1824E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:46 BEQL @UNKNOWN91
    case 0xC18250: cpu.execute_instruction<0x4C>(0x00848C, 3); return true;
    // src/text/ccs/tree_1F.asm:47 CMP #$1B
    case 0xC18253: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001B, 2); else cpu.execute_instruction<0xC9>(0x00001B, 3); return true;
    // src/text/ccs/tree_1F.asm:47 CMP #$1B
    // Overlapping static entry reached from 0xC18253.
    case 0xC18255: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:48 BEQL @UNKNOWN92
    case 0xC18256: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:48 BEQL @UNKNOWN92
    case 0xC18258: cpu.execute_instruction<0x4C>(0x008492, 3); return true;
    // src/text/ccs/tree_1F.asm:49 CMP #$1C
    case 0xC1825B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001C, 2); else cpu.execute_instruction<0xC9>(0x00001C, 3); return true;
    // src/text/ccs/tree_1F.asm:49 CMP #$1C
    // Overlapping static entry reached from 0xC1825B.
    case 0xC1825D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:50 BEQL @UNKNOWN93
    case 0xC1825E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:50 BEQL @UNKNOWN93
    case 0xC18260: cpu.execute_instruction<0x4C>(0x008498, 3); return true;
    // src/text/ccs/tree_1F.asm:51 CMP #$1D
    case 0xC18263: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/text/ccs/tree_1F.asm:51 CMP #$1D
    // Overlapping static entry reached from 0xC18263.
    case 0xC18265: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:52 BEQL @UNKNOWN94
    case 0xC18266: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:52 BEQL @UNKNOWN94
    case 0xC18268: cpu.execute_instruction<0x4C>(0x00849E, 3); return true;
    // src/text/ccs/tree_1F.asm:53 CMP #$1E
    case 0xC1826B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/text/ccs/tree_1F.asm:53 CMP #$1E
    // Overlapping static entry reached from 0xC1826B.
    case 0xC1826D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:54 BEQL @UNKNOWN95
    case 0xC1826E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:54 BEQL @UNKNOWN95
    case 0xC18270: cpu.execute_instruction<0x4C>(0x0084A4, 3); return true;
    // src/text/ccs/tree_1F.asm:55 CMP #$1F
    case 0xC18273: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/text/ccs/tree_1F.asm:55 CMP #$1F
    // Overlapping static entry reached from 0xC18273.
    case 0xC18275: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:56 BEQL @UNKNOWN96
    case 0xC18276: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:56 BEQL @UNKNOWN96
    case 0xC18278: cpu.execute_instruction<0x4C>(0x0084AA, 3); return true;
    // src/text/ccs/tree_1F.asm:57 CMP #$20
    case 0xC1827B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/text/ccs/tree_1F.asm:57 CMP #$20
    // Overlapping static entry reached from 0xC1827B.
    case 0xC1827D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:58 BEQL @UNKNOWN97
    case 0xC1827E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:58 BEQL @UNKNOWN97
    case 0xC18280: cpu.execute_instruction<0x4C>(0x0084B0, 3); return true;
    // src/text/ccs/tree_1F.asm:59 CMP #$21
    case 0xC18283: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000021, 2); else cpu.execute_instruction<0xC9>(0x000021, 3); return true;
    // src/text/ccs/tree_1F.asm:59 CMP #$21
    // Overlapping static entry reached from 0xC18283.
    case 0xC18285: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:60 BEQL @UNKNOWN98
    case 0xC18286: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:60 BEQL @UNKNOWN98
    case 0xC18288: cpu.execute_instruction<0x4C>(0x0084B6, 3); return true;
    // src/text/ccs/tree_1F.asm:61 CMP #$23
    case 0xC1828B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000023, 3); return true;
    // src/text/ccs/tree_1F.asm:61 CMP #$23
    // Overlapping static entry reached from 0xC1828B.
    case 0xC1828D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:62 BEQL @UNKNOWN99
    case 0xC1828E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:62 BEQL @UNKNOWN99
    case 0xC18290: cpu.execute_instruction<0x4C>(0x0084BC, 3); return true;
    // src/text/ccs/tree_1F.asm:63 CMP #$30
    case 0xC18293: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/text/ccs/tree_1F.asm:63 CMP #$30
    // Overlapping static entry reached from 0xC18293.
    case 0xC18295: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:64 BEQL @UNKNOWN100
    case 0xC18296: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:64 BEQL @UNKNOWN100
    case 0xC18298: cpu.execute_instruction<0x4C>(0x0084C2, 3); return true;
    // src/text/ccs/tree_1F.asm:65 CMP #$31
    case 0xC1829B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000031, 2); else cpu.execute_instruction<0xC9>(0x000031, 3); return true;
    // src/text/ccs/tree_1F.asm:65 CMP #$31
    // Overlapping static entry reached from 0xC1829B.
    case 0xC1829D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:66 BEQL @UNKNOWN100
    case 0xC1829E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:66 BEQL @UNKNOWN100
    case 0xC182A0: cpu.execute_instruction<0x4C>(0x0084C2, 3); return true;
    // src/text/ccs/tree_1F.asm:67 CMP #$40
    case 0xC182A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/text/ccs/tree_1F.asm:67 CMP #$40
    // Overlapping static entry reached from 0xC182A3.
    case 0xC182A5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:68 BEQL @UNKNOWN101
    case 0xC182A6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:68 BEQL @UNKNOWN101
    case 0xC182A8: cpu.execute_instruction<0x4C>(0x0084C8, 3); return true;
    // src/text/ccs/tree_1F.asm:69 CMP #$41
    case 0xC182AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000041, 2); else cpu.execute_instruction<0xC9>(0x000041, 3); return true;
    // src/text/ccs/tree_1F.asm:69 CMP #$41
    // Overlapping static entry reached from 0xC182AB.
    case 0xC182AD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:70 BEQL @UNKNOWN102
    case 0xC182AE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:70 BEQL @UNKNOWN102
    case 0xC182B0: cpu.execute_instruction<0x4C>(0x0084CE, 3); return true;
    // src/text/ccs/tree_1F.asm:71 CMP #$50
    case 0xC182B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000050, 2); else cpu.execute_instruction<0xC9>(0x000050, 3); return true;
    // src/text/ccs/tree_1F.asm:71 CMP #$50
    // Overlapping static entry reached from 0xC182B3.
    case 0xC182B5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:72 BEQL @UNKNOWN103
    case 0xC182B6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:72 BEQL @UNKNOWN103
    case 0xC182B8: cpu.execute_instruction<0x4C>(0x0084D4, 3); return true;
    // src/text/ccs/tree_1F.asm:73 CMP #$51
    case 0xC182BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000051, 2); else cpu.execute_instruction<0xC9>(0x000051, 3); return true;
    // src/text/ccs/tree_1F.asm:73 CMP #$51
    // Overlapping static entry reached from 0xC182BB.
    case 0xC182BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:74 BEQL @UNKNOWN104
    case 0xC182BE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:74 BEQL @UNKNOWN104
    case 0xC182C0: cpu.execute_instruction<0x4C>(0x0084DA, 3); return true;
    // src/text/ccs/tree_1F.asm:75 CMP #$52
    case 0xC182C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000052, 2); else cpu.execute_instruction<0xC9>(0x000052, 3); return true;
    // src/text/ccs/tree_1F.asm:75 CMP #$52
    // Overlapping static entry reached from 0xC182C3.
    case 0xC182C5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:76 BEQL @UNKNOWN105
    case 0xC182C6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:76 BEQL @UNKNOWN105
    case 0xC182C8: cpu.execute_instruction<0x4C>(0x0084E0, 3); return true;
    // src/text/ccs/tree_1F.asm:77 CMP #$60
    case 0xC182CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x000060, 3); return true;
    // src/text/ccs/tree_1F.asm:77 CMP #$60
    // Overlapping static entry reached from 0xC182CB.
    case 0xC182CD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:78 BEQL @UNKNOWN106
    case 0xC182CE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:78 BEQL @UNKNOWN106
    case 0xC182D0: cpu.execute_instruction<0x4C>(0x0084E6, 3); return true;
    // src/text/ccs/tree_1F.asm:79 CMP #$61
    case 0xC182D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000061, 2); else cpu.execute_instruction<0xC9>(0x000061, 3); return true;
    // src/text/ccs/tree_1F.asm:79 CMP #$61
    // Overlapping static entry reached from 0xC182D3.
    case 0xC182D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:80 BEQL @UNKNOWN107
    case 0xC182D6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:80 BEQL @UNKNOWN107
    case 0xC182D8: cpu.execute_instruction<0x4C>(0x0084EC, 3); return true;
    // src/text/ccs/tree_1F.asm:81 CMP #$62
    case 0xC182DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000062, 2); else cpu.execute_instruction<0xC9>(0x000062, 3); return true;
    // src/text/ccs/tree_1F.asm:81 CMP #$62
    // Overlapping static entry reached from 0xC182DB.
    case 0xC182DD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:82 BEQL @UNKNOWN108
    case 0xC182DE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:82 BEQL @UNKNOWN108
    case 0xC182E0: cpu.execute_instruction<0x4C>(0x0084F2, 3); return true;
    // src/text/ccs/tree_1F.asm:83 CMP #$63
    case 0xC182E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000063, 2); else cpu.execute_instruction<0xC9>(0x000063, 3); return true;
    // src/text/ccs/tree_1F.asm:83 CMP #$63
    // Overlapping static entry reached from 0xC182E3.
    case 0xC182E5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:84 BEQL @UNKNOWN109
    case 0xC182E6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:84 BEQL @UNKNOWN109
    case 0xC182E8: cpu.execute_instruction<0x4C>(0x0084F8, 3); return true;
    // src/text/ccs/tree_1F.asm:85 CMP #$64
    case 0xC182EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000064, 2); else cpu.execute_instruction<0xC9>(0x000064, 3); return true;
    // src/text/ccs/tree_1F.asm:85 CMP #$64
    // Overlapping static entry reached from 0xC182EB.
    case 0xC182ED: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:86 BEQL @UNKNOWN110
    case 0xC182EE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:86 BEQL @UNKNOWN110
    case 0xC182F0: cpu.execute_instruction<0x4C>(0x0084FE, 3); return true;
    // src/text/ccs/tree_1F.asm:87 CMP #$65
    case 0xC182F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000065, 2); else cpu.execute_instruction<0xC9>(0x000065, 3); return true;
    // src/text/ccs/tree_1F.asm:87 CMP #$65
    // Overlapping static entry reached from 0xC182F3.
    case 0xC182F5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:88 BEQL @UNKNOWN111
    case 0xC182F6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:88 BEQL @UNKNOWN111
    case 0xC182F8: cpu.execute_instruction<0x4C>(0x008505, 3); return true;
    // src/text/ccs/tree_1F.asm:89 CMP #$66
    case 0xC182FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000066, 2); else cpu.execute_instruction<0xC9>(0x000066, 3); return true;
    // src/text/ccs/tree_1F.asm:89 CMP #$66
    // Overlapping static entry reached from 0xC182FB.
    case 0xC182FD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:90 BEQL @UNKNOWN112
    case 0xC182FE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:90 BEQL @UNKNOWN112
    case 0xC18300: cpu.execute_instruction<0x4C>(0x00850C, 3); return true;
    // src/text/ccs/tree_1F.asm:91 CMP #$67
    case 0xC18303: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000067, 2); else cpu.execute_instruction<0xC9>(0x000067, 3); return true;
    // src/text/ccs/tree_1F.asm:91 CMP #$67
    // Overlapping static entry reached from 0xC18303.
    case 0xC18305: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:92 BEQL @UNKNOWN113
    case 0xC18306: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:92 BEQL @UNKNOWN113
    case 0xC18308: cpu.execute_instruction<0x4C>(0x008512, 3); return true;
    // src/text/ccs/tree_1F.asm:93 CMP #$68
    case 0xC1830B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000068, 2); else cpu.execute_instruction<0xC9>(0x000068, 3); return true;
    // src/text/ccs/tree_1F.asm:93 CMP #$68
    // Overlapping static entry reached from 0xC1830B.
    case 0xC1830D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:94 BEQL @UNKNOWN114
    case 0xC1830E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:94 BEQL @UNKNOWN114
    case 0xC18310: cpu.execute_instruction<0x4C>(0x008518, 3); return true;
    // src/text/ccs/tree_1F.asm:95 CMP #$69
    case 0xC18313: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000069, 2); else cpu.execute_instruction<0xC9>(0x000069, 3); return true;
    // src/text/ccs/tree_1F.asm:95 CMP #$69
    // Overlapping static entry reached from 0xC18313.
    case 0xC18315: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:96 BEQL @UNKNOWN115
    case 0xC18316: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:96 BEQL @UNKNOWN115
    case 0xC18318: cpu.execute_instruction<0x4C>(0x008527, 3); return true;
    // src/text/ccs/tree_1F.asm:97 CMP #$71
    case 0xC1831B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000071, 2); else cpu.execute_instruction<0xC9>(0x000071, 3); return true;
    // src/text/ccs/tree_1F.asm:97 CMP #$71
    // Overlapping static entry reached from 0xC1831B.
    case 0xC1831D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:98 BEQL @UNKNOWN118
    case 0xC1831E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:98 BEQL @UNKNOWN118
    case 0xC18320: cpu.execute_instruction<0x4C>(0x008582, 3); return true;
    // src/text/ccs/tree_1F.asm:99 CMP #$81
    case 0xC18323: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000081, 2); else cpu.execute_instruction<0xC9>(0x000081, 3); return true;
    // src/text/ccs/tree_1F.asm:99 CMP #$81
    // Overlapping static entry reached from 0xC18323.
    case 0xC18325: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:100 BEQL @UNKNOWN119
    case 0xC18326: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:100 BEQL @UNKNOWN119
    case 0xC18328: cpu.execute_instruction<0x4C>(0x008588, 3); return true;
    // src/text/ccs/tree_1F.asm:101 CMP #$83
    case 0xC1832B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000083, 2); else cpu.execute_instruction<0xC9>(0x000083, 3); return true;
    // src/text/ccs/tree_1F.asm:101 CMP #$83
    // Overlapping static entry reached from 0xC1832B.
    case 0xC1832D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:102 BEQL @UNKNOWN120
    case 0xC1832E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:102 BEQL @UNKNOWN120
    case 0xC18330: cpu.execute_instruction<0x4C>(0x00858E, 3); return true;
    // src/text/ccs/tree_1F.asm:103 CMP #$90
    case 0xC18333: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000090, 2); else cpu.execute_instruction<0xC9>(0x000090, 3); return true;
    // src/text/ccs/tree_1F.asm:103 CMP #$90
    // Overlapping static entry reached from 0xC18333.
    case 0xC18335: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:104 BEQL @UNKNOWN121
    case 0xC18336: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:104 BEQL @UNKNOWN121
    case 0xC18338: cpu.execute_instruction<0x4C>(0x008594, 3); return true;
    // src/text/ccs/tree_1F.asm:105 CMP #$A0
    case 0xC1833B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A0, 2); else cpu.execute_instruction<0xC9>(0x0000A0, 3); return true;
    // src/text/ccs/tree_1F.asm:105 CMP #$A0
    // Overlapping static entry reached from 0xC1833B.
    case 0xC1833D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:106 BEQL @UNKNOWN122
    case 0xC1833E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:106 BEQL @UNKNOWN122
    case 0xC18340: cpu.execute_instruction<0x4C>(0x0085A9, 3); return true;
    // src/text/ccs/tree_1F.asm:107 CMP #$A1
    case 0xC18343: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A1, 2); else cpu.execute_instruction<0xC9>(0x0000A1, 3); return true;
    // src/text/ccs/tree_1F.asm:107 CMP #$A1
    // Overlapping static entry reached from 0xC18343.
    case 0xC18345: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:108 BEQL @UNKNOWN123
    case 0xC18346: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:108 BEQL @UNKNOWN123
    case 0xC18348: cpu.execute_instruction<0x4C>(0x0085B3, 3); return true;
    // src/text/ccs/tree_1F.asm:109 CMP #$A2
    case 0xC1834B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A2, 2); else cpu.execute_instruction<0xC9>(0x0000A2, 3); return true;
    // src/text/ccs/tree_1F.asm:109 CMP #$A2
    // Overlapping static entry reached from 0xC1834B.
    case 0xC1834D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:110 BEQL @UNKNOWN124
    case 0xC1834E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:110 BEQL @UNKNOWN124
    case 0xC18350: cpu.execute_instruction<0x4C>(0x0085BD, 3); return true;
    // src/text/ccs/tree_1F.asm:111 CMP #$B0
    case 0xC18353: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000B0, 2); else cpu.execute_instruction<0xC9>(0x0000B0, 3); return true;
    // src/text/ccs/tree_1F.asm:111 CMP #$B0
    // Overlapping static entry reached from 0xC18353.
    case 0xC18355: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:112 BEQL @UNKNOWN126
    case 0xC18356: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:112 BEQL @UNKNOWN126
    case 0xC18358: cpu.execute_instruction<0x4C>(0x0085DA, 3); return true;
    // src/text/ccs/tree_1F.asm:113 CMP #$C0
    case 0xC1835B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/text/ccs/tree_1F.asm:113 CMP #$C0
    // Overlapping static entry reached from 0xC1835B.
    case 0xC1835D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:114 BEQL @UNKNOWN127
    case 0xC1835E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:114 BEQL @UNKNOWN127
    case 0xC18360: cpu.execute_instruction<0x4C>(0x0085E1, 3); return true;
    // src/text/ccs/tree_1F.asm:115 CMP #$D0
    case 0xC18363: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D0, 2); else cpu.execute_instruction<0xC9>(0x0000D0, 3); return true;
    // src/text/ccs/tree_1F.asm:115 CMP #$D0
    // Overlapping static entry reached from 0xC18363.
    case 0xC18365: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:116 BEQL @UNKNOWN128
    case 0xC18366: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:116 BEQL @UNKNOWN128
    case 0xC18368: cpu.execute_instruction<0x4C>(0x0085E7, 3); return true;
    // src/text/ccs/tree_1F.asm:117 CMP #$D1
    case 0xC1836B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D1, 2); else cpu.execute_instruction<0xC9>(0x0000D1, 3); return true;
    // src/text/ccs/tree_1F.asm:117 CMP #$D1
    // Overlapping static entry reached from 0xC1836B.
    case 0xC1836D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:118 BEQL @UNKNOWN129
    case 0xC1836E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:118 BEQL @UNKNOWN129
    case 0xC18370: cpu.execute_instruction<0x4C>(0x0085ED, 3); return true;
    // src/text/ccs/tree_1F.asm:119 CMP #$D2
    case 0xC18373: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D2, 2); else cpu.execute_instruction<0xC9>(0x0000D2, 3); return true;
    // src/text/ccs/tree_1F.asm:119 CMP #$D2
    // Overlapping static entry reached from 0xC18373.
    case 0xC18375: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:120 BEQL @UNKNOWN130
    case 0xC18376: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:120 BEQL @UNKNOWN130
    case 0xC18378: cpu.execute_instruction<0x4C>(0x008602, 3); return true;
    // src/text/ccs/tree_1F.asm:121 CMP #$D3
    case 0xC1837B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D3, 2); else cpu.execute_instruction<0xC9>(0x0000D3, 3); return true;
    // src/text/ccs/tree_1F.asm:121 CMP #$D3
    // Overlapping static entry reached from 0xC1837B.
    case 0xC1837D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:122 BEQL @UNKNOWN131
    case 0xC1837E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:122 BEQL @UNKNOWN131
    case 0xC18380: cpu.execute_instruction<0x4C>(0x008607, 3); return true;
    // src/text/ccs/tree_1F.asm:123 CMP #$E1
    case 0xC18383: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/text/ccs/tree_1F.asm:123 CMP #$E1
    // Overlapping static entry reached from 0xC18383.
    case 0xC18385: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:124 BEQL @UNKNOWN132
    case 0xC18386: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:124 BEQL @UNKNOWN132
    case 0xC18388: cpu.execute_instruction<0x4C>(0x00860C, 3); return true;
    // src/text/ccs/tree_1F.asm:125 CMP #$E4
    case 0xC1838B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E4, 2); else cpu.execute_instruction<0xC9>(0x0000E4, 3); return true;
    // src/text/ccs/tree_1F.asm:125 CMP #$E4
    // Overlapping static entry reached from 0xC1838B.
    case 0xC1838D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:126 BEQL @UNKNOWN133
    case 0xC1838E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:126 BEQL @UNKNOWN133
    case 0xC18390: cpu.execute_instruction<0x4C>(0x008611, 3); return true;
    // src/text/ccs/tree_1F.asm:127 CMP #$E5
    case 0xC18393: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E5, 2); else cpu.execute_instruction<0xC9>(0x0000E5, 3); return true;
    // src/text/ccs/tree_1F.asm:127 CMP #$E5
    // Overlapping static entry reached from 0xC18393.
    case 0xC18395: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:128 BEQL @UNKNOWN134
    case 0xC18396: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:128 BEQL @UNKNOWN134
    case 0xC18398: cpu.execute_instruction<0x4C>(0x008616, 3); return true;
    // src/text/ccs/tree_1F.asm:129 CMP #$E6
    case 0xC1839B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E6, 2); else cpu.execute_instruction<0xC9>(0x0000E6, 3); return true;
    // src/text/ccs/tree_1F.asm:129 CMP #$E6
    // Overlapping static entry reached from 0xC1839B.
    case 0xC1839D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:130 BEQL @UNKNOWN135
    case 0xC1839E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:130 BEQL @UNKNOWN135
    case 0xC183A0: cpu.execute_instruction<0x4C>(0x00861B, 3); return true;
    // src/text/ccs/tree_1F.asm:131 CMP #$E7
    case 0xC183A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E7, 2); else cpu.execute_instruction<0xC9>(0x0000E7, 3); return true;
    // src/text/ccs/tree_1F.asm:131 CMP #$E7
    // Overlapping static entry reached from 0xC183A3.
    case 0xC183A5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:132 BEQL @UNKNOWN136
    case 0xC183A6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:132 BEQL @UNKNOWN136
    case 0xC183A8: cpu.execute_instruction<0x4C>(0x008620, 3); return true;
    // src/text/ccs/tree_1F.asm:133 CMP #$E8
    case 0xC183AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E8, 2); else cpu.execute_instruction<0xC9>(0x0000E8, 3); return true;
    // src/text/ccs/tree_1F.asm:133 CMP #$E8
    // Overlapping static entry reached from 0xC183AB.
    case 0xC183AD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:134 BEQL @UNKNOWN137
    case 0xC183AE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:134 BEQL @UNKNOWN137
    case 0xC183B0: cpu.execute_instruction<0x4C>(0x008625, 3); return true;
    // src/text/ccs/tree_1F.asm:135 CMP #$E9
    case 0xC183B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E9, 2); else cpu.execute_instruction<0xC9>(0x0000E9, 3); return true;
    // src/text/ccs/tree_1F.asm:135 CMP #$E9
    // Overlapping static entry reached from 0xC183B3.
    case 0xC183B5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:136 BEQL @UNKNOWN138
    case 0xC183B6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:136 BEQL @UNKNOWN138
    case 0xC183B8: cpu.execute_instruction<0x4C>(0x00862A, 3); return true;
    // src/text/ccs/tree_1F.asm:137 CMP #$EA
    case 0xC183BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EA, 2); else cpu.execute_instruction<0xC9>(0x0000EA, 3); return true;
    // src/text/ccs/tree_1F.asm:137 CMP #$EA
    // Overlapping static entry reached from 0xC183BB.
    case 0xC183BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:138 BEQL @UNKNOWN139
    case 0xC183BE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:138 BEQL @UNKNOWN139
    case 0xC183C0: cpu.execute_instruction<0x4C>(0x00862F, 3); return true;
    // src/text/ccs/tree_1F.asm:139 CMP #$EB
    case 0xC183C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EB, 2); else cpu.execute_instruction<0xC9>(0x0000EB, 3); return true;
    // src/text/ccs/tree_1F.asm:139 CMP #$EB
    // Overlapping static entry reached from 0xC183C3.
    case 0xC183C5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:140 BEQL @UNKNOWN140
    case 0xC183C6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:140 BEQL @UNKNOWN140
    case 0xC183C8: cpu.execute_instruction<0x4C>(0x008634, 3); return true;
    // src/text/ccs/tree_1F.asm:141 CMP #$EC
    case 0xC183CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EC, 2); else cpu.execute_instruction<0xC9>(0x0000EC, 3); return true;
    // src/text/ccs/tree_1F.asm:141 CMP #$EC
    // Overlapping static entry reached from 0xC183CB.
    case 0xC183CD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:142 BEQL @UNKNOWN141
    case 0xC183CE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:142 BEQL @UNKNOWN141
    case 0xC183D0: cpu.execute_instruction<0x4C>(0x008639, 3); return true;
    // src/text/ccs/tree_1F.asm:143 CMP #$ED
    case 0xC183D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000ED, 2); else cpu.execute_instruction<0xC9>(0x0000ED, 3); return true;
    // src/text/ccs/tree_1F.asm:143 CMP #$ED
    // Overlapping static entry reached from 0xC183D3.
    case 0xC183D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:144 BEQL @UNKNOWN142
    case 0xC183D6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:144 BEQL @UNKNOWN142
    case 0xC183D8: cpu.execute_instruction<0x4C>(0x00863E, 3); return true;
    // src/text/ccs/tree_1F.asm:145 CMP #$EE
    case 0xC183DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EE, 2); else cpu.execute_instruction<0xC9>(0x0000EE, 3); return true;
    // src/text/ccs/tree_1F.asm:145 CMP #$EE
    // Overlapping static entry reached from 0xC183DB.
    case 0xC183DD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:146 BEQL @UNKNOWN143
    case 0xC183DE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:146 BEQL @UNKNOWN143
    case 0xC183E0: cpu.execute_instruction<0x4C>(0x008644, 3); return true;
    // src/text/ccs/tree_1F.asm:147 CMP #$EF
    case 0xC183E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EF, 2); else cpu.execute_instruction<0xC9>(0x0000EF, 3); return true;
    // src/text/ccs/tree_1F.asm:147 CMP #$EF
    // Overlapping static entry reached from 0xC183E3.
    case 0xC183E5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:148 BEQL @UNKNOWN144
    case 0xC183E6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:148 BEQL @UNKNOWN144
    case 0xC183E8: cpu.execute_instruction<0x4C>(0x008649, 3); return true;
    // src/text/ccs/tree_1F.asm:149 CMP #$F0
    case 0xC183EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F0, 2); else cpu.execute_instruction<0xC9>(0x0000F0, 3); return true;
    // src/text/ccs/tree_1F.asm:149 CMP #$F0
    // Overlapping static entry reached from 0xC183EB.
    case 0xC183ED: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:150 BEQL @UNKNOWN145
    case 0xC183EE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:150 BEQL @UNKNOWN145
    case 0xC183F0: cpu.execute_instruction<0x4C>(0x00864E, 3); return true;
    // src/text/ccs/tree_1F.asm:151 CMP #$F1
    case 0xC183F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F1, 2); else cpu.execute_instruction<0xC9>(0x0000F1, 3); return true;
    // src/text/ccs/tree_1F.asm:151 CMP #$F1
    // Overlapping static entry reached from 0xC183F3.
    case 0xC183F5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:152 BEQL @UNKNOWN146
    case 0xC183F6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:152 BEQL @UNKNOWN146
    case 0xC183F8: cpu.execute_instruction<0x4C>(0x008654, 3); return true;
    // src/text/ccs/tree_1F.asm:153 CMP #$F2
    case 0xC183FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F2, 2); else cpu.execute_instruction<0xC9>(0x0000F2, 3); return true;
    // src/text/ccs/tree_1F.asm:153 CMP #$F2
    // Overlapping static entry reached from 0xC183FB.
    case 0xC183FD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:154 BEQL @UNKNOWN147
    case 0xC183FE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:154 BEQL @UNKNOWN147
    case 0xC18400: cpu.execute_instruction<0x4C>(0x008659, 3); return true;
    // src/text/ccs/tree_1F.asm:155 CMP #$F3
    case 0xC18403: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F3, 2); else cpu.execute_instruction<0xC9>(0x0000F3, 3); return true;
    // src/text/ccs/tree_1F.asm:155 CMP #$F3
    // Overlapping static entry reached from 0xC18403.
    case 0xC18405: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:156 BEQL @UNKNOWN148
    case 0xC18406: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:156 BEQL @UNKNOWN148
    case 0xC18408: cpu.execute_instruction<0x4C>(0x00865E, 3); return true;
    // src/text/ccs/tree_1F.asm:157 CMP #$F4
    case 0xC1840B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F4, 2); else cpu.execute_instruction<0xC9>(0x0000F4, 3); return true;
    // src/text/ccs/tree_1F.asm:157 CMP #$F4
    // Overlapping static entry reached from 0xC1840B.
    case 0xC1840D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:158 BEQL @UNKNOWN149
    case 0xC1840E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:158 BEQL @UNKNOWN149
    case 0xC18410: cpu.execute_instruction<0x4C>(0x008663, 3); return true;
    // src/text/ccs/tree_1F.asm:159 JMP @UNKNOWN150
    case 0xC18413: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:161 LDA #.LOWORD(CC_1F_00)
    case 0xC18416: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x004751, 3); return true;
    // src/text/ccs/tree_1F.asm:161 LDA #.LOWORD(CC_1F_00)
    // Overlapping static entry reached from 0xC18416.
    case 0xC18418: cpu.execute_instruction<0x47>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:162 JMP @UNKNOWN151
    case 0xC18419: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:162 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18418.
    case 0xC1841A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:164 LDA #.LOWORD(CC_1F_01)
    case 0xC1841C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x0047A0, 3); return true;
    // src/text/ccs/tree_1F.asm:164 LDA #.LOWORD(CC_1F_01)
    // Overlapping static entry reached from 0xC1841C.
    case 0xC1841E: cpu.execute_instruction<0x47>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:165 JMP @UNKNOWN151
    case 0xC1841F: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:165 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1841E.
    case 0xC18420: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:167 LDA #.LOWORD(CC_1F_02)
    case 0xC18422: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x0047AB, 3); return true;
    // src/text/ccs/tree_1F.asm:167 LDA #.LOWORD(CC_1F_02)
    // Overlapping static entry reached from 0xC18422.
    case 0xC18424: cpu.execute_instruction<0x47>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:168 JMP @UNKNOWN151
    case 0xC18425: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:168 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18424.
    case 0xC18426: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:170 JSL UNKNOWN_C069F7
    case 0xC18428: cpu.execute_instruction<0x22>(0xC069F7, 4); return true;
    // src/text/ccs/tree_1F.asm:171 LDX #0
    case 0xC1842C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:171 LDX #0
    // Overlapping static entry reached from 0xC1842C.
    case 0xC1842E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:172 JSL UNKNOWN_C216AD
    case 0xC1842F: cpu.execute_instruction<0x22>(0xC216AD, 4); return true;
    // src/text/ccs/tree_1F.asm:173 JMP @UNKNOWN150
    case 0xC18433: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:175 LDA #.LOWORD(CC_1F_04)
    case 0xC18436: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x007254, 3); return true;
    // src/text/ccs/tree_1F.asm:175 LDA #.LOWORD(CC_1F_04)
    // Overlapping static entry reached from 0xC18436.
    case 0xC18438: cpu.execute_instruction<0x72>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:176 JMP @UNKNOWN151
    case 0xC18439: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:176 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18438.
    case 0xC1843A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:178 LDA #0
    case 0xC1843C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:178 LDA #0
    // Overlapping static entry reached from 0xC1843C.
    case 0xC1843E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:179 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC1843F: cpu.execute_instruction<0x22>(0xC4FD45, 4); return true;
    // src/text/ccs/tree_1F.asm:180 JMP @UNKNOWN150
    case 0xC18443: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:182 LDA #1
    case 0xC18446: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:182 LDA #1
    // Overlapping static entry reached from 0xC18446.
    case 0xC18448: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:183 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC18449: cpu.execute_instruction<0x22>(0xC4FD45, 4); return true;
    // src/text/ccs/tree_1F.asm:184 JMP @UNKNOWN150
    case 0xC1844D: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:186 LDA #.LOWORD(CC_1F_07)
    case 0xC18450: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00741F, 3); return true;
    // src/text/ccs/tree_1F.asm:186 LDA #.LOWORD(CC_1F_07)
    // Overlapping static entry reached from 0xC18450.
    case 0xC18452: cpu.execute_instruction<0x74>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:187 JMP @UNKNOWN151
    case 0xC18453: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:187 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18452.
    case 0xC18454: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    case 0xC18456: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000071, 2); else cpu.execute_instruction<0xA9>(0x005F71, 3); return true;
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    // Overlapping static entry reached from 0xC18456.
    case 0xC18458: cpu.execute_instruction<0x5F>(0x866B4C, 4); return true;
    // src/text/ccs/tree_1F.asm:190 JMP @UNKNOWN151
    case 0xC18459: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    case 0xC1845C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x005F91, 3); return true;
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    // Overlapping static entry reached from 0xC1845C.
    case 0xC1845E: cpu.execute_instruction<0x5F>(0x866B4C, 4); return true;
    // src/text/ccs/tree_1F.asm:193 JMP @UNKNOWN151
    case 0xC1845F: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:195 LDA #.LOWORD(CC_1F_13)
    case 0xC18462: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0063FD, 3); return true;
    // src/text/ccs/tree_1F.asm:195 LDA #.LOWORD(CC_1F_13)
    // Overlapping static entry reached from 0xC18462.
    case 0xC18464: cpu.execute_instruction<0x63>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:196 JMP @UNKNOWN151
    case 0xC18465: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:196 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18464.
    case 0xC18466: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    case 0xC18468: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00646E, 3); return true;
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    // Overlapping static entry reached from 0xC18468.
    case 0xC1846A: cpu.execute_instruction<0x64>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:199 JMP @UNKNOWN151
    case 0xC1846B: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:199 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1846A.
    case 0xC1846C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    case 0xC1846E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000044, 2); else cpu.execute_instruction<0xA9>(0x006744, 3); return true;
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC1846E.
    case 0xC18470: cpu.execute_instruction<0x67>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    case 0xC18471: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18470.
    case 0xC18472: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    case 0xC18474: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x006490, 3); return true;
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC18474.
    case 0xC18476: cpu.execute_instruction<0x64>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    case 0xC18477: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18476.
    case 0xC18478: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    case 0xC1847A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x006509, 3); return true;
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC1847A.
    case 0xC1847C: cpu.execute_instruction<0x65>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:208 JMP @UNKNOWN151
    case 0xC1847D: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:208 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1847C.
    case 0xC1847E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    case 0xC18480: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x006582, 3); return true;
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    // Overlapping static entry reached from 0xC18480.
    case 0xC18482: cpu.execute_instruction<0x65>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:211 JMP @UNKNOWN151
    case 0xC18483: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:211 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18482.
    case 0xC18484: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:213 LDA #.LOWORD(CC_1F_19)
    case 0xC18486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AA, 2); else cpu.execute_instruction<0xA9>(0x0065AA, 3); return true;
    // src/text/ccs/tree_1F.asm:213 LDA #.LOWORD(CC_1F_19)
    // Overlapping static entry reached from 0xC18486.
    case 0xC18488: cpu.execute_instruction<0x65>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:214 JMP @UNKNOWN151
    case 0xC18489: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:214 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18488.
    case 0xC1848A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:216 LDA #.LOWORD(CC_1F_1A)
    case 0xC1848C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D2, 2); else cpu.execute_instruction<0xA9>(0x0065D2, 3); return true;
    // src/text/ccs/tree_1F.asm:216 LDA #.LOWORD(CC_1F_1A)
    // Overlapping static entry reached from 0xC1848C.
    case 0xC1848E: cpu.execute_instruction<0x65>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:217 JMP @UNKNOWN151
    case 0xC1848F: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:217 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1848E.
    case 0xC18490: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:219 LDA #.LOWORD(CC_1F_1B)
    case 0xC18492: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00662A, 3); return true;
    // src/text/ccs/tree_1F.asm:219 LDA #.LOWORD(CC_1F_1B)
    // Overlapping static entry reached from 0xC18492.
    case 0xC18494: cpu.execute_instruction<0x66>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:220 JMP @UNKNOWN151
    case 0xC18495: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:220 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18494.
    case 0xC18496: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:222 LDA #.LOWORD(CC_1F_1C)
    case 0xC18498: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006D, 2); else cpu.execute_instruction<0xA9>(0x00666D, 3); return true;
    // src/text/ccs/tree_1F.asm:222 LDA #.LOWORD(CC_1F_1C)
    // Overlapping static entry reached from 0xC18498.
    case 0xC1849A: cpu.execute_instruction<0x66>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:223 JMP @UNKNOWN151
    case 0xC1849B: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:223 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1849A.
    case 0xC1849C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:225 LDA #.LOWORD(CC_1F_1D)
    case 0xC1849E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DD, 2); else cpu.execute_instruction<0xA9>(0x0066DD, 3); return true;
    // src/text/ccs/tree_1F.asm:225 LDA #.LOWORD(CC_1F_1D)
    // Overlapping static entry reached from 0xC1849E.
    case 0xC184A0: cpu.execute_instruction<0x66>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    case 0xC184A1: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184A0.
    case 0xC184A2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    case 0xC184A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0067D6, 3); return true;
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    // Overlapping static entry reached from 0xC184A4.
    case 0xC184A6: cpu.execute_instruction<0x67>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:229 JMP @UNKNOWN151
    case 0xC184A7: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:229 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184A6.
    case 0xC184A8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:231 LDA #.LOWORD(CC_1F_1F)
    case 0xC184AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00683B, 3); return true;
    // src/text/ccs/tree_1F.asm:231 LDA #.LOWORD(CC_1F_1F)
    // Overlapping static entry reached from 0xC184AA.
    case 0xC184AC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:232 JMP @UNKNOWN151
    case 0xC184AD: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:234 LDA #.LOWORD(CC_1F_20)
    case 0xC184B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x004DFB, 3); return true;
    // src/text/ccs/tree_1F.asm:234 LDA #.LOWORD(CC_1F_20)
    // Overlapping static entry reached from 0xC184B0.
    case 0xC184B2: cpu.execute_instruction<0x4D>(0x006B4C, 3); return true;
    // src/text/ccs/tree_1F.asm:235 JMP @UNKNOWN151
    case 0xC184B3: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:235 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184B2.
    case 0xC184B5: cpu.execute_instruction<0x86>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    case 0xC184B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008C, 2); else cpu.execute_instruction<0xA9>(0x004E8C, 3); return true;
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    // Overlapping static entry reached from 0xC184B5.
    case 0xC184B7: cpu.execute_instruction<0x8C>(0x004C4E, 3); return true;
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    // Overlapping static entry reached from 0xC184B6.
    case 0xC184B8: cpu.execute_instruction<0x4E>(0x006B4C, 3); return true;
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    case 0xC184B9: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184B7.
    case 0xC184BA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184B8.
    case 0xC184BB: cpu.execute_instruction<0x86>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    case 0xC184BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x006FD1, 3); return true;
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC184BB.
    case 0xC184BD: cpu.execute_instruction<0xD1>(0x00006F, 2); return true;
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC184BC.
    case 0xC184BE: cpu.execute_instruction<0x6F>(0x866B4C, 4); return true;
    // src/text/ccs/tree_1F.asm:241 JMP @UNKNOWN151
    case 0xC184BF: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:243 JSR CHANGE_CURRENT_WINDOW_FONT
    case 0xC184C2: cpu.execute_instruction<0x20>(0x000FAC, 3); return true;
    // src/text/ccs/tree_1F.asm:243 JSR CHANGE_CURRENT_WINDOW_FONT
    // Overlapping static entry reached from 0xC18500.
    case 0xC184C4: cpu.execute_instruction<0x0F>(0x86684C, 4); return true;
    // src/text/ccs/tree_1F.asm:244 JMP @UNKNOWN150
    case 0xC184C5: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:246 LDA #.LOWORD(CC_1F_40)
    case 0xC184C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BC, 2); else cpu.execute_instruction<0xA9>(0x0072BC, 3); return true;
    // src/text/ccs/tree_1F.asm:246 LDA #.LOWORD(CC_1F_40)
    // Overlapping static entry reached from 0xC184C8.
    case 0xC184CA: cpu.execute_instruction<0x72>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:247 JMP @UNKNOWN151
    case 0xC184CB: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:247 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184CA.
    case 0xC184CC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    case 0xC184CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DA, 2); else cpu.execute_instruction<0xA9>(0x0072DA, 3); return true;
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    // Overlapping static entry reached from 0xC184CE.
    case 0xC184D0: cpu.execute_instruction<0x72>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:250 JMP @UNKNOWN151
    case 0xC184D1: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:250 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184D0.
    case 0xC184D2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:252 JSR LOCK_INPUT
    case 0xC184D4: cpu.execute_instruction<0x20>(0x0000C7, 3); return true;
    // src/text/ccs/tree_1F.asm:253 JMP @UNKNOWN150
    case 0xC184D7: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:255 JSR UNLOCK_INPUT
    case 0xC184DA: cpu.execute_instruction<0x20>(0x0000D0, 3); return true;
    // src/text/ccs/tree_1F.asm:256 JMP @UNKNOWN150
    case 0xC184DD: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:258 LDA #.LOWORD(CC_1F_52)
    case 0xC184E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x0044A3, 3); return true;
    // src/text/ccs/tree_1F.asm:258 LDA #.LOWORD(CC_1F_52)
    // Overlapping static entry reached from 0xC184E0.
    case 0xC184E2: cpu.execute_instruction<0x44>(0x006B4C, 3); return true;
    // src/text/ccs/tree_1F.asm:259 JMP @UNKNOWN151
    case 0xC184E3: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:259 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184E2.
    case 0xC184E5: cpu.execute_instruction<0x86>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    case 0xC184E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x005494, 3); return true;
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    // Overlapping static entry reached from 0xC184E5.
    case 0xC184E7: cpu.execute_instruction<0x94>(0x000054, 2); return true;
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    // Overlapping static entry reached from 0xC184E6.
    case 0xC184E8: cpu.execute_instruction<0x54>(0x006B4C, 3); return true;
    // src/text/ccs/tree_1F.asm:262 JMP @UNKNOWN151
    case 0xC184E9: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:262 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184E8.
    case 0xC184EB: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/text/ccs/tree_1F.asm:264 JSR UNKNOWN_C102D0
    case 0xC184EC: cpu.execute_instruction<0x20>(0x0002D0, 3); return true;
    // src/text/ccs/tree_1F.asm:264 JSR UNKNOWN_C102D0
    // Overlapping static entry reached from 0xC184EB.
    case 0xC184ED: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/text/ccs/tree_1F.asm:265 JMP @UNKNOWN150
    case 0xC184EF: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:265 JMP @UNKNOWN150
    // Overlapping static entry reached from 0xC184ED.
    case 0xC184F1: cpu.execute_instruction<0x86>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    case 0xC184F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F7, 2); else cpu.execute_instruction<0xA9>(0x0069F7, 3); return true;
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    // Overlapping static entry reached from 0xC184F1.
    case 0xC184F3: cpu.execute_instruction<0xF7>(0x000069, 2); return true;
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    // Overlapping static entry reached from 0xC184F2.
    case 0xC184F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004C, 2); else cpu.execute_instruction<0x69>(0x006B4C, 3); return true;
    // src/text/ccs/tree_1F.asm:268 JMP @UNKNOWN151
    case 0xC184F5: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:268 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184F4.
    case 0xC184F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:268 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184F4.
    case 0xC184F7: cpu.execute_instruction<0x86>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    case 0xC184F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x006DE8, 3); return true;
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    // Overlapping static entry reached from 0xC184F7.
    case 0xC184F9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    // Overlapping static entry reached from 0xC184F8.
    case 0xC184FA: cpu.execute_instruction<0x6D>(0x006B4C, 3); return true;
    // src/text/ccs/tree_1F.asm:271 JMP @UNKNOWN151
    case 0xC184FB: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:271 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184FA.
    case 0xC184FD: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    case 0xC184FE: cpu.execute_instruction<0x22>(0xC23008, 4); return true;
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    // Overlapping static entry reached from 0xC184FD.
    case 0xC184FF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    // Overlapping static entry reached from 0xC184FF.
    case 0xC18500: cpu.execute_instruction<0x30>(0x0000C2, 2); return true;
    // src/text/ccs/tree_1F.asm:274 JMP @UNKNOWN150
    case 0xC18502: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:276 JSL UNKNOWN_C2307B
    case 0xC18505: cpu.execute_instruction<0x22>(0xC2307B, 4); return true;
    // src/text/ccs/tree_1F.asm:277 JMP @UNKNOWN150
    case 0xC18509: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:279 LDA #.LOWORD(CC_1F_66)
    case 0xC1850C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00711C, 3); return true;
    // src/text/ccs/tree_1F.asm:279 LDA #.LOWORD(CC_1F_66)
    // Overlapping static entry reached from 0xC1850C.
    case 0xC1850E: cpu.execute_instruction<0x71>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:280 JMP @UNKNOWN151
    case 0xC1850F: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:280 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1850E.
    case 0xC18510: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    case 0xC18512: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x007233, 3); return true;
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    // Overlapping static entry reached from 0xC18512.
    case 0xC18514: cpu.execute_instruction<0x72>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:283 JMP @UNKNOWN151
    case 0xC18515: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:283 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18514.
    case 0xC18516: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:285 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC18518: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/text/ccs/tree_1F.asm:286 STA GAME_STATE+game_state::exit_mouse_x_coord
    case 0xC1851B: cpu.execute_instruction<0x8D>(0x0098B2, 3); return true;
    // src/text/ccs/tree_1F.asm:287 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1851E: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/text/ccs/tree_1F.asm:288 STA GAME_STATE+game_state::exit_mouse_y_coord
    case 0xC18521: cpu.execute_instruction<0x8D>(0x0098B4, 3); return true;
    // src/text/ccs/tree_1F.asm:289 JMP @UNKNOWN150
    case 0xC18524: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:291 LDY #1
    case 0xC18527: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:291 LDY #1
    // Overlapping static entry reached from 0xC18527.
    case 0xC18529: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1F.asm:292 STY @LOCAL01
    case 0xC1852A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/tree_1F.asm:293 BRA @UNKNOWN117
    case 0xC1852C: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_1F.asm:295 LDX #0
    case 0xC1852E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:295 LDX #0
    // Overlapping static entry reached from 0xC1852E.
    case 0xC18530: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/text/ccs/tree_1F.asm:296 TYA
    case 0xC18531: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:297 JSL SET_EVENT_FLAG
    case 0xC18532: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/text/ccs/tree_1F.asm:298 LDY @LOCAL01
    case 0xC18536: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/tree_1F.asm:299 INY
    case 0xC18538: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:300 STY @LOCAL01
    case 0xC18539: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/tree_1F.asm:302 CPY #10
    case 0xC1853B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/text/ccs/tree_1F.asm:302 CPY #10
    // Overlapping static entry reached from 0xC1853B.
    case 0xC1853D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/tree_1F.asm:303 BLTEQ @UNKNOWN116
    case 0xC1853E: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/tree_1F.asm:303 BLTEQ @UNKNOWN116
    case 0xC18540: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // src/text/ccs/tree_1F.asm:304 LDX #1
    case 0xC18542: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:304 LDX #1
    // Overlapping static entry reached from 0xC18542.
    case 0xC18544: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/ccs/tree_1F.asm:305 TXA
    case 0xC18545: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:306 JSL FADE_OUT
    case 0xC18546: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    case 0xC1854A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x000073, 3); return true;
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    // Overlapping static entry reached from 0xC1854A.
    case 0xC1854C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:308 JSL PLAY_SOUND
    case 0xC1854D: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/ccs/tree_1F.asm:309 LDA GAME_STATE+game_state::exit_mouse_x_coord
    case 0xC18551: cpu.execute_instruction<0xAD>(0x0098B2, 3); return true;
    // src/text/ccs/tree_1F.asm:310 STA @VIRTUAL04
    case 0xC18554: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/tree_1F.asm:311 LDA GAME_STATE+game_state::exit_mouse_y_coord
    case 0xC18556: cpu.execute_instruction<0xAD>(0x0098B4, 3); return true;
    // src/text/ccs/tree_1F.asm:312 STA @VIRTUAL02
    case 0xC18559: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/tree_1F.asm:313 LDX @VIRTUAL02
    case 0xC1855B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/tree_1F.asm:314 LDA @VIRTUAL04
    case 0xC1855D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/tree_1F.asm:315 JSL LOAD_MAP_AT_POSITION
    case 0xC1855F: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/text/ccs/tree_1F.asm:316 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC18563: cpu.execute_instruction<0x9C>(0x002890, 3); return true;
    // src/text/ccs/tree_1F.asm:317 LDY #4
    case 0xC18566: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/text/ccs/tree_1F.asm:317 LDY #4
    // Overlapping static entry reached from 0xC18566.
    case 0xC18568: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/tree_1F.asm:318 LDX @VIRTUAL02
    case 0xC18569: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/tree_1F.asm:319 LDA @VIRTUAL04
    case 0xC1856B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/tree_1F.asm:320 JSL UNKNOWN_C03FA9
    case 0xC1856D: cpu.execute_instruction<0x22>(0xC03FA9, 4); return true;
    // src/text/ccs/tree_1F.asm:321 LDX #1
    case 0xC18571: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:321 LDX #1
    // Overlapping static entry reached from 0xC18571.
    case 0xC18573: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/ccs/tree_1F.asm:322 TXA
    case 0xC18574: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:323 JSL FADE_IN
    case 0xC18575: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/text/ccs/tree_1F.asm:324 LDA #.LOWORD(-1)
    case 0xC18579: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/ccs/tree_1F.asm:324 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC18579.
    case 0xC1857B: cpu.execute_instruction<0xFF>(0x5DC48D, 4); return true;
    // src/text/ccs/tree_1F.asm:325 STA STAIRS_DIRECTION
    case 0xC1857C: cpu.execute_instruction<0x8D>(0x005DC4, 3); return true;
    // src/text/ccs/tree_1F.asm:326 JMP @UNKNOWN150
    case 0xC1857F: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:328 LDA #.LOWORD(CC_1F_71)
    case 0xC18582: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x005C58, 3); return true;
    // src/text/ccs/tree_1F.asm:328 LDA #.LOWORD(CC_1F_71)
    // Overlapping static entry reached from 0xC18582.
    case 0xC18584: cpu.execute_instruction<0x5C>(0x866B4C, 4); return true;
    // src/text/ccs/tree_1F.asm:329 JMP @UNKNOWN151
    case 0xC18585: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:331 LDA #.LOWORD(CC_1F_81)
    case 0xC18588: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006F, 2); else cpu.execute_instruction<0xA9>(0x004F6F, 3); return true;
    // src/text/ccs/tree_1F.asm:331 LDA #.LOWORD(CC_1F_81)
    // Overlapping static entry reached from 0xC18588.
    case 0xC1858A: cpu.execute_instruction<0x4F>(0x866B4C, 4); return true;
    // src/text/ccs/tree_1F.asm:332 JMP @UNKNOWN151
    case 0xC1858B: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    case 0xC1858E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00583D, 3); return true;
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC1858E.
    case 0xC18590: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:335 JMP @UNKNOWN151
    case 0xC18591: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:337 JSR UNKNOWN_C19441
    case 0xC18594: cpu.execute_instruction<0x20>(0x009441, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:338 STORE_INT1632 @VIRTUAL06
    case 0xC18597: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:338 STORE_INT1632 @VIRTUAL06
    case 0xC18599: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1859B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1859D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1859F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185A1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1F.asm:340 JSR SET_WORKING_MEMORY
    case 0xC185A3: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1F.asm:341 JMP @UNKNOWN150
    case 0xC185A6: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:343 LDA #1
    case 0xC185A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:343 LDA #1
    // Overlapping static entry reached from 0xC185A9.
    case 0xC185AB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:344 JSL UNKNOWN_C226C5
    case 0xC185AC: cpu.execute_instruction<0x22>(0xC226C5, 4); return true;
    // src/text/ccs/tree_1F.asm:345 JMP @UNKNOWN150
    case 0xC185B0: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:347 LDA #0
    case 0xC185B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:347 LDA #0
    // Overlapping static entry reached from 0xC185B3.
    case 0xC185B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:348 JSL UNKNOWN_C226C5
    case 0xC185B6: cpu.execute_instruction<0x22>(0xC226C5, 4); return true;
    // src/text/ccs/tree_1F.asm:349 JMP @UNKNOWN150
    case 0xC185BA: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:351 JSL UNKNOWN_C226E6
    case 0xC185BD: cpu.execute_instruction<0x22>(0xC226E6, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC185C1.
    case 0xC185C3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185C6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185C8: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185CA: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185CC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185CE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185D0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185D2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1F.asm:354 JSR SET_WORKING_MEMORY
    case 0xC185D4: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1F.asm:355 JMP @UNKNOWN150
    case 0xC185D7: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:357 JSL SAVE_CURRENT_GAME
    case 0xC185DA: cpu.execute_instruction<0x22>(0xC22A2C, 4); return true;
    // src/text/ccs/tree_1F.asm:358 JMP @UNKNOWN150
    case 0xC185DE: cpu.execute_instruction<0x4C>(0x008668, 3); return true;
    // src/text/ccs/tree_1F.asm:360 LDA #.LOWORD(CC_1F_C0)
    case 0xC185E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x006308, 3); return true;
    // src/text/ccs/tree_1F.asm:360 LDA #.LOWORD(CC_1F_C0)
    // Overlapping static entry reached from 0xC185E1.
    case 0xC185E3: cpu.execute_instruction<0x63>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:361 JMP @UNKNOWN151
    case 0xC185E4: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:361 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC185E3.
    case 0xC185E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    case 0xC185E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x0063A7, 3); return true;
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    // Overlapping static entry reached from 0xC185E7.
    case 0xC185E9: cpu.execute_instruction<0x63>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:364 JMP @UNKNOWN151
    case 0xC185EA: cpu.execute_instruction<0x4C>(0x00866B, 3); return true;
    // src/text/ccs/tree_1F.asm:364 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC185E9.
    case 0xC185EB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:366 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    case 0xC185ED: cpu.execute_instruction<0x22>(0xC490EE, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:367 STORE_INT1632 @VIRTUAL06
    case 0xC185F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:367 STORE_INT1632 @VIRTUAL06
    case 0xC185F3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185F7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185F9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185FB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1F.asm:369 JSR SET_WORKING_MEMORY
    case 0xC185FD: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/tree_1F.asm:370 BRA @UNKNOWN150
    case 0xC18600: cpu.execute_instruction<0x80>(0x000066, 2); return true;
    // src/text/ccs/tree_1F.asm:372 LDA #.LOWORD(CC_1F_D2)
    case 0xC18602: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x007304, 3); return true;
    // src/text/ccs/tree_1F.asm:372 LDA #.LOWORD(CC_1F_D2)
    // Overlapping static entry reached from 0xC18602.
    case 0xC18604: cpu.execute_instruction<0x73>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:373 BRA @UNKNOWN151
    case 0xC18605: cpu.execute_instruction<0x80>(0x000064, 2); return true;
    // src/text/ccs/tree_1F.asm:373 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18604.
    case 0xC18606: cpu.execute_instruction<0x64>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    case 0xC18607: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x007440, 3); return true;
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    // Overlapping static entry reached from 0xC18606.
    case 0xC18608: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    // Overlapping static entry reached from 0xC18607.
    case 0xC18609: cpu.execute_instruction<0x74>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:376 BRA @UNKNOWN151
    case 0xC1860A: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/text/ccs/tree_1F.asm:376 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18609.
    case 0xC1860B: cpu.execute_instruction<0x5F>(0x66FEA9, 4); return true;
    // src/text/ccs/tree_1F.asm:378 LDA #.LOWORD(CC_1F_E1)
    case 0xC1860C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0066FE, 3); return true;
    // src/text/ccs/tree_1F.asm:378 LDA #.LOWORD(CC_1F_E1)
    // Overlapping static entry reached from 0xC1860C.
    case 0xC1860E: cpu.execute_instruction<0x66>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:379 BRA @UNKNOWN151
    case 0xC1860F: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/text/ccs/tree_1F.asm:379 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC1860E.
    case 0xC18610: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:381 LDA #.LOWORD(CC_1F_E4)
    case 0xC18611: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x006B2B, 3); return true;
    // src/text/ccs/tree_1F.asm:381 LDA #.LOWORD(CC_1F_E4)
    // Overlapping static entry reached from 0xC18611.
    case 0xC18613: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:382 BRA @UNKNOWN151
    case 0xC18614: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/text/ccs/tree_1F.asm:384 LDA #.LOWORD(CC_1F_E5)
    case 0xC18616: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A4, 2); else cpu.execute_instruction<0xA9>(0x006BA4, 3); return true;
    // src/text/ccs/tree_1F.asm:384 LDA #.LOWORD(CC_1F_E5)
    // Overlapping static entry reached from 0xC18616.
    case 0xC18618: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:385 BRA @UNKNOWN151
    case 0xC18619: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/text/ccs/tree_1F.asm:387 LDA #.LOWORD(CC_1F_E6)
    case 0xC1861B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x006BAF, 3); return true;
    // src/text/ccs/tree_1F.asm:387 LDA #.LOWORD(CC_1F_E6)
    // Overlapping static entry reached from 0xC1861B.
    case 0xC1861D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:388 BRA @UNKNOWN151
    case 0xC1861E: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/text/ccs/tree_1F.asm:390 LDA #.LOWORD(CC_1F_E7)
    case 0xC18620: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F2, 2); else cpu.execute_instruction<0xA9>(0x006BF2, 3); return true;
    // src/text/ccs/tree_1F.asm:390 LDA #.LOWORD(CC_1F_E7)
    // Overlapping static entry reached from 0xC18620.
    case 0xC18622: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:391 BRA @UNKNOWN151
    case 0xC18623: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/text/ccs/tree_1F.asm:393 LDA #.LOWORD(CC_1F_E8)
    case 0xC18625: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x006C35, 3); return true;
    // src/text/ccs/tree_1F.asm:393 LDA #.LOWORD(CC_1F_E8)
    // Overlapping static entry reached from 0xC18625.
    case 0xC18627: cpu.execute_instruction<0x6C>(0x004180, 3); return true;
    // src/text/ccs/tree_1F.asm:394 BRA @UNKNOWN151
    case 0xC18628: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/text/ccs/tree_1F.asm:396 LDA #.LOWORD(CC_1F_E9)
    case 0xC1862A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x006C40, 3); return true;
    // src/text/ccs/tree_1F.asm:396 LDA #.LOWORD(CC_1F_E9)
    // Overlapping static entry reached from 0xC1862A.
    case 0xC1862C: cpu.execute_instruction<0x6C>(0x003C80, 3); return true;
    // src/text/ccs/tree_1F.asm:397 BRA @UNKNOWN151
    case 0xC1862D: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/text/ccs/tree_1F.asm:399 LDA #.LOWORD(CC_1F_EA)
    case 0xC1862F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x006C83, 3); return true;
    // src/text/ccs/tree_1F.asm:399 LDA #.LOWORD(CC_1F_EA)
    // Overlapping static entry reached from 0xC1862F.
    case 0xC18631: cpu.execute_instruction<0x6C>(0x003780, 3); return true;
    // src/text/ccs/tree_1F.asm:400 BRA @UNKNOWN151
    case 0xC18632: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    case 0xC18634: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x006CC6, 3); return true;
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC18634.
    case 0xC18636: cpu.execute_instruction<0x6C>(0x003280, 3); return true;
    // src/text/ccs/tree_1F.asm:403 BRA @UNKNOWN151
    case 0xC18637: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    case 0xC18639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x006D14, 3); return true;
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    // Overlapping static entry reached from 0xC18639.
    case 0xC1863B: cpu.execute_instruction<0x6D>(0x002D80, 3); return true;
    // src/text/ccs/tree_1F.asm:406 BRA @UNKNOWN151
    case 0xC1863C: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/text/ccs/tree_1F.asm:408 JSL UNKNOWN_C466B8
    case 0xC1863E: cpu.execute_instruction<0x22>(0xC466B8, 4); return true;
    // src/text/ccs/tree_1F.asm:409 BRA @UNKNOWN150
    case 0xC18642: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/text/ccs/tree_1F.asm:411 LDA #.LOWORD(CC_1F_EE)
    case 0xC18644: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x006D62, 3); return true;
    // src/text/ccs/tree_1F.asm:411 LDA #.LOWORD(CC_1F_EE)
    // Overlapping static entry reached from 0xC18644.
    case 0xC18646: cpu.execute_instruction<0x6D>(0x002280, 3); return true;
    // src/text/ccs/tree_1F.asm:412 BRA @UNKNOWN151
    case 0xC18647: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    case 0xC18649: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x006DA5, 3); return true;
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    // Overlapping static entry reached from 0xC18649.
    case 0xC1864B: cpu.execute_instruction<0x6D>(0x001D80, 3); return true;
    // src/text/ccs/tree_1F.asm:415 BRA @UNKNOWN151
    case 0xC1864C: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/text/ccs/tree_1F.asm:417 JSL GET_ON_BICYCLE
    case 0xC1864E: cpu.execute_instruction<0x22>(0xC03C5E, 4); return true;
    // src/text/ccs/tree_1F.asm:418 BRA @UNKNOWN150
    case 0xC18652: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    case 0xC18654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x006EBF, 3); return true;
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    // Overlapping static entry reached from 0xC18654.
    case 0xC18656: cpu.execute_instruction<0x6E>(0x001280, 3); return true;
    // src/text/ccs/tree_1F.asm:421 BRA @UNKNOWN151
    case 0xC18657: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    case 0xC18659: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x006F2F, 3); return true;
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    // Overlapping static entry reached from 0xC18659.
    case 0xC1865B: cpu.execute_instruction<0x6F>(0xA90D80, 4); return true;
    // src/text/ccs/tree_1F.asm:424 BRA @UNKNOWN151
    case 0xC1865C: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    case 0xC1865E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x007325, 3); return true;
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    // Overlapping static entry reached from 0xC1865B.
    case 0xC1865F: cpu.execute_instruction<0x25>(0x000073, 2); return true;
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    // Overlapping static entry reached from 0xC1865E.
    case 0xC18660: cpu.execute_instruction<0x73>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:427 BRA @UNKNOWN151
    case 0xC18661: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_1F.asm:427 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18660.
    case 0xC18662: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:429 LDA #.LOWORD(CC_1F_F4)
    case 0xC18663: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00737D, 3); return true;
    // src/text/ccs/tree_1F.asm:429 LDA #.LOWORD(CC_1F_F4)
    // Overlapping static entry reached from 0xC18663.
    case 0xC18665: cpu.execute_instruction<0x73>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:430 BRA @UNKNOWN151
    case 0xC18666: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_1F.asm:430 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18665.
    case 0xC18667: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    case 0xC18668: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    // Overlapping static entry reached from 0xC18667.
    case 0xC18669: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    // Overlapping static entry reached from 0xC18668.
    case 0xC1866A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1F.asm:434 END_C_FUNCTION
    case 0xC1866B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1F.asm:434 END_C_FUNCTION
    case 0xC1866C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_battle.asm (source_named).
bool execute_text_ccs_trigger_battle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/trigger_battle.asm:3 BEGIN_C_FUNCTION
    case 0xC16FD1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16FD6.
    case 0xC16FD8: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FDA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_battle.asm:11 TXA
    case 0xC16FDB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_battle.asm:12 STA @LOCAL01
    case 0xC16FDC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/trigger_battle.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FDE: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/trigger_battle.asm:14 BNE @UNKNOWN0
    case 0xC16FE1: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/trigger_battle.asm:15 LDA @LOCAL01
    case 0xC16FE3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/trigger_battle.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16FE5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_battle.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FE7: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/trigger_battle.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC16FEA: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/trigger_battle.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16FED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/trigger_battle.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FEF: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/trigger_battle.asm:21 LDA #.LOWORD(CC_1F_23)
    case 0xC16FF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x006FD1, 3); return true;
    // src/text/ccs/trigger_battle.asm:21 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC16FF2.
    case 0xC16FF4: cpu.execute_instruction<0x6F>(0xE23E80, 4); return true;
    // src/text/ccs/trigger_battle.asm:22 BRA @UNKNOWN4
    case 0xC16FF5: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/text/ccs/trigger_battle.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC16FF7: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/trigger_battle.asm:24 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16FF4.
    case 0xC16FF8: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/trigger_battle.asm:25 LDY #8
    case 0xC16FF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/trigger_battle.asm:25 LDY #8
    // Overlapping static entry reached from 0xC16FF8.
    case 0xC16FFA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/trigger_battle.asm:26 LDA @LOCAL01
    case 0xC16FFB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/trigger_battle.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC16FF9.
    case 0xC16FFC: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/trigger_battle.asm:27 JSL ASL16_ENTRY2
    case 0xC16FFD: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/trigger_battle.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16FFC.
    case 0xC16FFE: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/text/ccs/trigger_battle.asm:28 STA @VIRTUAL02
    case 0xC17001: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/trigger_battle.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC17003: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/trigger_battle.asm:30 AND #$00FF
    case 0xC17006: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/trigger_battle.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC17006.
    case 0xC17008: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/trigger_battle.asm:31 ORA @VIRTUAL02
    case 0xC17009: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/trigger_battle.asm:32 BEQ @UNKNOWN1
    case 0xC1700B: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/trigger_battle.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC1700D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC1700F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/trigger_battle.asm:34 BRA @UNKNOWN2
    case 0xC17011: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/trigger_battle.asm:36 JSR GET_ARGUMENT_MEMORY
    case 0xC17013: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/trigger_battle.asm:38 LDA @VIRTUAL06
    case 0xC17016: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/trigger_battle.asm:39 JSL INIT_BATTLE_SCRIPTED
    case 0xC17018: cpu.execute_instruction<0x22>(0xC22F38, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1701C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC1701C.
    case 0xC1701E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1701F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17021: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17023: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17025: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17027: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17029: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1702B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1702D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/trigger_battle.asm:42 JSR SET_WORKING_MEMORY
    case 0xC1702F: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/trigger_battle.asm:43 LDA #NULL
    case 0xC17032: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_battle.asm:43 LDA #NULL
    // Overlapping static entry reached from 0xC17032.
    case 0xC17034: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/trigger_battle.asm:45 END_C_FUNCTION
    case 0xC17035: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/trigger_battle.asm:45 END_C_FUNCTION
    case 0xC17036: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_photographer_event.asm (source_named).
bool execute_text_ccs_trigger_photographer_event_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/trigger_photographer_event.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC17304: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC17306: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC17307: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC17308: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC17309: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC17309.
    case 0xC1730B: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC1730C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC1730D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_photographer_event.asm:9 TXA
    case 0xC1730E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_photographer_event.asm:10 BEQ @UNKNOWN0
    case 0xC1730F: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17311: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17313: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/trigger_photographer_event.asm:12 BRA @UNKNOWN1
    case 0xC17315: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/trigger_photographer_event.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC17317: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/trigger_photographer_event.asm:16 LDA @VIRTUAL06
    case 0xC1731A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/trigger_photographer_event.asm:17 JSL UNKNOWN_C466C1
    case 0xC1731C: cpu.execute_instruction<0x22>(0xC466C1, 4); return true;
    // src/text/ccs/trigger_photographer_event.asm:18 LDA #NULL
    case 0xC17320: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_photographer_event.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC17320.
    case 0xC17322: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/trigger_photographer_event.asm:19 PLD
    case 0xC17323: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/trigger_photographer_event.asm:20 RTS
    case 0xC17324: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_psi_teleport.asm (source_named).
bool execute_text_ccs_trigger_psi_teleport_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:3 BEGIN_C_FUNCTION
    case 0xC14DFB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC14DFD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC14DFE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC14DFF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC14E00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC14E00.
    case 0xC14E02: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC14E03: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC14E04: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_psi_teleport.asm:13 TXA
    case 0xC14E05: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_psi_teleport.asm:14 STA @LOCAL03
    case 0xC14E06: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:15 LDA #1
    case 0xC14E08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:15 LDA #1
    // Overlapping static entry reached from 0xC14E08.
    case 0xC14E0A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:16 CLC
    case 0xC14E0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/trigger_psi_teleport.asm:17 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E0C: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC14E0F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC14E11: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC14E13: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC14E15: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:19 LDA @LOCAL03
    case 0xC14E17: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC14E19: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:21 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E1B: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:22 STA CC_ARGUMENT_STORAGE,X
    case 0xC14E1E: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC14E21: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:24 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E23: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:25 LDA #.LOWORD(CC_1F_20)
    case 0xC14E26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x004DFB, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:25 LDA #.LOWORD(CC_1F_20)
    // Overlapping static entry reached from 0xC14E26.
    case 0xC14E28: cpu.execute_instruction<0x4D>(0x005F80, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:26 BRA @UNKNOWN7
    case 0xC14E29: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC14E2B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC14E2D: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:30 STA @VIRTUAL00
    case 0xC14E30: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC14E32: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:32 LDA @LOCAL03
    case 0xC14E34: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:33 BEQ @UNKNOWN3
    case 0xC14E36: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC14E38: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC14E3A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC14E3C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC14E3E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC14E40: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC14E42: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:36 BRA @UNKNOWN4
    case 0xC14E44: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:38 JSR GET_ARGUMENT_MEMORY
    case 0xC14E46: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC14E49: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC14E4B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC14E4D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC14E4F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:41 LDA @VIRTUAL00
    case 0xC14E51: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:42 AND #$00FF
    case 0xC14E53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC14E53.
    case 0xC14E55: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:43 BEQ @UNKNOWN5
    case 0xC14E56: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC14E58: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:45 LDA @VIRTUAL00
    case 0xC14E5A: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:46 STA @LOCAL01
    case 0xC14E5C: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:47 BRA @UNKNOWN6
    case 0xC14E5E: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:49 JSR GET_WORKING_MEMORY
    case 0xC14E60: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14E63: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14E65: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14E67: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14E69: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC14E6B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:52 LDA @VIRTUAL0A
    case 0xC14E6D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:53 STA @LOCAL01
    case 0xC14E6F: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC14E71: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC14E73: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC14E75: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC14E77: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC14E79: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC14E7B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:58 LDA @VIRTUAL06
    case 0xC14E7D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:59 STA @LOCAL00
    case 0xC14E7F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:60 LDA @LOCAL01
    case 0xC14E81: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:61 JSL SET_TELEPORT_STATE
    case 0xC14E83: cpu.execute_instruction<0x22>(0xC0DD53, 4); return true;
    // src/text/ccs/trigger_psi_teleport.asm:63 LDA #NULL
    case 0xC14E87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:63 LDA #NULL
    // Overlapping static entry reached from 0xC14E87.
    case 0xC14E89: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:65 END_C_FUNCTION
    case 0xC14E8A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:65 END_C_FUNCTION
    case 0xC14E8B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_special_event.asm (source_named).
bool execute_text_ccs_trigger_special_event_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/trigger_special_event.asm:3 BEGIN_C_FUNCTION
    case 0xC172DA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC172DC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC172DD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC172DE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC172DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC172DF.
    case 0xC172E1: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC172E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC172E3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_special_event.asm:10 TXA
    case 0xC172E4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_special_event.asm:11 JSL UNKNOWN_C1BEFC
    case 0xC172E5: cpu.execute_instruction<0x22>(0xC1BEFC, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC172E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC172E9.
    case 0xC172EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC172EC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC172EE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC172F0: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC172F2: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_special_event.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC172F4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_special_event.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC172F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_special_event.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC172F8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_special_event.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC172FA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/trigger_special_event.asm:14 JSR SET_WORKING_MEMORY
    case 0xC172FC: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/trigger_special_event.asm:15 LDA #NULL
    case 0xC172FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_special_event.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC172FF.
    case 0xC17301: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/trigger_special_event.asm:16 END_C_FUNCTION
    case 0xC17302: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/trigger_special_event.asm:16 END_C_FUNCTION
    case 0xC17303: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_teleport.asm (source_named).
bool execute_text_ccs_trigger_teleport_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/trigger_teleport.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14E8C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC14E8E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC14E8F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC14E90: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC14E91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14E91.
    case 0xC14E93: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC14E94: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC14E95: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_teleport.asm:9 CPX #$0000
    case 0xC14E96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/trigger_teleport.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14E93.
    case 0xC14E97: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/trigger_teleport.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14E96.
    case 0xC14E98: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/trigger_teleport.asm:10 BEQ @UNKNOWN0
    case 0xC14E99: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/trigger_teleport.asm:11 TXA
    case 0xC14E9B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_teleport.asm:12 BRA @UNKNOWN1
    case 0xC14E9C: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/trigger_teleport.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC14E9E: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/trigger_teleport.asm:15 LDA @VIRTUAL06
    case 0xC14EA1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/trigger_teleport.asm:17 JSR TELEPORT
    case 0xC14EA3: cpu.execute_instruction<0x20>(0x00BCAB, 3); return true;
    // src/text/ccs/trigger_teleport.asm:18 LDA #NULL
    case 0xC14EA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_teleport.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC14EA6.
    case 0xC14EA8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/trigger_teleport.asm:19 PLD
    case 0xC14EA9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/trigger_teleport.asm:20 RTS
    case 0xC14EAA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_timed_event.asm (source_named).
bool execute_text_ccs_trigger_timed_event_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/trigger_timed_event.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC17440: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/trigger_timed_event.asm:4 TXA
    case 0xC17442: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_timed_event.asm:5 JSL GET_DELIVERY_SPRITE_AND_PLACEHOLDER
    case 0xC17443: cpu.execute_instruction<0x22>(0xEF0EAD, 4); return true;
    // src/text/ccs/trigger_timed_event.asm:6 LDA #NULL
    case 0xC17447: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_timed_event.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC17447.
    case 0xC17449: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/trigger_timed_event.asm:7 RTS
    case 0xC1744A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/try_fixing_items.asm (source_named).
bool execute_text_ccs_try_fixing_items_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/try_fixing_items.asm:3 BEGIN_C_FUNCTION
    case 0xC163A7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC163A9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC163AA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC163AB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC163AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC163AC.
    case 0xC163AE: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC163AF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC163B0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/try_fixing_items.asm:11 CPX #0
    case 0xC163B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/try_fixing_items.asm:11 CPX #0
    // Overlapping static entry reached from 0xC163AE.
    case 0xC163B2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/try_fixing_items.asm:11 CPX #0
    // Overlapping static entry reached from 0xC163B1.
    case 0xC163B3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/try_fixing_items.asm:12 BEQ @ARG_IS_ZERO
    case 0xC163B4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/try_fixing_items.asm:13 TXA
    case 0xC163B6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/try_fixing_items.asm:14 BRA @ARG_IS_NONZERO
    case 0xC163B7: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/try_fixing_items.asm:16 JSR GET_ARGUMENT_MEMORY
    case 0xC163B9: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/try_fixing_items.asm:17 LDA @VIRTUAL06
    case 0xC163BC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/try_fixing_items.asm:19 JSL UNKNOWN_C3F1EC
    case 0xC163BE: cpu.execute_instruction<0x22>(0xC3F1EC, 4); return true;
    // src/text/ccs/try_fixing_items.asm:20 TAX
    case 0xC163C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/try_fixing_items.asm:21 STX @LOCAL01
    case 0xC163C3: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/try_fixing_items.asm:22 BEQ @UNKNOWN2
    case 0xC163C5: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/text/ccs/try_fixing_items.asm:23 TXA
    case 0xC163C7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/try_fixing_items.asm:24 JSR UNKNOWN_C1D038
    case 0xC163C8: cpu.execute_instruction<0x20>(0x00D038, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC163CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC163CD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/try_fixing_items.asm:26 BRA @UNKNOWN3
    case 0xC163CF: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC163D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC163D1.
    case 0xC163D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC163D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC163D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC163D6.
    case 0xC163D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC163D9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/try_fixing_items.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163DB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163DF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163E1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/try_fixing_items.asm:31 JSR SET_WORKING_MEMORY
    case 0xC163E3: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/try_fixing_items.asm:32 LDX @LOCAL01
    case 0xC163E6: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/try_fixing_items.asm:33 TXA
    case 0xC163E8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC163E9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC163EB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/try_fixing_items.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163ED: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163EF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163F1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163F3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/try_fixing_items.asm:36 JSR SET_ARGUMENT_MEMORY
    case 0xC163F5: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/try_fixing_items.asm:37 LDA #NULL
    case 0xC163F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/try_fixing_items.asm:37 LDA #NULL
    // Overlapping static entry reached from 0xC163F8.
    case 0xC163FA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/try_fixing_items.asm:38 END_C_FUNCTION
    case 0xC163FB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/try_fixing_items.asm:38 END_C_FUNCTION
    case 0xC163FC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_18_08.asm (source_named).
bool execute_text_ccs_unknown_18_08_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_18_08.asm:3 BEGIN_C_FUNCTION
    case 0xC15529: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC1552B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC1552C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC1552D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC1552E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1552E.
    case 0xC15530: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC15531: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC15532: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_08.asm:10 TXA
    case 0xC15533: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_08.asm:11 LDX #0
    case 0xC15534: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/unknown_18_08.asm:11 LDX #0
    // Overlapping static entry reached from 0xC15534.
    case 0xC15536: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/unknown_18_08.asm:12 JSR UNKNOWN_C19A11
    case 0xC15537: cpu.execute_instruction<0x20>(0x009A11, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_18_08.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC1553A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_18_08.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC1553C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_18_08.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1553E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_18_08.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15540: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_18_08.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15542: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_18_08.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15544: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_18_08.asm:15 JSR SET_WORKING_MEMORY
    case 0xC15546: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_18_08.asm:16 LDA #NULL
    case 0xC15549: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_18_08.asm:16 LDA #NULL
    // Overlapping static entry reached from 0xC15549.
    case 0xC1554B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_18_08.asm:17 END_C_FUNCTION
    case 0xC1554C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_18_08.asm:17 END_C_FUNCTION
    case 0xC1554D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_18_09.asm (source_named).
bool execute_text_ccs_unknown_18_09_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_18_09.asm:3 BEGIN_C_FUNCTION
    case 0xC1554E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC15550: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC15551: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC15552: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC15553: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15553.
    case 0xC15555: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC15556: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC15557: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_09.asm:10 TXA
    case 0xC15558: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_09.asm:11 LDX #1
    case 0xC15559: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/unknown_18_09.asm:11 LDX #1
    // Overlapping static entry reached from 0xC15559.
    case 0xC1555B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/unknown_18_09.asm:12 JSR UNKNOWN_C19A11
    case 0xC1555C: cpu.execute_instruction<0x20>(0x009A11, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_18_09.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC1555F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_18_09.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC15561: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_18_09.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15563: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_18_09.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15565: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_18_09.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15567: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_18_09.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15569: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_18_09.asm:15 JSR SET_WORKING_MEMORY
    case 0xC1556B: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_18_09.asm:16 LDA #NULL
    case 0xC1556E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_18_09.asm:16 LDA #NULL
    // Overlapping static entry reached from 0xC1556E.
    case 0xC15570: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_18_09.asm:17 END_C_FUNCTION
    case 0xC15571: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_18_09.asm:17 END_C_FUNCTION
    case 0xC15572: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_18_0D.asm (source_named).
bool execute_text_ccs_unknown_18_0d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_18_0D.asm:3 BEGIN_C_FUNCTION
    case 0xC15B46: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15B48: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15B49: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15B4A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15B4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15B4B.
    case 0xC15B4D: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15B4E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15B4F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:10 TXY
    case 0xC15B50: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:11 STY @LOCAL00
    case 0xC15B51: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:12 LDA #1
    case 0xC15B53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15B53.
    case 0xC15B55: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:13 CLC
    case 0xC15B56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B57: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_18_0D.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15B5A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_18_0D.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15B5C: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_18_0D.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15B5E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_18_0D.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15B60: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:16 TYA
    case 0xC15B62: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15B63: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B65: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15B68: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15B6B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B6D: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:22 LDA #.LOWORD(CC_18_0D)
    case 0xC15B70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x005B46, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:22 LDA #.LOWORD(CC_18_0D)
    // Overlapping static entry reached from 0xC15B70.
    case 0xC15B72: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:23 BRA @UNKNOWN8
    case 0xC15B73: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15B75: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:26 AND #$00FF
    case 0xC15B78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15B78.
    case 0xC15B7A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:27 TAX
    case 0xC15B7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:28 BEQ @ARG_IS_ZERO
    case 0xC15B7C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:29 TXA
    case 0xC15B7E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:30 BRA @ARG_IS_NONZERO
    case 0xC15B7F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:32 JSR GET_WORKING_MEMORY
    case 0xC15B81: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:33 LDA @VIRTUAL06
    case 0xC15B84: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:35 TAX
    case 0xC15B86: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:36 LDY @LOCAL00
    case 0xC15B87: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:37 TYA
    case 0xC15B89: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:38 CMP #1
    case 0xC15B8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:38 CMP #1
    // Overlapping static entry reached from 0xC15B8A.
    case 0xC15B8C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:39 BEQ @UNKNOWN5
    case 0xC15B8D: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:40 CMP #2
    case 0xC15B8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:40 CMP #2
    // Overlapping static entry reached from 0xC15B8F.
    case 0xC15B91: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:41 BEQ @UNKNOWN6
    case 0xC15B92: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:42 BRA @UNKNOWN7
    case 0xC15B94: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:44 TXA
    case 0xC15B96: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:45 JSL UNKNOWN_C1952F
    case 0xC15B97: cpu.execute_instruction<0x22>(0xC1952F, 4); return true;
    // src/text/ccs/unknown_18_0D.asm:46 BRA @UNKNOWN7
    case 0xC15B9B: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:48 TXA
    case 0xC15B9D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:49 JSL NULL_C3EF23
    case 0xC15B9E: cpu.execute_instruction<0x22>(0xC3EF23, 4); return true;
    // src/text/ccs/unknown_18_0D.asm:49 JSL NULL_C3EF23
    // Overlapping static entry reached from 0xC15BF5.
    case 0xC15B9F: cpu.execute_instruction<0x23>(0x0000EF, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:49 JSL NULL_C3EF23
    // Overlapping static entry reached from 0xC15B9F.
    case 0xC15BA1: cpu.execute_instruction<0xC3>(0x0000A9, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:51 LDA #NULL
    case 0xC15BA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC15BA1.
    case 0xC15BA3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC15BA2.
    case 0xC15BA4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_18_0D.asm:53 END_C_FUNCTION
    case 0xC15BA5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_18_0D.asm:53 END_C_FUNCTION
    case 0xC15BA6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_1A.asm (source_named).
bool execute_text_ccs_unknown_19_1a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1A.asm:3 BEGIN_C_FUNCTION
    case 0xC15B0E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15B10: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15B11: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15B12: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15B13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15B13.
    case 0xC15B15: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15B16: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15B17: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:10 CPX #0
    case 0xC15B18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1A.asm:10 CPX #0
    // Overlapping static entry reached from 0xC15B15.
    case 0xC15B19: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:10 CPX #0
    // Overlapping static entry reached from 0xC15B18.
    case 0xC15B1A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:11 BEQ @UNKNOWN0
    case 0xC15B1B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:12 TXA
    case 0xC15B1D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:13 BRA @UNKNOWN1
    case 0xC15B1E: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC15B20: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/unknown_19_1A.asm:16 LDA @VIRTUAL06
    case 0xC15B23: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:26 TAX
    case 0xC15B25: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:27 DEX
    case 0xC15B26: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC15B27: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:29 LDA GAME_STATE+game_state::escargo_express_items,X
    case 0xC15B29: cpu.execute_instruction<0xBD>(0x00984B, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1A.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC15B2C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1A.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC15B2E: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1A.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC15B30: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1A.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC15B32: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC15B34: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1A.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B36: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1A.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B38: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1A.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B3A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1A.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B3C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:34 JSR SET_WORKING_MEMORY
    case 0xC15B3E: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_19_1A.asm:35 LDA #NULL
    case 0xC15B41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1A.asm:35 LDA #NULL
    // Overlapping static entry reached from 0xC15B41.
    case 0xC15B43: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1A.asm:36 END_C_FUNCTION
    case 0xC15B44: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1A.asm:36 END_C_FUNCTION
    case 0xC15B45: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_1B.asm (source_named).
bool execute_text_ccs_unknown_19_1b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1B.asm:3 BEGIN_C_FUNCTION
    case 0xC15C36: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15C38: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15C39: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15C3A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15C3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15C3B.
    case 0xC15C3D: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15C3E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15C3F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1B.asm:10 TXA
    case 0xC15C40: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1B.asm:11 JSR UNKNOWN_C12BD5
    case 0xC15C41: cpu.execute_instruction<0x20>(0x002BD5, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_19_1B.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC15C44: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1B.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC15C46: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1B.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C48: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1B.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C4A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1B.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C4C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1B.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C4E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1B.asm:14 JSR SET_WORKING_MEMORY
    case 0xC15C50: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_19_1B.asm:15 LDA #NULL
    case 0xC15C53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1B.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC15C53.
    case 0xC15C55: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1B.asm:16 END_C_FUNCTION
    case 0xC15C56: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1B.asm:16 END_C_FUNCTION
    case 0xC15C57: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_1C.asm (source_named).
bool execute_text_ccs_unknown_19_1c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1C.asm:3 BEGIN_C_FUNCTION
    case 0xC15FF7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FF9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FFA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FFB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15FFC.
    case 0xC15FFE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FFF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC16000: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:11 STX @LOCAL01
    case 0xC16001: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC15FFE.
    case 0xC16002: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:12 LDA #1
    case 0xC16003: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16002.
    case 0xC16004: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16003.
    case 0xC16005: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:13 CLC
    case 0xC16006: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16007: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1600A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1600C: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1600E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16010: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:16 TXA
    case 0xC16012: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16013: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16015: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16018: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1601B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1601D: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:22 LDA #.LOWORD(CC_19_1C)
    case 0xC16020: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F7, 2); else cpu.execute_instruction<0xA9>(0x005FF7, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:22 LDA #.LOWORD(CC_19_1C)
    // Overlapping static entry reached from 0xC16020.
    case 0xC16022: cpu.execute_instruction<0x5F>(0xAD5980, 4); return true;
    // src/text/ccs/unknown_19_1C.asm:23 BRA @UNKNOWN9
    case 0xC16023: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC16025: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC16022.
    case 0xC16026: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC16026.
    case 0xC16027: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:26 AND #$00FF
    case 0xC16028: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16027.
    case 0xC16029: cpu.execute_instruction<0xFF>(0x0FF000, 4); return true;
    // src/text/ccs/unknown_19_1C.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16028.
    case 0xC1602A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC1602B: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC1602D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1602F: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16032: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16034: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16036: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16038: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:30 BRA @ARG_1_IS_NONZERO
    case 0xC1603A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:32 JSR GET_WORKING_MEMORY
    case 0xC1603C: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1603F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:35 LDA @VIRTUAL06
    case 0xC16041: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:36 STA @VIRTUAL04
    case 0xC16043: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:37 LDX @LOCAL01
    case 0xC16045: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:38 BEQ @ARG_2_IS_ZERO
    case 0xC16047: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:39 TXA
    case 0xC16049: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:40 BRA @ARG_2_IS_NONZERO
    case 0xC1604A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC1604C: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:43 LDA @VIRTUAL06
    case 0xC1604F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:45 TAY
    case 0xC16051: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:46 STY @LOCAL00
    case 0xC16052: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:47 LDA @VIRTUAL04
    case 0xC16054: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:48 CMP #$00FF
    case 0xC16056: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:48 CMP #$00FF
    // Overlapping static entry reached from 0xC16056.
    case 0xC16058: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:49 BNE @UNKNOWN7
    case 0xC16059: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:50 TYA
    case 0xC1605B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:51 JSR UNKNOWN_C191B0
    case 0xC1605C: cpu.execute_instruction<0x20>(0x0091B0, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:52 STA @VIRTUAL02
    case 0xC1605F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:53 BRA @UNKNOWN8
    case 0xC16061: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:55 TYX
    case 0xC16063: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:56 LDA @VIRTUAL04
    case 0xC16064: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:57 JSL GET_CHARACTER_ITEM
    case 0xC16066: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/text/ccs/unknown_19_1C.asm:58 STA @VIRTUAL02
    case 0xC1606A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:59 LDY @LOCAL00
    case 0xC1606C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:60 TYX
    case 0xC1606E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:61 LDA @VIRTUAL04
    case 0xC1606F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:62 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC16071: cpu.execute_instruction<0x20>(0x008C27, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:64 LDX @VIRTUAL02
    case 0xC16074: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:65 LDA @VIRTUAL04
    case 0xC16076: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:66 JSR UNKNOWN_C15FB1
    case 0xC16078: cpu.execute_instruction<0x20>(0x005FB1, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:67 LDA #NULL
    case 0xC1607B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:67 LDA #NULL
    // Overlapping static entry reached from 0xC1607B.
    case 0xC1607D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1C.asm:69 END_C_FUNCTION
    case 0xC1607E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1C.asm:69 END_C_FUNCTION
    case 0xC1607F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_1D.asm (source_named).
bool execute_text_ccs_unknown_19_1d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1D.asm:3 BEGIN_C_FUNCTION
    case 0xC16080: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16082: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16083: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16084: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16085: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC16085.
    case 0xC16087: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16088: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16089: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:12 STX @VIRTUAL02
    case 0xC1608A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC16087.
    case 0xC1608B: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:13 LDA #1
    case 0xC1608C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:13 LDA #1
    // Overlapping static entry reached from 0xC1608C.
    case 0xC1608E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:14 CLC
    case 0xC1608F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16090: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16093: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16095: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16097: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16099: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:17 LDA @VIRTUAL02
    case 0xC1609B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1609D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1609F: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC160A2: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC160A5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC160A7: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:23 LDA #.LOWORD(CC_19_1D)
    case 0xC160AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x006080, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:23 LDA #.LOWORD(CC_19_1D)
    // Overlapping static entry reached from 0xC160AA.
    case 0xC160AC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:24 BRA @UNKNOWN6
    case 0xC160AD: cpu.execute_instruction<0x80>(0x000073, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC160AF: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:27 AND #$00FF
    case 0xC160B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC160B2.
    case 0xC160B4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:28 TAX
    case 0xC160B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:29 BEQ @ARG_IS_ZERO
    case 0xC160B6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:30 TXA
    case 0xC160B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:31 BRA @ARG_IS_NONZERO
    case 0xC160B9: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:33 JSR GET_WORKING_MEMORY
    case 0xC160BB: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:34 LDA @VIRTUAL06
    case 0xC160BE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:36 DEC
    case 0xC160C0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:37 CLC
    case 0xC160C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:38 ADC #.LOWORD(GAME_STATE)
    case 0xC160C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:38 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC160C2.
    case 0xC160C4: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:39 STA @LOCAL02
    case 0xC160C5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:39 STA @LOCAL02
    // Overlapping static entry reached from 0xC160C4.
    case 0xC160C6: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:40 CLC
    case 0xC160C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:41 ADC #game_state::unknownB8
    case 0xC160C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B9, 2); else cpu.execute_instruction<0x69>(0x0000B9, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:41 ADC #game_state::unknownB8
    // Overlapping static entry reached from 0xC160C8.
    case 0xC160CA: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:42 TAY
    case 0xC160CB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:43 STY @LOCAL01
    case 0xC160CC: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC160CE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:45 LDA __BSS_START__,Y
    case 0xC160D0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC160D3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC160D5: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC160D7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC160D9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC160DB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160DF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160E3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:49 JSR SET_WORKING_MEMORY
    case 0xC160E5: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:50 LDA @LOCAL02
    case 0xC160E8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:51 CLC
    case 0xC160EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:52 ADC #game_state::unknownB6
    case 0xC160EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0000B6, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:52 ADC #game_state::unknownB6
    // Overlapping static entry reached from 0xC160EB.
    case 0xC160ED: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:53 TAX
    case 0xC160EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:54 STX @LOCAL02
    case 0xC160EF: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC160F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:56 LDA __BSS_START__,X
    case 0xC160F3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC160F6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC160F8: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC160FA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC160FC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC160FE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16100: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16102: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16104: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16106: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:60 JSR SET_ARGUMENT_MEMORY
    case 0xC16108: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:61 LDA @VIRTUAL02
    case 0xC1610B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:62 BEQ @UNKNOWN5
    case 0xC1610D: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC1610F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:64 LDA #0
    case 0xC16111: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A600, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:65 LDX @LOCAL02
    case 0xC16113: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:65 LDX @LOCAL02
    // Overlapping static entry reached from 0xC16111.
    case 0xC16114: cpu.execute_instruction<0x14>(0x00009D, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:66 STA __BSS_START__,X
    case 0xC16115: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:66 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC16114.
    case 0xC16116: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:67 LDY @LOCAL01
    case 0xC16118: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:68 STA __BSS_START__,Y
    case 0xC1611A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC1611D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:71 LDA #NULL
    case 0xC1611F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:71 LDA #NULL
    // Overlapping static entry reached from 0xC1611F.
    case 0xC16121: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1D.asm:73 END_C_FUNCTION
    case 0xC16122: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1D.asm:73 END_C_FUNCTION
    case 0xC16123: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_27.asm (source_named).
bool execute_text_ccs_unknown_19_27_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_27.asm:3 BEGIN_C_FUNCTION
    case 0xC1776A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC1776C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC1776D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC1776E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC1776F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1776F.
    case 0xC17771: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC17772: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC17773: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_27.asm:10 TXA
    case 0xC17774: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_27.asm:11 BEQ @ARG_IS_ZERO
    case 0xC17775: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_19_27.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC17777: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_27.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC17779: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/unknown_19_27.asm:13 BRA @ARG_IS_NONZERO
    case 0xC1777B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_27.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC1777D: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/unknown_19_27.asm:17 LDA @VIRTUAL06
    case 0xC17780: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_27.asm:18 JSL UNKNOWN_C3EE7A
    case 0xC17782: cpu.execute_instruction<0x22>(0xC3EE7A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_27.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17786: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_27.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17788: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_27.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1778A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_27.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1778C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_27.asm:20 JSR SET_WORKING_MEMORY
    case 0xC1778E: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_19_27.asm:21 LDA #NULL
    case 0xC17791: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_27.asm:21 LDA #NULL
    // Overlapping static entry reached from 0xC17791.
    case 0xC17793: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_27.asm:22 END_C_FUNCTION
    case 0xC17794: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_27.asm:22 END_C_FUNCTION
    case 0xC17795: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1C_09.asm (source_named).
bool execute_text_ccs_unknown_1c_09_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/unknown_1C_09.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC140EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/unknown_1C_09.asm:4 TXA
    case 0xC140F1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1C_09.asm:5 JSR UNKNOWN_C10EB4
    case 0xC140F2: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/text/ccs/unknown_1C_09.asm:6 LDA #NULL
    case 0xC140F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1C_09.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC140F5.
    case 0xC140F7: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/unknown_1C_09.asm:7 RTS
    case 0xC140F8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_0C.asm (source_named).
bool execute_text_ccs_unknown_1d_0c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:3 BEGIN_C_FUNCTION
    case 0xC17058: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC1705A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC1705B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC1705C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC1705D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1705D.
    case 0xC1705F: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC17060: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC17061: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:12 TXY
    case 0xC17062: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:13 STY @LOCAL02
    case 0xC17063: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:14 LDA #1
    case 0xC17065: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:14 LDA #1
    // Overlapping static entry reached from 0xC17065.
    case 0xC17067: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:15 CLC
    case 0xC17068: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:16 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17069: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC1706C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC1706E: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC17070: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC17072: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:18 TYA
    case 0xC17074: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC17075: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:20 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17077: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:21 STA CC_ARGUMENT_STORAGE,X
    case 0xC1707A: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC1707D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:23 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1707F: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:24 LDA #.LOWORD(CC_1D_0C)
    case 0xC17082: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x007058, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:24 LDA #.LOWORD(CC_1D_0C)
    // Overlapping static entry reached from 0xC17082.
    case 0xC17084: cpu.execute_instruction<0x70>(0x00004C, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:25 JMP @UNKNOWN12
    case 0xC17085: cpu.execute_instruction<0x4C>(0x00711A, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:25 JMP @UNKNOWN12
    // Overlapping static entry reached from 0xC17084.
    case 0xC17086: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:25 JMP @UNKNOWN12
    // Overlapping static entry reached from 0xC17086.
    case 0xC17087: cpu.execute_instruction<0x71>(0x0000AD, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:27 LDA CC_ARGUMENT_STORAGE
    case 0xC17088: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:27 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC17087.
    case 0xC17089: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:27 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC17089.
    case 0xC1708A: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:28 AND #$00FF
    case 0xC1708B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1708A.
    case 0xC1708C: cpu.execute_instruction<0xFF>(0xF0AA00, 4); return true;
    // src/text/ccs/unknown_1D_0C.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1708B.
    case 0xC1708D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:29 TAX
    case 0xC1708E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:30 BEQ @UNKNOWN3
    case 0xC1708F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:30 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC1708C.
    case 0xC17090: cpu.execute_instruction<0x03>(0x00008A, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:31 TXA
    case 0xC17091: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:32 BRA @UNKNOWN4
    case 0xC17092: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:34 JSR GET_WORKING_MEMORY
    case 0xC17094: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:35 LDA @VIRTUAL06
    case 0xC17097: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:37 STA @VIRTUAL02
    case 0xC17099: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:38 LDY @LOCAL02
    case 0xC1709B: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:39 BEQ @UNKNOWN5
    case 0xC1709D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:40 TYA
    case 0xC1709F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:41 BRA @UNKNOWN6
    case 0xC170A0: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:43 JSR GET_ARGUMENT_MEMORY
    case 0xC170A2: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:44 LDA @VIRTUAL06
    case 0xC170A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:46 TAY
    case 0xC170A7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:47 STY @LOCAL01
    case 0xC170A8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:48 JSR UNKNOWN_C190F1
    case 0xC170AA: cpu.execute_instruction<0x20>(0x0090F1, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:49 CMP #0
    case 0xC170AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:49 CMP #0
    // Overlapping static entry reached from 0xC170AD.
    case 0xC170AF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:50 BEQ @UNKNOWN7
    case 0xC170B0: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:51 LDX #2
    case 0xC170B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:51 LDX #2
    // Overlapping static entry reached from 0xC170B2.
    case 0xC170B4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:52 STX @LOCAL02
    case 0xC170B5: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:53 BRA @UNKNOWN8
    case 0xC170B7: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:55 LDX #0
    case 0xC170B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:55 LDX #0
    // Overlapping static entry reached from 0xC170B9.
    case 0xC170BB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:56 STX @LOCAL02
    case 0xC170BC: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:58 LDY @LOCAL01
    case 0xC170BE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:59 TYA
    case 0xC170C0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:60 DEC
    case 0xC170C1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:61 PHA
    case 0xC170C2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:62 LDA @VIRTUAL02
    case 0xC170C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:63 DEC
    case 0xC170C5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC170C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC170C6.
    case 0xC170C8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:65 JSL MULT168
    case 0xC170C9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/unknown_1D_0C.asm:66 CLC
    case 0xC170CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC170CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC170CE.
    case 0xC170D0: cpu.execute_instruction<0x99>(0x00847A, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:68 PLY
    case 0xC170D1: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:69 STY @VIRTUAL02
    case 0xC170D2: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:69 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC170D0.
    case 0xC170D3: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:70 CLC
    case 0xC170D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:71 ADC @VIRTUAL02
    case 0xC170D5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:72 TAX
    case 0xC170D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:73 LDA __BSS_START__,X
    case 0xC170D8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:74 AND #$00FF
    case 0xC170DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC170DB.
    case 0xC170DD: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC170DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC170DE.
    case 0xC170E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC170E1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/unknown_1D_0C.asm:76 CLC
    case 0xC170E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:77 ADC #item::flags
    case 0xC170E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:77 ADC #item::flags
    // Overlapping static entry reached from 0xC170E6.
    case 0xC170E8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:78 TAX
    case 0xC170E9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:79 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC170EA: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/text/ccs/unknown_1D_0C.asm:80 AND #$00FF
    case 0xC170EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC170EE.
    case 0xC170F0: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:81 AND #ITEM_FLAGS::UNKNOWN
    case 0xC170F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:81 AND #ITEM_FLAGS::UNKNOWN
    // Overlapping static entry reached from 0xC170F1.
    case 0xC170F3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:82 BEQ @UNKNOWN9
    case 0xC170F4: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:83 LDA #1
    case 0xC170F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:83 LDA #1
    // Overlapping static entry reached from 0xC170F6.
    case 0xC170F8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:84 BRA @UNKNOWN10
    case 0xC170F9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:86 LDA #0
    case 0xC170FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:86 LDA #0
    // Overlapping static entry reached from 0xC170FB.
    case 0xC170FD: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:88 LDX @LOCAL02
    case 0xC170FE: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:89 STX @VIRTUAL02
    case 0xC17100: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:90 ORA @VIRTUAL02
    case 0xC17102: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC17104: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC17106: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC17108: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC1710A: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1710C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1710E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17110: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17112: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:93 JSR SET_WORKING_MEMORY
    case 0xC17114: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:94 LDA #NULL
    case 0xC17117: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:94 LDA #NULL
    // Overlapping static entry reached from 0xC17117.
    case 0xC17119: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:96 END_C_FUNCTION
    case 0xC1711A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:96 END_C_FUNCTION
    case 0xC1711B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_10.asm (source_named).
bool execute_text_ccs_unknown_1d_10_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_10.asm:3 BEGIN_C_FUNCTION
    case 0xC1575D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC1575F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC15760: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC15761: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC15762: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15762.
    case 0xC15764: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC15765: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC15766: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:11 TXY
    case 0xC15767: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:12 STY @LOCAL01
    case 0xC15768: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:13 LDA #1
    case 0xC1576A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:13 LDA #1
    // Overlapping static entry reached from 0xC1576A.
    case 0xC1576C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:14 CLC
    case 0xC1576D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1576E: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_10.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15771: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_10.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15773: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_10.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15775: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_10.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15777: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:17 TYA
    case 0xC15779: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1577A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1577C: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1577F: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15782: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15784: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:23 LDA #.LOWORD(CC_1D_10)
    case 0xC15787: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00575D, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:23 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC15787.
    case 0xC15789: cpu.execute_instruction<0x57>(0x000080, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:24 BRA @UNKNOWN8
    case 0xC1578A: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:24 BRA @UNKNOWN8
    // Overlapping static entry reached from 0xC15789.
    case 0xC1578B: cpu.execute_instruction<0x3F>(0x97BAAD, 4); return true;
    // src/text/ccs/unknown_1D_10.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1578C: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:27 AND #$00FF
    case 0xC1578F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1578F.
    case 0xC15791: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:28 TAX
    case 0xC15792: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:29 BEQ @UNKNOWN3
    case 0xC15793: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:30 TXA
    case 0xC15795: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:31 BRA @UNKNOWN4
    case 0xC15796: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15798: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:34 LDA @VIRTUAL06
    case 0xC1579B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:36 STA @VIRTUAL02
    case 0xC1579D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:37 LDY @LOCAL01
    case 0xC1579F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:38 BEQ @UNKNOWN5
    case 0xC157A1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:39 TYA
    case 0xC157A3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:40 BRA @UNKNOWN6
    case 0xC157A4: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC157A6: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:43 LDA @VIRTUAL06
    case 0xC157A9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:45 TAX
    case 0xC157AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:46 LDA @VIRTUAL02
    case 0xC157AC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:47 JSL CHECK_ITEM_EQUIPPED
    case 0xC157AE: cpu.execute_instruction<0x22>(0xC3E9A0, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC157B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC157B2.
    case 0xC157B4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC157B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC157B7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC157B9: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC157BB: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_10.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157BD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_10.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157BF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_10.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_10.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157C3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:50 JSR SET_WORKING_MEMORY
    case 0xC157C5: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:51 LDA #NULL
    case 0xC157C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC157C8.
    case 0xC157CA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_10.asm:53 END_C_FUNCTION
    case 0xC157CB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_10.asm:53 END_C_FUNCTION
    case 0xC157CC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_11.asm (source_named).
bool execute_text_ccs_unknown_1d_11_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_11.asm:3 BEGIN_C_FUNCTION
    case 0xC157CD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC157CF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC157D0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC157D1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC157D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC157D2.
    case 0xC157D4: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC157D5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC157D6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:11 TXY
    case 0xC157D7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:12 STY @LOCAL01
    case 0xC157D8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:13 LDA #1
    case 0xC157DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:13 LDA #1
    // Overlapping static entry reached from 0xC157DA.
    case 0xC157DC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:14 CLC
    case 0xC157DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC157DE: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_11.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC157E1: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_11.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC157E3: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_11.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC157E5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_11.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC157E7: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:17 TYA
    case 0xC157E9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC157EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC157EC: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC157EF: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC157F2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC157F4: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:23 LDA #.LOWORD(CC_1D_11)
    case 0xC157F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CD, 2); else cpu.execute_instruction<0xA9>(0x0057CD, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:23 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC157F7.
    case 0xC157F9: cpu.execute_instruction<0x57>(0x000080, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:24 BRA @UNKNOWN7
    case 0xC157FA: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:24 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC157F9.
    case 0xC157FB: cpu.execute_instruction<0x3F>(0x97BAAD, 4); return true;
    // src/text/ccs/unknown_1D_11.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC157FC: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:27 AND #$00FF
    case 0xC157FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC157FF.
    case 0xC15801: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:28 TAX
    case 0xC15802: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:29 BEQ @UNKNOWN3
    case 0xC15803: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:30 TXA
    case 0xC15805: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:31 BRA @UNKNOWN4
    case 0xC15806: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15808: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:34 LDA @VIRTUAL06
    case 0xC1580B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:36 STA @VIRTUAL02
    case 0xC1580D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:37 LDY @LOCAL01
    case 0xC1580F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:38 BEQ @UNKNOWN5
    case 0xC15811: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:39 TYA
    case 0xC15813: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:40 BRA @UNKNOWN6
    case 0xC15814: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC15816: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:43 LDA @VIRTUAL06
    case 0xC15819: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:45 TAX
    case 0xC1581B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:46 LDA @VIRTUAL02
    case 0xC1581C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:47 JSL GET_CHARACTER_ITEM
    case 0xC1581E: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/text/ccs/unknown_1D_11.asm:48 TAX
    case 0xC15822: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:49 LDA @VIRTUAL02
    case 0xC15823: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:50 JSL UNKNOWN_C3EE14
    case 0xC15825: cpu.execute_instruction<0x22>(0xC3EE14, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_11.asm:51 STORE_INT1632 @VIRTUAL06
    case 0xC15829: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_11.asm:51 STORE_INT1632 @VIRTUAL06
    case 0xC1582B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_11.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1582D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_11.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1582F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_11.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15831: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_11.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15833: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:53 JSR SET_WORKING_MEMORY
    case 0xC15835: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:54 LDA #NULL
    case 0xC15838: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC15838.
    case 0xC1583A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_11.asm:56 END_C_FUNCTION
    case 0xC1583B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_11.asm:56 END_C_FUNCTION
    case 0xC1583C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_12.asm (source_named).
bool execute_text_ccs_unknown_1d_12_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_12.asm:3 BEGIN_C_FUNCTION
    case 0xC158A5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC158A7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC158A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC158A9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC158AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC158AA.
    case 0xC158AC: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC158AD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC158AE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:10 TXY
    case 0xC158AF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:11 STY @LOCAL00
    case 0xC158B0: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:12 LDA #1
    case 0xC158B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:12 LDA #1
    // Overlapping static entry reached from 0xC158B2.
    case 0xC158B4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:13 CLC
    case 0xC158B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC158B6: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_12.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC158B9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_12.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC158BB: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_12.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC158BD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_12.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC158BF: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:16 TYA
    case 0xC158C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC158C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC158C4: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC158C7: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC158CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC158CC: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:22 LDA #.LOWORD(CC_1D_12)
    case 0xC158CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x0058A5, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:22 LDA #.LOWORD(CC_1D_12)
    // Overlapping static entry reached from 0xC158CF.
    case 0xC158D1: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:23 BRA @UNKNOWN7
    case 0xC158D2: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC158D4: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:26 AND #$00FF
    case 0xC158D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC158D7.
    case 0xC158D9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:27 TAX
    case 0xC158DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:28 BEQ @UNKNOWN3
    case 0xC158DB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:29 TXA
    case 0xC158DD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:30 BRA @UNKNOWN4
    case 0xC158DE: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:32 JSR GET_WORKING_MEMORY
    case 0xC158E0: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:33 LDA @VIRTUAL06
    case 0xC158E3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:35 STA @VIRTUAL02
    case 0xC158E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:36 LDY @LOCAL00
    case 0xC158E7: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:37 BEQ @UNKNOWN5
    case 0xC158E9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:38 TYA
    case 0xC158EB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:39 BRA @UNKNOWN6
    case 0xC158EC: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:41 JSR GET_ARGUMENT_MEMORY
    case 0xC158EE: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:42 LDA @VIRTUAL06
    case 0xC158F1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:44 TAX
    case 0xC158F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:45 LDA @VIRTUAL02
    case 0xC158F4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:46 JSR ESCARGO_EXPRESS_MOVE
    case 0xC158F6: cpu.execute_instruction<0x20>(0x009183, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:47 LDA #NULL
    case 0xC158F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:47 LDA #NULL
    // Overlapping static entry reached from 0xC158F9.
    case 0xC158FB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_12.asm:49 END_C_FUNCTION
    case 0xC158FC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_12.asm:49 END_C_FUNCTION
    case 0xC158FD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_13.asm (source_named).
bool execute_text_ccs_unknown_1d_13_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_13.asm:3 BEGIN_C_FUNCTION
    case 0xC158FE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15900: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15901: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15902: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15903: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC15903.
    case 0xC15905: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15906: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15907: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:13 LDA #1
    case 0xC15908: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15905.
    case 0xC15909: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15908.
    case 0xC1590A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:14 CLC
    case 0xC1590B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1590C: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1590F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15911: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15913: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15915: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:17 TXA
    case 0xC15917: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15918: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1591A: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1591D: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15920: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15922: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:23 LDA #.LOWORD(CC_1D_13)
    case 0xC15925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0058FE, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:23 LDA #.LOWORD(CC_1D_13)
    // Overlapping static entry reached from 0xC15925.
    case 0xC15927: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:24 BRA @UNKNOWN6
    case 0xC15928: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1592A: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:27 AND #$00FF
    case 0xC1592D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1592D.
    case 0xC1592F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:28 STA @LOCAL03
    case 0xC15930: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:29 CPX #0
    case 0xC15932: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:29 CPX #0
    // Overlapping static entry reached from 0xC15932.
    case 0xC15934: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:30 BEQ @UNKNOWN3
    case 0xC15935: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:31 STX @LOCAL02
    case 0xC15937: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:32 BRA @UNKNOWN4
    case 0xC15939: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:34 JSR GET_ARGUMENT_MEMORY
    case 0xC1593B: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:35 LDA @VIRTUAL06
    case 0xC1593E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:36 TAX
    case 0xC15940: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:37 STX @LOCAL02
    case 0xC15941: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:39 LDA @LOCAL03
    case 0xC15943: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:40 BNE @UNKNOWN5
    case 0xC15945: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:41 JSR GET_WORKING_MEMORY
    case 0xC15947: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:42 LDA @VIRTUAL06
    case 0xC1594A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:44 LDX @LOCAL02
    case 0xC1594C: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:45 JSR UNKNOWN_C191F8
    case 0xC1594E: cpu.execute_instruction<0x20>(0x0091F8, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:46 TAX
    case 0xC15951: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:47 STX @LOCAL01
    case 0xC15952: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:48 TXA
    case 0xC15954: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:49 JSL UNKNOWN_C22351
    case 0xC15955: cpu.execute_instruction<0x22>(0xC22351, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC15959: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC1595B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1595D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1595F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15961: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15963: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:52 JSR SET_ARGUMENT_MEMORY
    case 0xC15965: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:53 LDX @LOCAL01
    case 0xC15968: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:54 TXA
    case 0xC1596A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC1596B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC1596D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1596F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15971: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15973: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15975: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:57 JSR SET_WORKING_MEMORY
    case 0xC15977: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:58 LDA #NULL
    case 0xC1597A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC1597A.
    case 0xC1597C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_13.asm:60 END_C_FUNCTION
    case 0xC1597D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_13.asm:60 END_C_FUNCTION
    case 0xC1597E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_23.asm (source_named).
bool execute_text_ccs_unknown_1d_23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_23.asm:3 BEGIN_C_FUNCTION
    case 0xC17708: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1770A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1770B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1770C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1770D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1770D.
    case 0xC1770F: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC17710: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC17711: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_23.asm:10 TXA
    case 0xC17712: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_23.asm:11 BEQ @UNKNOWN0
    case 0xC17713: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_23.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC17715: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC17717: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:13 BRA @UNKNOWN1
    case 0xC17719: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC1771B: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:17 LDA @VIRTUAL06
    case 0xC1771E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17720: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC17720.
    case 0xC17722: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17723: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/unknown_1D_23.asm:19 CLC
    case 0xC17727: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_23.asm:20 ADC #item::type
    case 0xC17728: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:20 ADC #item::type
    // Overlapping static entry reached from 0xC17728.
    case 0xC1772A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:21 TAX
    case 0xC1772B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_23.asm:22 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1772C: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/text/ccs/unknown_1D_23.asm:23 AND #$00FF
    case 0xC17730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC17730.
    case 0xC17732: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:24 AND #$000C
    case 0xC17733: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:24 AND #$000C
    // Overlapping static entry reached from 0xC17733.
    case 0xC17735: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:25 BEQ @UNKNOWN2
    case 0xC17736: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:26 CMP #$04
    case 0xC17738: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:26 CMP #$04
    // Overlapping static entry reached from 0xC17738.
    case 0xC1773A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:27 BEQ @UNKNOWN3
    case 0xC1773B: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:28 CMP #$08
    case 0xC1773D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC1773D.
    case 0xC1773F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:29 BEQ @UNKNOWN3
    case 0xC17740: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:30 CMP #$0C
    case 0xC17742: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:30 CMP #$0C
    // Overlapping static entry reached from 0xC17742.
    case 0xC17744: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:31 BEQ @UNKNOWN3
    case 0xC17745: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:32 BRA @UNKNOWN4
    case 0xC17747: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:34 LDA #1
    case 0xC17749: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:34 LDA #1
    // Overlapping static entry reached from 0xC17749.
    case 0xC1774B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:35 BRA @UNKNOWN5
    case 0xC1774C: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:37 LDA #2
    case 0xC1774E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:37 LDA #2
    // Overlapping static entry reached from 0xC1774E.
    case 0xC17750: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:38 BRA @UNKNOWN5
    case 0xC17751: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:40 LDA #0
    case 0xC17753: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:40 LDA #0
    // Overlapping static entry reached from 0xC17753.
    case 0xC17755: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_23.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC17756: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC17758: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1775A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1775C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1775E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17760: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:44 JSR SET_WORKING_MEMORY
    case 0xC17762: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:45 LDA #NULL
    case 0xC17765: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC17765.
    case 0xC17767: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_23.asm:46 END_C_FUNCTION
    case 0xC17768: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_23.asm:46 END_C_FUNCTION
    case 0xC17769: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_24.asm (source_named).
bool execute_text_ccs_unknown_1d_24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_24.asm:3 BEGIN_C_FUNCTION
    case 0xC17274: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC17276: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC17277: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC17278: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC17279: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17279.
    case 0xC1727B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC1727C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC1727D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_24.asm:12 STX @LOCAL02
    case 0xC1727E: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC1727B.
    case 0xC1727F: cpu.execute_instruction<0x14>(0x0000A0, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC17280: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B9, 2); else cpu.execute_instruction<0xA0>(0x0098B9, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC1727F.
    case 0xC17281: cpu.execute_instruction<0xB9>(0x008498, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC17280.
    case 0xC17282: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_24.asm:14 STY @LOCAL01
    case 0xC17283: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:14 STY @LOCAL01
    // Overlapping static entry reached from 0xC17281.
    case 0xC17284: cpu.execute_instruction<0x12>(0x0000B9, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/unknown_1D_24.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17285: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/unknown_1D_24.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC17284.
    case 0xC17286: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/unknown_1D_24.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17288: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/unknown_1D_24.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1728A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1728D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_24.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1728F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_24.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17291: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17293: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17295: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:17 JSR SET_WORKING_MEMORY
    case 0xC17297: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:18 LDX @LOCAL02
    case 0xC1729A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:19 CPX #2
    case 0xC1729C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:19 CPX #2
    // Overlapping static entry reached from 0xC1729C.
    case 0xC1729E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:20 BNE @UNKNOWN0
    case 0xC1729F: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC172A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC172A1.
    case 0xC172A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC172A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC172A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC172A6.
    case 0xC172A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC172A9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:22 LDY @LOCAL01
    case 0xC172AB: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/ccs/unknown_1D_24.asm:23 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC172AD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/ccs/unknown_1D_24.asm:23 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC172AF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:23 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC172B2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/ccs/unknown_1D_24.asm:23 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC172B4: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:25 LDA #NULL
    case 0xC172B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:25 LDA #NULL
    // Overlapping static entry reached from 0xC172B7.
    case 0xC172B9: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_24.asm:26 END_C_FUNCTION
    case 0xC172BA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_24.asm:26 END_C_FUNCTION
    case 0xC172BB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_40.asm (source_named).
bool execute_text_ccs_unknown_1f_40_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/unknown_1F_40.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC172BC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:4 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172BE: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:5 BNE @UNKNOWN0
    case 0xC172C1: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:6 TXA
    case 0xC172C3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_40.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC172C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:8 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172C6: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:9 STA CC_ARGUMENT_STORAGE,X
    case 0xC172C9: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC172CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:11 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172CE: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:12 LDA #.LOWORD(CC_1F_40)
    case 0xC172D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BC, 2); else cpu.execute_instruction<0xA9>(0x0072BC, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:12 LDA #.LOWORD(CC_1F_40)
    // Overlapping static entry reached from 0xC172D1.
    case 0xC172D3: cpu.execute_instruction<0x72>(0x000080, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:13 BRA @UNKNOWN1
    case 0xC172D4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:13 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC172D3.
    case 0xC172D5: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    case 0xC172D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC172D5.
    case 0xC172D7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC172D6.
    case 0xC172D8: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:17 RTS
    case 0xC172D9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_60.asm (source_named).
bool execute_text_ccs_unknown_1f_60_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/unknown_1F_60.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC15494: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/unknown_1F_60.asm:4 TXA
    case 0xC15496: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_60.asm:5 JSR UNKNOWN_C100FE
    case 0xC15497: cpu.execute_instruction<0x20>(0x0000FE, 3); return true;
    // src/text/ccs/unknown_1F_60.asm:6 LDA #NULL
    case 0xC1549A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_60.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC1549A.
    case 0xC1549C: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/unknown_1F_60.asm:7 RTS
    case 0xC1549D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_E7.asm (source_named).
bool execute_text_ccs_unknown_1f_e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:3 BEGIN_C_FUNCTION
    case 0xC16BF2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16BF4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16BF5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16BF6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16BF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16BF7.
    case 0xC16BF9: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16BFA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16BFB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E7.asm:10 TXA
    case 0xC16BFC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E7.asm:11 STA @LOCAL00
    case 0xC16BFD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BFF: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:13 BNE @UNKNOWN0
    case 0xC16C02: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:14 LDA @LOCAL00
    case 0xC16C04: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16C06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C08: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16C0B: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16C0E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C10: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:20 LDA #.LOWORD(CC_1F_E7)
    case 0xC16C13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F2, 2); else cpu.execute_instruction<0xA9>(0x006BF2, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:20 LDA #.LOWORD(CC_1F_E7)
    // Overlapping static entry reached from 0xC16C13.
    case 0xC16C15: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E7.asm:21 BRA @UNKNOWN1
    case 0xC16C16: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16C18: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:24 LDY #8
    case 0xC16C1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:25 LDA @LOCAL00
    case 0xC16C1C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16C1A.
    case 0xC16C1D: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:26 JSL ASL16_ENTRY2
    case 0xC16C1E: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/unknown_1F_E7.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16C1D.
    case 0xC16C20: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:27 STA @VIRTUAL02
    case 0xC16C22: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16C24: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:29 AND #$00FF
    case 0xC16C27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16C27.
    case 0xC16C29: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:30 ORA @VIRTUAL02
    case 0xC16C2A: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:31 JSL UNKNOWN_C46579
    case 0xC16C2C: cpu.execute_instruction<0x22>(0xC46579, 4); return true;
    // src/text/ccs/unknown_1F_E7.asm:32 LDA #NULL
    case 0xC16C30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16C30.
    case 0xC16C32: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:34 END_C_FUNCTION
    case 0xC16C33: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:34 END_C_FUNCTION
    case 0xC16C34: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_E9.asm (source_named).
bool execute_text_ccs_unknown_1f_e9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:3 BEGIN_C_FUNCTION
    case 0xC16C40: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16C42: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16C43: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16C44: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16C45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16C45.
    case 0xC16C47: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16C48: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16C49: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E9.asm:10 TXA
    case 0xC16C4A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E9.asm:11 STA @LOCAL00
    case 0xC16C4B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C4D: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:13 BNE @UNKNOWN0
    case 0xC16C50: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:14 LDA @LOCAL00
    case 0xC16C52: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16C54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C56: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16C59: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16C5C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C5E: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:20 LDA #.LOWORD(CC_1F_E9)
    case 0xC16C61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x006C40, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:20 LDA #.LOWORD(CC_1F_E9)
    // Overlapping static entry reached from 0xC16C61.
    case 0xC16C63: cpu.execute_instruction<0x6C>(0x001B80, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:21 BRA @UNKNOWN1
    case 0xC16C64: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16C66: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:24 LDY #8
    case 0xC16C68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:25 LDA @LOCAL00
    case 0xC16C6A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16C68.
    case 0xC16C6B: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:26 JSL ASL16_ENTRY2
    case 0xC16C6C: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/unknown_1F_E9.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16C6B.
    case 0xC16C6E: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:27 STA @VIRTUAL02
    case 0xC16C70: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16C72: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:29 AND #$00FF
    case 0xC16C75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16C75.
    case 0xC16C77: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:30 ORA @VIRTUAL02
    case 0xC16C78: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:31 JSL UNKNOWN_C465FB
    case 0xC16C7A: cpu.execute_instruction<0x22>(0xC465FB, 4); return true;
    // src/text/ccs/unknown_1F_E9.asm:31 JSL UNKNOWN_C465FB
    // Overlapping static entry reached from 0xC16CD1.
    case 0xC16C7C: cpu.execute_instruction<0x65>(0x0000C4, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:32 LDA #NULL
    case 0xC16C7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16C7E.
    case 0xC16C80: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:34 END_C_FUNCTION
    case 0xC16C81: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:34 END_C_FUNCTION
    case 0xC16C82: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_EA.asm (source_named).
bool execute_text_ccs_unknown_1f_ea_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:3 BEGIN_C_FUNCTION
    case 0xC16C83: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C85: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C86: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C87: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16C88.
    case 0xC16C8A: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C8B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C8C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EA.asm:10 TXA
    case 0xC16C8D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EA.asm:11 STA @LOCAL00
    case 0xC16C8E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C90: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:13 BNE @UNKNOWN0
    case 0xC16C93: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:14 LDA @LOCAL00
    case 0xC16C95: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16C97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C99: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16C9C: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16C9F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CA1: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:20 LDA #.LOWORD(CC_1F_EA)
    case 0xC16CA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x006C83, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:20 LDA #.LOWORD(CC_1F_EA)
    // Overlapping static entry reached from 0xC16CA4.
    case 0xC16CA6: cpu.execute_instruction<0x6C>(0x001B80, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:21 BRA @UNKNOWN1
    case 0xC16CA7: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16CA9: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:24 LDY #8
    case 0xC16CAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:25 LDA @LOCAL00
    case 0xC16CAD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16CAB.
    case 0xC16CAE: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:26 JSL ASL16_ENTRY2
    case 0xC16CAF: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/unknown_1F_EA.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16CAE.
    case 0xC16CB1: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:27 STA @VIRTUAL02
    case 0xC16CB3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16CB5: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:29 AND #$00FF
    case 0xC16CB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16CB8.
    case 0xC16CBA: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:30 ORA @VIRTUAL02
    case 0xC16CBB: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:31 JSL UNKNOWN_C46616
    case 0xC16CBD: cpu.execute_instruction<0x22>(0xC46616, 4); return true;
    // src/text/ccs/unknown_1F_EA.asm:32 LDA #NULL
    case 0xC16CC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16CC1.
    case 0xC16CC3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:34 END_C_FUNCTION
    case 0xC16CC4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:34 END_C_FUNCTION
    case 0xC16CC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_EF.asm (source_named).
bool execute_text_ccs_unknown_1f_ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:3 BEGIN_C_FUNCTION
    case 0xC16DA5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC16DA7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC16DA8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC16DA9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC16DAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16DAA.
    case 0xC16DAC: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC16DAD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC16DAE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EF.asm:10 TXA
    case 0xC16DAF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EF.asm:11 STA @LOCAL00
    case 0xC16DB0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DB2: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:13 BNE @UNKNOWN0
    case 0xC16DB5: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:14 LDA @LOCAL00
    case 0xC16DB7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16DB9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DBB: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16DBE: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16DC1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DC3: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:20 LDA #.LOWORD(CC_1F_EF)
    case 0xC16DC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x006DA5, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:20 LDA #.LOWORD(CC_1F_EF)
    // Overlapping static entry reached from 0xC16DC6.
    case 0xC16DC8: cpu.execute_instruction<0x6D>(0x001B80, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:21 BRA @UNKNOWN1
    case 0xC16DC9: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16DCB: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:24 LDY #8
    case 0xC16DCD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:25 LDA @LOCAL00
    case 0xC16DCF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16DCD.
    case 0xC16DD0: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:26 JSL ASL16_ENTRY2
    case 0xC16DD1: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/unknown_1F_EF.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16DD0.
    case 0xC16DD3: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:27 STA @VIRTUAL02
    case 0xC16DD5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16DD7: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:29 AND #$00FF
    case 0xC16DDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16DDA.
    case 0xC16DDC: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:30 ORA @VIRTUAL02
    case 0xC16DDD: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:31 JSL UNKNOWN_C466A8
    case 0xC16DDF: cpu.execute_instruction<0x22>(0xC466A8, 4); return true;
    // src/text/ccs/unknown_1F_EF.asm:32 LDA #NULL
    case 0xC16DE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16DE3.
    case 0xC16DE5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:34 END_C_FUNCTION
    case 0xC16DE6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:34 END_C_FUNCTION
    case 0xC16DE7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/wallet_decrease.asm (source_named).
bool execute_text_ccs_wallet_decrease_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/wallet_decrease.asm:3 BEGIN_C_FUNCTION
    case 0xC1494A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC1494C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC1494D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC1494E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC1494F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1494F.
    case 0xC14951: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14952: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14953: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/wallet_decrease.asm:11 TXA
    case 0xC14954: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/wallet_decrease.asm:12 STA @LOCAL01
    case 0xC14955: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/wallet_decrease.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14957: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/wallet_decrease.asm:14 BNE @UNKNOWN0
    case 0xC1495A: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/wallet_decrease.asm:15 LDA @LOCAL01
    case 0xC1495C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/wallet_decrease.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1495E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/wallet_decrease.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14960: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/wallet_decrease.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14963: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/wallet_decrease.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC14966: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/wallet_decrease.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14968: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/wallet_decrease.asm:21 LDA #.LOWORD(CC_1D_09)
    case 0xC1496B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x00494A, 3); return true;
    // src/text/ccs/wallet_decrease.asm:21 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC1496B.
    case 0xC1496D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x004480, 3); return true;
    // src/text/ccs/wallet_decrease.asm:22 BRA @UNKNOWN4
    case 0xC1496E: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/wallet_decrease.asm:22 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC1496D.
    case 0xC1496F: cpu.execute_instruction<0x44>(0x0010E2, 3); return true;
    // src/text/ccs/wallet_decrease.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC14970: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/wallet_decrease.asm:25 LDY #8
    case 0xC14972: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/wallet_decrease.asm:26 LDA @LOCAL01
    case 0xC14974: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/wallet_decrease.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC14972.
    case 0xC14975: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/wallet_decrease.asm:27 JSL ASL16_ENTRY2
    case 0xC14976: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/wallet_decrease.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC14975.
    case 0xC14977: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/text/ccs/wallet_decrease.asm:28 STA @VIRTUAL02
    case 0xC1497A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/wallet_decrease.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC1497C: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/wallet_decrease.asm:30 AND #$00FF
    case 0xC1497F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/wallet_decrease.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1497F.
    case 0xC14981: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/wallet_decrease.asm:31 ORA @VIRTUAL02
    case 0xC14982: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/wallet_decrease.asm:32 BEQ @UNKNOWN1
    case 0xC14984: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14986: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14988: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/wallet_decrease.asm:34 BRA @UNKNOWN2
    case 0xC1498A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/wallet_decrease.asm:36 JSR GET_ARGUMENT_MEMORY
    case 0xC1498C: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1498F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14991: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14993: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14995: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/wallet_decrease.asm:39 JSL DECREASE_WALLET_BALANCE
    case 0xC14997: cpu.execute_instruction<0x22>(0xC22272, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1499B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC1499B.
    case 0xC1499D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1499E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC149A0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC149A2: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC149A4: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149AA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/wallet_decrease.asm:42 JSR SET_WORKING_MEMORY
    case 0xC149AE: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/wallet_decrease.asm:43 LDA #NULL
    case 0xC149B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/wallet_decrease.asm:43 LDA #NULL
    // Overlapping static entry reached from 0xC149B1.
    case 0xC149B3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/wallet_decrease.asm:45 END_C_FUNCTION
    case 0xC149B4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/wallet_decrease.asm:45 END_C_FUNCTION
    case 0xC149B5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
