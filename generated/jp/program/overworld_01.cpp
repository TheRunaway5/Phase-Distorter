// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/overworld/actionscript/animated_background_callback.asm (source_named).
bool execute_overworld_actionscript_animated_background_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/animated_background_callback.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46224: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/animated_background_callback.asm:5 JSL UNKNOWN_C2DB3F
    case 0xC46226: cpu.execute_instruction<0x22>(0xC2DAB4, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/animated_background_callback.asm:6 END_C_FUNCTION
    case 0xC4622A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/centre_screen_on_entity_callback.asm (source_named).
bool execute_overworld_actionscript_centre_screen_on_entity_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46275: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC46277: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:6 ASL
    case 0xC4627A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:7 TAY
    case 0xC4627B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:8 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC4627C: cpu.execute_instruction<0xB9>(0x000BC0, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:9 TAX
    case 0xC4627F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:10 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC46280: cpu.execute_instruction<0xB9>(0x000B84, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:11 JSL CENTER_SCREEN
    case 0xC46283: cpu.execute_instruction<0x22>(0xC04295, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback.asm:12 END_C_FUNCTION
    case 0xC46287: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm (source_named).
bool execute_overworld_actionscript_centre_screen_on_entity_callback_offset_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46288: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4628A: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:6 ASL
    case 0xC4628D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:7 TAY
    case 0xC4628E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:8 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC4628F: cpu.execute_instruction<0xB9>(0x000BC0, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:9 CLC
    case 0xC46292: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:10 ADC ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC46293: cpu.execute_instruction<0x79>(0x000E90, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:11 TAX
    case 0xC46296: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:12 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC46297: cpu.execute_instruction<0xB9>(0x000B84, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:13 CLC
    case 0xC4629A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:14 ADC ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC4629B: cpu.execute_instruction<0x79>(0x000E54, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:14 ADC ENTITY_SCRIPT_VAR0_TABLE,Y
    // Overlapping static entry reached from 0xC462EE.
    case 0xC4629D: cpu.execute_instruction<0x0E>(0x009522, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:15 JSL CENTER_SCREEN
    case 0xC4629E: cpu.execute_instruction<0x22>(0xC04295, 4); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:15 JSL CENTER_SCREEN
    // Overlapping static entry reached from 0xC4629D.
    case 0xC462A0: cpu.execute_instruction<0x42>(0x0000C0, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:16 END_C_FUNCTION
    case 0xC462A2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/choose_random.asm (source_named).
bool execute_overworld_actionscript_choose_random_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/choose_random.asm:3 LDA [$80],Y
    case 0xC09F61: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/choose_random.asm:4 AND #$00FF
    case 0xC09F63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/choose_random.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09F63.
    case 0xC09F65: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/actionscript/choose_random.asm:5 STA $90
    case 0xC09F66: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/choose_random.asm:6 INY
    case 0xC09F68: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:7 STY $94
    case 0xC09F69: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/choose_random.asm:8 TAY
    case 0xC09F6B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:9 JSL RAND
    case 0xC09F6C: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/overworld/actionscript/choose_random.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC09F70: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/choose_random.asm:11 JSL DIVISION8S_DIVISOR_POSITIVE
    case 0xC09F72: cpu.execute_instruction<0x22>(0xC0910E, 4); return true;
    // src/overworld/actionscript/choose_random.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC09F76: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/choose_random.asm:13 TYA
    case 0xC09F78: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:14 ASL
    case 0xC09F79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:15 ADC $94
    case 0xC09F7A: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/choose_random.asm:16 TAY
    case 0xC09F7C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:17 LDA $90
    case 0xC09F7D: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/choose_random.asm:18 ASL
    case 0xC09F7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:19 ADC $94
    case 0xC09F80: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/choose_random.asm:20 STA $94
    case 0xC09F82: cpu.execute_instruction<0x85>(0x000094, 2); return true;
    // src/overworld/actionscript/choose_random.asm:21 LDA [$80],Y
    case 0xC09F84: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/choose_random.asm:22 RTL
    case 0xC09F86: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/clear_current_entity_collision.asm (source_named).
bool execute_overworld_actionscript_clear_current_entity_collision_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_current_entity_collision.asm:3 LDX $88
    case 0xC0A6B9: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/clear_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0A6BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0A6BB.
    case 0xC0A6BD: cpu.execute_instruction<0xFF>(0x2C9C9D, 4); return true;
    // src/overworld/actionscript/clear_current_entity_collision.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A6BE: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision.asm:6 RTL
    case 0xC0A6C1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/clear_current_entity_collision2.asm (source_named).
bool execute_overworld_actionscript_clear_current_entity_collision2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0A817: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0A817.
    case 0xC0A819: cpu.execute_instruction<0xFF>(0x9D88A6, 4); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:4 LDX $88
    case 0xC0A81A: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A81C: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    // Overlapping static entry reached from 0xC0A819.
    case 0xC0A81D: cpu.execute_instruction<0x9C>(0x006B2C, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:6 RTL
    case 0xC0A81F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/clear_entity_draw_sorting_table.asm (source_named).
bool execute_overworld_actionscript_clear_entity_draw_sorting_table_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:5 STZ ENTITY_DRAW_SORTING
    case 0xC00000: cpu.execute_instruction<0x9C>(0x002C0C, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:6 LDX #.LOWORD(ENTITY_DRAW_SORTING)
    case 0xC00003: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x002C0C, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:6 LDX #.LOWORD(ENTITY_DRAW_SORTING)
    // Overlapping static entry reached from 0xC00003.
    case 0xC00005: cpu.execute_instruction<0x2C>(0x000DA0, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:7 LDY #.LOWORD(ENTITY_DRAW_SORTING)+1
    case 0xC00006: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x002C0D, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:7 LDY #.LOWORD(ENTITY_DRAW_SORTING)+1
    // Overlapping static entry reached from 0xC00006.
    case 0xC00008: cpu.execute_instruction<0x2C>(0x003BA9, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:8 LDA #$003B
    case 0xC00009: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00003B, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:8 LDA #$003B
    // Overlapping static entry reached from 0xC00009.
    case 0xC0000B: cpu.execute_instruction<0x00>(0x000054, 2); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:9 MVN #$7E,#$7E
    case 0xC0000C: cpu.execute_instruction<0x54>(0x007E7E, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:10 LDA #.LOWORD(ENTITY_DRAW_SORTING)
    case 0xC0000F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x002C0C, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:10 LDA #.LOWORD(ENTITY_DRAW_SORTING)
    // Overlapping static entry reached from 0xC0000F.
    case 0xC00011: cpu.execute_instruction<0x2C>(0x00C260, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:11 RTS
    case 0xC00012: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/clear_sprite_tick_callback.asm (source_named).
bool execute_overworld_actionscript_clear_sprite_tick_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:4 LDA #.LOWORD(MOVEMENT_NOP)
    case 0xC09D80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00941A, 3); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:4 LDA #.LOWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09D80.
    case 0xC09D82: cpu.execute_instruction<0x94>(0x00009D, 2); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC09D83: cpu.execute_instruction<0x9D>(0x001070, 3); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    // Overlapping static entry reached from 0xC09D82.
    case 0xC09D84: cpu.execute_instruction<0x70>(0x000010, 2); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    case 0xC09D86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09D86.
    case 0xC09D88: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:7 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09D89: cpu.execute_instruction<0x9D>(0x0010AC, 3); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:8 RTS
    case 0xC09D8C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/disable_current_entity_collision.asm (source_named).
bool execute_overworld_actionscript_disable_current_entity_collision_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/disable_current_entity_collision.asm:3 LDX $88
    case 0xC0A6B0: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/disable_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_DISABLED
    case 0xC0A6B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/disable_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0A6B2.
    case 0xC0A6B4: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/actionscript/disable_current_entity_collision.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A6B5: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/overworld/actionscript/disable_current_entity_collision.asm:6 RTL
    case 0xC0A6B8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/disable_current_entity_collision2.asm (source_named).
bool execute_overworld_actionscript_disable_current_entity_collision2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/disable_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_DISABLED
    case 0xC0A80E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/disable_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0A80E.
    case 0xC0A810: cpu.execute_instruction<0x80>(0x0000A6, 2); return true;
    // src/overworld/actionscript/disable_current_entity_collision2.asm:4 LDX $88
    case 0xC0A811: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/disable_current_entity_collision2.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A813: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/overworld/actionscript/disable_current_entity_collision2.asm:6 RTL
    case 0xC0A816: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/fade_in.asm (source_named).
bool execute_overworld_actionscript_fade_in_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/fade_in.asm:3 LDA [$80],Y
    case 0xC09F8D: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/fade_in.asm:4 INY
    case 0xC09F8F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:5 INY
    case 0xC09F90: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:6 STY $94
    case 0xC09F91: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_in.asm:7 XBA
    case 0xC09F93: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:8 TAX
    case 0xC09F94: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:9 XBA
    case 0xC09F95: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:10 JMP f:FADE_IN
    case 0xC09F96: cpu.execute_instruction<0x5C>(0xC0885E, 4); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/fade_out.asm (source_named).
bool execute_overworld_actionscript_fade_out_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/fade_out.asm:3 LDA [$80],Y
    case 0xC09F9A: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/fade_out.asm:4 INY
    case 0xC09F9C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:5 INY
    case 0xC09F9D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:6 STY $94
    case 0xC09F9E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_out.asm:7 XBA
    case 0xC09FA0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:8 TAX
    case 0xC09FA1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:9 XBA
    case 0xC09FA2: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:10 JMP f:FADE_OUT
    case 0xC09FA3: cpu.execute_instruction<0x5C>(0xC0886C, 4); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/fade_out_with_mosaic.asm (source_named).
bool execute_overworld_actionscript_fade_out_with_mosaic_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/fade_out_with_mosaic.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A9E6: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:4 PHA
    case 0xC0A9EA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:5 STY $94
    case 0xC0A9EB: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A9ED: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:7 PHA
    case 0xC0A9F1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:8 STY $94
    case 0xC0A9F2: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0A9F4: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:10 STY $94
    case 0xC0A9F8: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:11 TAY
    case 0xC0A9FA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:12 PLX
    case 0xC0A9FB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:13 PLA
    case 0xC0A9FC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:14 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0A9FD: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:15 RTL
    case 0xC0AA01: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/get_direction_rotated_clockwise.asm (source_named).
bool execute_overworld_actionscript_get_direction_rotated_clockwise_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C664: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C666: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C667: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C668: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C669: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C669.
    case 0xC0C66B: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C66C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C66D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:9 STA @LOCAL00
    case 0xC0C66E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC0C66B.
    case 0xC0C66F: cpu.execute_instruction<0x0E>(0x0038AD, 3); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0C670: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C66F.
    case 0xC0C672: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:11 ASL
    case 0xC0C673: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:12 TAX
    case 0xC0C674: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:13 LDA @LOCAL00
    case 0xC0C675: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:14 CLC
    case 0xC0C677: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:15 ADC ENTITY_DIRECTIONS,X
    case 0xC0C678: cpu.execute_instruction<0x7D>(0x002EF4, 3); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:16 AND #$0007
    case 0xC0C67B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:16 AND #$0007
    // Overlapping static entry reached from 0xC0C67B.
    case 0xC0C67D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:17 END_C_FUNCTION
    case 0xC0C67E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:17 END_C_FUNCTION
    case 0xC0C67F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm (source_named).
bool execute_overworld_actionscript_get_direction_turned_randomly_left_or_right_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C680: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:4 JSL RAND
    case 0xC0C682: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:5 AND #$0001
    case 0xC0C686: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:5 AND #$0001
    // Overlapping static entry reached from 0xC0C686.
    case 0xC0C688: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:6 BEQ @UNKNOWN0
    case 0xC0C689: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:7 LDA #$0001
    case 0xC0C68B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:7 LDA #$0001
    // Overlapping static entry reached from 0xC0C68B.
    case 0xC0C68D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:8 BRA @UNKNOWN1
    case 0xC0C68E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:10 LDA #$FFFF
    case 0xC0C690: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:10 LDA #$FFFF
    // Overlapping static entry reached from 0xC0C690.
    case 0xC0C692: cpu.execute_instruction<0xFF>(0xC66422, 4); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:12 JSL GET_DIRECTION_ROTATED_CLOCKWISE
    case 0xC0C693: cpu.execute_instruction<0x22>(0xC0C664, 4); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:12 JSL GET_DIRECTION_ROTATED_CLOCKWISE
    // Overlapping static entry reached from 0xC0C692.
    case 0xC0C696: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00006B, 2); else cpu.execute_instruction<0xC0>(0x00C26B, 3); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:13 RTL
    case 0xC0C697: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/get_position_of_party_member.asm (source_named).
bool execute_overworld_actionscript_get_position_of_party_member_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/get_position_of_party_member.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A922: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/overworld/actionscript/get_position_of_party_member.asm:4 STY $94
    case 0xC0A926: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/get_position_of_party_member.asm:5 JSL GET_POSITION_OF_PARTY_MEMBER
    case 0xC0A928: cpu.execute_instruction<0x22>(0xC44965, 4); return true;
    // src/overworld/actionscript/get_position_of_party_member.asm:6 RTL
    case 0xC0A92C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/jump_to_loaded_movement_pointer.asm (source_named).
bool execute_overworld_actionscript_jump_to_loaded_movement_pointer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/jump_to_loaded_movement_pointer.asm:3 JML (.LOWORD(CURRENT_ENTITY_TICK_CALLBACK))
    case 0xC09D7D: cpu.execute_instruction<0xDC>(0x000A50, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/make_party_look_at_active_entity.asm (source_named).
bool execute_overworld_actionscript_make_party_look_at_active_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4617C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC4617E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC4617F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC46180: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC46180.
    case 0xC46182: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC46183: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC46184: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:11 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46182.
    case 0xC46186: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:12 STA @LOCAL04
    case 0xC46187: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:13 LDA FRAME_COUNTER
    case 0xC46189: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:14 AND #$00FF
    case 0xC4618C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC4618C.
    case 0xC4618E: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:15 AND #$0001
    case 0xC4618F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:15 AND #$0001
    // Overlapping static entry reached from 0xC4618F.
    case 0xC46191: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:16 BNEL @UNKNOWN6
    case 0xC46192: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:16 BNEL @UNKNOWN6
    case 0xC46194: cpu.execute_instruction<0x4C>(0x006222, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:17 STZ @LOCAL03
    case 0xC46197: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:18 BRA @UNKNOWN5
    case 0xC46199: cpu.execute_instruction<0x80>(0x000078, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:21 LDA @LOCAL03
    case 0xC4619B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:22 CLC
    case 0xC4619D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC4619E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4619E.
    case 0xC461A0: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:24 TAX
    case 0xC461A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:25 LDA a:game_state::unknown96,X
    case 0xC461A2: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:30 AND #$00FF
    case 0xC461A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC461A5.
    case 0xC461A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:31 STA @VIRTUAL02
    case 0xC461A8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:32 LDA #16
    case 0xC461AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:32 LDA #16
    // Overlapping static entry reached from 0xC461AA.
    case 0xC461AC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:33 CLC
    case 0xC461AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:34 SBC @VIRTUAL02
    case 0xC461AE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC461B0: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC461B2: cpu.execute_instruction<0x10>(0x00005D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC461B4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC461B6: cpu.execute_instruction<0x30>(0x000059, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:36 LDA @LOCAL03
    case 0xC461B8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:37 ASL
    case 0xC461BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:39 CLC
    case 0xC461BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:40 ADC #.LOWORD(GAME_STATE)
    case 0xC461BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:40 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC461BC.
    case 0xC461BE: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:41 TAX
    case 0xC461BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:42 LDA a:game_state::unknownA2,X
    case 0xC461C0: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:47 STA @VIRTUAL04
    case 0xC461C3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:48 ASL
    case 0xC461C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:49 STA @VIRTUAL02
    case 0xC461C6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:50 LDA @LOCAL04
    case 0xC461C8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:51 ASL
    case 0xC461CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:52 TAX
    case 0xC461CB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:53 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC461CC: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:54 STA @LOCAL00
    case 0xC461CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:55 LDY ENTITY_ABS_X_TABLE,X
    case 0xC461D1: cpu.execute_instruction<0xBC>(0x000B84, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:56 LDX @VIRTUAL02
    case 0xC461D4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:57 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC461D6: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:58 TAX
    case 0xC461D9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:59 STX @LOCAL02
    case 0xC461DA: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:60 LDX @VIRTUAL02
    case 0xC461DC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:61 LDA ENTITY_ABS_X_TABLE,X
    case 0xC461DE: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:62 LDX @LOCAL02
    case 0xC461E1: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:63 JSL UNKNOWN_C41EFF
    case 0xC461E3: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:64 LDY #$2000
    case 0xC461E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:64 LDY #$2000
    // Overlapping static entry reached from 0xC461E7.
    case 0xC461E9: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:65 CLC
    case 0xC461EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    case 0xC461EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    // Overlapping static entry reached from 0xC461E9.
    case 0xC461EC: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    // Overlapping static entry reached from 0xC461EB.
    case 0xC461ED: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC461EE: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC461ED.
    case 0xC461EF: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:68 STA @LOCAL01
    case 0xC461F2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:69 LDA @VIRTUAL02
    case 0xC461F4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:70 CLC
    case 0xC461F6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:71 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC461F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:71 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC461F7.
    case 0xC461F9: cpu.execute_instruction<0x2E>(0x00A5AA, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:72 TAX
    case 0xC461FA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:73 LDA @LOCAL01
    case 0xC461FB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:73 LDA @LOCAL01
    // Overlapping static entry reached from 0xC461F9.
    case 0xC461FC: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:74 STA @VIRTUAL02
    case 0xC461FD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:74 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC461FC.
    case 0xC461FE: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:75 LDA __BSS_START__,X
    case 0xC461FF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:76 CMP @VIRTUAL02
    case 0xC46202: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:77 BEQ @UNKNOWN4
    case 0xC46204: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:78 LDA @LOCAL01
    case 0xC46206: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:79 STA __BSS_START__,X
    case 0xC46208: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:80 LDA @VIRTUAL04
    case 0xC4620B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:81 JSL UNKNOWN_C0A780
    case 0xC4620D: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:83 INC @LOCAL03
    case 0xC46211: cpu.execute_instruction<0xE6>(0x000014, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:85 LDA GAME_STATE+game_state::party_count
    case 0xC46213: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:86 AND #$00FF
    case 0xC46216: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC46216.
    case 0xC46218: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:87 CMP @LOCAL03
    case 0xC46219: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC4621B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC4621D: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC4621F: cpu.execute_instruction<0x4C>(0x00619B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:90 END_C_FUNCTION
    case 0xC46222: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:90 END_C_FUNCTION
    case 0xC46223: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/prepare_new_entity.asm (source_named).
bool execute_overworld_actionscript_prepare_new_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A8F1: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:4 STY $94
    case 0xC0A8F5: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:5 PHA
    case 0xC0A8F7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A8F8: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:7 STY $94
    case 0xC0A8FC: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:8 PHA
    case 0xC0A8FE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:9 JSL MOVEMENT_DATA_READ8
    case 0xC0A8FF: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:10 STY $94
    case 0xC0A903: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:11 PLY
    case 0xC0A905: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:12 PLX
    case 0xC0A906: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:13 JSL PREPARE_NEW_ENTITY
    case 0xC0A907: cpu.execute_instruction<0x22>(0xC44BBB, 4); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:14 RTL
    case 0xC0A90B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/prepare_new_entity_at_party_leader.asm (source_named).
bool execute_overworld_actionscript_prepare_new_entity_at_party_leader_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity_at_party_leader.asm:3 LDA #$0001
    case 0xC0A8DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/actionscript/prepare_new_entity_at_party_leader.asm:3 LDA #$0001
    // Overlapping static entry reached from 0xC0A8DE.
    case 0xC0A8E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/actionscript/prepare_new_entity_at_party_leader.asm:4 JSL PREPARE_NEW_ENTITY_AT_EXISTING_ENTITY_LOCATION
    case 0xC0A8E1: cpu.execute_instruction<0x22>(0xC44B31, 4); return true;
    // src/overworld/actionscript/prepare_new_entity_at_party_leader.asm:5 RTL
    case 0xC0A8E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/prepare_new_entity_at_self.asm (source_named).
bool execute_overworld_actionscript_prepare_new_entity_at_self_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:3 LDA #$0000
    case 0xC0A8D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0A8D6.
    case 0xC0A8D8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:4 JSL PREPARE_NEW_ENTITY_AT_EXISTING_ENTITY_LOCATION
    case 0xC0A8D9: cpu.execute_instruction<0x22>(0xC44B31, 4); return true;
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:5 RTL
    case 0xC0A8DD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm (source_named).
bool execute_overworld_actionscript_prepare_new_entity_at_teleport_destination_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A8E6: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:4 STY $94
    case 0xC0A8EA: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:5 JSL PREPARE_NEW_ENTITY_AT_TELEPORT_DESTINATION
    case 0xC0A8EC: cpu.execute_instruction<0x22>(0xC44B69, 4); return true;
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:6 RTL
    case 0xC0A8F0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/run_actionscript_frame.asm (source_named).
bool execute_overworld_actionscript_run_actionscript_frame_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/run_actionscript_frame.asm:3 LDA DISABLE_ACTIONSCRIPT
    case 0xC09445: cpu.execute_instruction<0xAD>(0x000A56, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:4 BEQ @UNKNOWN0
    case 0xC09448: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:5 RTL
    case 0xC0944A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:7 JMP $800000 | .LOWORD(@UNKNOWN1)
    case 0xC0944B: cpu.execute_instruction<0x5C>(0x80944F, 4); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:9 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0944F: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC09451: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:11 PHD
    case 0xC09453: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:12 PHA
    case 0xC09454: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:13 TDC
    case 0xC09455: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:14 SEC
    case 0xC09456: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:15 SBC #$00A0
    case 0xC09457: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000A0, 2); else cpu.execute_instruction<0xE9>(0x0000A0, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:15 SBC #$00A0
    // Overlapping static entry reached from 0xC09457.
    case 0xC09459: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:16 AND #$FF00
    case 0xC0945A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:16 AND #$FF00
    // Overlapping static entry reached from 0xC0945A.
    case 0xC0945C: cpu.execute_instruction<0xFF>(0xEE685B, 4); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:17 TCD
    case 0xC0945D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:18 PLA
    case 0xC0945E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:19 INC DISABLE_ACTIONSCRIPT
    case 0xC0945F: cpu.execute_instruction<0xEE>(0x000A56, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:19 INC DISABLE_ACTIONSCRIPT
    // Overlapping static entry reached from 0xC0945C.
    case 0xC09460: cpu.execute_instruction<0x56>(0x00000A, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:20 LDX FIRST_ENTITY
    case 0xC09462: cpu.execute_instruction<0xAE>(0x000A46, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:21 BMI @UNKNOWN5
    case 0xC09465: cpu.execute_instruction<0x30>(0x000043, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:22 STZ $80
    case 0xC09467: cpu.execute_instruction<0x64>(0x000080, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:23 STZ $86
    case 0xC09469: cpu.execute_instruction<0x64>(0x000086, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:25 STX $88
    case 0xC0946B: cpu.execute_instruction<0x86>(0x000088, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:26 STX CURRENT_ENTITY_OFFSET
    case 0xC0946D: cpu.execute_instruction<0x8E>(0x001A3A, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:27 STX CURRENT_ENTITY_SLOT
    case 0xC09470: cpu.execute_instruction<0x8E>(0x001A38, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:28 LSR CURRENT_ENTITY_SLOT
    case 0xC09473: cpu.execute_instruction<0x4E>(0x001A38, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:29 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09476: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:30 STA NEXT_ACTIVE_ENTITY
    case 0xC09479: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:31 JSR UNKNOWN_C094D0
    case 0xC0947C: cpu.execute_instruction<0x20>(0x0094AF, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:32 LDX NEXT_ACTIVE_ENTITY
    case 0xC0947F: cpu.execute_instruction<0xAE>(0x000A4C, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:33 BPL @UNKNOWN2
    case 0xC09482: cpu.execute_instruction<0x10>(0x0000E7, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:34 LDX FIRST_ENTITY
    case 0xC09484: cpu.execute_instruction<0xAE>(0x000A46, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:35 BMI @UNKNOWN5
    case 0xC09487: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:37 STX CURRENT_ENTITY_SLOT
    case 0xC09489: cpu.execute_instruction<0x8E>(0x001A38, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:38 LSR CURRENT_ENTITY_SLOT
    case 0xC0948C: cpu.execute_instruction<0x4E>(0x001A38, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:39 STX $88
    case 0xC0948F: cpu.execute_instruction<0x86>(0x000088, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:40 BIT ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09491: cpu.execute_instruction<0x3C>(0x0010AC, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:41 BVS @UNKNOWN4
    case 0xC09494: cpu.execute_instruction<0x70>(0x000003, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:42 JSR (.LOWORD(ENTITY_MOVE_CALLBACK),X)
    case 0xC09496: cpu.execute_instruction<0xFC>(0x001214, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:44 JSR (.LOWORD(ENTITY_SCREEN_POSITION_CALLBACK),X)
    case 0xC09499: cpu.execute_instruction<0xFC>(0x00119C, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:45 LDX $88
    case 0xC0949C: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:46 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0949E: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:47 TAX
    case 0xC094A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:48 BPL @UNKNOWN3
    case 0xC094A2: cpu.execute_instruction<0x10>(0x0000E5, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:49 LDX #$0000
    case 0xC094A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:49 LDX #$0000
    // Overlapping static entry reached from 0xC094A4.
    case 0xC094A6: cpu.execute_instruction<0x00>(0x0000FC, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:50 JSR (.LOWORD(CURRENT_ENTITY_DRAW_CALLBACK),X)
    case 0xC094A7: cpu.execute_instruction<0xFC>(0x000A54, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:52 PLD
    case 0xC094AA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:53 STZ DISABLE_ACTIONSCRIPT
    case 0xC094AB: cpu.execute_instruction<0x9C>(0x000A56, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:54 RTL
    case 0xC094AE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/00.asm (source_named).
bool execute_overworld_actionscript_script_00_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/00.asm:3 LDX $88
    case 0xC095D1: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/00.asm:4 JSR UNKNOWN_C09C3B
    case 0xC095D3: cpu.execute_instruction<0x20>(0x009C1A, 3); return true;
    // src/overworld/actionscript/script/00.asm:5 LDX $8A
    case 0xC095D6: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/00.asm:6 LDA #$FFFF
    case 0xC095D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/script/00.asm:6 LDA #$FFFF
    // Overlapping static entry reached from 0xC095D8.
    case 0xC095DA: cpu.execute_instruction<0xFF>(0x13689D, 4); return true;
    // src/overworld/actionscript/script/00.asm:7 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC095DB: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // src/overworld/actionscript/script/00.asm:8 STA ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC095DE: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/overworld/actionscript/script/00.asm:9 RTS
    case 0xC095E1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/01.asm (source_named).
bool execute_overworld_actionscript_script_01_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/01.asm:3 LDA [$80],Y
    case 0xC095E2: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/01.asm:4 LDX $8A
    case 0xC095E4: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/01.asm:5 INY
    case 0xC095E6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:7 STA $90
    case 0xC095E7: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/01.asm:8 STY $94
    case 0xC095E9: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/01.asm:9 TYA
    case 0xC095EB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:10 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC095EC: cpu.execute_instruction<0xBC>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/01.asm:11 STA ($84),Y
    case 0xC095EF: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/01.asm:12 INY
    case 0xC095F1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:13 INY
    case 0xC095F2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:14 LDA $90
    case 0xC095F3: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/01.asm:15 STA ($84),Y
    case 0xC095F5: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/01.asm:16 INY
    case 0xC095F7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:17 TYA
    case 0xC095F8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:18 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC095F9: cpu.execute_instruction<0x9D>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/01.asm:19 LDY $94
    case 0xC095FC: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/01.asm:20 RTS
    case 0xC095FE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/02.asm (source_named).
bool execute_overworld_actionscript_script_02_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/02.asm:3 STY $94
    case 0xC09606: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/02.asm:4 LDX $8A
    case 0xC09608: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/02.asm:5 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0960A: cpu.execute_instruction<0xBC>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/02.asm:6 DEY
    case 0xC0960D: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC0960E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/02.asm:8 LDA ($84),Y
    case 0xC09610: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/02.asm:9 DEC
    case 0xC09612: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:10 STA ($84),Y
    case 0xC09613: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/02.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC09615: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/02.asm:12 BNE @UNKNOWN0
    case 0xC09617: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/overworld/actionscript/script/02.asm:13 DEY
    case 0xC09619: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:14 DEY
    case 0xC0961A: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:15 TYA
    case 0xC0961B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:16 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0961C: cpu.execute_instruction<0x9D>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/02.asm:17 LDY $94
    case 0xC0961F: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/02.asm:18 RTS
    case 0xC09621: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:20 DEY
    case 0xC09622: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:21 DEY
    case 0xC09623: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:22 LDA ($84),Y
    case 0xC09624: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/02.asm:23 TAY
    case 0xC09626: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:24 RTS
    case 0xC09627: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/03.asm (source_named).
bool execute_overworld_actionscript_script_03_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/03.asm:3 LDA [$80],Y
    case 0xC0962C: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/03.asm:4 TAX
    case 0xC0962E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/03.asm:5 INY
    case 0xC0962F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/03.asm:6 INY
    case 0xC09630: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/03.asm:7 LDA [$80],Y
    case 0xC09631: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/03.asm:8 STA $82
    case 0xC09633: cpu.execute_instruction<0x85>(0x000082, 2); return true;
    // src/overworld/actionscript/script/03.asm:9 TXY
    case 0xC09635: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/actionscript/script/03.asm:10 RTS
    case 0xC09636: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/04.asm (source_named).
bool execute_overworld_actionscript_script_04_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/04.asm:3 LDA [$80],Y
    case 0xC09664: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/04.asm:4 STA $8C
    case 0xC09666: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/04.asm:5 INY
    case 0xC09668: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:6 INY
    case 0xC09669: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:7 LDA [$80],Y
    case 0xC0966A: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/04.asm:8 STA $8E
    case 0xC0966C: cpu.execute_instruction<0x85>(0x00008E, 2); return true;
    // src/overworld/actionscript/script/04.asm:9 INY
    case 0xC0966E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:10 TYA
    case 0xC0966F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:11 LDX $8A
    case 0xC09670: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/04.asm:12 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09672: cpu.execute_instruction<0xBC>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/04.asm:13 STA ($84),Y
    case 0xC09675: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/04.asm:14 INY
    case 0xC09677: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:15 INY
    case 0xC09678: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:16 LDA $82
    case 0xC09679: cpu.execute_instruction<0xA5>(0x000082, 2); return true;
    // src/overworld/actionscript/script/04.asm:17 STA ($84),Y
    case 0xC0967B: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/04.asm:17 STA ($84),Y
    // Overlapping static entry reached from 0xC096DD.
    case 0xC0967C: cpu.execute_instruction<0x84>(0x0000C8, 2); return true;
    // src/overworld/actionscript/script/04.asm:18 INY
    case 0xC0967D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:19 TYA
    case 0xC0967E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:20 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0967F: cpu.execute_instruction<0x9D>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/04.asm:21 LDA $8E
    case 0xC09682: cpu.execute_instruction<0xA5>(0x00008E, 2); return true;
    // src/overworld/actionscript/script/04.asm:22 STA $82
    case 0xC09684: cpu.execute_instruction<0x85>(0x000082, 2); return true;
    // src/overworld/actionscript/script/04.asm:23 LDY $8C
    case 0xC09686: cpu.execute_instruction<0xA4>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/04.asm:24 RTS
    case 0xC09688: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/05.asm (source_named).
bool execute_overworld_actionscript_script_05_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/05.asm:3 LDX $8A
    case 0xC09689: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/05.asm:4 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0968B: cpu.execute_instruction<0xBC>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/05.asm:4 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    // Overlapping static entry reached from 0xC096ED.
    case 0xC0968C: cpu.execute_instruction<0xDC>(0x00D012, 3); return true;
    // src/overworld/actionscript/script/05.asm:5 BNE @UNKNOWN0
    case 0xC0968E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/overworld/actionscript/script/05.asm:6 JMP .LOWORD(MOVEMENT_CODE_0C)
    case 0xC09690: cpu.execute_instruction<0x4C>(0x0099A2, 3); return true;
    // src/overworld/actionscript/script/05.asm:8 DEY
    case 0xC09693: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:9 LDA ($84),Y
    case 0xC09694: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/05.asm:10 STA $82
    case 0xC09696: cpu.execute_instruction<0x85>(0x000082, 2); return true;
    // src/overworld/actionscript/script/05.asm:11 DEY
    case 0xC09698: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:12 DEY
    case 0xC09699: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:13 TYA
    case 0xC0969A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:14 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0969B: cpu.execute_instruction<0x9D>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/05.asm:15 LDA ($84),Y
    case 0xC0969E: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/05.asm:16 TAY
    case 0xC096A0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:17 RTS
    case 0xC096A1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/06.asm (source_named).
bool execute_overworld_actionscript_script_06_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/06.asm:3 LDX $8A
    case 0xC096A2: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/06.asm:4 LDA [$80],Y
    case 0xC096A4: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/06.asm:5 AND #$00FF
    case 0xC096A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/06.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC096A6.
    case 0xC096A8: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/06.asm:6 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC096A9: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // src/overworld/actionscript/script/06.asm:7 INY
    case 0xC096AC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/06.asm:8 RTS
    case 0xC096AD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/07.asm (source_named).
bool execute_overworld_actionscript_script_07_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/07.asm:3 STY $94
    case 0xC099BC: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/07.asm:4 JSR UNKNOWN_C09D03
    case 0xC099BE: cpu.execute_instruction<0x20>(0x009CE2, 3); return true;
    // src/overworld/actionscript/script/07.asm:5 BCS @UNKNOWN0
    case 0xC099C1: cpu.execute_instruction<0xB0>(0x000025, 2); return true;
    // src/overworld/actionscript/script/07.asm:6 STY ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC099C3: cpu.execute_instruction<0x8C>(0x000A4E, 3); return true;
    // src/overworld/actionscript/script/07.asm:7 LDX $8A
    case 0xC099C6: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/07.asm:8 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC099C8: cpu.execute_instruction<0xBD>(0x001250, 3); return true;
    // src/overworld/actionscript/script/07.asm:9 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC099CB: cpu.execute_instruction<0x99>(0x001250, 3); return true;
    // src/overworld/actionscript/script/07.asm:10 TYA
    case 0xC099CE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:11 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC099CF: cpu.execute_instruction<0x9D>(0x001250, 3); return true;
    // src/overworld/actionscript/script/07.asm:12 TYX
    case 0xC099D2: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:13 STZ ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC099D3: cpu.execute_instruction<0x9E>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/07.asm:13 STZ ENTITY_SCRIPT_STACK_OFFSETS,X
    // Overlapping static entry reached from 0xC09A35.
    case 0xC099D4: cpu.execute_instruction<0xDC>(0x009E12, 3); return true;
    // src/overworld/actionscript/script/07.asm:14 STZ ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC099D6: cpu.execute_instruction<0x9E>(0x001368, 3); return true;
    // src/overworld/actionscript/script/07.asm:15 LDY $94
    case 0xC099D9: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/07.asm:16 LDA [$80],Y
    case 0xC099DB: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/07.asm:17 STA ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC099DD: cpu.execute_instruction<0x9D>(0x0013F4, 3); return true;
    // src/overworld/actionscript/script/07.asm:18 LDA $82
    case 0xC099E0: cpu.execute_instruction<0xA5>(0x000082, 2); return true;
    // src/overworld/actionscript/script/07.asm:19 STA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC099E2: cpu.execute_instruction<0x9D>(0x001480, 3); return true;
    // src/overworld/actionscript/script/07.asm:20 INY
    case 0xC099E5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:21 INY
    case 0xC099E6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:22 RTS
    case 0xC099E7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:24 LDY $94
    case 0xC099E8: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/07.asm:25 INY
    case 0xC099EA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:26 INY
    case 0xC099EB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:27 RTS
    case 0xC099EC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/08.asm (source_named).
bool execute_overworld_actionscript_script_08_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/08.asm:3 LDX $88
    case 0xC099F9: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/08.asm:4 LDA [$80],Y
    case 0xC099FB: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/08.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC099FD: cpu.execute_instruction<0x9D>(0x001070, 3); return true;
    // src/overworld/actionscript/script/08.asm:6 INY
    case 0xC09A00: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/08.asm:7 INY
    case 0xC09A01: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/08.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC09A02: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/08.asm:9 LDA [$80],Y
    case 0xC09A04: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/08.asm:10 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09A06: cpu.execute_instruction<0x9D>(0x0010AC, 3); return true;
    // src/overworld/actionscript/script/08.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC09A09: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/08.asm:12 INY
    case 0xC09A0B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/08.asm:13 RTS
    case 0xC09A0C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/09.asm (source_named).
bool execute_overworld_actionscript_script_09_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/09.asm:3 DEY
    case 0xC09A0D: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/09.asm:4 LDX $8A
    case 0xC09A0E: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/09.asm:5 LDA #$FFFF
    case 0xC09A10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/script/09.asm:5 LDA #$FFFF
    // Overlapping static entry reached from 0xC09A10.
    case 0xC09A12: cpu.execute_instruction<0xFF>(0x13689D, 4); return true;
    // src/overworld/actionscript/script/09.asm:6 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09A13: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // src/overworld/actionscript/script/09.asm:7 RTS
    case 0xC09A16: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0A.asm (source_named).
bool execute_overworld_actionscript_script_0a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0A.asm:3 LDX $8A
    case 0xC0993C: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/0A.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0993E: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/0A.asm:5 BNE @RETURN
    case 0xC09941: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/actionscript/script/0A.asm:6 LDA [$80],Y
    case 0xC09943: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0A.asm:7 TAY
    case 0xC09945: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0A.asm:8 RTS
    case 0xC09946: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0A.asm:10 INY
    case 0xC09947: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0A.asm:11 INY
    case 0xC09948: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0A.asm:12 RTS
    case 0xC09949: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0B.asm (source_named).
bool execute_overworld_actionscript_script_0b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0B.asm:3 LDX $8A
    case 0xC0994A: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/0B.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0994C: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/0B.asm:5 BEQ @RETURN
    case 0xC0994F: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/actionscript/script/0B.asm:6 LDA [$80],Y
    case 0xC09951: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0B.asm:7 TAY
    case 0xC09953: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0B.asm:8 RTS
    case 0xC09954: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0B.asm:10 INY
    case 0xC09955: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0B.asm:11 INY
    case 0xC09956: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0B.asm:12 RTS
    case 0xC09957: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0C.asm (source_named).
bool execute_overworld_actionscript_script_0c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0C.asm:3 STY $94
    case 0xC099A2: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/0C.asm:4 LDY $8A
    case 0xC099A4: cpu.execute_instruction<0xA4>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/0C.asm:6 LDX $88
    case 0xC099A6: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/0C.asm:7 JSR UNKNOWN_C09D12
    case 0xC099A8: cpu.execute_instruction<0x20>(0x009CF1, 3); return true;
    // src/overworld/actionscript/script/0C.asm:8 LDA #$FFFF
    case 0xC099AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/script/0C.asm:8 LDA #$FFFF
    // Overlapping static entry reached from 0xC099AB.
    case 0xC099AD: cpu.execute_instruction<0xFF>(0x136899, 4); return true;
    // src/overworld/actionscript/script/0C.asm:9 STA ENTITY_SCRIPT_SLEEP_FRAMES,Y
    case 0xC099AE: cpu.execute_instruction<0x99>(0x001368, 3); return true;
    // src/overworld/actionscript/script/0C.asm:10 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC099B1: cpu.execute_instruction<0xBD>(0x000AD0, 3); return true;
    // src/overworld/actionscript/script/0C.asm:11 BPL @UNKNOWN0
    case 0xC099B4: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/0C.asm:12 JMP MOVEMENT_CODE_00
    case 0xC099B6: cpu.execute_instruction<0x4C>(0x0095D1, 3); return true;
    // src/overworld/actionscript/script/0C.asm:14 LDY $94
    case 0xC099B9: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/0C.asm:15 RTS
    case 0xC099BB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0D.asm (source_named).
bool execute_overworld_actionscript_script_0d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0D.asm:3 LDA [$80],Y
    case 0xC09A7E: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0D.asm:4 INY
    case 0xC09A80: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:6 INY
    case 0xC09A81: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:8 STA $8C
    case 0xC09A82: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/0D.asm:9 LDA [$80],Y
    case 0xC09A84: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0D.asm:10 AND #$00FF
    case 0xC09A86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/0D.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09A86.
    case 0xC09A88: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/0D.asm:11 ASL
    case 0xC09A89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:12 TAX
    case 0xC09A8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:13 INY
    case 0xC09A8B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:14 LDA [$80],Y
    case 0xC09A8C: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0D.asm:15 STA $90
    case 0xC09A8E: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/0D.asm:16 INY
    case 0xC09A90: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:17 INY
    case 0xC09A91: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:18 LDA f:UNKNOWN_C09ABD,X
    case 0xC09A92: cpu.execute_instruction<0xBF>(0xC09A9C, 4); return true;
    // src/overworld/actionscript/script/0D.asm:19 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC09A96: cpu.execute_instruction<0x8D>(0x000A50, 3); return true;
    // src/overworld/actionscript/script/0D.asm:20 JMP (.LOWORD(CURRENT_ENTITY_TICK_CALLBACK))
    case 0xC09A99: cpu.execute_instruction<0x6C>(0x000A50, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0E.asm (source_named).
bool execute_overworld_actionscript_script_0e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0E.asm:3 LDA [$80],Y
    case 0xC09AC1: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0E.asm:4 AND #$00FF
    case 0xC09AC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/0E.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09AC3.
    case 0xC09AC5: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/0E.asm:5 ASL
    case 0xC09AC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:6 TAX
    case 0xC09AC7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09AC8: cpu.execute_instruction<0xBF>(0xC09AD8, 4); return true;
    // src/overworld/actionscript/script/0E.asm:8 ADC $88
    case 0xC09ACC: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/0E.asm:9 TAX
    case 0xC09ACE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:10 INY
    case 0xC09ACF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:11 LDA [$80],Y
    case 0xC09AD0: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0E.asm:12 STA __BSS_START__,X
    case 0xC09AD2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/actionscript/script/0E.asm:13 INY
    case 0xC09AD5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:14 INY
    case 0xC09AD6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:15 RTS
    case 0xC09AD7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0F.asm (source_named).
bool execute_overworld_actionscript_script_0f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0F.asm:3 LDX $88
    case 0xC09AE8: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/0F.asm:4 JSR CLEAR_SPRITE_TICK_CALLBACK
    case 0xC09AEA: cpu.execute_instruction<0x20>(0x009D80, 3); return true;
    // src/overworld/actionscript/script/0F.asm:5 RTS
    case 0xC09AED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/10.asm (source_named).
bool execute_overworld_actionscript_script_10_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/10.asm:3 LDX $8A
    case 0xC09958: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/10.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0995A: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/10.asm:5 STA $90
    case 0xC0995D: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/10.asm:6 LDA [$80],Y
    case 0xC0995F: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/10.asm:7 AND #$00FF
    case 0xC09961: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/10.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC09961.
    case 0xC09963: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/overworld/actionscript/script/10.asm:8 INY
    case 0xC09964: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:9 STY $94
    case 0xC09965: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/10.asm:10 CMP $90
    case 0xC09967: cpu.execute_instruction<0xC5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/10.asm:11 BCC MOVEMENT_CODE_10_UNKNOWN0
    case 0xC09969: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/overworld/actionscript/script/10.asm:12 BNE MOVEMENT_CODE_10_UNKNOWN1
    case 0xC0996B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/actionscript/script/10.asm:14 ASL
    case 0xC0996D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:15 ADC $94
    case 0xC0996E: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/script/10.asm:16 TAY
    case 0xC09970: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:17 RTS
    case 0xC09971: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:19 LDA $90
    case 0xC09972: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/10.asm:20 ASL
    case 0xC09974: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:21 CLC
    case 0xC09975: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:22 ADC $94
    case 0xC09976: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/script/10.asm:23 TAY
    case 0xC09978: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:24 LDA [$80],Y
    case 0xC09979: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/10.asm:25 TAY
    case 0xC0997B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:26 RTS
    case 0xC0997C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/11.asm (source_named).
bool execute_overworld_actionscript_script_11_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/11.asm:3 LDX $8A
    case 0xC0997D: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/11.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0997F: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/11.asm:5 STA $90
    case 0xC09982: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/11.asm:6 LDA [$80],Y
    case 0xC09984: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/11.asm:7 AND #$00FF
    case 0xC09986: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/11.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC09986.
    case 0xC09988: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/overworld/actionscript/script/11.asm:8 INY
    case 0xC09989: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:9 STY $94
    case 0xC0998A: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/11.asm:10 CMP $90
    case 0xC0998C: cpu.execute_instruction<0xC5>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/actionscript/script/11.asm:11 BLTEQ MOVEMENT_CODE_10_UNKNOWN0
    case 0xC0998E: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/actionscript/script/11.asm:11 BLTEQ MOVEMENT_CODE_10_UNKNOWN0
    case 0xC09990: cpu.execute_instruction<0xF0>(0x0000DB, 2); return true;
    // src/overworld/actionscript/script/11.asm:12 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09992: cpu.execute_instruction<0xBC>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/11.asm:13 ASL
    case 0xC09995: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:14 ADC $94
    case 0xC09996: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/script/11.asm:15 STA ($84),Y
    case 0xC09998: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/11.asm:16 INY
    case 0xC0999A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:17 INY
    case 0xC0999B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:18 TYA
    case 0xC0999C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:19 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0999D: cpu.execute_instruction<0x9D>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/11.asm:20 BRA MOVEMENT_CODE_10_UNKNOWN1
    case 0xC099A0: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/12.asm (source_named).
bool execute_overworld_actionscript_script_12_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/12.asm:3 LDA [$80],Y
    case 0xC09AEE: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/12.asm:4 TAX
    case 0xC09AF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/12.asm:5 INY
    case 0xC09AF1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/12.asm:6 INY
    case 0xC09AF2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/12.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC09AF3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/12.asm:8 LDA [$80],Y
    case 0xC09AF5: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/12.asm:9 STA __BSS_START__,X
    case 0xC09AF7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/actionscript/script/12.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC09AFA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/12.asm:11 INY
    case 0xC09AFC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/12.asm:12 RTS
    case 0xC09AFD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/13.asm (source_named).
bool execute_overworld_actionscript_script_13_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/13.asm:3 STY $94
    case 0xC099ED: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/13.asm:4 LDX $8A
    case 0xC099EF: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/13.asm:5 LDY ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC099F1: cpu.execute_instruction<0xBC>(0x001250, 3); return true;
    // src/overworld/actionscript/script/13.asm:6 BPL MOVEMENT_CODE_0C_UNK1
    case 0xC099F4: cpu.execute_instruction<0x10>(0x0000B0, 2); return true;
    // src/overworld/actionscript/script/13.asm:7 LDY $94
    case 0xC099F6: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/13.asm:8 RTS
    case 0xC099F8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/14.asm (source_named).
bool execute_overworld_actionscript_script_14_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/14.asm:3 LDA [$80],Y
    case 0xC09A66: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/14.asm:4 AND #$00FF
    case 0xC09A68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/14.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09A68.
    case 0xC09A6A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/14.asm:5 ASL
    case 0xC09A6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/14.asm:6 TAX
    case 0xC09A6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/14.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09A6D: cpu.execute_instruction<0xBF>(0xC09AD8, 4); return true;
    // src/overworld/actionscript/script/14.asm:8 CLC
    case 0xC09A71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/14.asm:9 ADC $88
    case 0xC09A72: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/14.asm:10 BRA MOVEMENT_CODE_0D_UNK1
    case 0xC09A74: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/15.asm (source_named).
bool execute_overworld_actionscript_script_15_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/15.asm:3 LDA [$80],Y
    case 0xC09AFE: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/15.asm:4 TAX
    case 0xC09B00: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:5 INY
    case 0xC09B01: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:6 INY
    case 0xC09B02: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:7 LDA [$80],Y
    case 0xC09B03: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/15.asm:8 STA __BSS_START__,X
    case 0xC09B05: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/actionscript/script/15.asm:9 INY
    case 0xC09B08: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:10 INY
    case 0xC09B09: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:11 RTS
    case 0xC09B0A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/16.asm (source_named).
bool execute_overworld_actionscript_script_16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/16.asm:3 LDX $8A
    case 0xC09B0B: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/16.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B0D: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/16.asm:5 BNE MOVEMENT_CODE_16_UNKNOWN0
    case 0xC09B10: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/overworld/actionscript/script/16.asm:7 LDA [$80],Y
    case 0xC09B12: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/16.asm:8 TAY
    case 0xC09B14: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:9 LDA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09B15: cpu.execute_instruction<0xBD>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/16.asm:10 SEC
    case 0xC09B18: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:11 SBC #$0003
    case 0xC09B19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/overworld/actionscript/script/16.asm:11 SBC #$0003
    // Overlapping static entry reached from 0xC09B19.
    case 0xC09B1B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/16.asm:12 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09B1C: cpu.execute_instruction<0x9D>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/16.asm:13 RTS
    case 0xC09B1F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:15 INY
    case 0xC09B20: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:16 INY
    case 0xC09B21: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:17 RTS
    case 0xC09B22: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/17.asm (source_named).
bool execute_overworld_actionscript_script_17_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/17.asm:3 LDX $8A
    case 0xC09B23: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/17.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B25: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/17.asm:5 BEQ MOVEMENT_CODE_16_UNKNOWN0
    case 0xC09B28: cpu.execute_instruction<0xF0>(0x0000F6, 2); return true;
    // src/overworld/actionscript/script/17.asm:6 BRA MOVEMENT_CODE_16_ENTRY2
    case 0xC09B2A: cpu.execute_instruction<0x80>(0x0000E6, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/18.asm (source_named).
bool execute_overworld_actionscript_script_18_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/18.asm:3 LDA [$80],Y
    case 0xC09A3B: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/18.asm:4 STA $8C
    case 0xC09A3D: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/18.asm:5 INY
    case 0xC09A3F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:6 INY
    case 0xC09A40: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:7 LDA [$80],Y
    case 0xC09A41: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/18.asm:8 AND #$00FF
    case 0xC09A43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/18.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09A43.
    case 0xC09A45: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/18.asm:9 ASL
    case 0xC09A46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:10 TAX
    case 0xC09A47: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:11 INY
    case 0xC09A48: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:12 LDA [$80],Y
    case 0xC09A49: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/18.asm:13 STA $90
    case 0xC09A4B: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/18.asm:14 INY
    case 0xC09A4D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:15 LDA f:UNKNOWN_C09ABD,X
    case 0xC09A4E: cpu.execute_instruction<0xBF>(0xC09A9C, 4); return true;
    // src/overworld/actionscript/script/18.asm:16 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC09A52: cpu.execute_instruction<0x8D>(0x000A50, 3); return true;
    // src/overworld/actionscript/script/18.asm:17 LDA #$0000
    case 0xC09A55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/script/18.asm:17 LDA #$0000
    // Overlapping static entry reached from 0xC09A55.
    case 0xC09A57: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/actionscript/script/18.asm:18 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC09A58: cpu.execute_instruction<0x8D>(0x000A52, 3); return true;
    // src/overworld/actionscript/script/18.asm:19 LDX #$0000
    case 0xC09A5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/actionscript/script/18.asm:19 LDX #$0000
    // Overlapping static entry reached from 0xC09A5B.
    case 0xC09A5D: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/overworld/actionscript/script/18.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC09A5E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/18.asm:21 JSR JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC09A60: cpu.execute_instruction<0x20>(0x009D7D, 3); return true;
    // src/overworld/actionscript/script/18.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC09A63: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/18.asm:23 RTS
    case 0xC09A65: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/19.asm (source_named).
bool execute_overworld_actionscript_script_19_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/19.asm:3 LDA [$80],Y
    case 0xC09628: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/19.asm:4 TAY
    case 0xC0962A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/19.asm:5 RTS
    case 0xC0962B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1A.asm (source_named).
bool execute_overworld_actionscript_script_1a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1A.asm:3 LDA [$80],Y
    case 0xC09637: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1A.asm:4 STA $90
    case 0xC09639: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/1A.asm:5 INY
    case 0xC0963B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:6 INY
    case 0xC0963C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:7 TYA
    case 0xC0963D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:8 LDX $8A
    case 0xC0963E: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1A.asm:9 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09640: cpu.execute_instruction<0xBC>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/1A.asm:10 STA ($84),Y
    case 0xC09643: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/1A.asm:11 INY
    case 0xC09645: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:12 INY
    case 0xC09646: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:13 TYA
    case 0xC09647: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:14 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09648: cpu.execute_instruction<0x9D>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/1A.asm:15 LDY $90
    case 0xC0964B: cpu.execute_instruction<0xA4>(0x000090, 2); return true;
    // src/overworld/actionscript/script/1A.asm:16 RTS
    case 0xC0964D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1B.asm (source_named).
bool execute_overworld_actionscript_script_1b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1B.asm:3 STY $94
    case 0xC0964E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/1B.asm:4 LDX $8A
    case 0xC09650: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1B.asm:5 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09652: cpu.execute_instruction<0xBC>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/1B.asm:6 BNE @UNKNOWN0
    case 0xC09655: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/overworld/actionscript/script/1B.asm:7 JMP .LOWORD(MOVEMENT_CODE_0C)
    case 0xC09657: cpu.execute_instruction<0x4C>(0x0099A2, 3); return true;
    // src/overworld/actionscript/script/1B.asm:9 DEY
    case 0xC0965A: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1B.asm:10 DEY
    case 0xC0965B: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1B.asm:11 TYA
    case 0xC0965C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1B.asm:12 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0965D: cpu.execute_instruction<0x9D>(0x0012DC, 3); return true;
    // src/overworld/actionscript/script/1B.asm:13 LDA ($84),Y
    case 0xC09660: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/1B.asm:14 TAY
    case 0xC09662: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1B.asm:15 RTS
    case 0xC09663: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1C.asm (source_named).
bool execute_overworld_actionscript_script_1c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1C.asm:3 LDX $88
    case 0xC09B2C: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/1C.asm:4 LDA [$80],Y
    case 0xC09B2E: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1C.asm:5 STA ENTITY_SPRITEMAP_POINTER_LOW,X
    case 0xC09B30: cpu.execute_instruction<0x9D>(0x001124, 3); return true;
    // src/overworld/actionscript/script/1C.asm:6 INY
    case 0xC09B33: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1C.asm:7 INY
    case 0xC09B34: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1C.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC09B35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/1C.asm:9 LDA [$80],Y
    case 0xC09B37: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1C.asm:10 STA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC09B39: cpu.execute_instruction<0x9D>(0x001160, 3); return true;
    // src/overworld/actionscript/script/1C.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC09B3C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/1C.asm:12 INY
    case 0xC09B3E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1C.asm:13 RTS
    case 0xC09B3F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1D.asm (source_named).
bool execute_overworld_actionscript_script_1d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1D.asm:3 LDA [$80],Y
    case 0xC09B40: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1D.asm:4 LDX $8A
    case 0xC09B42: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1D.asm:5 STA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B44: cpu.execute_instruction<0x9D>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/1D.asm:6 INY
    case 0xC09B47: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1D.asm:7 INY
    case 0xC09B48: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1D.asm:8 RTS
    case 0xC09B49: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1E.asm (source_named).
bool execute_overworld_actionscript_script_1e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1E.asm:3 LDA [$80],Y
    case 0xC09B4A: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1E.asm:4 TAX
    case 0xC09B4C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1E.asm:5 LDA __BSS_START__,X
    case 0xC09B4D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/script/1E.asm:6 LDX $8A
    case 0xC09B50: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1E.asm:7 STA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B52: cpu.execute_instruction<0x9D>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/1E.asm:8 INY
    case 0xC09B55: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1E.asm:9 INY
    case 0xC09B56: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1E.asm:10 RTS
    case 0xC09B57: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1F.asm (source_named).
bool execute_overworld_actionscript_script_1f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1F.asm:3 LDA [$80],Y
    case 0xC09B58: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1F.asm:4 AND #$00FF
    case 0xC09B5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/1F.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09B5A.
    case 0xC09B5C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/1F.asm:5 ASL
    case 0xC09B5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1F.asm:6 TAX
    case 0xC09B5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1F.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09B5F: cpu.execute_instruction<0xBF>(0xC09AD8, 4); return true;
    // src/overworld/actionscript/script/1F.asm:8 ADC $88
    case 0xC09B63: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/1F.asm:9 STA $8C
    case 0xC09B65: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/1F.asm:10 LDX $8A
    case 0xC09B67: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1F.asm:11 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B69: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/1F.asm:12 STA ($8C)
    case 0xC09B6C: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/1F.asm:13 INY
    case 0xC09B6E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1F.asm:14 RTS
    case 0xC09B6F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/20.asm (source_named).
bool execute_overworld_actionscript_script_20_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/20.asm:3 LDA [$80],Y
    case 0xC09B70: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/20.asm:4 AND #$00FF
    case 0xC09B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/20.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09B72.
    case 0xC09B74: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/20.asm:5 ASL
    case 0xC09B75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/20.asm:6 TAX
    case 0xC09B76: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/20.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09B77: cpu.execute_instruction<0xBF>(0xC09AD8, 4); return true;
    // src/overworld/actionscript/script/20.asm:8 ADC $88
    case 0xC09B7B: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/20.asm:9 TAX
    case 0xC09B7D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/20.asm:10 LDA __BSS_START__,X
    case 0xC09B7E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/script/20.asm:11 LDX $8A
    case 0xC09B81: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/20.asm:12 STA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B83: cpu.execute_instruction<0x9D>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/20.asm:13 INY
    case 0xC09B86: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/20.asm:14 RTS
    case 0xC09B87: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/21.asm (source_named).
bool execute_overworld_actionscript_script_21_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/21.asm:3 LDA [$80],Y
    case 0xC09B93: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/21.asm:4 AND #$00FF
    case 0xC09B95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/21.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09B95.
    case 0xC09B97: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/21.asm:5 ASL
    case 0xC09B98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/21.asm:6 TAX
    case 0xC09B99: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/21.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09B9A: cpu.execute_instruction<0xBF>(0xC09AD8, 4); return true;
    // src/overworld/actionscript/script/21.asm:8 ADC $88
    case 0xC09B9E: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/21.asm:9 TAX
    case 0xC09BA0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/21.asm:10 LDA __BSS_START__,X
    case 0xC09BA1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/script/21.asm:11 LDX $8A
    case 0xC09BA4: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/21.asm:12 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09BA6: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // src/overworld/actionscript/script/21.asm:13 INY
    case 0xC09BA9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/21.asm:14 RTS
    case 0xC09BAA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/22.asm (source_named).
bool execute_overworld_actionscript_script_22_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/22.asm:3 LDA [$80],Y
    case 0xC09BC3: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/22.asm:4 LDX $88
    case 0xC09BC5: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/22.asm:5 STA ENTITY_DRAW_CALLBACK,X
    case 0xC09BC7: cpu.execute_instruction<0x9D>(0x0011D8, 3); return true;
    // src/overworld/actionscript/script/22.asm:6 INY
    case 0xC09BCA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/22.asm:7 INY
    case 0xC09BCB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/22.asm:8 RTS
    case 0xC09BCC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/23.asm (source_named).
bool execute_overworld_actionscript_script_23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/23.asm:3 LDA [$80],Y
    case 0xC09BCD: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/23.asm:4 LDX $88
    case 0xC09BCF: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/23.asm:5 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    case 0xC09BD1: cpu.execute_instruction<0x9D>(0x00119C, 3); return true;
    // src/overworld/actionscript/script/23.asm:6 INY
    case 0xC09BD4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/23.asm:7 INY
    case 0xC09BD5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/23.asm:8 RTS
    case 0xC09BD6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/24.asm (source_named).
bool execute_overworld_actionscript_script_24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/24.asm:3 LDX $8A
    case 0xC095FF: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/24.asm:5 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09601: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/24.asm:6 BRA MOVEMENT_CODE_01_ENTRY2
    case 0xC09604: cpu.execute_instruction<0x80>(0x0000E1, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/25.asm (source_named).
bool execute_overworld_actionscript_script_25_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/25.asm:3 LDA [$80],Y
    case 0xC09BD7: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/25.asm:4 LDX $88
    case 0xC09BD9: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/25.asm:5 STA ENTITY_MOVE_CALLBACK,X
    case 0xC09BDB: cpu.execute_instruction<0x9D>(0x001214, 3); return true;
    // src/overworld/actionscript/script/25.asm:6 INY
    case 0xC09BDE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/25.asm:7 INY
    case 0xC09BDF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/25.asm:8 RTS
    case 0xC09BE0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/26.asm (source_named).
bool execute_overworld_actionscript_script_26_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/26.asm:3 LDA [$80],Y
    case 0xC09BAB: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/26.asm:4 AND #$00FF
    case 0xC09BAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/26.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09BAD.
    case 0xC09BAF: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/26.asm:5 ASL
    case 0xC09BB0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/26.asm:6 TAX
    case 0xC09BB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/26.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09BB2: cpu.execute_instruction<0xBF>(0xC09AD8, 4); return true;
    // src/overworld/actionscript/script/26.asm:8 ADC $88
    case 0xC09BB6: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/26.asm:9 TAX
    case 0xC09BB8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/26.asm:10 LDA __BSS_START__,X
    case 0xC09BB9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/script/26.asm:11 LDX $88
    case 0xC09BBC: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/26.asm:12 STA ENTITY_ANIMATION_FRAME,X
    case 0xC09BBE: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/overworld/actionscript/script/26.asm:13 INY
    case 0xC09BC1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/26.asm:14 RTS
    case 0xC09BC2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/27.asm (source_named).
bool execute_overworld_actionscript_script_27_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/27.asm:3 LDA #.LOWORD(ENTITY_SCRIPT_TEMPVARS)
    case 0xC09A76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/27.asm:3 LDA #.LOWORD(ENTITY_SCRIPT_TEMPVARS)
    // Overlapping static entry reached from 0xC09A76.
    case 0xC09A78: cpu.execute_instruction<0x15>(0x000018, 2); return true;
    // src/overworld/actionscript/script/27.asm:4 CLC
    case 0xC09A79: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/27.asm:5 ADC $8A
    case 0xC09A7A: cpu.execute_instruction<0x65>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/27.asm:6 BRA MOVEMENT_CODE_0D_UNK2
    case 0xC09A7C: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/28.asm (source_named).
bool execute_overworld_actionscript_script_28_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/28.asm:3 LDX $88
    case 0xC096C2: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/28.asm:4 LDA [$80],Y
    case 0xC096C4: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/28.asm:5 INY
    case 0xC096C6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/28.asm:6 INY
    case 0xC096C7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/28.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC096C8: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/overworld/actionscript/script/28.asm:8 LDA #$8000
    case 0xC096CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/script/28.asm:8 LDA #$8000
    // Overlapping static entry reached from 0xC096CB.
    case 0xC096CD: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/28.asm:9 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC096CE: cpu.execute_instruction<0x9D>(0x000C38, 3); return true;
    // src/overworld/actionscript/script/28.asm:10 RTS
    case 0xC096D1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/29.asm (source_named).
bool execute_overworld_actionscript_script_29_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/29.asm:3 LDX $88
    case 0xC096D2: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/29.asm:4 LDA [$80],Y
    case 0xC096D4: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/29.asm:5 INY
    case 0xC096D6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/29.asm:6 INY
    case 0xC096D7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/29.asm:7 STA ENTITY_ABS_Y_TABLE,X
    case 0xC096D8: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/overworld/actionscript/script/29.asm:8 LDA #$8000
    case 0xC096DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/script/29.asm:8 LDA #$8000
    // Overlapping static entry reached from 0xC096DB.
    case 0xC096DD: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/29.asm:9 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC096DE: cpu.execute_instruction<0x9D>(0x000C74, 3); return true;
    // src/overworld/actionscript/script/29.asm:10 RTS
    case 0xC096E1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2A.asm (source_named).
bool execute_overworld_actionscript_script_2a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2A.asm:3 LDX $88
    case 0xC096E2: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2A.asm:4 LDA [$80],Y
    case 0xC096E4: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2A.asm:5 INY
    case 0xC096E6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2A.asm:6 INY
    case 0xC096E7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2A.asm:7 STA ENTITY_ABS_Z_TABLE,X
    case 0xC096E8: cpu.execute_instruction<0x9D>(0x000BFC, 3); return true;
    // src/overworld/actionscript/script/2A.asm:8 LDA #$8000
    case 0xC096EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/script/2A.asm:8 LDA #$8000
    // Overlapping static entry reached from 0xC096EB.
    case 0xC096ED: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/2A.asm:9 STA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC096EE: cpu.execute_instruction<0x9D>(0x000CB0, 3); return true;
    // src/overworld/actionscript/script/2A.asm:10 RTS
    case 0xC096F1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2B.asm (source_named).
bool execute_overworld_actionscript_script_2b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2B.asm:3 LDX $88
    case 0xC0987F: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2B.asm:4 LDA [$80],Y
    case 0xC09881: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2B.asm:5 CLC
    case 0xC09883: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2B.asm:6 ADC ENTITY_ABS_X_TABLE,X
    case 0xC09884: cpu.execute_instruction<0x7D>(0x000B84, 3); return true;
    // src/overworld/actionscript/script/2B.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC09887: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/overworld/actionscript/script/2B.asm:8 INY
    case 0xC0988A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2B.asm:9 INY
    case 0xC0988B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2B.asm:10 RTS
    case 0xC0988C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2C.asm (source_named).
bool execute_overworld_actionscript_script_2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2C.asm:3 LDX $88
    case 0xC0988D: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2C.asm:4 LDA [$80],Y
    case 0xC0988F: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2C.asm:5 CLC
    case 0xC09891: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2C.asm:6 ADC ENTITY_ABS_Y_TABLE,X
    case 0xC09892: cpu.execute_instruction<0x7D>(0x000BC0, 3); return true;
    // src/overworld/actionscript/script/2C.asm:7 STA ENTITY_ABS_Y_TABLE,X
    case 0xC09895: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/overworld/actionscript/script/2C.asm:8 INY
    case 0xC09898: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2C.asm:9 INY
    case 0xC09899: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2C.asm:10 RTS
    case 0xC0989A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2D.asm (source_named).
bool execute_overworld_actionscript_script_2d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2D.asm:3 LDX $88
    case 0xC0989B: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2D.asm:4 LDA [$80],Y
    case 0xC0989D: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2D.asm:5 CLC
    case 0xC0989F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2D.asm:6 ADC ENTITY_ABS_Z_TABLE,X
    case 0xC098A0: cpu.execute_instruction<0x7D>(0x000BFC, 3); return true;
    // src/overworld/actionscript/script/2D.asm:7 STA ENTITY_ABS_Z_TABLE,X
    case 0xC098A3: cpu.execute_instruction<0x9D>(0x000BFC, 3); return true;
    // src/overworld/actionscript/script/2D.asm:8 INY
    case 0xC098A6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2D.asm:9 INY
    case 0xC098A7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2D.asm:10 RTS
    case 0xC098A8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2E.asm (source_named).
bool execute_overworld_actionscript_script_2e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2E.asm:3 LDX $88
    case 0xC0974C: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2E.asm:4 LDA [$80],Y
    case 0xC0974E: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2E.asm:5 INY
    case 0xC09750: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:6 INY
    case 0xC09751: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:7 STA $90
    case 0xC09752: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/2E.asm:8 AND #$00FF
    case 0xC09754: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/2E.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09754.
    case 0xC09756: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/2E.asm:9 XBA
    case 0xC09757: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:10 CLC
    case 0xC09758: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:11 ADC ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC09759: cpu.execute_instruction<0x7D>(0x000DA0, 3); return true;
    // src/overworld/actionscript/script/2E.asm:12 STA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0975C: cpu.execute_instruction<0x9D>(0x000DA0, 3); return true;
    // src/overworld/actionscript/script/2E.asm:13 LDA $90
    case 0xC0975F: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/2E.asm:14 AND #$FF00
    case 0xC09761: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/2E.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC09761.
    case 0xC09763: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/2E.asm:15 BPL @UNKNOWN0
    case 0xC09764: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/2E.asm:16 ORA #$00FF
    case 0xC09766: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/2E.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09763.
    case 0xC09767: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/2E.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09766.
    case 0xC09768: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/2E.asm:18 XBA
    case 0xC09769: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:19 ADC ENTITY_DELTA_X_TABLE,X
    case 0xC0976A: cpu.execute_instruction<0x7D>(0x000CEC, 3); return true;
    // src/overworld/actionscript/script/2E.asm:19 ADC ENTITY_DELTA_X_TABLE,X
    // Overlapping static entry reached from 0xC09767.
    case 0xC0976B: cpu.execute_instruction<0xEC>(0x009D0C, 3); return true;
    // src/overworld/actionscript/script/2E.asm:20 STA ENTITY_DELTA_X_TABLE,X
    case 0xC0976D: cpu.execute_instruction<0x9D>(0x000CEC, 3); return true;
    // src/overworld/actionscript/script/2E.asm:20 STA ENTITY_DELTA_X_TABLE,X
    // Overlapping static entry reached from 0xC0976B.
    case 0xC0976E: cpu.execute_instruction<0xEC>(0x00600C, 3); return true;
    // src/overworld/actionscript/script/2E.asm:21 RTS
    case 0xC09770: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2F.asm (source_named).
bool execute_overworld_actionscript_script_2f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2F.asm:3 LDX $88
    case 0xC09771: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2F.asm:4 LDA [$80],Y
    case 0xC09773: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2F.asm:5 INY
    case 0xC09775: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:6 INY
    case 0xC09776: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:7 STA $90
    case 0xC09777: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/2F.asm:8 AND #$00FF
    case 0xC09779: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/2F.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09779.
    case 0xC0977B: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/2F.asm:9 XBA
    case 0xC0977C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:10 CLC
    case 0xC0977D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:11 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0977E: cpu.execute_instruction<0x7D>(0x000DDC, 3); return true;
    // src/overworld/actionscript/script/2F.asm:12 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC09781: cpu.execute_instruction<0x9D>(0x000DDC, 3); return true;
    // src/overworld/actionscript/script/2F.asm:13 LDA $90
    case 0xC09784: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/2F.asm:14 AND #$FF00
    case 0xC09786: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/2F.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC09786.
    case 0xC09788: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/2F.asm:15 BPL @UNKNOWN0
    case 0xC09789: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    case 0xC0978B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09788.
    case 0xC0978C: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC0978B.
    case 0xC0978D: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/2F.asm:18 XBA
    case 0xC0978E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC0978F: cpu.execute_instruction<0x7D>(0x000D28, 3); return true;
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC0978C.
    case 0xC09790: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC09790.
    case 0xC09791: cpu.execute_instruction<0x0D>(0x00289D, 3); return true;
    // src/overworld/actionscript/script/2F.asm:20 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC09792: cpu.execute_instruction<0x9D>(0x000D28, 3); return true;
    // src/overworld/actionscript/script/2F.asm:20 STA ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC09791.
    case 0xC09794: cpu.execute_instruction<0x0D>(0x00A660, 3); return true;
    // src/overworld/actionscript/script/2F.asm:21 RTS
    case 0xC09795: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/30.asm (source_named).
bool execute_overworld_actionscript_script_30_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/30.asm:3 LDX $88
    case 0xC09796: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/30.asm:3 LDX $88
    // Overlapping static entry reached from 0xC09794.
    case 0xC09797: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:4 LDA [$80],Y
    case 0xC09798: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/30.asm:5 INY
    case 0xC0979A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:6 INY
    case 0xC0979B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:7 STA $90
    case 0xC0979C: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/30.asm:8 AND #$00FF
    case 0xC0979E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/30.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC0979E.
    case 0xC097A0: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/30.asm:9 XBA
    case 0xC097A1: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:10 CLC
    case 0xC097A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:11 ADC ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC097A3: cpu.execute_instruction<0x7D>(0x000E18, 3); return true;
    // src/overworld/actionscript/script/30.asm:12 STA ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC097A6: cpu.execute_instruction<0x9D>(0x000E18, 3); return true;
    // src/overworld/actionscript/script/30.asm:13 LDA $90
    case 0xC097A9: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/30.asm:14 AND #$FF00
    case 0xC097AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/30.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC097AB.
    case 0xC097AD: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/30.asm:15 BPL @UNKNOWN0
    case 0xC097AE: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/30.asm:16 ORA #$00FF
    case 0xC097B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/30.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097AD.
    case 0xC097B1: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/30.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097B0.
    case 0xC097B2: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/30.asm:18 XBA
    case 0xC097B3: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:19 ADC ENTITY_DELTA_Z_TABLE,X
    case 0xC097B4: cpu.execute_instruction<0x7D>(0x000D64, 3); return true;
    // src/overworld/actionscript/script/30.asm:19 ADC ENTITY_DELTA_Z_TABLE,X
    // Overlapping static entry reached from 0xC097B1.
    case 0xC097B5: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/overworld/actionscript/script/30.asm:20 STA ENTITY_DELTA_Z_TABLE,X
    case 0xC097B7: cpu.execute_instruction<0x9D>(0x000D64, 3); return true;
    // src/overworld/actionscript/script/30.asm:21 RTS
    case 0xC097BA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/31.asm (source_named).
bool execute_overworld_actionscript_script_31_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/31.asm:3 LDA [$80],Y
    case 0xC097BB: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/31.asm:4 AND #$00FF
    case 0xC097BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/31.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC097BD.
    case 0xC097BF: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/31.asm:5 ASL
    case 0xC097C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:6 TAX
    case 0xC097C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:7 INY
    case 0xC097C2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:8 LDA [$80],Y
    case 0xC097C3: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/31.asm:9 STA ENTITY_BG_HORIZONTAL_OFFSET_LOW,X
    case 0xC097C5: cpu.execute_instruction<0x9D>(0x0019F8, 3); return true;
    // src/overworld/actionscript/script/31.asm:10 STZ ENTITY_BG_HORIZONTAL_OFFSET_HIGH,X
    case 0xC097C8: cpu.execute_instruction<0x9E>(0x001A08, 3); return true;
    // src/overworld/actionscript/script/31.asm:11 INY
    case 0xC097CB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:12 INY
    case 0xC097CC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:13 RTS
    case 0xC097CD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/32.asm (source_named).
bool execute_overworld_actionscript_script_32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/32.asm:3 LDA [$80],Y
    case 0xC097CE: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/32.asm:4 AND #$00FF
    case 0xC097D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/32.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC097D0.
    case 0xC097D2: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/32.asm:5 ASL
    case 0xC097D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:6 TAX
    case 0xC097D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:7 INY
    case 0xC097D5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:8 LDA [$80],Y
    case 0xC097D6: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/32.asm:9 STA ENTITY_BG_VERTICAL_OFFSET_LOW,X
    case 0xC097D8: cpu.execute_instruction<0x9D>(0x001A00, 3); return true;
    // src/overworld/actionscript/script/32.asm:10 STZ ENTITY_BG_VERTICAL_OFFSET_HIGH,X
    case 0xC097DB: cpu.execute_instruction<0x9E>(0x001A10, 3); return true;
    // src/overworld/actionscript/script/32.asm:11 INY
    case 0xC097DE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:12 INY
    case 0xC097DF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:13 RTS
    case 0xC097E0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/33.asm (source_named).
bool execute_overworld_actionscript_script_33_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/33.asm:3 LDA [$80],Y
    case 0xC097E1: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/33.asm:4 AND #$00FF
    case 0xC097E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/33.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC097E3.
    case 0xC097E5: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/33.asm:5 ASL
    case 0xC097E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:6 TAX
    case 0xC097E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:7 INY
    case 0xC097E8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:8 LDA [$80],Y
    case 0xC097E9: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/33.asm:9 STA $90
    case 0xC097EB: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/33.asm:10 AND #$00FF
    case 0xC097ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/33.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC097ED.
    case 0xC097EF: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/33.asm:11 XBA
    case 0xC097F0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:12 STA ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC097F1: cpu.execute_instruction<0x9D>(0x001A28, 3); return true;
    // src/overworld/actionscript/script/33.asm:13 LDA $90
    case 0xC097F4: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/33.asm:14 AND #$FF00
    case 0xC097F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/33.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC097F6.
    case 0xC097F8: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/33.asm:15 BPL @UNKNOWN0
    case 0xC097F9: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/33.asm:16 ORA #$00FF
    case 0xC097FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/33.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097F8.
    case 0xC097FC: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/33.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097FB.
    case 0xC097FD: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/33.asm:18 XBA
    case 0xC097FE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:19 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC097FF: cpu.execute_instruction<0x9D>(0x001A18, 3); return true;
    // src/overworld/actionscript/script/33.asm:19 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC097FC.
    case 0xC09800: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:19 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09800.
    case 0xC09801: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:20 INY
    case 0xC09802: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:21 INY
    case 0xC09803: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:22 RTS
    case 0xC09804: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/34.asm (source_named).
bool execute_overworld_actionscript_script_34_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/34.asm:3 LDA [$80],Y
    case 0xC09805: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/34.asm:4 AND #$00FF
    case 0xC09807: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/34.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09807.
    case 0xC09809: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/34.asm:5 ASL
    case 0xC0980A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:6 TAX
    case 0xC0980B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:7 INY
    case 0xC0980C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:8 LDA [$80],Y
    case 0xC0980D: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/34.asm:9 STA $90
    case 0xC0980F: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/34.asm:10 AND #$00FF
    case 0xC09811: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/34.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09811.
    case 0xC09813: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/34.asm:11 XBA
    case 0xC09814: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:12 STA ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09815: cpu.execute_instruction<0x9D>(0x001A30, 3); return true;
    // src/overworld/actionscript/script/34.asm:13 LDA $90
    case 0xC09818: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/34.asm:14 AND #$FF00
    case 0xC0981A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/34.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC0981A.
    case 0xC0981C: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/34.asm:15 BPL @UNKNOWN0
    case 0xC0981D: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/34.asm:16 ORA #$00FF
    case 0xC0981F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/34.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC0981C.
    case 0xC09820: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/34.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC0981F.
    case 0xC09821: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/34.asm:18 XBA
    case 0xC09822: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:19 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC09823: cpu.execute_instruction<0x9D>(0x001A20, 3); return true;
    // src/overworld/actionscript/script/34.asm:19 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09820.
    case 0xC09824: cpu.execute_instruction<0x20>(0x00C81A, 3); return true;
    // src/overworld/actionscript/script/34.asm:20 INY
    case 0xC09826: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:21 INY
    case 0xC09827: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:22 RTS
    case 0xC09828: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/35.asm (source_named).
bool execute_overworld_actionscript_script_35_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/35.asm:3 LDA [$80],Y
    case 0xC09829: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/35.asm:4 AND #$00FF
    case 0xC0982B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/35.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC0982B.
    case 0xC0982D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/35.asm:5 ASL
    case 0xC0982E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:6 TAX
    case 0xC0982F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:7 INY
    case 0xC09830: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:8 LDA [$80],Y
    case 0xC09831: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/35.asm:9 STA $90
    case 0xC09833: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/35.asm:10 AND #$00FF
    case 0xC09835: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/35.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09835.
    case 0xC09837: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/35.asm:11 XBA
    case 0xC09838: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:12 CLC
    case 0xC09839: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:13 ADC ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC0983A: cpu.execute_instruction<0x7D>(0x001A28, 3); return true;
    // src/overworld/actionscript/script/35.asm:14 STA ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC0983D: cpu.execute_instruction<0x9D>(0x001A28, 3); return true;
    // src/overworld/actionscript/script/35.asm:15 LDA $90
    case 0xC09840: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/35.asm:16 AND #$FF00
    case 0xC09842: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/35.asm:16 AND #$FF00
    // Overlapping static entry reached from 0xC09842.
    case 0xC09844: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/35.asm:17 BPL @UNKNOWN0
    case 0xC09845: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/35.asm:18 ORA #$00FF
    case 0xC09847: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/35.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09844.
    case 0xC09848: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/35.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09847.
    case 0xC09849: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/35.asm:20 XBA
    case 0xC0984A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:21 ADC ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC0984B: cpu.execute_instruction<0x7D>(0x001A18, 3); return true;
    // src/overworld/actionscript/script/35.asm:21 ADC ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09848.
    case 0xC0984C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:21 ADC ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC0984C.
    case 0xC0984D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:22 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC0984E: cpu.execute_instruction<0x9D>(0x001A18, 3); return true;
    // src/overworld/actionscript/script/35.asm:23 INY
    case 0xC09851: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:24 INY
    case 0xC09852: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:25 RTS
    case 0xC09853: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/36.asm (source_named).
bool execute_overworld_actionscript_script_36_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/36.asm:3 LDA [$80],Y
    case 0xC09854: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/36.asm:4 AND #$00FF
    case 0xC09856: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/36.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09856.
    case 0xC09858: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/36.asm:5 ASL
    case 0xC09859: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:6 TAX
    case 0xC0985A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:7 INY
    case 0xC0985B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:8 LDA [$80],Y
    case 0xC0985C: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/36.asm:9 STA $90
    case 0xC0985E: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/36.asm:10 AND #$00FF
    case 0xC09860: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/36.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09860.
    case 0xC09862: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/36.asm:11 XBA
    case 0xC09863: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:12 CLC
    case 0xC09864: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:13 ADC ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09865: cpu.execute_instruction<0x7D>(0x001A30, 3); return true;
    // src/overworld/actionscript/script/36.asm:14 STA ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09868: cpu.execute_instruction<0x9D>(0x001A30, 3); return true;
    // src/overworld/actionscript/script/36.asm:15 LDA $90
    case 0xC0986B: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/36.asm:16 AND #$FF00
    case 0xC0986D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/36.asm:16 AND #$FF00
    // Overlapping static entry reached from 0xC0986D.
    case 0xC0986F: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/36.asm:17 BPL @UNKNOWN0
    case 0xC09870: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    case 0xC09872: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC0986F.
    case 0xC09873: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09872.
    case 0xC09874: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/36.asm:20 XBA
    case 0xC09875: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC09876: cpu.execute_instruction<0x7D>(0x001A20, 3); return true;
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09873.
    case 0xC09877: cpu.execute_instruction<0x20>(0x009D1A, 3); return true;
    // src/overworld/actionscript/script/36.asm:22 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC09879: cpu.execute_instruction<0x9D>(0x001A20, 3); return true;
    // src/overworld/actionscript/script/36.asm:22 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09877.
    case 0xC0987A: cpu.execute_instruction<0x20>(0x00C81A, 3); return true;
    // src/overworld/actionscript/script/36.asm:23 INY
    case 0xC0987C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:24 INY
    case 0xC0987D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:25 RTS
    case 0xC0987E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/37.asm (source_named).
bool execute_overworld_actionscript_script_37_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/37.asm:3 LDA [$80],Y
    case 0xC098A9: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/37.asm:4 AND #$00FF
    case 0xC098AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/37.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC098AB.
    case 0xC098AD: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/37.asm:5 ASL
    case 0xC098AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:6 TAX
    case 0xC098AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:7 INY
    case 0xC098B0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:8 LDA [$80],Y
    case 0xC098B1: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/37.asm:9 CLC
    case 0xC098B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:10 ADC ENTITY_BG_HORIZONTAL_OFFSET_LOW,X
    case 0xC098B4: cpu.execute_instruction<0x7D>(0x0019F8, 3); return true;
    // src/overworld/actionscript/script/37.asm:11 STA ENTITY_BG_HORIZONTAL_OFFSET_LOW,X
    case 0xC098B7: cpu.execute_instruction<0x9D>(0x0019F8, 3); return true;
    // src/overworld/actionscript/script/37.asm:12 INY
    case 0xC098BA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:13 INY
    case 0xC098BB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:14 RTS
    case 0xC098BC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/38.asm (source_named).
bool execute_overworld_actionscript_script_38_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/38.asm:3 LDA [$80],Y
    case 0xC098BD: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/38.asm:4 AND #$00FF
    case 0xC098BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/38.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC098BF.
    case 0xC098C1: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/38.asm:5 ASL
    case 0xC098C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:6 TAX
    case 0xC098C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:7 INY
    case 0xC098C4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:8 LDA [$80],Y
    case 0xC098C5: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/38.asm:9 CLC
    case 0xC098C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:10 ADC ENTITY_BG_VERTICAL_OFFSET_LOW,X
    case 0xC098C8: cpu.execute_instruction<0x7D>(0x001A00, 3); return true;
    // src/overworld/actionscript/script/38.asm:11 STA ENTITY_BG_VERTICAL_OFFSET_LOW,X
    case 0xC098CB: cpu.execute_instruction<0x9D>(0x001A00, 3); return true;
    // src/overworld/actionscript/script/38.asm:12 INY
    case 0xC098CE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:13 INY
    case 0xC098CF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:14 RTS
    case 0xC098D0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/39.asm (source_named).
bool execute_overworld_actionscript_script_39_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/39.asm:3 LDX $88
    case 0xC098D1: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/39.asm:4 STZ ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC098D3: cpu.execute_instruction<0x9E>(0x000DA0, 3); return true;
    // src/overworld/actionscript/script/39.asm:5 STZ ENTITY_DELTA_X_TABLE,X
    case 0xC098D6: cpu.execute_instruction<0x9E>(0x000CEC, 3); return true;
    // src/overworld/actionscript/script/39.asm:6 STZ ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC098D9: cpu.execute_instruction<0x9E>(0x000DDC, 3); return true;
    // src/overworld/actionscript/script/39.asm:7 STZ ENTITY_DELTA_Y_TABLE,X
    case 0xC098DC: cpu.execute_instruction<0x9E>(0x000D28, 3); return true;
    // src/overworld/actionscript/script/39.asm:8 STZ ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC098DF: cpu.execute_instruction<0x9E>(0x000E18, 3); return true;
    // src/overworld/actionscript/script/39.asm:9 STZ ENTITY_DELTA_Z_TABLE,X
    case 0xC098E2: cpu.execute_instruction<0x9E>(0x000D64, 3); return true;
    // src/overworld/actionscript/script/39.asm:10 RTS
    case 0xC098E5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3A.asm (source_named).
bool execute_overworld_actionscript_script_3a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3A.asm:3 LDA [$80],Y
    case 0xC098FB: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/3A.asm:4 AND #$00FF
    case 0xC098FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3A.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC098FD.
    case 0xC098FF: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/3A.asm:5 ASL
    case 0xC09900: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3A.asm:6 TAX
    case 0xC09901: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3A.asm:7 STZ ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC09902: cpu.execute_instruction<0x9E>(0x001A28, 3); return true;
    // src/overworld/actionscript/script/3A.asm:8 STZ ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC09905: cpu.execute_instruction<0x9E>(0x001A18, 3); return true;
    // src/overworld/actionscript/script/3A.asm:9 STZ ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09908: cpu.execute_instruction<0x9E>(0x001A30, 3); return true;
    // src/overworld/actionscript/script/3A.asm:10 STZ ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC0990B: cpu.execute_instruction<0x9E>(0x001A20, 3); return true;
    // src/overworld/actionscript/script/3A.asm:11 INY
    case 0xC0990E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3A.asm:12 RTS
    case 0xC0990F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3B_45.asm (source_named).
bool execute_overworld_actionscript_script_3b_45_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3B_45.asm:3 LDX $88
    case 0xC096AE: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:4 LDA [$80],Y
    case 0xC096B0: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:5 AND #$00FF
    case 0xC096B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3B_45.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC096B2.
    case 0xC096B4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:6 CMP #$00FF
    case 0xC096B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3B_45.asm:6 CMP #$00FF
    // Overlapping static entry reached from 0xC096B5.
    case 0xC096B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:7 BNE @UNKNOWN0
    case 0xC096B8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:8 LDA #$FFFF
    case 0xC096BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/script/3B_45.asm:8 LDA #$FFFF
    // Overlapping static entry reached from 0xC096BA.
    case 0xC096BC: cpu.execute_instruction<0xFF>(0x10E89D, 4); return true;
    // src/overworld/actionscript/script/3B_45.asm:10 STA ENTITY_ANIMATION_FRAME,X
    case 0xC096BD: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/overworld/actionscript/script/3B_45.asm:11 INY
    case 0xC096C0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3B_45.asm:12 RTS
    case 0xC096C1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3C_46.asm (source_named).
bool execute_overworld_actionscript_script_3c_46_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3C_46.asm:3 LDX $88
    case 0xC09A17: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3C_46.asm:4 INC ENTITY_ANIMATION_FRAME,X
    case 0xC09A19: cpu.execute_instruction<0xFE>(0x0010E8, 3); return true;
    // src/overworld/actionscript/script/3C_46.asm:5 RTS
    case 0xC09A1C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3D_47.asm (source_named).
bool execute_overworld_actionscript_script_3d_47_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3D_47.asm:3 LDX $88
    case 0xC09A1D: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3D_47.asm:4 DEC ENTITY_ANIMATION_FRAME,X
    case 0xC09A1F: cpu.execute_instruction<0xDE>(0x0010E8, 3); return true;
    // src/overworld/actionscript/script/3D_47.asm:5 RTS
    case 0xC09A22: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3E_48.asm (source_named).
bool execute_overworld_actionscript_script_3e_48_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3E_48.asm:3 LDX $88
    case 0xC09A23: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:4 LDA [$80],Y
    case 0xC09A25: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:5 AND #$00FF
    case 0xC09A27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC09A27.
    case 0xC09A29: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:6 CMP #$0080
    case 0xC09A2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:6 CMP #$0080
    // Overlapping static entry reached from 0xC09A2A.
    case 0xC09A2C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:7 BCC @UNKNOWN0
    case 0xC09A2D: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:8 ORA #$FF00
    case 0xC09A2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:8 ORA #$FF00
    // Overlapping static entry reached from 0xC09A2F.
    case 0xC09A31: cpu.execute_instruction<0xFF>(0xE87D18, 4); return true;
    // src/overworld/actionscript/script/3E_48.asm:9 CLC
    case 0xC09A32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3E_48.asm:11 ADC ENTITY_ANIMATION_FRAME,X
    case 0xC09A33: cpu.execute_instruction<0x7D>(0x0010E8, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:11 ADC ENTITY_ANIMATION_FRAME,X
    // Overlapping static entry reached from 0xC09A31.
    case 0xC09A35: cpu.execute_instruction<0x10>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:12 STA ENTITY_ANIMATION_FRAME,X
    case 0xC09A36: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:12 STA ENTITY_ANIMATION_FRAME,X
    // Overlapping static entry reached from 0xC09A35.
    case 0xC09A37: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3E_48.asm:12 STA ENTITY_ANIMATION_FRAME,X
    // Overlapping static entry reached from 0xC09A37.
    case 0xC09A38: cpu.execute_instruction<0x10>(0x0000C8, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:13 INY
    case 0xC09A39: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3E_48.asm:14 RTS
    case 0xC09A3A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3F_49.asm (source_named).
bool execute_overworld_actionscript_script_3f_49_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3F_49.asm:3 LDX $88
    case 0xC096F2: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:4 LDA [$80],Y
    case 0xC096F4: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:5 INY
    case 0xC096F6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3F_49.asm:6 INY
    case 0xC096F7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3F_49.asm:7 STA $90
    case 0xC096F8: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:8 AND #$00FF
    case 0xC096FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC096FA.
    case 0xC096FC: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:9 XBA
    case 0xC096FD: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3F_49.asm:10 STA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC096FE: cpu.execute_instruction<0x9D>(0x000DA0, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:11 LDA $90
    case 0xC09701: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:12 AND #$FF00
    case 0xC09703: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:12 AND #$FF00
    // Overlapping static entry reached from 0xC09703.
    case 0xC09705: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/3F_49.asm:13 BPL @UNKNOWN0
    case 0xC09706: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:14 ORA #$00FF
    case 0xC09708: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09705.
    case 0xC09709: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/3F_49.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09708.
    case 0xC0970A: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:16 XBA
    case 0xC0970B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3F_49.asm:17 STA ENTITY_DELTA_X_TABLE,X
    case 0xC0970C: cpu.execute_instruction<0x9D>(0x000CEC, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:17 STA ENTITY_DELTA_X_TABLE,X
    // Overlapping static entry reached from 0xC09709.
    case 0xC0970D: cpu.execute_instruction<0xEC>(0x00600C, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:18 RTS
    case 0xC0970F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/40_4A.asm (source_named).
bool execute_overworld_actionscript_script_40_4a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/40_4A.asm:3 LDX $88
    case 0xC09710: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:4 LDA [$80],Y
    case 0xC09712: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:5 INY
    case 0xC09714: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/40_4A.asm:6 INY
    case 0xC09715: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/40_4A.asm:7 STA $90
    case 0xC09716: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:8 AND #$00FF
    case 0xC09718: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09718.
    case 0xC0971A: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:9 XBA
    case 0xC0971B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/40_4A.asm:10 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0971C: cpu.execute_instruction<0x9D>(0x000DDC, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:11 LDA $90
    case 0xC0971F: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:12 AND #$FF00
    case 0xC09721: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:12 AND #$FF00
    // Overlapping static entry reached from 0xC09721.
    case 0xC09723: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/40_4A.asm:13 BPL @UNKNOWN0
    case 0xC09724: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:14 ORA #$00FF
    case 0xC09726: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09723.
    case 0xC09727: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/40_4A.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09726.
    case 0xC09728: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:16 XBA
    case 0xC09729: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/40_4A.asm:17 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC0972A: cpu.execute_instruction<0x9D>(0x000D28, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:17 STA ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC09727.
    case 0xC0972B: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/actionscript/script/40_4A.asm:17 STA ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC0972B.
    case 0xC0972C: cpu.execute_instruction<0x0D>(0x00A660, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:18 RTS
    case 0xC0972D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/41_4B.asm (source_named).
bool execute_overworld_actionscript_script_41_4b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/41_4B.asm:3 LDX $88
    case 0xC0972E: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:3 LDX $88
    // Overlapping static entry reached from 0xC0972C.
    case 0xC0972F: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/41_4B.asm:4 LDA [$80],Y
    case 0xC09730: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:5 INY
    case 0xC09732: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/41_4B.asm:6 INY
    case 0xC09733: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/41_4B.asm:7 STA $90
    case 0xC09734: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:8 AND #$00FF
    case 0xC09736: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09736.
    case 0xC09738: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:9 XBA
    case 0xC09739: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/41_4B.asm:10 STA ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC0973A: cpu.execute_instruction<0x9D>(0x000E18, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:11 LDA $90
    case 0xC0973D: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:12 AND #$FF00
    case 0xC0973F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:12 AND #$FF00
    // Overlapping static entry reached from 0xC0973F.
    case 0xC09741: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/41_4B.asm:13 BPL @UNKNOWN0
    case 0xC09742: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:14 ORA #$00FF
    case 0xC09744: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09741.
    case 0xC09745: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/41_4B.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09744.
    case 0xC09746: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:16 XBA
    case 0xC09747: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/41_4B.asm:17 STA ENTITY_DELTA_Z_TABLE,X
    case 0xC09748: cpu.execute_instruction<0x9D>(0x000D64, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:17 STA ENTITY_DELTA_Z_TABLE,X
    // Overlapping static entry reached from 0xC09745.
    case 0xC09749: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:18 RTS
    case 0xC0974B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/42_4C.asm (source_named).
bool execute_overworld_actionscript_script_42_4c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/42_4C.asm:3 LDA [$80],Y
    case 0xC0991C: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:4 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC0991E: cpu.execute_instruction<0x8D>(0x000A50, 3); return true;
    // src/overworld/actionscript/script/42_4C.asm:5 INY
    case 0xC09921: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/42_4C.asm:6 INY
    case 0xC09922: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/42_4C.asm:7 LDA [$80],Y
    case 0xC09923: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:8 INY
    case 0xC09925: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/42_4C.asm:9 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC09926: cpu.execute_instruction<0x8D>(0x000A52, 3); return true;
    // src/overworld/actionscript/script/42_4C.asm:10 STY $94
    case 0xC09929: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:11 LDX $8A
    case 0xC0992B: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:12 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0992D: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/42_4C.asm:13 JSL JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC09930: cpu.execute_instruction<0x22>(0xC09D7D, 4); return true;
    // src/overworld/actionscript/script/42_4C.asm:14 LDX $8A
    case 0xC09934: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:15 STA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09936: cpu.execute_instruction<0x9D>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/42_4C.asm:16 LDY $94
    case 0xC09939: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:17 RTS
    case 0xC0993B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/43.asm (source_named).
bool execute_overworld_actionscript_script_43_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/43.asm:3 LDX $88
    case 0xC09910: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/43.asm:4 LDA [$80],Y
    case 0xC09912: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/43.asm:5 AND #$00FF
    case 0xC09914: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/43.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC09914.
    case 0xC09916: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/overworld/actionscript/script/43.asm:6 INY
    case 0xC09917: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/43.asm:7 STA ENTITY_DRAW_PRIORITY,X
    case 0xC09918: cpu.execute_instruction<0x9D>(0x001034, 3); return true;
    // src/overworld/actionscript/script/43.asm:8 RTS
    case 0xC0991B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/44.asm (source_named).
bool execute_overworld_actionscript_script_44_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/44.asm:3 LDX $8A
    case 0xC09B88: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/44.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B8A: cpu.execute_instruction<0xBD>(0x00150C, 3); return true;
    // src/overworld/actionscript/script/44.asm:5 BEQ @RETURN
    case 0xC09B8D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/actionscript/script/44.asm:6 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09B8F: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // src/overworld/actionscript/script/44.asm:8 RTS
    case 0xC09B92: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/read16.asm (source_named).
bool execute_overworld_actionscript_script_read16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/read16.asm:3 LDA [$80],Y
    case 0xC09D73: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/read16.asm:4 INY
    case 0xC09D75: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read16.asm:5 INY
    case 0xC09D76: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read16.asm:6 RTL
    case 0xC09D77: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/read16_copy.asm (source_named).
bool execute_overworld_actionscript_script_read16_copy_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/read16_copy.asm:3 LDA [$80],Y
    case 0xC09D78: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/read16_copy.asm:4 INY
    case 0xC09D7A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read16_copy.asm:5 INY
    case 0xC09D7B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read16_copy.asm:6 RTS
    case 0xC09D7C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/read8.asm (source_named).
bool execute_overworld_actionscript_script_read8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/read8.asm:3 LDA [$80],Y
    case 0xC09D65: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/read8.asm:4 INY
    case 0xC09D67: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read8.asm:5 AND #$00FF
    case 0xC09D68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/read8.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC09D68.
    case 0xC09D6A: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/overworld/actionscript/script/read8.asm:6 RTL
    case 0xC09D6B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/read8_copy.asm (source_named).
bool execute_overworld_actionscript_script_read8_copy_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/read8_copy.asm:3 LDA [$80],Y
    case 0xC09D6C: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/read8_copy.asm:4 INY
    case 0xC09D6E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read8_copy.asm:5 AND #$00FF
    case 0xC09D6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/read8_copy.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC09D6F.
    case 0xC09D71: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/overworld/actionscript/script/read8_copy.asm:6 RTS
    case 0xC09D72: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/set_direction.asm (source_named).
bool execute_overworld_actionscript_set_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/set_direction.asm:3 LDX $88
    case 0xC0A63E: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/set_direction.asm:4 TAY
    case 0xC0A640: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/set_direction.asm:5 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0A641: cpu.execute_instruction<0xBD>(0x00305C, 3); return true;
    // src/overworld/actionscript/set_direction.asm:6 BMI @UNKNOWN0
    case 0xC0A644: cpu.execute_instruction<0x30>(0x000004, 2); return true;
    // src/overworld/actionscript/set_direction.asm:7 TYA
    case 0xC0A646: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/set_direction.asm:8 STA ENTITY_DIRECTIONS,X
    case 0xC0A647: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/overworld/actionscript/set_direction.asm:10 TYA
    case 0xC0A64A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/set_direction.asm:11 RTL
    case 0xC0A64B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/set_direction8.asm (source_named).
bool execute_overworld_actionscript_set_direction8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/set_direction8.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A630: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/overworld/actionscript/set_direction8.asm:4 STY $94
    case 0xC0A634: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/set_direction8.asm:5 JSL SET_DIRECTION
    case 0xC0A636: cpu.execute_instruction<0x22>(0xC0A63E, 4); return true;
    // src/overworld/actionscript/set_direction8.asm:6 STA ENTITY_MOVING_DIRECTIONS,X
    case 0xC0A63A: cpu.execute_instruction<0x9D>(0x001A7C, 3); return true;
    // src/overworld/actionscript/set_direction8.asm:7 RTL
    case 0xC0A63D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/set_surface_flags.asm (source_named).
bool execute_overworld_actionscript_set_surface_flags_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/set_surface_flags.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A658: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/overworld/actionscript/set_surface_flags.asm:4 STY $94
    case 0xC0A65C: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/set_surface_flags.asm:5 LDX $88
    case 0xC0A65E: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/set_surface_flags.asm:6 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0A660: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // src/overworld/actionscript/set_surface_flags.asm:7 RTL
    case 0xC0A663: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/simple_screen_position_callback.asm (source_named).
bool execute_overworld_actionscript_simple_screen_position_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4622B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4622D: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:6 ASL
    case 0xC46230: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:7 TAX
    case 0xC46231: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46232: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:9 SEC
    case 0xC46235: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:10 SBC BG1_X_POS
    case 0xC46236: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:11 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC46239: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC4623C: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:13 ASL
    case 0xC4623F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:14 TAX
    case 0xC46240: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:15 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46241: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:16 SEC
    case 0xC46244: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:17 SBC BG1_Y_POS
    case 0xC46245: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:18 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC46248: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback.asm:19 END_C_FUNCTION
    case 0xC4624B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/simple_screen_position_callback_offset.asm (source_named).
bool execute_overworld_actionscript_simple_screen_position_callback_offset_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback_offset.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4624C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4624E: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:6 ASL
    case 0xC46251: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:7 TAX
    case 0xC46252: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46253: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:9 SEC
    case 0xC46256: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:10 SBC BG1_X_POS
    case 0xC46257: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:11 CLC
    case 0xC4625A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:12 ADC ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4625B: cpu.execute_instruction<0x7D>(0x000E54, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:13 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC4625E: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xC46261: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:15 ASL
    case 0xC46264: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:16 TAX
    case 0xC46265: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:17 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46266: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:18 SEC
    case 0xC46269: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:19 SBC BG1_Y_POS
    case 0xC4626A: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:20 CLC
    case 0xC4626D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:21 ADC ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC4626E: cpu.execute_instruction<0x7D>(0x000E90, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:22 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC46271: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback_offset.asm:23 END_C_FUNCTION
    case 0xC46274: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/test_player_in_area.asm (source_named).
bool execute_overworld_actionscript_test_player_in_area_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44BF8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC44BFA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC44BFB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC44BFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44BFC.
    case 0xC44BFE: cpu.execute_instruction<0xFF>(0x41AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC44BFF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:9 LDA PSI_TELEPORT_DESTINATION
    case 0xC44C00: cpu.execute_instruction<0xAD>(0x00A141, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:9 LDA PSI_TELEPORT_DESTINATION
    // Overlapping static entry reached from 0xC44BFE.
    case 0xC44C02: cpu.execute_instruction<0xA1>(0x0000F0, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:10 BEQ @UNKNOWN0
    case 0xC44C03: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:10 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC44C02.
    case 0xC44C04: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    case 0xC44C05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    // Overlapping static entry reached from 0xC44C04.
    case 0xC44C06: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    // Overlapping static entry reached from 0xC44C05.
    case 0xC44C07: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:12 BRA @UNKNOWN10
    case 0xC44C08: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:14 LDY CURRENT_ENTITY_SLOT
    case 0xC44C0A: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:15 TYA
    case 0xC44C0D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:16 ASL
    case 0xC44C0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:17 TAX
    case 0xC44C0F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:18 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC44C10: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:19 SEC
    case 0xC44C13: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:20 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC44C14: cpu.execute_instruction<0xED>(0x009B28, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:21 STA @LOCAL01
    case 0xC44C17: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:22 STA @VIRTUAL02
    case 0xC44C19: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:23 LDA #0
    case 0xC44C1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:23 LDA #0
    // Overlapping static entry reached from 0xC44C1B.
    case 0xC44C1D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:24 CLC
    case 0xC44C1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:25 SBC @VIRTUAL02
    case 0xC44C1F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC44C21: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC44C23: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC44C25: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC44C27: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:27 LDA @LOCAL01
    case 0xC44C29: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:28 EOR #$FFFF
    case 0xC44C2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:28 EOR #$FFFF
    // Overlapping static entry reached from 0xC44C2B.
    case 0xC44C2D: cpu.execute_instruction<0xFF>(0x0E851A, 4); return true;
    // src/overworld/actionscript/test_player_in_area.asm:29 INC
    case 0xC44C2E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:30 STA @LOCAL00
    case 0xC44C2F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:31 BRA @UNKNOWN4
    case 0xC44C31: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:33 LDA @LOCAL01
    case 0xC44C33: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:34 STA @LOCAL00
    case 0xC44C35: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:36 TYA
    case 0xC44C37: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:37 ASL
    case 0xC44C38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:38 TAX
    case 0xC44C39: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:39 LDA @LOCAL00
    case 0xC44C3A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:40 CMP ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC44C3C: cpu.execute_instruction<0xDD>(0x000ECC, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:41 BCS @UNKNOWN9
    case 0xC44C3F: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:42 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC44C41: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:43 SEC
    case 0xC44C44: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:44 SBC GAME_STATE+game_state::leader_y_coord
    case 0xC44C45: cpu.execute_instruction<0xED>(0x009B2C, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:45 STA @LOCAL01
    case 0xC44C48: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:46 STA @VIRTUAL02
    case 0xC44C4A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:47 LDA #0
    case 0xC44C4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:47 LDA #0
    // Overlapping static entry reached from 0xC44C4C.
    case 0xC44C4E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:48 CLC
    case 0xC44C4F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:49 SBC @VIRTUAL02
    case 0xC44C50: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC44C52: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC44C54: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC44C56: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC44C58: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:51 LDA @LOCAL01
    case 0xC44C5A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:52 EOR #$FFFF
    case 0xC44C5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:52 EOR #$FFFF
    // Overlapping static entry reached from 0xC44C5C.
    case 0xC44C5E: cpu.execute_instruction<0xFF>(0x10851A, 4); return true;
    // src/overworld/actionscript/test_player_in_area.asm:53 INC
    case 0xC44C5F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:54 STA @LOCAL01
    case 0xC44C60: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:55 BRA @UNKNOWN8
    case 0xC44C62: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:57 LDA @LOCAL01
    case 0xC44C64: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:58 STA @LOCAL01
    case 0xC44C66: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:60 TYA
    case 0xC44C68: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:61 ASL
    case 0xC44C69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:62 TAX
    case 0xC44C6A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:63 LDA @LOCAL01
    case 0xC44C6B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:64 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC44C6D: cpu.execute_instruction<0xDD>(0x000F08, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:65 BCS @UNKNOWN9
    case 0xC44C70: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:66 LDA #TRUE
    case 0xC44C72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:66 LDA #TRUE
    // Overlapping static entry reached from 0xC44C72.
    case 0xC44C74: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:67 BRA @UNKNOWN10
    case 0xC44C75: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:69 LDA #FALSE
    case 0xC44C77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:69 LDA #FALSE
    // Overlapping static entry reached from 0xC44C77.
    case 0xC44C79: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:71 END_C_FUNCTION
    case 0xC44C7A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:71 END_C_FUNCTION
    case 0xC44C7B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/activate_hotspot.asm (source_named).
bool execute_overworld_activate_hotspot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/activate_hotspot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07507: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC07509: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC0750A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC0750B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC0750C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC0750C.
    case 0xC0750E: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC0750F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC07510: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:16 STX @LOCAL06
    case 0xC07511: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/overworld/activate_hotspot.asm:16 STX @LOCAL06
    // Overlapping static entry reached from 0xC0750E.
    case 0xC07512: cpu.execute_instruction<0x1C>(0x001A85, 3); return true;
    // src/overworld/activate_hotspot.asm:17 STA @LOCAL05
    case 0xC07513: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC07515: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC07517: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC07519: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC0751B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC0751D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x00F25B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0751D.
    case 0xC0751F: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07520: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0751F.
    case 0xC07521: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07522: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07521.
    case 0xC07523: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07522.
    case 0xC07524: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07525: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/activate_hotspot.asm:20 LDA @LOCAL06
    case 0xC07527: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/activate_hotspot.asm:21 ASL
    case 0xC07529: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:22 ASL
    case 0xC0752A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:23 ASL
    case 0xC0752B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:24 CLC
    case 0xC0752C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:25 ADC @VIRTUAL06
    case 0xC0752D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:26 STA @VIRTUAL06
    case 0xC0752F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:27 STA @LOCAL04
    case 0xC07531: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/activate_hotspot.asm:28 LDA @VIRTUAL06+2
    case 0xC07533: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/activate_hotspot.asm:29 STA @LOCAL04+2
    case 0xC07535: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/activate_hotspot.asm:30 LDA @LOCAL05
    case 0xC07537: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/activate_hotspot.asm:31 DEC
    case 0xC07539: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0753A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0753C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0753D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0753F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07540: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07542: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:33 CLC
    case 0xC07543: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:34 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC07544: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0061C2, 3); return true;
    // src/overworld/activate_hotspot.asm:34 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC07544.
    case 0xC07546: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/overworld/activate_hotspot.asm:35 TAY
    case 0xC07547: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:36 STY @LOCAL03
    case 0xC07548: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/activate_hotspot.asm:37 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0754A: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/overworld/activate_hotspot.asm:38 STA @LOCAL02
    case 0xC0754D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/activate_hotspot.asm:39 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0754F: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/overworld/activate_hotspot.asm:40 LDA [@VIRTUAL06]
    case 0xC07552: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:41 ASL
    case 0xC07554: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:42 ASL
    case 0xC07555: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:43 ASL
    case 0xC07556: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:44 STA @LOCAL01
    case 0xC07557: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07559: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0755B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0755D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0755F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/activate_hotspot.asm:46 LDY #2
    case 0xC07561: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/activate_hotspot.asm:46 LDY #2
    // Overlapping static entry reached from 0xC07561.
    case 0xC07563: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/activate_hotspot.asm:47 LDA [@VIRTUAL06],Y
    case 0xC07564: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:48 ASL
    case 0xC07566: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:49 ASL
    case 0xC07567: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:50 ASL
    case 0xC07568: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:51 STA @LOCAL00
    case 0xC07569: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/activate_hotspot.asm:52 LDY #4
    case 0xC0756B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/activate_hotspot.asm:52 LDY #4
    // Overlapping static entry reached from 0xC0756B.
    case 0xC0756D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/activate_hotspot.asm:53 LDA [@VIRTUAL06],Y
    case 0xC0756E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:54 ASL
    case 0xC07570: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:55 ASL
    case 0xC07571: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:56 ASL
    case 0xC07572: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:57 STA @VIRTUAL02
    case 0xC07573: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/activate_hotspot.asm:58 LDY #6
    case 0xC07575: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/activate_hotspot.asm:58 LDY #6
    // Overlapping static entry reached from 0xC07575.
    case 0xC07577: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/activate_hotspot.asm:59 LDA [@VIRTUAL06],Y
    case 0xC07578: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:60 ASL
    case 0xC0757A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:61 ASL
    case 0xC0757B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:62 ASL
    case 0xC0757C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:63 STA @VIRTUAL04
    case 0xC0757D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/activate_hotspot.asm:64 LDA @LOCAL02
    case 0xC0757F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/activate_hotspot.asm:65 CMP @LOCAL01
    case 0xC07581: cpu.execute_instruction<0xC5>(0x000010, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/activate_hotspot.asm:66 BLTEQ @UNKNOWN0
    case 0xC07583: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/activate_hotspot.asm:66 BLTEQ @UNKNOWN0
    case 0xC07585: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/overworld/activate_hotspot.asm:67 CMP @VIRTUAL02
    case 0xC07587: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/activate_hotspot.asm:68 BCS @UNKNOWN0
    case 0xC07589: cpu.execute_instruction<0xB0>(0x000010, 2); return true;
    // src/overworld/activate_hotspot.asm:69 CPX @LOCAL00
    case 0xC0758B: cpu.execute_instruction<0xE4>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/activate_hotspot.asm:70 BLTEQ @UNKNOWN0
    case 0xC0758D: cpu.execute_instruction<0x90>(0x00000C, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/activate_hotspot.asm:70 BLTEQ @UNKNOWN0
    case 0xC0758F: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/activate_hotspot.asm:71 TXA
    case 0xC07591: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:72 CMP @VIRTUAL04
    case 0xC07592: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/overworld/activate_hotspot.asm:73 BCS @UNKNOWN0
    case 0xC07594: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/overworld/activate_hotspot.asm:74 LDX #1
    case 0xC07596: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/activate_hotspot.asm:74 LDX #1
    // Overlapping static entry reached from 0xC07596.
    case 0xC07598: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/activate_hotspot.asm:75 BRA @UNKNOWN1
    case 0xC07599: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/activate_hotspot.asm:77 LDX #2
    case 0xC0759B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/activate_hotspot.asm:77 LDX #2
    // Overlapping static entry reached from 0xC0759B.
    case 0xC0759D: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/activate_hotspot.asm:79 TXA
    case 0xC0759E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:80 LDY @LOCAL03
    case 0xC0759F: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/activate_hotspot.asm:81 STA a:active_hotspot::mode,Y
    case 0xC075A1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/overworld/activate_hotspot.asm:82 LDA @LOCAL01
    case 0xC075A4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/activate_hotspot.asm:83 STA a:active_hotspot::x1,Y
    case 0xC075A6: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/activate_hotspot.asm:84 LDA @VIRTUAL02
    case 0xC075A9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/activate_hotspot.asm:85 STA a:active_hotspot::x2,Y
    case 0xC075AB: cpu.execute_instruction<0x99>(0x000006, 3); return true;
    // src/overworld/activate_hotspot.asm:86 LDA @LOCAL00
    case 0xC075AE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/activate_hotspot.asm:87 STA a:active_hotspot::y1,Y
    case 0xC075B0: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/overworld/activate_hotspot.asm:88 LDA @VIRTUAL04
    case 0xC075B3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/activate_hotspot.asm:89 STA a:active_hotspot::y2,Y
    case 0xC075B5: cpu.execute_instruction<0x99>(0x000008, 3); return true;
    // src/overworld/activate_hotspot.asm:90 TYA
    case 0xC075B8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:91 CLC
    case 0xC075B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:92 ADC #active_hotspot::pointer
    case 0xC075BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/overworld/activate_hotspot.asm:92 ADC #active_hotspot::pointer
    // Overlapping static entry reached from 0xC075BA.
    case 0xC075BC: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/activate_hotspot.asm:93 TAY
    case 0xC075BD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075BE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075C0: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075C3: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075C5: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/activate_hotspot.asm:95 LDA @LOCAL05
    case 0xC075C8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/activate_hotspot.asm:96 DEC
    case 0xC075CA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:97 STA @LOCAL02
    case 0xC075CB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/activate_hotspot.asm:98 CLC
    case 0xC075CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:99 ADC #.LOWORD(GAME_STATE)
    case 0xC075CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/activate_hotspot.asm:99 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC075CE.
    case 0xC075D0: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:100 TAY
    case 0xC075D1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:101 TXA
    case 0xC075D2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC075D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/activate_hotspot.asm:103 STA __BSS_START__ + game_state::active_hotspot_modes,Y
    case 0xC075D5: cpu.execute_instruction<0x99>(0x0000C5, 3); return true;
    // src/overworld/activate_hotspot.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC075D8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/activate_hotspot.asm:105 LDA @LOCAL06
    case 0xC075DA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/activate_hotspot.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC075DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/activate_hotspot.asm:107 STA __BSS_START__+game_state::active_hotspot_ids,Y
    case 0xC075DE: cpu.execute_instruction<0x99>(0x0000C7, 3); return true;
    // src/overworld/activate_hotspot.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC075E1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/activate_hotspot.asm:109 LDA @LOCAL02
    case 0xC075E3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/activate_hotspot.asm:110 ASL
    case 0xC075E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:111 ASL
    case 0xC075E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:112 CLC
    case 0xC075E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:114 ADC #.LOWORD(GAME_STATE)
    case 0xC075E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/activate_hotspot.asm:114 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC075E8.
    case 0xC075EA: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:115 CLC
    case 0xC075EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:116 ADC #game_state::active_hotspot_pointers
    case 0xC075EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x0000C9, 3); return true;
    // src/overworld/activate_hotspot.asm:116 ADC #game_state::active_hotspot_pointers
    // Overlapping static entry reached from 0xC075EC.
    case 0xC075EE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/activate_hotspot.asm:120 TAY
    case 0xC075EF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075F0: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075F2: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075F5: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075F7: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/activate_hotspot.asm:122 END_C_FUNCTION
    case 0xC075FA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/activate_hotspot.asm:122 END_C_FUNCTION
    case 0xC075FB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/adjust_position_horizontal.asm (source_named).
bool execute_overworld_adjust_position_horizontal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_position_horizontal.asm:3 BEGIN_C_FUNCTION
    case 0xC02F6A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F6C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F6D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F6E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC02F6F.
    case 0xC02F71: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F72: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F73: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:12 TAY
    case 0xC02F74: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02F75: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02F77: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02F79: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02F7B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02F7D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02F7F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02F81: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02F83: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:15 TXA
    case 0xC02F85: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    case 0xC02F86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC02F86.
    case 0xC02F88: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    case 0xC02F89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    // Overlapping static entry reached from 0xC02F89.
    case 0xC02F8B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:18 BEQ @IN_SHALLOW_WATER
    case 0xC02F8C: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    case 0xC02F8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC02F8E.
    case 0xC02F90: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:20 BEQL @IN_DEEP_WATER
    case 0xC02F91: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:20 BEQL @IN_DEEP_WATER
    case 0xC02F93: cpu.execute_instruction<0x4C>(0x003034, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:21 JMP @NOT_IN_WATER
    case 0xC02F96: cpu.execute_instruction<0x4C>(0x0030CF, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:23 TYA
    case 0xC02F99: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:24 ASL
    case 0xC02F9A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:25 ASL
    case 0xC02F9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:26 STA @VIRTUAL02
    case 0xC02F9C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:27 LDA GAME_STATE+game_state::walking_style
    case 0xC02F9E: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:28 ASL
    case 0xC02FA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:29 ASL
    case 0xC02FA2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:30 ASL
    case 0xC02FA3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:31 ASL
    case 0xC02FA4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:32 ASL
    case 0xC02FA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:33 CLC
    case 0xC02FA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:34 ADC @VIRTUAL02
    case 0xC02FA7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:35 CLC
    case 0xC02FA9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:36 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02FAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:36 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02FAA.
    case 0xC02FAC: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:37 TAY
    case 0xC02FAD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02FAE: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02FB1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02FB3: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02FB6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FB8: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FBA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FBC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FBE: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC4: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC6: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FD0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FD2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FD4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FD6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FD8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02FDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02FDA.
    case 0xC02FDC: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02FDD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02FDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02FDF.
    case 0xC02FE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02FE2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:43 JSL MULT32
    case 0xC02FE4: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FE8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FEA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FEC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FEE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FF0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FF2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FF4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FF6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:46 PHA
    case 0xC02FF8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:47 LDA @VIRTUAL06
    case 0xC02FF9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:48 PHA
    case 0xC02FFB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FFC: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FFE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03000: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03002: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03004: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03006: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03008: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0300A: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0300C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0300E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03010: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03012: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03014: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC03016: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC03017: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC03019: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC0301A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:52 CLC
    case 0xC0301C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0301D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0301F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03021: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03023: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03025: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03027: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03029: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0302B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0302D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0302F: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:55 JMP @UNKNOWN14
    case 0xC03031: cpu.execute_instruction<0x4C>(0x0031F0, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:57 TYA
    case 0xC03034: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:58 ASL
    case 0xC03035: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:59 ASL
    case 0xC03036: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:60 STA @VIRTUAL02
    case 0xC03037: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:61 LDA GAME_STATE+game_state::walking_style
    case 0xC03039: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:62 ASL
    case 0xC0303C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:63 ASL
    case 0xC0303D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:64 ASL
    case 0xC0303E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:65 ASL
    case 0xC0303F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:66 ASL
    case 0xC03040: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:67 CLC
    case 0xC03041: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:68 ADC @VIRTUAL02
    case 0xC03042: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:69 CLC
    case 0xC03044: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:70 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC03045: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:70 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03045.
    case 0xC03047: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:71 TAY
    case 0xC03048: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03049: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0304C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0304E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03051: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03053: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03055: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03057: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03059: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0305B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0305D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0305F: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03061: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03063: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03065: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03067: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03069: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0306B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0306D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0306F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03071: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03073: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03075: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00547A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03075.
    case 0xC03077: cpu.execute_instruction<0x54>(0x000A85, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03078: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC0307A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0307A.
    case 0xC0307C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC0307D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:77 JSL MULT32
    case 0xC0307F: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03083: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03085: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03087: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03089: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0308B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0308D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0308F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03091: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:80 PHA
    case 0xC03093: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:81 LDA @VIRTUAL06
    case 0xC03094: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:82 PHA
    case 0xC03096: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03097: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03099: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0309B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0309D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0309F: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A5: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030AB: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030AD: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC030B1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC030B2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC030B4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC030B5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:86 CLC
    case 0xC030B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030B8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030BA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030C0: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030C2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030C4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030C6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030C8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030CA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:89 JMP @UNKNOWN14
    case 0xC030CC: cpu.execute_instruction<0x4C>(0x0031F0, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:91 LDA DEMO_FRAMES_LEFT
    case 0xC030CF: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:92 BEQ @UNKNOWN8
    case 0xC030D2: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:93 TYA
    case 0xC030D4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:94 ASL
    case 0xC030D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:95 ASL
    case 0xC030D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:96 STA @VIRTUAL02
    case 0xC030D7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:97 LDA GAME_STATE+game_state::walking_style
    case 0xC030D9: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:98 ASL
    case 0xC030DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:99 ASL
    case 0xC030DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:100 ASL
    case 0xC030DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:101 ASL
    case 0xC030DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:102 ASL
    case 0xC030E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:103 CLC
    case 0xC030E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:104 ADC @VIRTUAL02
    case 0xC030E2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:105 CLC
    case 0xC030E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:106 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC030E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:106 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC030E5.
    case 0xC030E7: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:107 TAY
    case 0xC030E8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC030E9: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC030EC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC030EE: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC030F1: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:109 CLC
    case 0xC030F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030F4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030F6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030F8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030FC: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030FE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03100: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03102: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03104: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03106: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:112 JMP @UNKNOWN14
    case 0xC03108: cpu.execute_instruction<0x4C>(0x0031F0, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:114 LDA GAME_STATE + game_state::party_status
    case 0xC0310B: cpu.execute_instruction<0xAD>(0x009AF1, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:115 AND #$00FF
    case 0xC0310E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC0310E.
    case 0xC03110: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:116 CMP #3
    case 0xC03111: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:116 CMP #3
    // Overlapping static entry reached from 0xC03111.
    case 0xC03113: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:117 BNEL @UNKNOWN13
    case 0xC03114: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:117 BNEL @UNKNOWN13
    case 0xC03116: cpu.execute_instruction<0x4C>(0x0031BC, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:118 LDA GAME_STATE+game_state::walking_style
    case 0xC03119: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:119 STA @LOCAL00
    case 0xC0311C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:120 BNEL @UNKNOWN13
    case 0xC0311E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:120 BNEL @UNKNOWN13
    case 0xC03120: cpu.execute_instruction<0x4C>(0x0031BC, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:121 TYA
    case 0xC03123: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:122 ASL
    case 0xC03124: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:123 ASL
    case 0xC03125: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:124 STA @VIRTUAL02
    case 0xC03126: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:125 LDA @LOCAL00
    case 0xC03128: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:126 ASL
    case 0xC0312A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:127 ASL
    case 0xC0312B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:128 ASL
    case 0xC0312C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:129 ASL
    case 0xC0312D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:130 ASL
    case 0xC0312E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:131 CLC
    case 0xC0312F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:132 ADC @VIRTUAL02
    case 0xC03130: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:133 CLC
    case 0xC03132: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:134 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC03133: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:134 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03133.
    case 0xC03135: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:135 TAY
    case 0xC03136: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03137: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0313A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0313C: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0313F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03141: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03143: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03145: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03147: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03149: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC0314B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC0314D: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC0314F: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03151: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03153: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03155: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03157: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03159: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0315B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0315D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0315F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03161: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03163.
    case 0xC03165: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03166: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03168: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03168.
    case 0xC0316A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC0316B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:141 JSL MULT32
    case 0xC0316D: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03171: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03173: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03175: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03177: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03179: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0317B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0317D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0317F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:144 PHA
    case 0xC03181: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:145 LDA @VIRTUAL06
    case 0xC03182: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:146 PHA
    case 0xC03184: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03185: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03187: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03189: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0318B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0318D: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0318F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03191: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03193: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03195: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03197: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03199: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0319B: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0319D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC0319F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC031A0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC031A2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC031A3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:150 CLC
    case 0xC031A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031AE: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B4: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B8: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:153 BRA @UNKNOWN14
    case 0xC031BA: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:155 TYA
    case 0xC031BC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:156 ASL
    case 0xC031BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:157 ASL
    case 0xC031BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:158 STA @VIRTUAL02
    case 0xC031BF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:159 LDA GAME_STATE+game_state::walking_style
    case 0xC031C1: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:160 ASL
    case 0xC031C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:161 ASL
    case 0xC031C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:162 ASL
    case 0xC031C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:163 ASL
    case 0xC031C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:164 ASL
    case 0xC031C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:165 CLC
    case 0xC031C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:166 ADC @VIRTUAL02
    case 0xC031CA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:167 CLC
    case 0xC031CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:168 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC031CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:168 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC031CD.
    case 0xC031CF: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:169 TAY
    case 0xC031D0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC031D1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC031D4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC031D6: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC031D9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:171 CLC
    case 0xC031DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031DC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031DE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031E2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031E4: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031E6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031E8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031EA: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC03264.
    case 0xC031EB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031EC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031EE: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:175 END_C_FUNCTION
    case 0xC031F0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_position_horizontal.asm:175 END_C_FUNCTION
    case 0xC031F1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/adjust_position_vertical.asm (source_named).
bool execute_overworld_adjust_position_vertical_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_position_vertical.asm:3 BEGIN_C_FUNCTION
    case 0xC031F2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031F4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031F6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC031F7.
    case 0xC031F9: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031FA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031FB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:12 TAY
    case 0xC031FC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC031FD: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC031FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03201: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03203: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03205: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03207: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03209: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0320B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/adjust_position_vertical.asm:15 TXA
    case 0xC0320D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    case 0xC0320E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC0320E.
    case 0xC03210: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/adjust_position_vertical.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    case 0xC03211: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/adjust_position_vertical.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    // Overlapping static entry reached from 0xC03211.
    case 0xC03213: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/adjust_position_vertical.asm:18 BEQ @IN_SHALLOW_WATER
    case 0xC03214: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/adjust_position_vertical.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    case 0xC03216: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC03216.
    case 0xC03218: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:20 BEQL @IN_DEEP_WATER
    case 0xC03219: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:20 BEQL @IN_DEEP_WATER
    case 0xC0321B: cpu.execute_instruction<0x4C>(0x0032BC, 3); return true;
    // src/overworld/adjust_position_vertical.asm:21 JMP @NOT_IN_WATER
    case 0xC0321E: cpu.execute_instruction<0x4C>(0x003357, 3); return true;
    // src/overworld/adjust_position_vertical.asm:23 TYA
    case 0xC03221: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:24 ASL
    case 0xC03222: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:25 ASL
    case 0xC03223: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:26 STA @VIRTUAL02
    case 0xC03224: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:27 LDA GAME_STATE+game_state::walking_style
    case 0xC03226: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_vertical.asm:28 ASL
    case 0xC03229: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:29 ASL
    case 0xC0322A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:30 ASL
    case 0xC0322B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:31 ASL
    case 0xC0322C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:32 ASL
    case 0xC0322D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:33 CLC
    case 0xC0322E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:34 ADC @VIRTUAL02
    case 0xC0322F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:35 CLC
    case 0xC03231: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:36 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC03232: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:36 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03232.
    case 0xC03234: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_vertical.asm:37 TAY
    case 0xC03235: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03236: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03239: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0323B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0323E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03240: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03242: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03244: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03246: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03248: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0324A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0324C: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0324E: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03250: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03252: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03254: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03256: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03258: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0325A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0325C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0325E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03260: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC03262: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03262.
    case 0xC03264: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC03265: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC03267: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03267.
    case 0xC03269: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC0326A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:43 JSL MULT32
    case 0xC0326C: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03270: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03272: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03274: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03276: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03278: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0327A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0327C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0327E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_vertical.asm:46 PHA
    case 0xC03280: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:47 LDA @VIRTUAL06
    case 0xC03281: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_vertical.asm:48 PHA
    case 0xC03283: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03284: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03286: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03288: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0328A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0328C: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0328E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    // Overlapping static entry reached from 0xC0AFFE.
    case 0xC0328F: cpu.execute_instruction<0x06>(0x0000E2, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03290: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    // Overlapping static entry reached from 0xC0328F.
    case 0xC03291: cpu.execute_instruction<0x20>(0x0009A5, 3); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03292: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03294: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03296: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03298: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0329A: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0329C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC0329E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC0329F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC032A1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC032A2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:52 CLC
    case 0xC032A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032A7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032A9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032AD: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032AF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC032B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC032B3: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC032B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC032B7: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:55 JMP @UNKNOWN14
    case 0xC032B9: cpu.execute_instruction<0x4C>(0x003478, 3); return true;
    // src/overworld/adjust_position_vertical.asm:57 TYA
    case 0xC032BC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:58 ASL
    case 0xC032BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:59 ASL
    case 0xC032BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:60 STA @VIRTUAL02
    case 0xC032BF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:61 LDA GAME_STATE+game_state::walking_style
    case 0xC032C1: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_vertical.asm:62 ASL
    case 0xC032C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:63 ASL
    case 0xC032C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:64 ASL
    case 0xC032C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:65 ASL
    case 0xC032C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:66 ASL
    case 0xC032C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:67 CLC
    case 0xC032C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:68 ADC @VIRTUAL02
    case 0xC032CA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:69 CLC
    case 0xC032CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:70 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC032CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:70 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC032CD.
    case 0xC032CF: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_vertical.asm:71 TAY
    case 0xC032D0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC032D1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC032D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC032D6: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC032D9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032DB: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032DD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032DF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E1: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E5: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E7: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E9: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032EB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC032ED: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC032EF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC032F1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC032F3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC032F5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC032F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC032F9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC032FB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC032FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00547A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC032FD.
    case 0xC032FF: cpu.execute_instruction<0x54>(0x000A85, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03300: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03302: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03302.
    case 0xC03304: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03305: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:77 JSL MULT32
    case 0xC03307: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0330B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0330D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0330F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03311: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03313: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03315: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03317: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03319: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_vertical.asm:80 PHA
    case 0xC0331B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:81 LDA @VIRTUAL06
    case 0xC0331C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_vertical.asm:82 PHA
    case 0xC0331E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0331F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03321: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03323: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03325: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03327: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03329: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0332B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0332D: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0332F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03331: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03333: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03335: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03337: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC03339: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0333A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0333C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0333D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:86 CLC
    case 0xC0333F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03340: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03342: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03344: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03346: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03348: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0334A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0334C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0334E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03350: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03352: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:89 JMP @UNKNOWN14
    case 0xC03354: cpu.execute_instruction<0x4C>(0x003478, 3); return true;
    // src/overworld/adjust_position_vertical.asm:91 LDA DEMO_FRAMES_LEFT
    case 0xC03357: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // src/overworld/adjust_position_vertical.asm:92 BEQ @UNKNOWN8
    case 0xC0335A: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/overworld/adjust_position_vertical.asm:93 TYA
    case 0xC0335C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:94 ASL
    case 0xC0335D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:95 ASL
    case 0xC0335E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:96 STA @VIRTUAL02
    case 0xC0335F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:97 LDA GAME_STATE+game_state::walking_style
    case 0xC03361: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_vertical.asm:98 ASL
    case 0xC03364: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:99 ASL
    case 0xC03365: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:100 ASL
    case 0xC03366: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:101 ASL
    case 0xC03367: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:102 ASL
    case 0xC03368: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:103 CLC
    case 0xC03369: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:104 ADC @VIRTUAL02
    case 0xC0336A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:105 CLC
    case 0xC0336C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:106 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC0336D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:106 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC0336D.
    case 0xC0336F: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_vertical.asm:107 TAY
    case 0xC03370: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03371: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03374: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03376: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03379: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:109 CLC
    case 0xC0337B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0337C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0337E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03380: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03382: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03384: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03386: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03388: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0338A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0338C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0338E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:112 JMP @UNKNOWN14
    case 0xC03390: cpu.execute_instruction<0x4C>(0x003478, 3); return true;
    // src/overworld/adjust_position_vertical.asm:114 LDA GAME_STATE + game_state::party_status
    case 0xC03393: cpu.execute_instruction<0xAD>(0x009AF1, 3); return true;
    // src/overworld/adjust_position_vertical.asm:115 AND #$00FF
    case 0xC03396: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_position_vertical.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC03396.
    case 0xC03398: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/adjust_position_vertical.asm:116 CMP #3
    case 0xC03399: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/adjust_position_vertical.asm:116 CMP #3
    // Overlapping static entry reached from 0xC03399.
    case 0xC0339B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:117 BNEL @UNKNOWN13
    case 0xC0339C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:117 BNEL @UNKNOWN13
    case 0xC0339E: cpu.execute_instruction<0x4C>(0x003444, 3); return true;
    // src/overworld/adjust_position_vertical.asm:118 LDA GAME_STATE+game_state::walking_style
    case 0xC033A1: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_vertical.asm:119 STA @LOCAL00
    case 0xC033A4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:120 BNEL @UNKNOWN13
    case 0xC033A6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:120 BNEL @UNKNOWN13
    case 0xC033A8: cpu.execute_instruction<0x4C>(0x003444, 3); return true;
    // src/overworld/adjust_position_vertical.asm:121 TYA
    case 0xC033AB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:122 ASL
    case 0xC033AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:123 ASL
    case 0xC033AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:124 STA @VIRTUAL02
    case 0xC033AE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:125 LDA @LOCAL00
    case 0xC033B0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_position_vertical.asm:126 ASL
    case 0xC033B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:127 ASL
    case 0xC033B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:128 ASL
    case 0xC033B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:129 ASL
    case 0xC033B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:130 ASL
    case 0xC033B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:131 CLC
    case 0xC033B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:132 ADC @VIRTUAL02
    case 0xC033B8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:133 CLC
    case 0xC033BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:134 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC033BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:134 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC033BB.
    case 0xC033BD: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_vertical.asm:135 TAY
    case 0xC033BE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC033BF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC033C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC033C4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC033C7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033C9: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033CD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033CF: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D3: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D5: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D7: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033DB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033DD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033DF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033E1: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC033E3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC033E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC033E7: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC033E9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC033EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC033EB.
    case 0xC033ED: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC033EE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC033F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC033F0.
    case 0xC033F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC033F3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:141 JSL MULT32
    case 0xC033F5: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033F9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033FB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033FF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03401: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03403: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03405: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03407: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_vertical.asm:144 PHA
    case 0xC03409: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:145 LDA @VIRTUAL06
    case 0xC0340A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_vertical.asm:146 PHA
    case 0xC0340C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0340D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0340F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03411: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03413: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03415: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03417: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03419: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0341B: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0341D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0341F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03421: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03423: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03425: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC03427: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC03428: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0342A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0342B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:150 CLC
    case 0xC0342D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0342E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03430: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03432: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03434: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03436: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03438: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0343A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0343C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0343E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03440: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:153 BRA @UNKNOWN14
    case 0xC03442: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/overworld/adjust_position_vertical.asm:155 TYA
    case 0xC03444: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:156 ASL
    case 0xC03445: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:157 ASL
    case 0xC03446: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:158 STA @VIRTUAL02
    case 0xC03447: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:159 LDA GAME_STATE+game_state::walking_style
    case 0xC03449: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/adjust_position_vertical.asm:160 ASL
    case 0xC0344C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:161 ASL
    case 0xC0344D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:162 ASL
    case 0xC0344E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:163 ASL
    case 0xC0344F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:164 ASL
    case 0xC03450: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:165 CLC
    case 0xC03451: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:166 ADC @VIRTUAL02
    case 0xC03452: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:167 CLC
    case 0xC03454: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:168 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC03455: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:168 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03455.
    case 0xC03457: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/adjust_position_vertical.asm:169 TAY
    case 0xC03458: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03459: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0345C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0345E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03461: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:171 CLC
    case 0xC03463: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03464: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03466: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03468: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0346A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0346C: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0346E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03470: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03472: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03474: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03476: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_position_vertical.asm:175 END_C_FUNCTION
    case 0xC03478: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_position_vertical.asm:175 END_C_FUNCTION
    case 0xC03479: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/adjust_single_colour.asm (source_named).
bool execute_overworld_adjust_single_colour_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_single_colour.asm:8 BEGIN_C_FUNCTION
    case 0xC00444: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00446: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00447: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00448: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00449: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC00449.
    case 0xC0044B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC0044C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC0044D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:15 STX @VIRTUAL02
    case 0xC0044E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:15 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC0044B.
    case 0xC0044F: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/overworld/adjust_single_colour.asm:16 STA @LOCAL00
    case 0xC00450: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/adjust_single_colour.asm:17 CMP @VIRTUAL02
    case 0xC00452: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:18 BNE @UNKNOWN0 ;channel 1 != channel 2
    case 0xC00454: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/adjust_single_colour.asm:19 LDA @VIRTUAL02
    case 0xC00456: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:20 BRA @UNKNOWN4
    case 0xC00458: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/overworld/adjust_single_colour.asm:22 CMP @VIRTUAL02
    case 0xC0045A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/adjust_single_colour.asm:23 BLTEQ @UNKNOWN2 ;channel1 <= channel 2
    case 0xC0045C: cpu.execute_instruction<0x90>(0x000018, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/adjust_single_colour.asm:23 BLTEQ @UNKNOWN2 ;channel1 <= channel 2
    case 0xC0045E: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/overworld/adjust_single_colour.asm:24 SEC
    case 0xC00460: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:25 SBC @VIRTUAL02
    case 0xC00461: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:26 CMP #6
    case 0xC00463: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/adjust_single_colour.asm:26 CMP #6
    // Overlapping static entry reached from 0xC00463.
    case 0xC00465: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/adjust_single_colour.asm:27 BLTEQ @UNKNOWN1 ;channel1 - channel2 <= 6
    case 0xC00466: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/adjust_single_colour.asm:27 BLTEQ @UNKNOWN1 ;channel1 - channel2 <= 6
    case 0xC00468: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/adjust_single_colour.asm:28 LDA @LOCAL00
    case 0xC0046A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_single_colour.asm:29 SEC
    case 0xC0046C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:30 SBC #6
    case 0xC0046D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/overworld/adjust_single_colour.asm:30 SBC #6
    // Overlapping static entry reached from 0xC0046D.
    case 0xC0046F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/adjust_single_colour.asm:31 STA @VIRTUAL02
    case 0xC00470: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:33 LDA @VIRTUAL02
    case 0xC00472: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:34 BRA @UNKNOWN4
    case 0xC00474: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/overworld/adjust_single_colour.asm:36 STA @VIRTUAL04
    case 0xC00476: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_single_colour.asm:37 LDA @VIRTUAL02
    case 0xC00478: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:38 SEC
    case 0xC0047A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:39 SBC @VIRTUAL04
    case 0xC0047B: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/adjust_single_colour.asm:40 CMP #6
    case 0xC0047D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/adjust_single_colour.asm:40 CMP #6
    // Overlapping static entry reached from 0xC0047D.
    case 0xC0047F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/adjust_single_colour.asm:41 BLTEQ @UNKNOWN3 ;channel2 - channel1 <= 6
    case 0xC00480: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/adjust_single_colour.asm:41 BLTEQ @UNKNOWN3 ;channel2 - channel1 <= 6
    case 0xC00482: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/adjust_single_colour.asm:42 LDA @LOCAL00
    case 0xC00484: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_single_colour.asm:43 CLC
    case 0xC00486: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:44 ADC #6
    case 0xC00487: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/adjust_single_colour.asm:44 ADC #6
    // Overlapping static entry reached from 0xC00487.
    case 0xC00489: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/adjust_single_colour.asm:45 STA @VIRTUAL02
    case 0xC0048A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:47 LDA @VIRTUAL02
    case 0xC0048C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_single_colour.asm:49 END_C_FUNCTION
    case 0xC0048E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_single_colour.asm:49 END_C_FUNCTION
    case 0xC0048F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/adjust_sprite_palettes_by_average.asm (source_named).
bool execute_overworld_adjust_sprite_palettes_by_average_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00490: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00492: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00493: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00494: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC00494.
    case 0xC00496: cpu.execute_instruction<0xFF>(0x40A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00497: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:16 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC00498: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:16 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC00498.
    case 0xC0049A: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:17 JSR GET_COLOUR_AVERAGE
    case 0xC0049B: cpu.execute_instruction<0x20>(0x0003A1, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:18 LDY SAVED_COLOUR_AVERAGE_RED
    case 0xC0049E: cpu.execute_instruction<0xAC>(0x00475C, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:19 LDA COLOUR_AVERAGE_RED
    case 0xC004A1: cpu.execute_instruction<0xAD>(0x004756, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:20 XBA
    case 0xC004A4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:21 AND #$FF00
    case 0xC004A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:21 AND #$FF00
    // Overlapping static entry reached from 0xC004A5.
    case 0xC004A7: cpu.execute_instruction<0xFF>(0x913D22, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_RED / SAVED_COLOUR_AVERAGE_RED
    case 0xC004A8: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_RED / SAVED_COLOUR_AVERAGE_RED
    // Overlapping static entry reached from 0xC004A7.
    case 0xC004AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x002085, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:23 STA @LOCAL09
    case 0xC004AC: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:23 STA @LOCAL09
    // Overlapping static entry reached from 0xC004AB.
    case 0xC004AD: cpu.execute_instruction<0x20>(0x005EAC, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:24 LDY SAVED_COLOUR_AVERAGE_GREEN
    case 0xC004AE: cpu.execute_instruction<0xAC>(0x00475E, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:24 LDY SAVED_COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC004AD.
    case 0xC004B0: cpu.execute_instruction<0x47>(0x0000AD, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:25 LDA COLOUR_AVERAGE_GREEN
    case 0xC004B1: cpu.execute_instruction<0xAD>(0x004758, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:25 LDA COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC004B0.
    case 0xC004B2: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:25 LDA COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC004B2.
    case 0xC004B3: cpu.execute_instruction<0x47>(0x0000EB, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:26 XBA
    case 0xC004B4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:27 AND #$FF00
    case 0xC004B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:27 AND #$FF00
    // Overlapping static entry reached from 0xC004B5.
    case 0xC004B7: cpu.execute_instruction<0xFF>(0x913D22, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_GREEN / SAVED_COLOUR_AVERAGE_GREEN
    case 0xC004B8: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_GREEN / SAVED_COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC08D11.
    case 0xC004B9: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_GREEN / SAVED_COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC004B7.
    case 0xC004BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001E85, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:29 STA @LOCAL08
    case 0xC004BC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:29 STA @LOCAL08
    // Overlapping static entry reached from 0xC004BB.
    case 0xC004BD: cpu.execute_instruction<0x1E>(0x0060AC, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:30 LDY SAVED_COLOUR_AVERAGE_BLUE
    case 0xC004BE: cpu.execute_instruction<0xAC>(0x004760, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:30 LDY SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004BD.
    case 0xC004C0: cpu.execute_instruction<0x47>(0x0000AD, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:31 LDA COLOUR_AVERAGE_BLUE
    case 0xC004C1: cpu.execute_instruction<0xAD>(0x00475A, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:31 LDA COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004C0.
    case 0xC004C2: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:31 LDA COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004C2.
    case 0xC004C3: cpu.execute_instruction<0x47>(0x0000EB, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:32 XBA
    case 0xC004C4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:33 AND #$FF00
    case 0xC004C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:33 AND #$FF00
    // Overlapping static entry reached from 0xC004C5.
    case 0xC004C7: cpu.execute_instruction<0xFF>(0x913D22, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    case 0xC004C8: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004C7.
    case 0xC004CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001C85, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:35 STA @LOCAL07
    case 0xC004CC: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:35 STA @LOCAL07
    // Overlapping static entry reached from 0xC004CB.
    case 0xC004CD: cpu.execute_instruction<0x1C>(0x0003A0, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:36 LDY #3
    case 0xC004CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:36 LDY #3
    // Overlapping static entry reached from 0xC004CE.
    case 0xC004D0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:37 LDA @LOCAL09
    case 0xC004D1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:38 CLC
    case 0xC004D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:39 ADC @LOCAL08
    case 0xC004D4: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:40 CLC
    case 0xC004D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:41 ADC @LOCAL07
    case 0xC004D7: cpu.execute_instruction<0x65>(0x00001C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:42 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC004D9: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:43 STA @LOCAL06
    case 0xC004DD: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:44 LDA @LOCAL09
    case 0xC004DF: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:45 CMP #256
    case 0xC004E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:45 CMP #256
    // Overlapping static entry reached from 0xC004E1.
    case 0xC004E3: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    case 0xC004E4: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004E3.
    case 0xC004E5: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    case 0xC004E6: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004E5.
    case 0xC004E7: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    case 0xC004E8: cpu.execute_instruction<0x4C>(0x0005F5, 3); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004E7.
    case 0xC004E9: cpu.execute_instruction<0xF5>(0x000005, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:47 LDA @LOCAL08
    case 0xC004EB: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:48 CMP #256
    case 0xC004ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:48 CMP #256
    // Overlapping static entry reached from 0xC004ED.
    case 0xC004EF: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    case 0xC004F0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004EF.
    case 0xC004F1: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    case 0xC004F2: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004F1.
    case 0xC004F3: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    case 0xC004F4: cpu.execute_instruction<0x4C>(0x0005F5, 3); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004F3.
    case 0xC004F5: cpu.execute_instruction<0xF5>(0x000005, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:50 LDA @LOCAL07
    case 0xC004F7: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:51 CMP #256
    case 0xC004F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:51 CMP #256
    // Overlapping static entry reached from 0xC004F9.
    case 0xC004FB: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    case 0xC004FC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004FB.
    case 0xC004FD: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    case 0xC004FE: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004FD.
    case 0xC004FF: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    case 0xC00500: cpu.execute_instruction<0x4C>(0x0005F5, 3); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004FF.
    case 0xC00501: cpu.execute_instruction<0xF5>(0x000005, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:53 LDA #128
    case 0xC00503: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:53 LDA #128
    // Overlapping static entry reached from 0xC00503.
    case 0xC00505: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:54 STA @LOCAL05
    case 0xC00506: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:55 JMP @UNKNOWN6
    case 0xC00508: cpu.execute_instruction<0x4C>(0x0005E9, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:57 LDA @LOCAL05
    case 0xC0050B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:58 ASL
    case 0xC0050D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:59 TAX
    case 0xC0050E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:60 LDA PALETTES,X
    case 0xC0050F: cpu.execute_instruction<0xBD>(0x000200, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:61 TAX
    case 0xC00512: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:63 AND #BGR555::RED
    case 0xC00513: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:63 AND #BGR555::RED
    // Overlapping static entry reached from 0xC00513.
    case 0xC00515: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:64 STA @LOCAL04
    case 0xC00516: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:65 TAY
    case 0xC00518: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:66 STY @LOCAL03
    case 0xC00519: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:68 TXA
    case 0xC0051B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:69 AND #BGR555::GREEN
    case 0xC0051C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:69 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC0051C.
    case 0xC0051E: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:71 LSR
    case 0xC0051F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:72 LSR
    case 0xC00520: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:73 LSR
    case 0xC00521: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:74 LSR
    case 0xC00522: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:75 LSR
    case 0xC00523: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:76 STA @VIRTUAL02
    case 0xC00524: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:77 STA @LOCAL02
    case 0xC00526: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:78 LDA @VIRTUAL02
    case 0xC00528: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:79 STA @LOCAL01
    case 0xC0052A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:81 TXA
    case 0xC0052C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:82 AND #BGR555::BLUE
    case 0xC0052D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:82 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC0052D.
    case 0xC0052F: cpu.execute_instruction<0x7C>(0x0029EB, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:84 XBA
    case 0xC00530: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:85 AND #$00FF
    case 0xC00531: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC00531.
    case 0xC00533: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:86 LSR
    case 0xC00534: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:87 LSR
    case 0xC00535: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:88 STA @VIRTUAL04
    case 0xC00536: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:89 STA @LOCAL00
    case 0xC00538: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:90 LDA @LOCAL04
    case 0xC0053A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:91 CMP @VIRTUAL02
    case 0xC0053C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:92 BNE @UNKNOWN4 ;red != green
    case 0xC0053E: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:93 LDA @VIRTUAL02
    case 0xC00540: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:94 CMP @VIRTUAL04
    case 0xC00542: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:95 BNE @UNKNOWN4 ;green != blue
    case 0xC00544: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:96 LDA @LOCAL04
    case 0xC00546: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:97 STA @VIRTUAL02
    case 0xC00548: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:98 LDA @VIRTUAL04
    case 0xC0054A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:99 CMP @VIRTUAL02
    case 0xC0054C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:100 BNE @UNKNOWN4 ;blue != red
    case 0xC0054E: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:101 LDY @LOCAL06
    case 0xC00550: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:102 LDA @LOCAL04
    case 0xC00552: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:103 JSL MULT16 ; red *= ???
    case 0xC00554: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:104 STA @LOCAL04
    case 0xC00558: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:105 LDY @LOCAL06
    case 0xC0055A: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:106 LDA @LOCAL02
    case 0xC0055C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:107 STA @VIRTUAL02
    case 0xC0055E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:108 JSL MULT16 ; blue *= ???
    case 0xC00560: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:109 STA @VIRTUAL02
    case 0xC00564: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:110 LDY @LOCAL06
    case 0xC00566: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:111 LDA @VIRTUAL04
    case 0xC00568: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:112 JSL MULT16 ; green *= ???
    case 0xC0056A: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:113 STA @VIRTUAL04
    case 0xC0056E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:114 BRA @UNKNOWN5
    case 0xC00570: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:116 LDY @LOCAL09
    case 0xC00572: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:117 LDA @LOCAL04
    case 0xC00574: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:118 JSL MULT16 ; red *= ???
    case 0xC00576: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:119 STA @LOCAL04
    case 0xC0057A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:120 LDY @LOCAL08
    case 0xC0057C: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:121 LDA @LOCAL02
    case 0xC0057E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:122 STA @VIRTUAL02
    case 0xC00580: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:123 JSL MULT16 ; blue *= ???
    case 0xC00582: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:124 STA @VIRTUAL02
    case 0xC00586: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:125 LDY @LOCAL07
    case 0xC00588: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:126 LDA @VIRTUAL04
    case 0xC0058A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:127 JSL MULT16 ; green *= ???
    case 0xC0058C: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:128 STA @VIRTUAL04
    case 0xC00590: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:130 LDA @LOCAL04
    case 0xC00592: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:131 XBA
    case 0xC00594: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:132 AND #$00FF
    case 0xC00595: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC00595.
    case 0xC00597: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:133 AND #$001F
    case 0xC00598: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:133 AND #$001F
    // Overlapping static entry reached from 0xC00598.
    case 0xC0059A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:134 TAX
    case 0xC0059B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:135 LDY @LOCAL03
    case 0xC0059C: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:136 TYA
    case 0xC0059E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:137 JSR ADJUST_SINGLE_COLOUR ;red & new red
    case 0xC0059F: cpu.execute_instruction<0x20>(0x000444, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:138 TAY
    case 0xC005A2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:139 STY @LOCAL03
    case 0xC005A3: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:140 LDA @VIRTUAL02
    case 0xC005A5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:141 XBA
    case 0xC005A7: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:142 AND #$00FF
    case 0xC005A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC005A8.
    case 0xC005AA: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:143 AND #$001F
    case 0xC005AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:143 AND #$001F
    // Overlapping static entry reached from 0xC005AB.
    case 0xC005AD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:144 TAX
    case 0xC005AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:145 LDA @LOCAL01
    case 0xC005AF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:146 JSR ADJUST_SINGLE_COLOUR ;green & new green
    case 0xC005B1: cpu.execute_instruction<0x20>(0x000444, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:147 STA @VIRTUAL02
    case 0xC005B4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:148 LDA @VIRTUAL04
    case 0xC005B6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:149 XBA
    case 0xC005B8: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:150 AND #$00FF
    case 0xC005B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:150 AND #$00FF
    // Overlapping static entry reached from 0xC005B9.
    case 0xC005BB: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:151 AND #$001F
    case 0xC005BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:151 AND #$001F
    // Overlapping static entry reached from 0xC005BC.
    case 0xC005BE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:152 TAX
    case 0xC005BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:153 LDA @LOCAL00
    case 0xC005C0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:154 JSR ADJUST_SINGLE_COLOUR ;blue & new blue
    case 0xC005C2: cpu.execute_instruction<0x20>(0x000444, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:155 STA @LOCAL00
    case 0xC005C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:156 LDA @LOCAL05
    case 0xC005C7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:157 ASL
    case 0xC005C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:158 TAX
    case 0xC005CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:159 LDY @LOCAL03 ;final red
    case 0xC005CB: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:160 LDA @VIRTUAL02 ;final green
    case 0xC005CD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:161 ASL
    case 0xC005CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:162 ASL
    case 0xC005D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:163 ASL
    case 0xC005D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:164 ASL
    case 0xC005D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:165 ASL
    case 0xC005D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:166 STA @VIRTUAL04
    case 0xC005D4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:167 LDA @LOCAL00 ;final blue
    case 0xC005D6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:168 XBA
    case 0xC005D8: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:169 AND #$FF00
    case 0xC005D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:169 AND #$FF00
    // Overlapping static entry reached from 0xC005D9.
    case 0xC005DB: cpu.execute_instruction<0xFF>(0x050A0A, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:170 ASL
    case 0xC005DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:171 ASL
    case 0xC005DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:172 ORA @VIRTUAL04
    case 0xC005DE: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:172 ORA @VIRTUAL04
    // Overlapping static entry reached from 0xC005DB.
    case 0xC005DF: cpu.execute_instruction<0x04>(0x000084, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:173 STY @VIRTUAL02
    case 0xC005E0: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:173 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC005DF.
    case 0xC005E1: cpu.execute_instruction<0x02>(0x000005, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:174 ORA @VIRTUAL02
    case 0xC005E2: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:175 STA PALETTES,X
    case 0xC005E4: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:176 INC @LOCAL05
    case 0xC005E7: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:178 LDA @LOCAL05
    case 0xC005E9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:179 CMP #256
    case 0xC005EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:179 CMP #256
    // Overlapping static entry reached from 0xC005EB.
    case 0xC005ED: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    case 0xC005EE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005ED.
    case 0xC005EF: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    case 0xC005F0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005EF.
    case 0xC005F1: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    case 0xC005F2: cpu.execute_instruction<0x4C>(0x00050B, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005F1.
    case 0xC005F3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005F3.
    case 0xC005F4: cpu.execute_instruction<0x05>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:182 END_C_FUNCTION
    case 0xC005F5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:182 END_C_FUNCTION
    case 0xC005F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/attempt_homesickness.asm (source_named).
bool execute_overworld_attempt_homesickness_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/attempt_homesickness.asm:3 BEGIN_C_FUNCTION
    case 0xC1BCB3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BCB5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BCB6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BCB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BCB7.
    case 0xC1BCB9: cpu.execute_instruction<0xFF>(0x8CAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BCBA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:8 LDA PARTY_CHARACTERS+char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC1BCBB: cpu.execute_instruction<0xAD>(0x009C8C, 3); return true;
    // src/overworld/attempt_homesickness.asm:8 LDA PARTY_CHARACTERS+char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC1BCB9.
    case 0xC1BCBD: cpu.execute_instruction<0x9C>(0x00FF29, 3); return true;
    // src/overworld/attempt_homesickness.asm:9 AND #$00FF
    case 0xC1BCBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/attempt_homesickness.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC1BCBE.
    case 0xC1BCC0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/attempt_homesickness.asm:10 CMP #STATUS_0::UNCONSCIOUS
    case 0xC1BCC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/attempt_homesickness.asm:10 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC1BCC1.
    case 0xC1BCC3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/attempt_homesickness.asm:11 BEQ @FAILED
    case 0xC1BCC4: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/overworld/attempt_homesickness.asm:12 LDX #0
    case 0xC1BCC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/attempt_homesickness.asm:12 LDX #0
    // Overlapping static entry reached from 0xC1BCC6.
    case 0xC1BCC8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/attempt_homesickness.asm:13 LDA #15
    case 0xC1BCC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/overworld/attempt_homesickness.asm:13 LDA #15
    // Overlapping static entry reached from 0xC1BCC9.
    case 0xC1BCCB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/attempt_homesickness.asm:14 STA @LOCAL00
    case 0xC1BCCC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/attempt_homesickness.asm:15 BRA @UNKNOWN5
    case 0xC1BCCE: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/overworld/attempt_homesickness.asm:17 LDA @LOCAL00
    case 0xC1BCD0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/attempt_homesickness.asm:18 STA @VIRTUAL02
    case 0xC1BCD2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/attempt_homesickness.asm:19 LDA PARTY_CHARACTERS+char_struct::level
    case 0xC1BCD4: cpu.execute_instruction<0xAD>(0x009C83, 3); return true;
    // src/overworld/attempt_homesickness.asm:20 AND #$00FF
    case 0xC1BCD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/attempt_homesickness.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1BCD7.
    case 0xC1BCD9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/attempt_homesickness.asm:21 CLC
    case 0xC1BCDA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:22 SBC @VIRTUAL02
    case 0xC1BCDB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BCDD: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BCDF: cpu.execute_instruction<0x10>(0x00002D, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BCE1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BCE3: cpu.execute_instruction<0x30>(0x000029, 2); return true;
    // src/overworld/attempt_homesickness.asm:24 LDA f:HOMESICKNESS_PROBABILITY,X
    case 0xC1BCE5: cpu.execute_instruction<0xBF>(0xC439DC, 4); return true;
    // src/overworld/attempt_homesickness.asm:25 AND #$00FF
    case 0xC1BCE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/attempt_homesickness.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC1BCE9.
    case 0xC1BCEB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/attempt_homesickness.asm:26 BEQ @UNKNOWN3
    case 0xC1BCEC: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/overworld/attempt_homesickness.asm:27 AND #$00FF
    case 0xC1BCEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/attempt_homesickness.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1BCEE.
    case 0xC1BCF0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/attempt_homesickness.asm:28 JSL RAND_MOD
    case 0xC1BCF1: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // src/overworld/attempt_homesickness.asm:29 CMP #0
    case 0xC1BCF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/attempt_homesickness.asm:29 CMP #0
    // Overlapping static entry reached from 0xC1BCF5.
    case 0xC1BCF7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/attempt_homesickness.asm:30 BNE @UNKNOWN3
    case 0xC1BCF8: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/overworld/attempt_homesickness.asm:31 LDY #STATUS_5::HOMESICK + 1
    case 0xC1BCFA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/attempt_homesickness.asm:31 LDY #STATUS_5::HOMESICK + 1
    // Overlapping static entry reached from 0xC1BCFA.
    case 0xC1BCFC: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/attempt_homesickness.asm:32 LDX #STATUS_GROUP::HOMESICKNESS + 1
    case 0xC1BCFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/overworld/attempt_homesickness.asm:32 LDX #STATUS_GROUP::HOMESICKNESS + 1
    // Overlapping static entry reached from 0xC1BCFD.
    case 0xC1BCFF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/attempt_homesickness.asm:33 LDA #PARTY_MEMBER::NESS
    case 0xC1BD00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/attempt_homesickness.asm:33 LDA #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC1BD00.
    case 0xC1BD02: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/attempt_homesickness.asm:34 JSL INFLICT_STATUS_NONBATTLE
    case 0xC1BD03: cpu.execute_instruction<0x22>(0xC436FC, 4); return true;
    // src/overworld/attempt_homesickness.asm:35 BRA @RETURN
    case 0xC1BD07: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/overworld/attempt_homesickness.asm:37 LDA #0
    case 0xC1BD09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/attempt_homesickness.asm:37 LDA #0
    // Overlapping static entry reached from 0xC1BD09.
    case 0xC1BD0B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/attempt_homesickness.asm:38 BRA @RETURN
    case 0xC1BD0C: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/overworld/attempt_homesickness.asm:40 INX
    case 0xC1BD0E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:41 LDA @LOCAL00
    case 0xC1BD0F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/attempt_homesickness.asm:42 CLC
    case 0xC1BD11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    case 0xC1BD12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    // Overlapping static entry reached from 0xC1BD12.
    case 0xC1BD14: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/attempt_homesickness.asm:44 STA @LOCAL00
    case 0xC1BD15: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/attempt_homesickness.asm:46 STX @VIRTUAL02
    case 0xC1BD17: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/attempt_homesickness.asm:47 LDA #100 / 15
    case 0xC1BD19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/overworld/attempt_homesickness.asm:47 LDA #100 / 15
    // Overlapping static entry reached from 0xC1BD19.
    case 0xC1BD1B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/attempt_homesickness.asm:48 CLC
    case 0xC1BD1C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:49 SBC @VIRTUAL02
    case 0xC1BD1D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BD1F: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BD21: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BD23: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BD25: cpu.execute_instruction<0x30>(0x0000A9, 2); return true;
    // src/overworld/attempt_homesickness.asm:52 LDA #0
    case 0xC1BD27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/attempt_homesickness.asm:52 LDA #0
    // Overlapping static entry reached from 0xC1BD27.
    case 0xC1BD29: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/attempt_homesickness.asm:54 END_C_FUNCTION
    case 0xC1BD2A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/attempt_homesickness.asm:54 END_C_FUNCTION
    case 0xC1BD2B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/battle_swirl_sequence.asm (source_named).
bool execute_overworld_battle_swirl_sequence_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/battle_swirl_sequence.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E7F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E7FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E7FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E7FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E7FD.
    case 0xC2E7FF: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E800: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/battle_swirl_sequence.asm:12 LDA #$0001
    case 0xC2E801: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:12 LDA #$0001
    // Overlapping static entry reached from 0xC2E801.
    case 0xC2E803: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:13 STA $16
    case 0xC2E804: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:14 LDA #$0004
    case 0xC2E806: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:14 LDA #$0004
    // Overlapping static entry reached from 0xC2E806.
    case 0xC2E808: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:15 STA @SWIRL_RED
    case 0xC2E809: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:16 STA @SWIRL_GREEN
    case 0xC2E80B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:17 LDY #$0000
    case 0xC2E80D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC2E80D.
    case 0xC2E80F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:18 STY @SWIRL_BLUE
    case 0xC2E810: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:19 LDA BATTLE_INITIATIVE
    case 0xC2E812: cpu.execute_instruction<0xAD>(0x005142, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:20 BEQ @UNKNOWN0
    case 0xC2E815: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:21 CMP #INITIATIVE::PARTY_FIRST
    case 0xC2E817: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:21 CMP #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC2E817.
    case 0xC2E819: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:22 BEQ @UNKNOWN1
    case 0xC2E81A: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:23 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC2E81C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:23 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC2E81C.
    case 0xC2E81E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:24 BEQ @UNKNOWN2
    case 0xC2E81F: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:25 BRA @UNKNOWN3
    case 0xC2E821: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:27 LDX #MUSIC::BATTLE_SWIRL4
    case 0xC2E823: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B0, 2); else cpu.execute_instruction<0xA2>(0x0000B0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:27 LDX #MUSIC::BATTLE_SWIRL4
    // Overlapping static entry reached from 0xC2E823.
    case 0xC2E825: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:28 STX @SWIRL_MUSIC
    case 0xC2E826: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:29 LDA #$000E
    case 0xC2E828: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:29 LDA #$000E
    // Overlapping static entry reached from 0xC2E828.
    case 0xC2E82A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:30 STA $02
    case 0xC2E82B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:31 STA $0E
    case 0xC2E82D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:32 BRA @UNKNOWN3
    case 0xC2E82F: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:34 LDX #MUSIC::BATTLE_SWIRL4
    case 0xC2E831: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B0, 2); else cpu.execute_instruction<0xA2>(0x0000B0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:34 LDX #MUSIC::BATTLE_SWIRL4
    // Overlapping static entry reached from 0xC2E831.
    case 0xC2E833: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:35 STX @SWIRL_MUSIC
    case 0xC2E834: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:36 LDA #$001C
    case 0xC2E836: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:36 LDA #$001C
    // Overlapping static entry reached from 0xC2E836.
    case 0xC2E838: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:37 STA @SWIRL_RED
    case 0xC2E839: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:38 LDA #$0005
    case 0xC2E83B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:38 LDA #$0005
    // Overlapping static entry reached from 0xC2E83B.
    case 0xC2E83D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:39 STA @SWIRL_GREEN
    case 0xC2E83E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:40 LDY #$000C
    case 0xC2E840: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:40 LDY #$000C
    // Overlapping static entry reached from 0xC2E840.
    case 0xC2E842: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:41 STY @SWIRL_BLUE
    case 0xC2E843: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:42 LDA #$0006
    case 0xC2E845: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:42 LDA #$0006
    // Overlapping static entry reached from 0xC2E845.
    case 0xC2E847: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:43 STA $02
    case 0xC2E848: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:44 STA $0E
    case 0xC2E84A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:45 BRA @UNKNOWN3
    case 0xC2E84C: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:47 LDX #MUSIC::BATTLE_SWIRL2
    case 0xC2E84E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000009, 2); else cpu.execute_instruction<0xA2>(0x000009, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:47 LDX #MUSIC::BATTLE_SWIRL2
    // Overlapping static entry reached from 0xC2E84E.
    case 0xC2E850: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:48 STX @SWIRL_MUSIC
    case 0xC2E851: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:49 STZ @SWIRL_RED
    case 0xC2E853: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:50 LDA #$001F
    case 0xC2E855: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:50 LDA #$001F
    // Overlapping static entry reached from 0xC2E855.
    case 0xC2E857: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:51 STA @SWIRL_GREEN
    case 0xC2E858: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:52 TAY
    case 0xC2E85A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/battle_swirl_sequence.asm:53 STY @SWIRL_BLUE
    case 0xC2E85B: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:54 LDA #$0006
    case 0xC2E85D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:54 LDA #$0006
    // Overlapping static entry reached from 0xC2E85D.
    case 0xC2E85F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:55 STA $02
    case 0xC2E860: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:56 STA $0E
    case 0xC2E862: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:58 LDA CURRENT_BATTLE_GROUP
    case 0xC2E864: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:59 CMP #ENEMY_GROUP::BOSS_FRANK
    case 0xC2E867: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0001C0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:59 CMP #ENEMY_GROUP::BOSS_FRANK
    // Overlapping static entry reached from 0xC2E867.
    case 0xC2E869: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:60 BCC @UNKNOWN4
    case 0xC2E86A: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:60 BCC @UNKNOWN4
    // Overlapping static entry reached from 0xC2E869.
    case 0xC2E86B: cpu.execute_instruction<0x11>(0x0000A9, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    case 0xC2E86C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    // Overlapping static entry reached from 0xC2E86B.
    case 0xC2E86D: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    // Overlapping static entry reached from 0xC2E86C.
    case 0xC2E86E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:62 STA $16
    case 0xC2E86F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:63 LDA #$000E
    case 0xC2E871: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:63 LDA #$000E
    // Overlapping static entry reached from 0xC2E871.
    case 0xC2E873: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:64 STA $02
    case 0xC2E874: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:65 STA $0E
    case 0xC2E876: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:66 LDX #MUSIC::BATTLE_SWIRL1
    case 0xC2E878: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:66 LDX #MUSIC::BATTLE_SWIRL1
    // Overlapping static entry reached from 0xC2E878.
    case 0xC2E87A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:67 STX @SWIRL_MUSIC
    case 0xC2E87B: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:69 LDX @SWIRL_MUSIC
    case 0xC2E87D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:70 TXA
    case 0xC2E87F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/battle_swirl_sequence.asm:71 JSL CHANGE_MUSIC
    case 0xC2E880: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:72 JSL UNKNOWN_C04F47
    case 0xC2E884: cpu.execute_instruction<0x22>(0xC05166, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:73 LDA $0E
    case 0xC2E888: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:74 STA $02
    case 0xC2E88A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:75 AND #$0004
    case 0xC2E88C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:75 AND #$0004
    // Overlapping static entry reached from 0xC2E88C.
    case 0xC2E88E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:76 BEQ @UNKNOWN6
    case 0xC2E88F: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:77 LDY @SWIRL_BLUE
    case 0xC2E891: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:78 LDX @SWIRL_GREEN
    case 0xC2E893: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:79 LDA @SWIRL_RED
    case 0xC2E895: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:80 JSL SET_COLDATA
    case 0xC2E897: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:81 LDA $02
    case 0xC2E89B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:82 AND #$0008
    case 0xC2E89D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:82 AND #$0008
    // Overlapping static entry reached from 0xC2E89D.
    case 0xC2E89F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:83 BEQ @UNKNOWN5
    case 0xC2E8A0: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:84 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_DIV2 | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    case 0xC2E8A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:84 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_DIV2 | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    // Overlapping static entry reached from 0xC2E8A2.
    case 0xC2E8A4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:85 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    case 0xC2E8A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:85 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    // Overlapping static entry reached from 0xC2E8A5.
    case 0xC2E8A7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:86 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2E8A8: cpu.execute_instruction<0x22>(0xC0B018, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:87 BRA @UNKNOWN6
    case 0xC2E8AC: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:89 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    case 0xC2E8AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000BF, 2); else cpu.execute_instruction<0xA2>(0x0000BF, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:89 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    // Overlapping static entry reached from 0xC2E8AE.
    case 0xC2E8B0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:90 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    case 0xC2E8B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:90 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    // Overlapping static entry reached from 0xC2E8B1.
    case 0xC2E8B3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:91 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2E8B4: cpu.execute_instruction<0x22>(0xC0B018, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:93 LDY #$001E
    case 0xC2E8B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001E, 2); else cpu.execute_instruction<0xA0>(0x00001E, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:93 LDY #$001E
    // Overlapping static entry reached from 0xC2E8B8.
    case 0xC2E8BA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:94 LDX $02
    case 0xC2E8BB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:95 LDA $16
    case 0xC2E8BD: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:96 JSL UNKNOWN_C2E8C4
    case 0xC2E8BF: cpu.execute_instruction<0x22>(0xC2E7DD, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:97 LDA $02
    case 0xC2E8C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:98 AND #$0004
    case 0xC2E8C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:98 AND #$0004
    // Overlapping static entry reached from 0xC2E8C5.
    case 0xC2E8C7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:99 BEQ @UNKNOWN7
    case 0xC2E8C8: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:100 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E8CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:101 LDA #$0020
    case 0xC2E8CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008D20, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    case 0xC2E8CE: cpu.execute_instruction<0x8D>(0x00B09D, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E8CC.
    case 0xC2E8CF: cpu.execute_instruction<0x9D>(0x0080B0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:103 BRA @UNKNOWN8
    case 0xC2E8D1: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:103 BRA @UNKNOWN8
    // Overlapping static entry reached from 0xC2E8CF.
    case 0xC2E8D2: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E8D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:105 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E8D2.
    case 0xC2E8D4: cpu.execute_instruction<0x20>(0x000FA9, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:106 LDA #$000F
    case 0xC2E8D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x008D0F, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    case 0xC2E8D7: cpu.execute_instruction<0x8D>(0x00B09D, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E8D5.
    case 0xC2E8D8: cpu.execute_instruction<0x9D>(0x009CB0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:109 STZ SWIRL_AUTO_RESTORE
    case 0xC2E8DA: cpu.execute_instruction<0x9C>(0x00B0A0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:109 STZ SWIRL_AUTO_RESTORE
    // Overlapping static entry reached from 0xC2E8D8.
    case 0xC2E8DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B0, 2); else cpu.execute_instruction<0xA0>(0x00C2B0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xC2E8DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:110 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E8DB.
    case 0xC2E8DE: cpu.execute_instruction<0x20>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:111 END_C_FUNCTION
    case 0xC2E8DF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/battle_swirl_sequence.asm:111 END_C_FUNCTION
    case 0xC2E8E0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/change_music_5DD6.asm (source_named).
bool execute_overworld_change_music_5dd6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/change_music_5DD6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06C1B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/change_music_5DD6.asm:5 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC06C1D: cpu.execute_instruction<0xAD>(0x00615C, 3); return true;
    // src/overworld/change_music_5DD6.asm:6 JSL CHANGE_MUSIC
    case 0xC06C20: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/change_music_5DD6.asm:7 END_C_FUNCTION
    case 0xC06C24: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/check.asm (source_named).
bool execute_overworld_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13918: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1391A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1391B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1391C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1391C.
    case 0xC1391E: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1391F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13920: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13920.
    case 0xC13922: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13923: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13925.
    case 0xC13927: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13928: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1392A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1392A.
    case 0xC1392C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1392D: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/overworld/check.asm:12 JSL FIND_NEARBY_CHECKABLE_TPT_ENTRY
    case 0xC13930: cpu.execute_instruction<0x22>(0xC04500, 4); return true;
    // src/overworld/check.asm:13 LDA INTERACTING_NPC_ID
    case 0xC13934: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:14 BEQL @UNKNOWN9
    case 0xC13937: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:14 BEQL @UNKNOWN9
    case 0xC13939: cpu.execute_instruction<0x4C>(0x003A69, 3); return true;
    // src/overworld/check.asm:15 LDA INTERACTING_NPC_ID
    case 0xC1393C: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/overworld/check.asm:16 CMP #$FFFF
    case 0xC1393F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/check.asm:16 CMP #$FFFF
    // Overlapping static entry reached from 0xC1393F.
    case 0xC13941: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    case 0xC13942: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    case 0xC13944: cpu.execute_instruction<0x4C>(0x003A69, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC13941.
    case 0xC13945: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003A, 2); else cpu.execute_instruction<0x69>(0x00AD3A, 3); return true;
    // src/overworld/check.asm:18 LDA INTERACTING_NPC_ID
    case 0xC13947: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/overworld/check.asm:18 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC13945.
    case 0xC13948: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/check.asm:18 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC13948.
    case 0xC13949: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/check.asm:19 CMP #$FFFE
    case 0xC1394A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x00FFFE, 3); return true;
    // src/overworld/check.asm:19 CMP #$FFFE
    // Overlapping static entry reached from 0xC1394A.
    case 0xC1394C: cpu.execute_instruction<0xFF>(0xAD0DD0, 4); return true;
    // src/overworld/check.asm:20 BNE @UNKNOWN2
    case 0xC1394D: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC1394F: cpu.execute_instruction<0xAD>(0x006164, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1394C.
    case 0xC13950: cpu.execute_instruction<0x64>(0x000061, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13952: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13954: cpu.execute_instruction<0xAD>(0x006166, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13957: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/check.asm:22 JMP @UNKNOWN9
    case 0xC13959: cpu.execute_instruction<0x4C>(0x003A69, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC1395C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0089C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1395C.
    case 0xC1395E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC1395F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1395E.
    case 0xC13960: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13961: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13960.
    case 0xC13962: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13961.
    case 0xC13963: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13964: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC13966: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC13968: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1396A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1396C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/check.asm:26 LDA INTERACTING_NPC_ID
    case 0xC1396E: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13971: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13973: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13974: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13975: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13976: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13977: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/check.asm:28 STA @LOCAL01
    case 0xC13979: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/check.asm:29 CLC
    case 0xC1397B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:30 ADC @VIRTUAL06
    case 0xC1397C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:31 STA @VIRTUAL06
    case 0xC1397E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/check.asm:32 LDA [@VIRTUAL06]
    case 0xC13980: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/check.asm:33 AND #$00FF
    case 0xC13982: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/check.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC13982.
    case 0xC13984: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/check.asm:34 CMP #NPC_TYPE::PERSON
    case 0xC13985: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/check.asm:34 CMP #NPC_TYPE::PERSON
    // Overlapping static entry reached from 0xC13985.
    case 0xC13987: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:35 BEQL @UNKNOWN9
    case 0xC13988: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:35 BEQL @UNKNOWN9
    case 0xC1398A: cpu.execute_instruction<0x4C>(0x003A69, 3); return true;
    // src/overworld/check.asm:36 CMP #NPC_TYPE::ITEM_BOX
    case 0xC1398D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/check.asm:36 CMP #NPC_TYPE::ITEM_BOX
    // Overlapping static entry reached from 0xC1398D.
    case 0xC1398F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/check.asm:37 BEQ @UNKNOWN5
    case 0xC13990: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/check.asm:38 CMP #NPC_TYPE::OBJECT
    case 0xC13992: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/check.asm:38 CMP #NPC_TYPE::OBJECT
    // Overlapping static entry reached from 0xC13992.
    case 0xC13994: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:39 BEQL @UNKNOWN8
    case 0xC13995: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:39 BEQL @UNKNOWN8
    case 0xC13997: cpu.execute_instruction<0x4C>(0x003A4A, 3); return true;
    // src/overworld/check.asm:40 JMP @UNKNOWN9
    case 0xC1399A: cpu.execute_instruction<0x4C>(0x003A69, 3); return true;
    // src/overworld/check.asm:42 LDA @LOCAL01
    case 0xC1399D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/check.asm:43 CLC
    case 0xC1399F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:44 ADC #npc_config::item
    case 0xC139A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/overworld/check.asm:44 ADC #npc_config::item
    // Overlapping static entry reached from 0xC139A0.
    case 0xC139A2: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139A3: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139A5: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139A7: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139A9: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/check.asm:46 CLC
    case 0xC139AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:47 ADC @VIRTUAL06
    case 0xC139AC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:48 STA @VIRTUAL06
    case 0xC139AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/check.asm:49 LDA [@VIRTUAL06]
    case 0xC139B0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/check.asm:50 CMP #$100
    case 0xC139B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/check.asm:50 CMP #$100
    // Overlapping static entry reached from 0xC139B2.
    case 0xC139B4: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/overworld/check.asm:51 BCS @GIFT_MONEY
    case 0xC139B5: cpu.execute_instruction<0xB0>(0x000011, 2); return true;
    // src/overworld/check.asm:51 BCS @GIFT_MONEY
    // Overlapping static entry reached from 0xC139B4.
    case 0xC139B6: cpu.execute_instruction<0x11>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    case 0xC139B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC139B6.
    case 0xC139B8: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    case 0xC139B9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC139B8.
    case 0xC139BA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139BB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139C1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/check.asm:54 JSR SET_WORKING_MEMORY
    case 0xC139C3: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/overworld/check.asm:55 BRA @GIFT_COMMON
    case 0xC139C6: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:58 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC139C8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:58 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC139CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:58 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC139CC: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:58 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC139CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/check.asm:63 JSR SET_WORKING_MEMORY
    case 0xC139D0: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/overworld/check.asm:64 LDA INTERACTING_NPC_ID
    case 0xC139D3: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139D6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139DC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/check.asm:66 CLC
    case 0xC139DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:67 ADC #npc_config::item
    case 0xC139DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/overworld/check.asm:67 ADC #npc_config::item
    // Overlapping static entry reached from 0xC139DF.
    case 0xC139E1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139E2: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139E4: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139E6: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139E8: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/check.asm:69 CLC
    case 0xC139EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:70 ADC @VIRTUAL06
    case 0xC139EB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:71 STA @VIRTUAL06
    case 0xC139ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/check.asm:72 LDA [@VIRTUAL06]
    case 0xC139EF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/check.asm:73 SEC
    case 0xC139F1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/check.asm:74 SBC #$100
    case 0xC139F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/overworld/check.asm:74 SBC #$100
    // Overlapping static entry reached from 0xC139F2.
    case 0xC139F4: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    case 0xC139F5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC139F4.
    case 0xC139F6: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    case 0xC139F7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC139F6.
    case 0xC139F8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139F9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139FF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/check.asm:77 JSR SET_ARGUMENT_MEMORY
    case 0xC13A01: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13A04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0089C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A04.
    case 0xC13A06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13A07: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A06.
    case 0xC13A08: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13A09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A08.
    case 0xC13A0A: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A09.
    case 0xC13A0B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13A0C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/check.asm:80 LDA INTERACTING_NPC_ID
    case 0xC13A0E: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A11: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A17: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/check.asm:82 STA @LOCAL01
    case 0xC13A19: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/check.asm:83 CLC
    case 0xC13A1B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:84 ADC #npc_config::event_flag
    case 0xC13A1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/check.asm:84 ADC #npc_config::event_flag
    // Overlapping static entry reached from 0xC13A1C.
    case 0xC13A1E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13A1F: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13A21: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13A23: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13A25: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/check.asm:86 CLC
    case 0xC13A27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:87 ADC @VIRTUAL0A
    case 0xC13A28: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/check.asm:88 STA @VIRTUAL0A
    case 0xC13A2A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/check.asm:89 LDA [@VIRTUAL0A]
    case 0xC13A2C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/check.asm:90 STA CURRENT_INTERACTING_EVENT_FLAG
    case 0xC13A2E: cpu.execute_instruction<0x8D>(0x009F33, 3); return true;
    // src/overworld/check.asm:91 LDA @LOCAL01
    case 0xC13A31: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/check.asm:92 CLC
    case 0xC13A33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:93 ADC #npc_config::text_pointer
    case 0xC13A34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/overworld/check.asm:93 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC13A34.
    case 0xC13A36: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/check.asm:94 CLC
    case 0xC13A37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:95 ADC @VIRTUAL06
    case 0xC13A38: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:96 STA @VIRTUAL06
    case 0xC13A3A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13A3C.
    case 0xC13A3E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A3F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A41: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A42: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A44: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A46: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/overworld/check.asm:98 BRA @UNKNOWN9
    case 0xC13A48: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/overworld/check.asm:100 LDA @LOCAL01
    case 0xC13A4A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/check.asm:101 CLC
    case 0xC13A4C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:102 ADC #npc_config::text_pointer
    case 0xC13A4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/overworld/check.asm:102 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC13A4D.
    case 0xC13A4F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13A50: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13A52: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13A54: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13A56: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/check.asm:104 CLC
    case 0xC13A58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:105 ADC @VIRTUAL06
    case 0xC13A59: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:106 STA @VIRTUAL06
    case 0xC13A5B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13A5D.
    case 0xC13A5F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A60: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A62: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A63: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A65: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A67: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13A69: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13A6B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13A6D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13A6F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/check.asm:110 END_C_FUNCTION
    case 0xC13A71: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/check.asm:110 END_C_FUNCTION
    case 0xC13A72: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/create_entity.asm (source_named).
bool execute_overworld_create_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_entity.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC01E5F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E61: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E62: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E63: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CF, 2); else cpu.execute_instruction<0x69>(0x00FFCF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    // Overlapping static entry reached from 0xC01E64.
    case 0xC01E66: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E67: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E68: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:27 STY @VIRTUAL04
    case 0xC01E69: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:27 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC01E66.
    case 0xC01E6A: cpu.execute_instruction<0x04>(0x000048, 2); return true;
    // src/overworld/create_entity.asm:28 PHA
    case 0xC01E6B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:29 LDA @VIRTUAL04
    case 0xC01E6C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:30 STA @LOCAL0D
    case 0xC01E6E: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/overworld/create_entity.asm:31 PLA
    case 0xC01E70: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:32 STX @LOCAL0C
    case 0xC01E71: cpu.execute_instruction<0x86>(0x00002D, 2); return true;
    // src/overworld/create_entity.asm:33 STA @LOCAL0B
    case 0xC01E73: cpu.execute_instruction<0x85>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:34 LDY @PARAM04
    case 0xC01E75: cpu.execute_instruction<0xA4>(0x000041, 2); return true;
    // src/overworld/create_entity.asm:35 STY @LOCAL0A
    case 0xC01E77: cpu.execute_instruction<0x84>(0x000029, 2); return true;
    // src/overworld/create_entity.asm:36 LDX @PARAM03
    case 0xC01E79: cpu.execute_instruction<0xA6>(0x00003F, 2); return true;
    // src/overworld/create_entity.asm:37 STX @LOCAL09
    case 0xC01E7B: cpu.execute_instruction<0x86>(0x000027, 2); return true;
    // src/overworld/create_entity.asm:38 LDA DEBUG
    case 0xC01E7D: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/overworld/create_entity.asm:39 BEQ @UNKNOWN0
    case 0xC01E80: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/overworld/create_entity.asm:40 LDA @LOCAL0B
    case 0xC01E82: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:41 CMP #$FFFF
    case 0xC01E84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/create_entity.asm:41 CMP #$FFFF
    // Overlapping static entry reached from 0xC01E84.
    case 0xC01E86: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/overworld/create_entity.asm:42 BNE @UNKNOWN0
    case 0xC01E87: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:43 LDA #0
    case 0xC01E89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/create_entity.asm:43 LDA #0
    // Overlapping static entry reached from 0xC01E86.
    case 0xC01E8A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:43 LDA #0
    // Overlapping static entry reached from 0xC01E89.
    case 0xC01E8B: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/overworld/create_entity.asm:44 JMP @UNKNOWN8
    case 0xC01E8C: cpu.execute_instruction<0x4C>(0x0020FD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x006541, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E8F.
    case 0xC01E91: cpu.execute_instruction<0x65>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E92: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E91.
    case 0xC01E93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E94.
    case 0xC01E96: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E97: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/create_entity.asm:47 LDA @LOCAL0B
    case 0xC01E99: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:48 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:48 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:49 CLC
    case 0xC01E9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:50 ADC @VIRTUAL0A
    case 0xC01E9E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:51 STA @VIRTUAL0A
    case 0xC01EA0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EA2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EA2.
    case 0xC01EA4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EA5: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EA7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EA8: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EAA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EAC: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01EAE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01EB0: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01EB2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01EB4: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/overworld/create_entity.asm:54 LDA @LOCAL0B
    case 0xC01EB6: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:55 JSR UNKNOWN_C01DED
    case 0xC01EB8: cpu.execute_instruction<0x20>(0x001E03, 3); return true;
    // src/overworld/create_entity.asm:56 STA @VIRTUAL02
    case 0xC01EBB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:57 LDY @VIRTUAL04
    case 0xC01EBD: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:58 LDX NEW_SPRITE_TILE_HEIGHT
    case 0xC01EBF: cpu.execute_instruction<0xAE>(0x004A02, 3); return true;
    // src/overworld/create_entity.asm:59 LDA NEW_SPRITE_TILE_WIDTH
    case 0xC01EC2: cpu.execute_instruction<0xAD>(0x004A00, 3); return true;
    // src/overworld/create_entity.asm:60 JSL UNKNOWN_C01C52
    case 0xC01EC5: cpu.execute_instruction<0x22>(0xC01C68, 4); return true;
    // src/overworld/create_entity.asm:61 STA @LOCAL07
    case 0xC01EC9: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:63 LDA @LOCAL07
    case 0xC01ECB: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:64 CMP #$7FFF
    case 0xC01ECD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/overworld/create_entity.asm:64 CMP #$7FFF
    // Overlapping static entry reached from 0xC01ECD.
    case 0xC01ECF: cpu.execute_instruction<0x7F>(0xB002F0, 4); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    case 0xC01ED0: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    case 0xC01ED2: cpu.execute_instruction<0xB0>(0x0000F7, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    // Overlapping static entry reached from 0xC01ECF.
    case 0xC01ED3: cpu.execute_instruction<0xF7>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01ED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x002A4B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01ED3.
    case 0xC01ED5: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01ED4.
    case 0xC01ED6: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01ED7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01ED9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01ED9.
    case 0xC01EDB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EDC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:67 LDA @VIRTUAL02
    case 0xC01EDE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:68 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01EE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:68 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01EE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:69 CLC
    case 0xC01EE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:70 ADC @VIRTUAL06
    case 0xC01EE3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:71 STA @VIRTUAL06
    case 0xC01EE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01EE7.
    case 0xC01EE9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EEA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EEC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EED: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EEF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E616.
    case 0xC01EF0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EF1: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/overworld/create_entity.asm:73 LDA [@VIRTUAL0A]
    case 0xC01EF3: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:74 AND #$00FF
    case 0xC01EF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC01EF5.
    case 0xC01EF7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EF8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EFC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:76 JSL FIND_FREE_7E4682
    case 0xC01EFF: cpu.execute_instruction<0x22>(0xC01AB3, 4); return true;
    // src/overworld/create_entity.asm:77 STA @LOCAL06
    case 0xC01F03: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/overworld/create_entity.asm:79 LDA @LOCAL06
    case 0xC01F05: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/overworld/create_entity.asm:80 CMP #$7FFF
    case 0xC01F07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/overworld/create_entity.asm:80 CMP #$7FFF
    // Overlapping static entry reached from 0xC01F07.
    case 0xC01F09: cpu.execute_instruction<0x7F>(0xB002F0, 4); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    case 0xC01F0A: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    case 0xC01F0C: cpu.execute_instruction<0xB0>(0x0000F7, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    // Overlapping static entry reached from 0xC01F09.
    case 0xC01F0D: cpu.execute_instruction<0xF7>(0x0000A9, 2); return true;
    // src/overworld/create_entity.asm:82 LDA #1
    case 0xC01F0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/create_entity.asm:82 LDA #1
    // Overlapping static entry reached from 0xC01F0D.
    case 0xC01F0F: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:82 LDA #1
    // Overlapping static entry reached from 0xC01F0E.
    case 0xC01F10: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/create_entity.asm:83 STA NEW_ENTITY_PRIORITY
    case 0xC01F11: cpu.execute_instruction<0x8D>(0x000A40, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:85 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC01F14: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:85 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC01F16: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:85 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC01F18: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:85 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC01F1A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F1C: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F1E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F20: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F22: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC01F24: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:92 LDY #3
    case 0xC01F26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/create_entity.asm:92 LDY #3
    // Overlapping static entry reached from 0xC01F26.
    case 0xC01F28: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:93 LDA [@VIRTUAL06],Y
    case 0xC01F29: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC01F2B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:95 AND #$00FF
    case 0xC01F2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC01F2D.
    case 0xC01F2F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/create_entity.asm:96 TAY
    case 0xC01F30: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:97 LDX @LOCAL07
    case 0xC01F31: cpu.execute_instruction<0xA6>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:98 LDA @LOCAL06
    case 0xC01F33: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/overworld/create_entity.asm:99 JSR UNKNOWN_C01D38
    case 0xC01F35: cpu.execute_instruction<0x20>(0x001D4E, 3); return true;
    // src/overworld/create_entity.asm:100 LDA @LOCAL0D
    case 0xC01F38: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/overworld/create_entity.asm:101 STA @VIRTUAL04
    case 0xC01F3A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:102 CMP #$FFFF
    case 0xC01F3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/create_entity.asm:102 CMP #$FFFF
    // Overlapping static entry reached from 0xC01F3C.
    case 0xC01F3E: cpu.execute_instruction<0xFF>(0xA519F0, 4); return true;
    // src/overworld/create_entity.asm:103 BEQ @UNKNOWN5
    case 0xC01F3F: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/overworld/create_entity.asm:104 LDA @VIRTUAL04
    case 0xC01F41: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:104 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC01F3E.
    case 0xC01F42: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/overworld/create_entity.asm:105 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC01F43: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/overworld/create_entity.asm:105 STA ENTITY_ALLOCATION_MIN_SLOT
    // Overlapping static entry reached from 0xC01F42.
    case 0xC01F44: cpu.execute_instruction<0x42>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:106 LDA @VIRTUAL04
    case 0xC01F46: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:107 INC
    case 0xC01F48: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:108 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC01F49: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/overworld/create_entity.asm:109 LDY @LOCAL0A
    case 0xC01F4C: cpu.execute_instruction<0xA4>(0x000029, 2); return true;
    // src/overworld/create_entity.asm:110 LDX @LOCAL09
    case 0xC01F4E: cpu.execute_instruction<0xA6>(0x000027, 2); return true;
    // src/overworld/create_entity.asm:111 LDA @LOCAL0C
    case 0xC01F50: cpu.execute_instruction<0xA5>(0x00002D, 2); return true;
    // src/overworld/create_entity.asm:112 JSL INIT_ENTITY
    case 0xC01F52: cpu.execute_instruction<0x22>(0xC09300, 4); return true;
    // src/overworld/create_entity.asm:113 STA @VIRTUAL02
    case 0xC01F56: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:114 BRA @UNKNOWN6
    case 0xC01F58: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:116 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xC01F5A: cpu.execute_instruction<0x9C>(0x000A42, 3); return true;
    // src/overworld/create_entity.asm:117 LDA #22
    case 0xC01F5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x000016, 3); return true;
    // src/overworld/create_entity.asm:117 LDA #22
    // Overlapping static entry reached from 0xC01F5D.
    case 0xC01F5F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/create_entity.asm:118 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC01F60: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/overworld/create_entity.asm:119 LDY @LOCAL0A
    case 0xC01F63: cpu.execute_instruction<0xA4>(0x000029, 2); return true;
    // src/overworld/create_entity.asm:120 LDX @LOCAL09
    case 0xC01F65: cpu.execute_instruction<0xA6>(0x000027, 2); return true;
    // src/overworld/create_entity.asm:121 LDA @LOCAL0C
    case 0xC01F67: cpu.execute_instruction<0xA5>(0x00002D, 2); return true;
    // src/overworld/create_entity.asm:122 JSL INIT_ENTITY
    case 0xC01F69: cpu.execute_instruction<0x22>(0xC09300, 4); return true;
    // src/overworld/create_entity.asm:123 STA @VIRTUAL02
    case 0xC01F6D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:124 ORA #$0080
    case 0xC01F6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000080, 3); return true;
    // src/overworld/create_entity.asm:124 ORA #$0080
    // Overlapping static entry reached from 0xC01F6F.
    case 0xC01F71: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/create_entity.asm:125 TAX
    case 0xC01F72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:126 LDA #$FFFF
    case 0xC01F73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/create_entity.asm:126 LDA #$FFFF
    // Overlapping static entry reached from 0xC01F73.
    case 0xC01F75: cpu.execute_instruction<0xFF>(0x1C2722, 4); return true;
    // src/overworld/create_entity.asm:127 JSL ALLOC_SPRITE_MEM
    case 0xC01F76: cpu.execute_instruction<0x22>(0xC01C27, 4); return true;
    // src/overworld/create_entity.asm:127 JSL ALLOC_SPRITE_MEM
    // Overlapping static entry reached from 0xC01F75.
    case 0xC01F79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/overworld/create_entity.asm:129 LDA @VIRTUAL02
    case 0xC01F7A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:129 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC01F79.
    case 0xC01F7B: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:130 ASL
    case 0xC01F7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:131 TAY
    case 0xC01F7D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:132 STY @LOCAL05
    case 0xC01F7E: cpu.execute_instruction<0x84>(0x00001D, 2); return true;
    // src/overworld/create_entity.asm:133 LDA @LOCAL06
    case 0xC01F80: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/overworld/create_entity.asm:134 CLC
    case 0xC01F82: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:135 ADC #.LOWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01F83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x004A04, 3); return true;
    // src/overworld/create_entity.asm:135 ADC #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F83.
    case 0xC01F85: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:136 STA ENTITY_SPRITEMAP_POINTER_LOW,Y
    case 0xC01F86: cpu.execute_instruction<0x99>(0x001124, 3); return true;
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01F89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F89.
    case 0xC01F8B: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/overworld/create_entity.asm:138 STA ENTITY_SPRITEMAP_POINTER_HIGH,Y
    case 0xC01F8C: cpu.execute_instruction<0x99>(0x001160, 3); return true;
    // src/overworld/create_entity.asm:139 LDA [@VIRTUAL0A]
    case 0xC01F8F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:140 AND #$00FF
    case 0xC01F91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC01F91.
    case 0xC01F93: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F94: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F98: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:142 STA ENTITY_SPRITEMAP_SIZES,Y
    case 0xC01F9A: cpu.execute_instruction<0x99>(0x002D14, 3); return true;
    // src/overworld/create_entity.asm:143 LDA @LOCAL07
    case 0xC01F9D: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:144 STA ENTITY_SPRITEMAP_BEGINNING_INDICES,Y
    case 0xC01F9F: cpu.execute_instruction<0x99>(0x002D50, 3); return true;
    // src/overworld/create_entity.asm:145 TYA
    case 0xC01FA2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:146 CLC
    case 0xC01FA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:147 ADC #.LOWORD(ENTITY_VRAM_ADDRESS)
    case 0xC01FA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x002D8C, 3); return true;
    // src/overworld/create_entity.asm:147 ADC #.LOWORD(ENTITY_VRAM_ADDRESS)
    // Overlapping static entry reached from 0xC01FA4.
    case 0xC01FA6: cpu.execute_instruction<0x2D>(0x0086AA, 3); return true;
    // src/overworld/create_entity.asm:148 TAX
    case 0xC01FA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:149 STX @LOCAL04
    case 0xC01FA8: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/overworld/create_entity.asm:149 STX @LOCAL04
    // Overlapping static entry reached from 0xC01FA6.
    case 0xC01FA9: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:150 LDA @LOCAL07
    case 0xC01FAA: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:151 ASL
    case 0xC01FAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:152 TAX
    case 0xC01FAD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:153 LDA f:UNKNOWN_C42F8C,X
    case 0xC01FAE: cpu.execute_instruction<0xBF>(0xC42ECA, 4); return true;
    // src/overworld/create_entity.asm:154 CLC
    case 0xC01FB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:155 ADC #$4000
    case 0xC01FB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004000, 3); return true;
    // src/overworld/create_entity.asm:155 ADC #$4000
    // Overlapping static entry reached from 0xC01FB3.
    case 0xC01FB5: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:156 LDX @LOCAL04
    case 0xC01FB6: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/overworld/create_entity.asm:157 STA __BSS_START__,X
    case 0xC01FB8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/create_entity.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC01FBB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:159 LDY #sprite_grouping::width
    case 0xC01FBD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/create_entity.asm:159 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC01FBD.
    case 0xC01FBF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:160 LDA [@VIRTUAL06],Y
    case 0xC01FC0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC01FC2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:162 AND #$00FF
    case 0xC01FC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC01FC4.
    case 0xC01FC6: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:163 ASL
    case 0xC01FC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:164 LDY @LOCAL05
    case 0xC01FC8: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/create_entity.asm:165 STA ENTITY_BYTE_WIDTHS,Y
    case 0xC01FCA: cpu.execute_instruction<0x99>(0x002E7C, 3); return true;
    // src/overworld/create_entity.asm:166 LDA [@VIRTUAL06]
    case 0xC01FCD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:167 AND #$00FF
    case 0xC01FCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:167 AND #$00FF
    // Overlapping static entry reached from 0xC01FCF.
    case 0xC01FD1: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/overworld/create_entity.asm:168 STA ENTITY_TILE_HEIGHTS,Y
    case 0xC01FD2: cpu.execute_instruction<0x99>(0x002EB8, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FD5: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FD9: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FDB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:170 SEP #PROC_FLAGS::ACCUM8
    case 0xC01FDD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:171 LDY #sprite_grouping::spritebank
    case 0xC01FDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/create_entity.asm:171 LDY #sprite_grouping::spritebank
    // Overlapping static entry reached from 0xC01FDF.
    case 0xC01FE1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:172 LDA [@VIRTUAL06],Y
    case 0xC01FE2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:173 REP #PROC_FLAGS::ACCUM8
    case 0xC01FE4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:174 AND #$00FF
    case 0xC01FE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:174 AND #$00FF
    // Overlapping static entry reached from 0xC01FE6.
    case 0xC01FE8: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/create_entity.asm:175 LDY @LOCAL05
    case 0xC01FE9: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/create_entity.asm:176 STA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC01FEB: cpu.execute_instruction<0x99>(0x002E40, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x006541, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FEE.
    case 0xC01FF0: cpu.execute_instruction<0x65>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FF0.
    case 0xC01FF2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FF2.
    case 0xC01FF4: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FF3.
    case 0xC01FF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FF6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:178 LDA @LOCAL0B
    case 0xC01FF8: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:179 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01FFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:179 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01FFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:180 CLC
    case 0xC01FFC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:181 ADC @VIRTUAL06
    case 0xC01FFD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:182 STA @VIRTUAL06
    case 0xC01FFF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:182 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC017A9.
    case 0xC02000: cpu.execute_instruction<0x06>(0x0000A0, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02001: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC02000.
    case 0xC02002: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC02001.
    case 0xC02003: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02004: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02006: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02007: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02009: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC0200B: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0200D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0200F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02011: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02013: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/create_entity.asm:185 LDA @LOCAL0B
    case 0xC02015: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:186 LDY @LOCAL05
    case 0xC02017: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/create_entity.asm:187 STA ENTITY_SPRITE_IDS,Y
    case 0xC02019: cpu.execute_instruction<0x99>(0x0030D4, 3); return true;
    // src/overworld/create_entity.asm:188 LDA @LOCAL01+2
    case 0xC0201C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/create_entity.asm:189 STA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC0201E: cpu.execute_instruction<0x99>(0x002E04, 3); return true;
    // src/overworld/create_entity.asm:190 LDA @LOCAL01
    case 0xC02021: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/create_entity.asm:191 CLC
    case 0xC02023: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:192 ADC #sprite_grouping::spritepointerarray
    case 0xC02024: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/overworld/create_entity.asm:192 ADC #sprite_grouping::spritepointerarray
    // Overlapping static entry reached from 0xC02024.
    case 0xC02026: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/overworld/create_entity.asm:193 STA ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC02027: cpu.execute_instruction<0x99>(0x002DC8, 3); return true;
    // src/overworld/create_entity.asm:194 LDA NEW_SPRITE_TILE_HEIGHT
    case 0xC0202A: cpu.execute_instruction<0xAD>(0x004A02, 3); return true;
    // src/overworld/create_entity.asm:195 AND #$0001
    case 0xC0202D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/overworld/create_entity.asm:195 AND #$0001
    // Overlapping static entry reached from 0xC0202D.
    case 0xC0202F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/create_entity.asm:196 BEQ @UNKNOWN7
    case 0xC02030: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:197 LDA __BSS_START__,X
    case 0xC02032: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/create_entity.asm:198 CLC
    case 0xC02035: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:199 ADC #$0100
    case 0xC02036: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/overworld/create_entity.asm:199 ADC #$0100
    // Overlapping static entry reached from 0xC02036.
    case 0xC02038: cpu.execute_instruction<0x01>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:200 STA __BSS_START__,X
    case 0xC02039: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/create_entity.asm:200 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC02038.
    case 0xC0203A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:202 LDA @VIRTUAL02
    case 0xC0203C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:203 ASL
    case 0xC0203E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:204 TAX
    case 0xC0203F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:205 STX @LOCAL04
    case 0xC02040: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02042: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02044: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02046: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02048: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:207 INC @VIRTUAL06
    case 0xC0204A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:208 INC @VIRTUAL06
    case 0xC0204C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0204E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02050: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02052: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02054: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/overworld/create_entity.asm:210 LDA [@LOCAL03]
    case 0xC02056: cpu.execute_instruction<0xA7>(0x000017, 2); return true;
    // src/overworld/create_entity.asm:211 AND #$00FF
    case 0xC02058: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:211 AND #$00FF
    // Overlapping static entry reached from 0xC02058.
    case 0xC0205A: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:212 STA ENTITY_SIZES,X
    case 0xC0205B: cpu.execute_instruction<0x9D>(0x002F6C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0205E: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02060: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02062: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02064: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC02066: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:215 LDY #sprite_grouping::hitbox_width_ud
    case 0xC02068: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/create_entity.asm:215 LDY #sprite_grouping::hitbox_width_ud
    // Overlapping static entry reached from 0xC02068.
    case 0xC0206A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:216 LDA [@VIRTUAL06],Y
    case 0xC0206B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:217 REP #PROC_FLAGS::ACCUM8
    case 0xC0206D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:218 AND #$00FF
    case 0xC0206F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC0206F.
    case 0xC02071: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:219 STA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC02072: cpu.execute_instruction<0x9D>(0x003764, 3); return true;
    // src/overworld/create_entity.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC02075: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:221 LDY #sprite_grouping::hitbox_height_ud
    case 0xC02077: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/overworld/create_entity.asm:221 LDY #sprite_grouping::hitbox_height_ud
    // Overlapping static entry reached from 0xC02077.
    case 0xC02079: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:222 LDA [@VIRTUAL06],Y
    case 0xC0207A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC0207C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:224 AND #$00FF
    case 0xC0207E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC0207E.
    case 0xC02080: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:225 STA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC02081: cpu.execute_instruction<0x9D>(0x0037A0, 3); return true;
    // src/overworld/create_entity.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC02084: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:227 LDY #sprite_grouping::hitbox_width_lr
    case 0xC02086: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/create_entity.asm:227 LDY #sprite_grouping::hitbox_width_lr
    // Overlapping static entry reached from 0xC02086.
    case 0xC02088: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:228 LDA [@VIRTUAL06],Y
    case 0xC02089: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xC0208B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:230 AND #$00FF
    case 0xC0208D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC0208D.
    case 0xC0208F: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:231 STA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC02090: cpu.execute_instruction<0x9D>(0x0037DC, 3); return true;
    // src/overworld/create_entity.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC02093: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:233 LDY #sprite_grouping::hitbox_height_lr
    case 0xC02095: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/overworld/create_entity.asm:233 LDY #sprite_grouping::hitbox_height_lr
    // Overlapping static entry reached from 0xC02095.
    case 0xC02097: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:234 LDA [@VIRTUAL06],Y
    case 0xC02098: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:235 REP #PROC_FLAGS::ACCUM8
    case 0xC0209A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:236 AND #$00FF
    case 0xC0209C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC0209C.
    case 0xC0209E: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:237 STA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC0209F: cpu.execute_instruction<0x9D>(0x001A40, 3); return true;
    // src/overworld/create_entity.asm:238 LDA [@LOCAL03]
    case 0xC020A2: cpu.execute_instruction<0xA7>(0x000017, 2); return true;
    // src/overworld/create_entity.asm:239 AND #$00FF
    case 0xC020A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC020A4.
    case 0xC020A6: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:240 ASL
    case 0xC020A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:241 TAX
    case 0xC020A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:242 LDA f:UNKNOWN_C42AEB,X
    case 0xC020A9: cpu.execute_instruction<0xBF>(0xC42A29, 4); return true;
    // src/overworld/create_entity.asm:243 LDX @LOCAL04
    case 0xC020AD: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/overworld/create_entity.asm:244 STA ENTITY_HITBOX_ENABLED,X
    case 0xC020AF: cpu.execute_instruction<0x9D>(0x003728, 3); return true;
    // src/overworld/create_entity.asm:245 SEP #PROC_FLAGS::ACCUM8
    case 0xC020B2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:246 LDY #sprite_grouping::width
    case 0xC020B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/create_entity.asm:246 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC020B4.
    case 0xC020B6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:247 LDA [@VIRTUAL0A],Y
    case 0xC020B7: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:248 STA @LOCAL02
    case 0xC020B9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/create_entity.asm:249 STA @VIRTUAL00
    case 0xC020BB: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:250 LDA [@VIRTUAL0A]
    case 0xC020BD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:251 SEC
    case 0xC020BF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:252 SBC @VIRTUAL00
    case 0xC020C0: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:253 REP #PROC_FLAGS::ACCUM8
    case 0xC020C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:254 AND #$00FF
    case 0xC020C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:254 AND #$00FF
    // Overlapping static entry reached from 0xC020C4.
    case 0xC020C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/create_entity.asm:255 STA @VIRTUAL04
    case 0xC020C7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:256 LDA @LOCAL02
    case 0xC020C9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/create_entity.asm:257 AND #$00FF
    case 0xC020CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:257 AND #$00FF
    // Overlapping static entry reached from 0xC020CB.
    case 0xC020CD: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/create_entity.asm:258 XBA
    case 0xC020CE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:259 AND #$FF00
    case 0xC020CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/create_entity.asm:259 AND #$FF00
    // Overlapping static entry reached from 0xC020CF.
    case 0xC020D1: cpu.execute_instruction<0xFF>(0x9D0405, 4); return true;
    // src/overworld/create_entity.asm:260 ORA @VIRTUAL04
    case 0xC020D2: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:261 STA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    case 0xC020D4: cpu.execute_instruction<0x9D>(0x002FE4, 3); return true;
    // src/overworld/create_entity.asm:261 STA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    // Overlapping static entry reached from 0xC020D1.
    case 0xC020D5: cpu.execute_instruction<0xE4>(0x00002F, 2); return true;
    // src/overworld/create_entity.asm:262 LDA #$FFFF
    case 0xC020D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/create_entity.asm:262 LDA #$FFFF
    // Overlapping static entry reached from 0xC020D7.
    case 0xC020D9: cpu.execute_instruction<0xFF>(0x314C9D, 4); return true;
    // src/overworld/create_entity.asm:263 STA ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC020DA: cpu.execute_instruction<0x9D>(0x00314C, 3); return true;
    // src/overworld/create_entity.asm:264 STA ENTITY_ENEMY_IDS,X
    case 0xC020DD: cpu.execute_instruction<0x9D>(0x003110, 3); return true;
    // src/overworld/create_entity.asm:265 STA ENTITY_NPC_IDS,X
    case 0xC020E0: cpu.execute_instruction<0x9D>(0x003098, 3); return true;
    // src/overworld/create_entity.asm:265 STA ENTITY_NPC_IDS,X
    // Overlapping static entry reached from 0xC0EC55.
    case 0xC020E2: cpu.execute_instruction<0x30>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:266 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC020E3: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/overworld/create_entity.asm:266 STA ENTITY_COLLIDED_OBJECTS,X
    // Overlapping static entry reached from 0xC020E2.
    case 0xC020E4: cpu.execute_instruction<0x9C>(0x009E2C, 3); return true;
    // src/overworld/create_entity.asm:267 STZ ENTITY_SURFACE_FLAGS,X
    case 0xC020E6: cpu.execute_instruction<0x9E>(0x002FA8, 3); return true;
    // src/overworld/create_entity.asm:267 STZ ENTITY_SURFACE_FLAGS,X
    // Overlapping static entry reached from 0xC020E4.
    case 0xC020E7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:267 STZ ENTITY_SURFACE_FLAGS,X
    // Overlapping static entry reached from 0xC020E7.
    case 0xC020E8: cpu.execute_instruction<0x2F>(0x31C49E, 4); return true;
    // src/overworld/create_entity.asm:268 STZ ENTITY_UNKNOWN_2DC6,X
    case 0xC020E9: cpu.execute_instruction<0x9E>(0x0031C4, 3); return true;
    // src/overworld/create_entity.asm:269 STZ ENTITY_UNUSED,X
    case 0xC020EC: cpu.execute_instruction<0x9E>(0x003188, 3); return true;
    // src/overworld/create_entity.asm:270 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC020EF: cpu.execute_instruction<0x9E>(0x00305C, 3); return true;
    // src/overworld/create_entity.asm:271 STZ ENTITY_MOVEMENT_SPEEDS,X
    case 0xC020F2: cpu.execute_instruction<0x9E>(0x002F30, 3); return true;
    // src/overworld/create_entity.asm:272 STZ ENTITY_DIRECTIONS,X
    case 0xC020F5: cpu.execute_instruction<0x9E>(0x002EF4, 3); return true;
    // src/overworld/create_entity.asm:273 STZ ENTITY_OBSTACLE_FLAGS,X
    case 0xC020F8: cpu.execute_instruction<0x9E>(0x002CD8, 3); return true;
    // src/overworld/create_entity.asm:274 LDA @VIRTUAL02
    case 0xC020FB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:274 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0212A.
    case 0xC020FC: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:276 PLD
    case 0xC020FD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:277 RTL
    case 0xC020FE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/create_prepared_entity_npc.asm (source_named).
bool execute_overworld_create_prepared_entity_npc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44223: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC44225: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC44226: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC44227: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC44228: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC44228.
    case 0xC4422A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC4422B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC4422C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_npc.asm:13 STA @VIRTUAL02
    case 0xC4422D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4422A.
    case 0xC4422E: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC4422F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0089C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4422F.
    case 0xC44231: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC44232: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44231.
    case 0xC44233: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC44234: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44233.
    case 0xC44235: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44234.
    case 0xC44236: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC44237: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:15 LDA @VIRTUAL02
    case 0xC44239: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC4423B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC4423D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC4423E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC4423F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC44240: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC44241: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:17 CLC
    case 0xC44243: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_npc.asm:18 ADC @VIRTUAL06
    case 0xC44244: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:19 STA @VIRTUAL06
    case 0xC44246: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:20 LDA ENTITY_PREPARED_X_COORDINATE
    case 0xC44248: cpu.execute_instruction<0xAD>(0x00A033, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:21 STA @LOCAL00
    case 0xC4424B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:22 LDA ENTITY_PREPARED_Y_COORDINATE
    case 0xC4424D: cpu.execute_instruction<0xAD>(0x00A035, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:23 STA @LOCAL01
    case 0xC44250: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:24 LDY #$FFFF
    case 0xC44252: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:24 LDY #$FFFF
    // Overlapping static entry reached from 0xC44252.
    case 0xC44254: cpu.execute_instruction<0xFF>(0xA01484, 4); return true;
    // src/overworld/create_prepared_entity_npc.asm:25 STY @LOCAL03
    case 0xC44255: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:26 LDY #1
    case 0xC44257: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:26 LDY #1
    // Overlapping static entry reached from 0xC44254.
    case 0xC44258: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:26 LDY #1
    // Overlapping static entry reached from 0xC44257.
    case 0xC44259: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:27 LDA [@VIRTUAL06],Y
    case 0xC4425A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:28 LDY @LOCAL03
    case 0xC4425C: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:29 JSL CREATE_ENTITY
    case 0xC4425E: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/overworld/create_prepared_entity_npc.asm:30 STA @LOCAL02
    case 0xC44262: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:31 ASL
    case 0xC44264: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_npc.asm:32 TAX
    case 0xC44265: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_npc.asm:33 LDA ENTITY_PREPARED_DIRECTION
    case 0xC44266: cpu.execute_instruction<0xAD>(0x00A037, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:34 STA ENTITY_DIRECTIONS,X
    case 0xC44269: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:35 LDA @VIRTUAL02
    case 0xC4426C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:36 STA ENTITY_NPC_IDS,X
    case 0xC4426E: cpu.execute_instruction<0x9D>(0x003098, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:37 LDA @LOCAL02
    case 0xC44271: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:38 END_C_FUNCTION
    case 0xC44273: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:38 END_C_FUNCTION
    case 0xC44274: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/create_prepared_entity_sprite.asm (source_named).
bool execute_overworld_create_prepared_entity_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44275: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC44277: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC44278: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC44279: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4427A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4427A.
    case 0xC4427C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4427D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4427E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_sprite.asm:13 STA @LOCAL03
    case 0xC4427F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:13 STA @LOCAL03
    // Overlapping static entry reached from 0xC4427C.
    case 0xC44280: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:14 LDA ENTITY_PREPARED_X_COORDINATE
    case 0xC44281: cpu.execute_instruction<0xAD>(0x00A033, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:14 LDA ENTITY_PREPARED_X_COORDINATE
    // Overlapping static entry reached from 0xC44280.
    case 0xC44282: cpu.execute_instruction<0x33>(0x0000A0, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:15 STA @LOCAL00
    case 0xC44284: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    case 0xC44286: cpu.execute_instruction<0xAD>(0x00A035, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    // Overlapping static entry reached from 0xC442DB.
    case 0xC44287: cpu.execute_instruction<0x35>(0x0000A0, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:17 STA @LOCAL01
    case 0xC44289: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:18 LDY #$FFFF
    case 0xC4428B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:18 LDY #$FFFF
    // Overlapping static entry reached from 0xC4428B.
    case 0xC4428D: cpu.execute_instruction<0xFF>(0x2214A5, 4); return true;
    // src/overworld/create_prepared_entity_sprite.asm:19 LDA @LOCAL03
    case 0xC4428E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    case 0xC44290: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4428D.
    case 0xC44291: cpu.execute_instruction<0x5F>(0x85C01E, 4); return true;
    // src/overworld/create_prepared_entity_sprite.asm:21 STA @LOCAL02
    case 0xC44294: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:21 STA @LOCAL02
    // Overlapping static entry reached from 0xC44291.
    case 0xC44295: cpu.execute_instruction<0x12>(0x00000A, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:22 ASL
    case 0xC44296: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_sprite.asm:23 TAX
    case 0xC44297: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_sprite.asm:24 LDA ENTITY_PREPARED_DIRECTION
    case 0xC44298: cpu.execute_instruction<0xAD>(0x00A037, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:25 STA ENTITY_DIRECTIONS,X
    case 0xC4429B: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:26 LDA @LOCAL02
    case 0xC4429E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:27 END_C_FUNCTION
    case 0xC442A0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:27 END_C_FUNCTION
    case 0xC442A1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/debug/set_char_level.asm (source_named).
bool execute_overworld_debug_set_char_level_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/set_char_level.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC142D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC142DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC142DC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC142DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC142DD.
    case 0xC142DF: cpu.execute_instruction<0xFF>(0xF7205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC142E0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/debug/set_char_level.asm:8 JSR SET_INSTANT_PRINTING
    case 0xC142E1: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/overworld/debug/set_char_level.asm:8 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC142DF.
    case 0xC142E3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC142E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC142E4.
    case 0xC142E6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC142E7: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/overworld/debug/set_char_level.asm:10 LDA #2
    case 0xC142EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/debug/set_char_level.asm:10 LDA #2
    // Overlapping static entry reached from 0xC142EA.
    case 0xC142EC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/set_char_level.asm:11 JSR NUM_SELECT_PROMPT
    case 0xC142ED: cpu.execute_instruction<0x20>(0x0015D6, 3); return true;
    // src/overworld/debug/set_char_level.asm:12 LDA @VIRTUAL06
    case 0xC142F0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/debug/set_char_level.asm:13 STA @VIRTUAL04
    case 0xC142F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC142F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC142F4.
    case 0xC142F6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC142F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC142F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC142F9.
    case 0xC142FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC142FC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142FE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14300: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14302: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14304: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC14306: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC14308: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1430A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1430C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/debug/set_char_level.asm:17 LDX #1
    case 0xC1430E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/debug/set_char_level.asm:17 LDX #1
    // Overlapping static entry reached from 0xC1430E.
    case 0xC14310: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/debug/set_char_level.asm:18 TXA
    case 0xC14311: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/debug/set_char_level.asm:19 JSR CHAR_SELECT_PROMPT
    case 0xC14312: cpu.execute_instruction<0x20>(0x002EE7, 3); return true;
    // src/overworld/debug/set_char_level.asm:20 STA @VIRTUAL02
    case 0xC14315: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/set_char_level.asm:21 CMP #0
    case 0xC14317: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/set_char_level.asm:21 CMP #0
    // Overlapping static entry reached from 0xC14317.
    case 0xC14319: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/set_char_level.asm:22 BEQ @UNKNOWN0
    case 0xC1431A: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/overworld/debug/set_char_level.asm:23 LDY #1
    case 0xC1431C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/debug/set_char_level.asm:23 LDY #1
    // Overlapping static entry reached from 0xC1431C.
    case 0xC1431E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/debug/set_char_level.asm:24 LDX @VIRTUAL04
    case 0xC1431F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/debug/set_char_level.asm:25 LDA @VIRTUAL02
    case 0xC14321: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/set_char_level.asm:26 JSR RESET_CHAR_LEVEL_ONE
    case 0xC14323: cpu.execute_instruction<0x20>(0x00D6CB, 3); return true;
    // src/overworld/debug/set_char_level.asm:27 LDY #0
    case 0xC14326: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/debug/set_char_level.asm:27 LDY #0
    // Overlapping static entry reached from 0xC14326.
    case 0xC14328: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/debug/set_char_level.asm:28 LDX #100
    case 0xC14329: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000064, 2); else cpu.execute_instruction<0xA2>(0x000064, 3); return true;
    // src/overworld/debug/set_char_level.asm:28 LDX #100
    // Overlapping static entry reached from 0xC14329.
    case 0xC1432B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/debug/set_char_level.asm:29 LDA @VIRTUAL02
    case 0xC1432C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/set_char_level.asm:30 JSR RECOVER_HP_AMTPERCENT
    case 0xC1432E: cpu.execute_instruction<0x20>(0x009014, 3); return true;
    // src/overworld/debug/set_char_level.asm:31 LDY #0
    case 0xC14331: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/debug/set_char_level.asm:31 LDY #0
    // Overlapping static entry reached from 0xC14331.
    case 0xC14333: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/debug/set_char_level.asm:32 LDX #100
    case 0xC14334: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000064, 2); else cpu.execute_instruction<0xA2>(0x000064, 3); return true;
    // src/overworld/debug/set_char_level.asm:32 LDX #100
    // Overlapping static entry reached from 0xC14334.
    case 0xC14336: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/debug/set_char_level.asm:33 LDA @VIRTUAL02
    case 0xC14337: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/set_char_level.asm:34 JSR RECOVER_PP_AMTPERCENT
    case 0xC14339: cpu.execute_instruction<0x20>(0x0090C6, 3); return true;
    // src/overworld/debug/set_char_level.asm:36 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC1433C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/debug/set_char_level.asm:36 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1433C.
    case 0xC1433E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/set_char_level.asm:37 JSR CLOSE_WINDOW
    case 0xC1433F: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/set_char_level.asm:38 END_C_FUNCTION
    case 0xC14342: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/set_char_level.asm:38 END_C_FUNCTION
    case 0xC14343: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/debug/y_button_flag.asm (source_named).
bool execute_overworld_debug_y_button_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1416D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC1416F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC14170: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC14171: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC14171.
    case 0xC14173: cpu.execute_instruction<0xFF>(0x01A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC14174: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:8 LDX #EVENT_FLAG::FLG_TEMP_0
    case 0xC14175: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/debug/y_button_flag.asm:8 LDX #EVENT_FLAG::FLG_TEMP_0
    // Overlapping static entry reached from 0xC14175.
    case 0xC14177: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/debug/y_button_flag.asm:9 STX @VIRTUAL02
    case 0xC14178: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:11 JSR SET_INSTANT_PRINTING
    case 0xC1417A: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC1417D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1417D.
    case 0xC1417F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC14180: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/overworld/debug/y_button_flag.asm:13 LDA #3
    case 0xC14183: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/debug/y_button_flag.asm:13 LDA #3
    // Overlapping static entry reached from 0xC14183.
    case 0xC14185: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_flag.asm:14 JSR UNKNOWN_C10EB4
    case 0xC14186: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC14189: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC1418B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC1418D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1418F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14191: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14193: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14195: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/debug/y_button_flag.asm:17 JSR PRINT_NUMBER
    case 0xC14197: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/overworld/debug/y_button_flag.asm:18 LDA #$0020
    case 0xC1419A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/overworld/debug/y_button_flag.asm:18 LDA #$0020
    // Overlapping static entry reached from 0xC1419A.
    case 0xC1419C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_flag.asm:20 JSR PRINT_LETTER
    case 0xC1419D: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/overworld/debug/y_button_flag.asm:25 LDA @VIRTUAL02
    case 0xC141A0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:26 JSL GET_EVENT_FLAG
    case 0xC141A2: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/debug/y_button_flag.asm:27 CMP #0
    case 0xC141A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:27 CMP #0
    // Overlapping static entry reached from 0xC141A6.
    case 0xC141A8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:28 BEQ @UNKNOWN1
    case 0xC141A9: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC141AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x00E530, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141AB.
    case 0xC141AD: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC141AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141AD.
    case 0xC141AF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC141B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141AF.
    case 0xC141B1: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141B0.
    case 0xC141B2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC141B3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/debug/y_button_flag.asm:30 BRA @UNKNOWN2
    case 0xC141B5: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC141B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x00E533, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141B7.
    case 0xC141B9: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC141BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141B9.
    case 0xC141BB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC141BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141BB.
    case 0xC141BD: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141BC.
    case 0xC141BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC141BF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC141C1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC141C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC141C5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC141C7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/debug/y_button_flag.asm:35 LDA #$0100
    case 0xC141C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/overworld/debug/y_button_flag.asm:35 LDA #$0100
    // Overlapping static entry reached from 0xC141C9.
    case 0xC141CB: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/overworld/debug/y_button_flag.asm:36 JSR PRINT_STRING
    case 0xC141CC: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/overworld/debug/y_button_flag.asm:36 JSR PRINT_STRING
    // Overlapping static entry reached from 0xC141CB.
    case 0xC141CD: cpu.execute_instruction<0xDD>(0x002014, 3); return true;
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    case 0xC141CF: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC141CD.
    case 0xC141D0: cpu.execute_instruction<0xED>(0x002200, 3); return true;
    // src/overworld/debug/y_button_flag.asm:38 JSL WINDOW_TICK
    case 0xC141D2: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/overworld/debug/y_button_flag.asm:38 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC141D0.
    case 0xC141D3: cpu.execute_instruction<0x02>(0x000035, 2); return true;
    // src/overworld/debug/y_button_flag.asm:39 LDY @VIRTUAL02
    case 0xC141D6: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:40 STY @LOCAL01
    case 0xC141D8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:42 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC141DA: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/debug/y_button_flag.asm:43 LDA PAD_HELD
    case 0xC141DE: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_flag.asm:44 AND #PAD::UP
    case 0xC141E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/overworld/debug/y_button_flag.asm:44 AND #PAD::UP
    // Overlapping static entry reached from 0xC141E1.
    case 0xC141E3: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:45 BEQ @UNKNOWN4
    case 0xC141E4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/overworld/debug/y_button_flag.asm:46 LDY @LOCAL01
    case 0xC141E6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:47 INY
    case 0xC141E8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:48 STY @LOCAL01
    case 0xC141E9: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:49 BRA @UNKNOWN11
    case 0xC141EB: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/overworld/debug/y_button_flag.asm:51 LDA PAD_HELD
    case 0xC141ED: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_flag.asm:52 AND #PAD::DOWN
    case 0xC141F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/overworld/debug/y_button_flag.asm:52 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC141F0.
    case 0xC141F2: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:53 BEQ @UNKNOWN5
    case 0xC141F3: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/overworld/debug/y_button_flag.asm:53 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC141F2.
    case 0xC141F4: cpu.execute_instruction<0x07>(0x0000A4, 2); return true;
    // src/overworld/debug/y_button_flag.asm:54 LDY @LOCAL01
    case 0xC141F5: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:54 LDY @LOCAL01
    // Overlapping static entry reached from 0xC141F4.
    case 0xC141F6: cpu.execute_instruction<0x12>(0x000088, 2); return true;
    // src/overworld/debug/y_button_flag.asm:55 DEY
    case 0xC141F7: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:56 STY @LOCAL01
    case 0xC141F8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:57 BRA @UNKNOWN11
    case 0xC141FA: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/overworld/debug/y_button_flag.asm:59 LDA PAD_HELD
    case 0xC141FC: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_flag.asm:60 AND #PAD::RIGHT
    case 0xC141FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/overworld/debug/y_button_flag.asm:60 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC141FF.
    case 0xC14201: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:61 BEQ @UNKNOWN6
    case 0xC14202: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/debug/y_button_flag.asm:61 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC14201.
    case 0xC14203: cpu.execute_instruction<0x0C>(0x0012A4, 3); return true;
    // src/overworld/debug/y_button_flag.asm:62 LDY @LOCAL01
    case 0xC14204: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:63 TYA
    case 0xC14206: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:64 CLC
    case 0xC14207: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:65 ADC #10
    case 0xC14208: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/overworld/debug/y_button_flag.asm:65 ADC #10
    // Overlapping static entry reached from 0xC14208.
    case 0xC1420A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/debug/y_button_flag.asm:66 TAY
    case 0xC1420B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:67 STY @LOCAL01
    case 0xC1420C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:68 BRA @UNKNOWN11
    case 0xC1420E: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/overworld/debug/y_button_flag.asm:70 LDA PAD_HELD
    case 0xC14210: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_flag.asm:71 AND #PAD::LEFT
    case 0xC14213: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/overworld/debug/y_button_flag.asm:71 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC14213.
    case 0xC14215: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:72 BEQ @UNKNOWN7
    case 0xC14216: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/debug/y_button_flag.asm:73 LDY @LOCAL01
    case 0xC14218: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:74 TYA
    case 0xC1421A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:75 SEC
    case 0xC1421B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:76 SBC #10
    case 0xC1421C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/overworld/debug/y_button_flag.asm:76 SBC #10
    // Overlapping static entry reached from 0xC1421C.
    case 0xC1421E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/debug/y_button_flag.asm:77 TAY
    case 0xC1421F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:78 STY @LOCAL01
    case 0xC14220: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:79 BRA @UNKNOWN11
    case 0xC14222: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/overworld/debug/y_button_flag.asm:81 LDA PAD_PRESS
    case 0xC14224: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_flag.asm:82 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC14227: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/overworld/debug/y_button_flag.asm:82 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC14227.
    case 0xC14229: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:83 BEQ @UNKNOWN10
    case 0xC1422A: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/overworld/debug/y_button_flag.asm:84 LDA @VIRTUAL02
    case 0xC1422C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:85 JSL GET_EVENT_FLAG
    case 0xC1422E: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/debug/y_button_flag.asm:86 CMP #0
    case 0xC14232: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:86 CMP #0
    // Overlapping static entry reached from 0xC14232.
    case 0xC14234: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:87 BEQ @UNKNOWN8
    case 0xC14235: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/debug/y_button_flag.asm:88 LDX #0
    case 0xC14237: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:88 LDX #0
    // Overlapping static entry reached from 0xC14237.
    case 0xC14239: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/debug/y_button_flag.asm:89 BRA @UNKNOWN9
    case 0xC1423A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/debug/y_button_flag.asm:91 LDX #1
    case 0xC1423C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/debug/y_button_flag.asm:91 LDX #1
    // Overlapping static entry reached from 0xC1423C.
    case 0xC1423E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/debug/y_button_flag.asm:93 LDA @VIRTUAL02
    case 0xC1423F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:94 JSL SET_EVENT_FLAG
    case 0xC14241: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/overworld/debug/y_button_flag.asm:95 BRA @UNKNOWN11
    case 0xC14245: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/overworld/debug/y_button_flag.asm:97 LDA PAD_PRESS
    case 0xC14247: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_flag.asm:98 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1424A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:98 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1424A.
    case 0xC1424C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x008BF0, 3); return true;
    // src/overworld/debug/y_button_flag.asm:99 BEQ @UNKNOWN3
    case 0xC1424D: cpu.execute_instruction<0xF0>(0x00008B, 2); return true;
    // src/overworld/debug/y_button_flag.asm:99 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC1424C.
    case 0xC1424E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:100 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC1424F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/debug/y_button_flag.asm:100 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1424F.
    case 0xC14251: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_flag.asm:101 JSR CLOSE_WINDOW
    case 0xC14252: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/debug/y_button_flag.asm:102 BRA @UNKNOWN14
    case 0xC14255: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/overworld/debug/y_button_flag.asm:104 LDY @LOCAL01
    case 0xC14257: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:105 CPY #2000
    case 0xC14259: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000D0, 2); else cpu.execute_instruction<0xC0>(0x0007D0, 3); return true;
    // src/overworld/debug/y_button_flag.asm:105 CPY #2000
    // Overlapping static entry reached from 0xC14259.
    case 0xC1425B: cpu.execute_instruction<0x07>(0x000090, 2); return true;
    // src/overworld/debug/y_button_flag.asm:106 BCC @UNKNOWN12
    case 0xC1425C: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/debug/y_button_flag.asm:106 BCC @UNKNOWN12
    // Overlapping static entry reached from 0xC1425B.
    case 0xC1425D: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    case 0xC1425E: cpu.execute_instruction<0x4C>(0x00417A, 3); return true;
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC1425D.
    case 0xC1425F: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC1425F.
    case 0xC14260: cpu.execute_instruction<0x41>(0x0000C0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    case 0xC14261: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    // Overlapping static entry reached from 0xC14260.
    case 0xC14262: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    // Overlapping static entry reached from 0xC14261.
    case 0xC14263: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/debug/y_button_flag.asm:110 BEQL @UNKNOWN0
    case 0xC14264: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:110 BEQL @UNKNOWN0
    case 0xC14266: cpu.execute_instruction<0x4C>(0x00417A, 3); return true;
    // src/overworld/debug/y_button_flag.asm:111 STY @VIRTUAL02
    case 0xC14269: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:112 JMP @UNKNOWN0
    case 0xC1426B: cpu.execute_instruction<0x4C>(0x00417A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_flag.asm:114 END_C_FUNCTION
    case 0xC1426E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_flag.asm:114 END_C_FUNCTION
    case 0xC1426F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/debug/y_button_goods.asm (source_named).
bool execute_overworld_debug_y_button_goods_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_goods.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC14344: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC14346: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC14347: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC14348: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14348.
    case 0xC1434A: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC1434B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:9 LDX #0
    case 0xC1434C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:9 LDX #0
    // Overlapping static entry reached from 0xC1434C.
    case 0xC1434E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/debug/y_button_goods.asm:10 STX @VIRTUAL04
    case 0xC1434F: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:12 JSR SET_INSTANT_PRINTING
    case 0xC14351: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC14354: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC14354.
    case 0xC14356: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC14357: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/overworld/debug/y_button_goods.asm:14 LDA #2
    case 0xC1435A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/debug/y_button_goods.asm:14 LDA #2
    // Overlapping static entry reached from 0xC1435A.
    case 0xC1435C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_goods.asm:15 JSR UNKNOWN_C10EB4
    case 0xC1435D: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC14360: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC14362: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC14364: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14366: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14368: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1436A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1436C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/debug/y_button_goods.asm:25 JSR PRINT_NUMBER
    case 0xC1436E: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/overworld/debug/y_button_goods.asm:31 LDA @VIRTUAL04
    case 0xC14371: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:32 JSR UNKNOWN_C19216
    case 0xC14373: cpu.execute_instruction<0x20>(0x009309, 3); return true;
    // src/overworld/debug/y_button_goods.asm:33 JSR CLEAR_INSTANT_PRINTING
    case 0xC14376: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/overworld/debug/y_button_goods.asm:34 JSL WINDOW_TICK
    case 0xC14379: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/overworld/debug/y_button_goods.asm:35 LDA @VIRTUAL04
    case 0xC1437D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:36 STA @VIRTUAL02
    case 0xC1437F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:38 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC14381: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/debug/y_button_goods.asm:39 LDA PAD_HELD
    case 0xC14385: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_goods.asm:40 AND #PAD::UP
    case 0xC14388: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/overworld/debug/y_button_goods.asm:40 AND #PAD::UP
    // Overlapping static entry reached from 0xC14388.
    case 0xC1438A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:41 BEQ @UNKNOWN2
    case 0xC1438B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/debug/y_button_goods.asm:42 INC @VIRTUAL02
    case 0xC1438D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:43 JMP @UNKNOWN7
    case 0xC1438F: cpu.execute_instruction<0x4C>(0x00443B, 3); return true;
    // src/overworld/debug/y_button_goods.asm:45 LDA PAD_HELD
    case 0xC14392: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_goods.asm:46 AND #PAD::DOWN
    case 0xC14395: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/overworld/debug/y_button_goods.asm:46 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC14395.
    case 0xC14397: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:47 BEQ @UNKNOWN3
    case 0xC14398: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/debug/y_button_goods.asm:47 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC14397.
    case 0xC14399: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:48 LDA @VIRTUAL02
    case 0xC1439A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:49 DEC
    case 0xC1439C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:50 STA @VIRTUAL02
    case 0xC1439D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:51 JMP @UNKNOWN7
    case 0xC1439F: cpu.execute_instruction<0x4C>(0x00443B, 3); return true;
    // src/overworld/debug/y_button_goods.asm:53 LDA PAD_HELD
    case 0xC143A2: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_goods.asm:54 AND #PAD::RIGHT
    case 0xC143A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/overworld/debug/y_button_goods.asm:54 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC143A5.
    case 0xC143A7: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:55 BEQ @UNKNOWN4
    case 0xC143A8: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/debug/y_button_goods.asm:55 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC143A7.
    case 0xC143A9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:56 LDA @VIRTUAL02
    case 0xC143AA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:57 CLC
    case 0xC143AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:58 ADC #10
    case 0xC143AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/overworld/debug/y_button_goods.asm:58 ADC #10
    // Overlapping static entry reached from 0xC143AD.
    case 0xC143AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/debug/y_button_goods.asm:59 STA @VIRTUAL02
    case 0xC143B0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:60 JMP @UNKNOWN7
    case 0xC143B2: cpu.execute_instruction<0x4C>(0x00443B, 3); return true;
    // src/overworld/debug/y_button_goods.asm:62 LDA PAD_HELD
    case 0xC143B5: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_goods.asm:63 AND #PAD::LEFT
    case 0xC143B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/overworld/debug/y_button_goods.asm:63 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC143B8.
    case 0xC143BA: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:64 BEQ @UNKNOWN5
    case 0xC143BB: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/debug/y_button_goods.asm:65 LDA @VIRTUAL02
    case 0xC143BD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:66 SEC
    case 0xC143BF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:67 SBC #10
    case 0xC143C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/overworld/debug/y_button_goods.asm:67 SBC #10
    // Overlapping static entry reached from 0xC143C0.
    case 0xC143C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/debug/y_button_goods.asm:68 STA @VIRTUAL02
    case 0xC143C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:69 BRA @UNKNOWN7
    case 0xC143C5: cpu.execute_instruction<0x80>(0x000074, 2); return true;
    // src/overworld/debug/y_button_goods.asm:71 LDA PAD_PRESS
    case 0xC143C7: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_goods.asm:72 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC143CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/overworld/debug/y_button_goods.asm:72 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC143CA.
    case 0xC143CC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:73 BEQ @UNKNOWN6
    case 0xC143CD: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC143CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC143CF.
    case 0xC143D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC143D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC143D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC143D4.
    case 0xC143D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC143D7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143D9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143DF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC143E1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC143E3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC143E5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC143E7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/debug/y_button_goods.asm:77 LDX #1
    case 0xC143E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/debug/y_button_goods.asm:77 LDX #1
    // Overlapping static entry reached from 0xC143E9.
    case 0xC143EB: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/debug/y_button_goods.asm:78 TXA
    case 0xC143EC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:79 JSR CHAR_SELECT_PROMPT
    case 0xC143ED: cpu.execute_instruction<0x20>(0x002EE7, 3); return true;
    // src/overworld/debug/y_button_goods.asm:80 TAY
    case 0xC143F0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:81 STY @LOCAL02
    case 0xC143F1: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:82 BEQ @UNKNOWN7
    case 0xC143F3: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/overworld/debug/y_button_goods.asm:83 TYA
    case 0xC143F5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:84 JSL FIND_INVENTORY_SPACE2
    case 0xC143F6: cpu.execute_instruction<0x22>(0xC43525, 4); return true;
    // src/overworld/debug/y_button_goods.asm:85 CMP #0
    case 0xC143FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:85 CMP #0
    // Overlapping static entry reached from 0xC143FA.
    case 0xC143FC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:86 BEQ @UNKNOWN7
    case 0xC143FD: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:87 LDX @VIRTUAL04
    case 0xC143FF: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:88 LDY @LOCAL02
    case 0xC14401: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:89 TYA
    case 0xC14403: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:90 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC14404: cpu.execute_instruction<0x22>(0xC18C69, 4); return true;
    // src/overworld/debug/y_button_goods.asm:91 LDX @VIRTUAL04
    case 0xC14408: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:92 LDY @LOCAL02
    case 0xC1440A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:93 TYA
    case 0xC1440C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:94 JSL UNKNOWN_C3EE14
    case 0xC1440D: cpu.execute_instruction<0x22>(0xC3E9DA, 4); return true;
    // src/overworld/debug/y_button_goods.asm:95 CMP #0
    case 0xC14411: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:95 CMP #0
    // Overlapping static entry reached from 0xC14411.
    case 0xC14413: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:96 BEQ @UNKNOWN9
    case 0xC14414: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/overworld/debug/y_button_goods.asm:97 LDA @VIRTUAL04
    case 0xC14416: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:98 JSR GET_ITEM_TYPE
    case 0xC14418: cpu.execute_instruction<0x20>(0x009EE3, 3); return true;
    // src/overworld/debug/y_button_goods.asm:99 CMP #2
    case 0xC1441B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/debug/y_button_goods.asm:99 CMP #2
    // Overlapping static entry reached from 0xC1441B.
    case 0xC1441D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:100 BNE @UNKNOWN9
    case 0xC1441E: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:101 LDY @LOCAL02
    case 0xC14420: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:102 TYA
    case 0xC14422: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:103 JSL UNKNOWN_C22351
    case 0xC14423: cpu.execute_instruction<0x22>(0xC221EF, 4); return true;
    // src/overworld/debug/y_button_goods.asm:104 TAX
    case 0xC14427: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:105 LDY @LOCAL02
    case 0xC14428: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:106 TYA
    case 0xC1442A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:107 JSR EQUIP_ITEM
    case 0xC1442B: cpu.execute_instruction<0x20>(0x00911F, 3); return true;
    // src/overworld/debug/y_button_goods.asm:108 BRA @UNKNOWN9
    case 0xC1442E: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:110 LDA PAD_PRESS
    case 0xC14430: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_goods.asm:111 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC14433: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:111 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC14433.
    case 0xC14435: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0014D0, 3); return true;
    // src/overworld/debug/y_button_goods.asm:112 BNE @UNKNOWN9
    case 0xC14436: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/overworld/debug/y_button_goods.asm:112 BNE @UNKNOWN9
    // Overlapping static entry reached from 0xC14435.
    case 0xC14437: cpu.execute_instruction<0x14>(0x00004C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:113 JMP @UNKNOWN1
    case 0xC14438: cpu.execute_instruction<0x4C>(0x004381, 3); return true;
    // src/overworld/debug/y_button_goods.asm:113 JMP @UNKNOWN1
    // Overlapping static entry reached from 0xC14437.
    case 0xC14439: cpu.execute_instruction<0x81>(0x000043, 2); return true;
    // src/overworld/debug/y_button_goods.asm:115 LDA @VIRTUAL02
    case 0xC1443B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:116 CMP #$0100
    case 0xC1443D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/debug/y_button_goods.asm:116 CMP #$0100
    // Overlapping static entry reached from 0xC1443D.
    case 0xC1443F: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/overworld/debug/y_button_goods.asm:117 BCC @UNKNOWN8
    case 0xC14440: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/debug/y_button_goods.asm:117 BCC @UNKNOWN8
    // Overlapping static entry reached from 0xC1443F.
    case 0xC14441: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:118 JMP @UNKNOWN0
    case 0xC14442: cpu.execute_instruction<0x4C>(0x004351, 3); return true;
    // src/overworld/debug/y_button_goods.asm:118 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC14441.
    case 0xC14443: cpu.execute_instruction<0x51>(0x000043, 2); return true;
    // src/overworld/debug/y_button_goods.asm:120 LDA @VIRTUAL02
    case 0xC14445: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:121 STA @VIRTUAL04
    case 0xC14447: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:122 JMP @UNKNOWN0
    case 0xC14449: cpu.execute_instruction<0x4C>(0x004351, 3); return true;
    // src/overworld/debug/y_button_goods.asm:124 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC1444C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/debug/y_button_goods.asm:124 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1444C.
    case 0xC1444E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_goods.asm:125 JSR CLOSE_WINDOW
    case 0xC1444F: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_goods.asm:126 END_C_FUNCTION
    case 0xC14452: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_goods.asm:126 END_C_FUNCTION
    case 0xC14453: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/debug/y_button_guide.asm (source_named).
bool execute_overworld_debug_y_button_guide_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_guide.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC14270: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC14272: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC14273: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC14274: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14274.
    case 0xC14276: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC14277: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:9 LDX #0
    case 0xC14278: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/debug/y_button_guide.asm:9 LDX #0
    // Overlapping static entry reached from 0xC14278.
    case 0xC1427A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/debug/y_button_guide.asm:10 STX @LOCAL02
    case 0xC1427B: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:11 TXA
    case 0xC1427D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:12 STA @LOCAL01
    case 0xC1427E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/debug/y_button_guide.asm:13 BRA @UNKNOWN2
    case 0xC14280: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:15 ASL
    case 0xC14282: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:16 TAX
    case 0xC14283: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:17 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC14284: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/overworld/debug/y_button_guide.asm:18 CMP #.LOWORD(-1)
    case 0xC14287: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/debug/y_button_guide.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC14287.
    case 0xC14289: cpu.execute_instruction<0xFF>(0xA605F0, 4); return true;
    // src/overworld/debug/y_button_guide.asm:19 BEQ @UNKNOWN1
    case 0xC1428A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/debug/y_button_guide.asm:20 LDX @LOCAL02
    case 0xC1428C: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:20 LDX @LOCAL02
    // Overlapping static entry reached from 0xC14289.
    case 0xC1428D: cpu.execute_instruction<0x14>(0x0000E8, 2); return true;
    // src/overworld/debug/y_button_guide.asm:21 INX
    case 0xC1428E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:22 STX @LOCAL02
    case 0xC1428F: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:24 LDA @LOCAL01
    case 0xC14291: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/debug/y_button_guide.asm:25 INC
    case 0xC14293: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:26 STA @LOCAL01
    case 0xC14294: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/debug/y_button_guide.asm:28 CMP #MAX_ENTITIES
    case 0xC14296: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/overworld/debug/y_button_guide.asm:28 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC14296.
    case 0xC14298: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/debug/y_button_guide.asm:29 BCC @UNKNOWN0
    case 0xC14299: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/overworld/debug/y_button_guide.asm:30 JSR SET_INSTANT_PRINTING
    case 0xC1429B: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC1429E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1429E.
    case 0xC142A0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC142A1: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/overworld/debug/y_button_guide.asm:32 LDA #3
    case 0xC142A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/debug/y_button_guide.asm:32 LDA #3
    // Overlapping static entry reached from 0xC142A4.
    case 0xC142A6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_guide.asm:33 JSR UNKNOWN_C10EB4
    case 0xC142A7: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/overworld/debug/y_button_guide.asm:34 LDX @LOCAL02
    case 0xC142AA: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:35 TXA
    case 0xC142AC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_guide.asm:36 STORE_INT1632 @VIRTUAL06
    case 0xC142AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_guide.asm:36 STORE_INT1632 @VIRTUAL06
    case 0xC142AF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/debug/y_button_guide.asm:38 JSR PRINT_NUMBER
    case 0xC142B9: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/overworld/debug/y_button_guide.asm:39 JSR CLEAR_INSTANT_PRINTING
    case 0xC142BC: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/overworld/debug/y_button_guide.asm:40 JSL WINDOW_TICK
    case 0xC142BF: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/overworld/debug/y_button_guide.asm:41 BRA @UNKNOWN4
    case 0xC142C3: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/debug/y_button_guide.asm:43 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC142C5: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/debug/y_button_guide.asm:45 LDA PAD_PRESS
    case 0xC142C9: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_guide.asm:46 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC142CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/overworld/debug/y_button_guide.asm:46 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC142CC.
    case 0xC142CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00F4F0, 3); return true;
    // src/overworld/debug/y_button_guide.asm:47 BEQ @UNKNOWN3
    case 0xC142CF: cpu.execute_instruction<0xF0>(0x0000F4, 2); return true;
    // src/overworld/debug/y_button_guide.asm:47 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC142CE.
    case 0xC142D0: cpu.execute_instruction<0xF4>(0x0014A9, 3); return true;
    // src/overworld/debug/y_button_guide.asm:48 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC142D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/debug/y_button_guide.asm:48 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC142D1.
    case 0xC142D3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_guide.asm:49 JSR CLOSE_WINDOW
    case 0xC142D4: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_guide.asm:50 END_C_FUNCTION
    case 0xC142D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_guide.asm:50 END_C_FUNCTION
    case 0xC142D8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/disable_hotspot.asm (source_named).
bool execute_overworld_disable_hotspot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/disable_hotspot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07413: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC07415: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC07416: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC07417: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC07418: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC07418.
    case 0xC0741A: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC0741B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC0741C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:8 TAX
    case 0xC0741D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:9 DEX
    case 0xC0741E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:10 STX @LOCAL00
    case 0xC0741F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/disable_hotspot.asm:11 TXA
    case 0xC07421: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07422: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07424: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07425: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07427: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07428: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0742A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:13 CLC
    case 0xC0742B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:14 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC0742C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0061C2, 3); return true;
    // src/overworld/disable_hotspot.asm:14 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC0742C.
    case 0xC0742E: cpu.execute_instruction<0x61>(0x0000AA, 2); return true;
    // src/overworld/disable_hotspot.asm:15 TAX
    case 0xC0742F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:16 LDA #0
    case 0xC07430: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/disable_hotspot.asm:16 LDA #0
    // Overlapping static entry reached from 0xC07430.
    case 0xC07432: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/disable_hotspot.asm:17 STA a:active_hotspot::mode,X
    case 0xC07433: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/disable_hotspot.asm:18 LDX @LOCAL00
    case 0xC07436: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/disable_hotspot.asm:20 TXA
    case 0xC07438: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:21 CLC
    case 0xC07439: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:22 ADC #.LOWORD(GAME_STATE)
    case 0xC0743A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/disable_hotspot.asm:22 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0743A.
    case 0xC0743C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:23 TAX
    case 0xC0743D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC0743E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/disable_hotspot.asm:25 STZ a:game_state::active_hotspot_modes,X
    case 0xC07440: cpu.execute_instruction<0x9E>(0x0000C5, 3); return true;
    // src/overworld/disable_hotspot.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC07443: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/disable_hotspot.asm:31 END_C_FUNCTION
    case 0xC07445: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/disable_hotspot.asm:31 END_C_FUNCTION
    case 0xC07446: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/display_town_map.asm (source_named).
bool execute_overworld_display_town_map_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/display_town_map.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A951: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4A953: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4A954: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4A955: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A955.
    case 0xC4A957: cpu.execute_instruction<0xFF>(0x3CA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4A958: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:9 LDA #60
    case 0xC4A959: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/overworld/display_town_map.asm:9 LDA #60
    // Overlapping static entry reached from 0xC4A959.
    case 0xC4A95B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/display_town_map.asm:10 STA TOWN_MAP_ANIMATION_FRAME
    case 0xC4A95C: cpu.execute_instruction<0x8D>(0x00B682, 3); return true;
    // src/overworld/display_town_map.asm:11 LDA #20
    case 0xC4A95F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/display_town_map.asm:11 LDA #20
    // Overlapping static entry reached from 0xC4A95F.
    case 0xC4A961: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/display_town_map.asm:12 STA TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4A962: cpu.execute_instruction<0x8D>(0x00B684, 3); return true;
    // src/overworld/display_town_map.asm:13 LDA #12
    case 0xC4A965: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/overworld/display_town_map.asm:13 LDA #12
    // Overlapping static entry reached from 0xC4A965.
    case 0xC4A967: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/display_town_map.asm:14 STA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4A968: cpu.execute_instruction<0x8D>(0x00B686, 3); return true;
    // src/overworld/display_town_map.asm:15 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC4A96B: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/overworld/display_town_map.asm:16 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC4A96E: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/overworld/display_town_map.asm:17 JSR GET_TOWN_MAP_ID
    case 0xC4A971: cpu.execute_instruction<0x20>(0x00A544, 3); return true;
    // src/overworld/display_town_map.asm:18 AND #$000F
    case 0xC4A974: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/display_town_map.asm:18 AND #$000F
    // Overlapping static entry reached from 0xC4A974.
    case 0xC4A976: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/display_town_map.asm:19 TAY
    case 0xC4A977: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:20 STY @LOCAL01
    case 0xC4A978: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/display_town_map.asm:21 BEQL @RETURN
    case 0xC4A97A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/display_town_map.asm:21 BEQL @RETURN
    case 0xC4A97C: cpu.execute_instruction<0x4C>(0x00AA0F, 3); return true;
    // src/overworld/display_town_map.asm:22 TYA
    case 0xC4A97F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:23 DEC
    case 0xC4A980: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:24 JSR LOAD_TOWN_MAP_DATA
    case 0xC4A981: cpu.execute_instruction<0x20>(0x00A823, 3); return true;
    // src/overworld/display_town_map.asm:26 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4A984: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/display_town_map.asm:27 JSL OAM_CLEAR
    case 0xC4A988: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/overworld/display_town_map.asm:28 LDY @LOCAL01
    case 0xC4A98C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/display_town_map.asm:29 TYA
    case 0xC4A98E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:30 DEC
    case 0xC4A98F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:31 JSR UNKNOWN_C4D43F
    case 0xC4A990: cpu.execute_instruction<0x20>(0x00A70F, 3); return true;
    // src/overworld/display_town_map.asm:32 JSL UPDATE_SCREEN
    case 0xC4A993: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/overworld/display_town_map.asm:33 LDA PAD_PRESS
    case 0xC4A997: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/display_town_map.asm:34 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC4A99A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/overworld/display_town_map.asm:34 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC4A99A.
    case 0xC4A99C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/display_town_map.asm:35 BNE @UNKNOWN2
    case 0xC4A99D: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/overworld/display_town_map.asm:36 LDA PAD_PRESS
    case 0xC4A99F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/display_town_map.asm:37 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC4A9A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/overworld/display_town_map.asm:37 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC4A9A2.
    case 0xC4A9A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0010D0, 3); return true;
    // src/overworld/display_town_map.asm:38 BNE @UNKNOWN2
    case 0xC4A9A5: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/overworld/display_town_map.asm:38 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC4A9A4.
    case 0xC4A9A6: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/overworld/display_town_map.asm:39 LDA PAD_PRESS
    case 0xC4A9A7: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/display_town_map.asm:39 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC4A9A6.
    case 0xC4A9A8: cpu.execute_instruction<0x6D>(0x002900, 3); return true;
    // src/overworld/display_town_map.asm:40 AND #PAD::L_BUTTON
    case 0xC4A9AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/overworld/display_town_map.asm:40 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC4A9A8.
    case 0xC4A9AB: cpu.execute_instruction<0x20>(0x00D000, 3); return true;
    // src/overworld/display_town_map.asm:40 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC4A9AA.
    case 0xC4A9AC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/display_town_map.asm:41 BNE @UNKNOWN2
    case 0xC4A9AD: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/overworld/display_town_map.asm:41 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC4A9AB.
    case 0xC4A9AE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:42 LDA PAD_PRESS
    case 0xC4A9AF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/display_town_map.asm:43 AND #PAD::X_BUTTON
    case 0xC4A9B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/overworld/display_town_map.asm:43 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC4A9B2.
    case 0xC4A9B4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/display_town_map.asm:44 BEQ @UNKNOWN1
    case 0xC4A9B5: cpu.execute_instruction<0xF0>(0x0000CD, 2); return true;
    // src/overworld/display_town_map.asm:46 LDX #1
    case 0xC4A9B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/display_town_map.asm:46 LDX #1
    // Overlapping static entry reached from 0xC4A9B7.
    case 0xC4A9B9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/display_town_map.asm:47 LDA #2
    case 0xC4A9BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/display_town_map.asm:47 LDA #2
    // Overlapping static entry reached from 0xC4A9BA.
    case 0xC4A9BC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/display_town_map.asm:48 JSL FADE_OUT
    case 0xC4A9BD: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/overworld/display_town_map.asm:49 LDX #0
    case 0xC4A9C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/display_town_map.asm:49 LDX #0
    // Overlapping static entry reached from 0xC4A9C1.
    case 0xC4A9C3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/display_town_map.asm:50 STX @LOCAL00
    case 0xC4A9C4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/display_town_map.asm:51 BRA @UNKNOWN4
    case 0xC4A9C6: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/overworld/display_town_map.asm:53 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4A9C8: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/display_town_map.asm:54 JSL OAM_CLEAR
    case 0xC4A9CC: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/overworld/display_town_map.asm:55 LDY @LOCAL01
    case 0xC4A9D0: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/display_town_map.asm:56 TYA
    case 0xC4A9D2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:57 DEC
    case 0xC4A9D3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:58 JSR UNKNOWN_C4D43F
    case 0xC4A9D4: cpu.execute_instruction<0x20>(0x00A70F, 3); return true;
    // src/overworld/display_town_map.asm:59 JSL UPDATE_SCREEN
    case 0xC4A9D7: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/overworld/display_town_map.asm:60 LDX @LOCAL00
    case 0xC4A9DB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/display_town_map.asm:61 INX
    case 0xC4A9DD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:62 STX @LOCAL00
    case 0xC4A9DE: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/display_town_map.asm:64 CPX #16
    case 0xC4A9E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/overworld/display_town_map.asm:64 CPX #16
    // Overlapping static entry reached from 0xC4A9E0.
    case 0xC4A9E2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/display_town_map.asm:65 BCC @UNKNOWN3
    case 0xC4A9E3: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/overworld/display_town_map.asm:66 LDA #1
    case 0xC4A9E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/display_town_map.asm:66 LDA #1
    // Overlapping static entry reached from 0xC4A9E5.
    case 0xC4A9E7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/display_town_map.asm:67 STA DISABLE_MUSIC_CHANGES
    case 0xC4A9E8: cpu.execute_instruction<0x8D>(0x00615E, 3); return true;
    // src/overworld/display_town_map.asm:68 JSL RELOAD_MAP
    case 0xC4A9EB: cpu.execute_instruction<0x22>(0xC01909, 4); return true;
    // src/overworld/display_town_map.asm:69 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC4A9EF: cpu.execute_instruction<0xAD>(0x00615C, 3); return true;
    // src/overworld/display_town_map.asm:70 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC4A9F2: cpu.execute_instruction<0x8D>(0x00615A, 3); return true;
    // src/overworld/display_town_map.asm:71 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4A9F5: cpu.execute_instruction<0x22>(0xC45CA2, 4); return true;
    // src/overworld/display_town_map.asm:72 STZ DISABLE_MUSIC_CHANGES
    case 0xC4A9F9: cpu.execute_instruction<0x9C>(0x00615E, 3); return true;
    // src/overworld/display_town_map.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A9FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/display_town_map.asm:74 LDA #$17
    case 0xC4A9FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/overworld/display_town_map.asm:75 STA TM_MIRROR
    case 0xC4AA00: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/display_town_map.asm:75 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4A9FE.
    case 0xC4AA01: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:75 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4AA01.
    case 0xC4AA02: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/display_town_map.asm:76 LDX #1
    case 0xC4AA03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/display_town_map.asm:76 LDX #1
    // Overlapping static entry reached from 0xC4AA03.
    case 0xC4AA05: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/display_town_map.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC4AA06: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/display_town_map.asm:78 LDA #2
    case 0xC4AA08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/display_town_map.asm:78 LDA #2
    // Overlapping static entry reached from 0xC4AA08.
    case 0xC4AA0A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/display_town_map.asm:79 JSL FADE_IN
    case 0xC4AA0B: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/overworld/display_town_map.asm:81 LDY @LOCAL01
    case 0xC4AA0F: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/display_town_map.asm:82 TYA
    case 0xC4AA11: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/display_town_map.asm:83 END_C_FUNCTION
    case 0xC4AA12: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/display_town_map.asm:83 END_C_FUNCTION
    case 0xC4AA13: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/display_your_sanctuary_location.asm (source_named).
bool execute_overworld_display_your_sanctuary_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B4E8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4B4EA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4B4EB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4B4EC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4B4ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B4ED.
    case 0xC4B4EF: cpu.execute_instruction<0xFF>(0x29685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4B4F0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4B4F1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:8 AND #$0007
    case 0xC4B4F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC4B4EF.
    case 0xC4B4F3: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC4B4F2.
    case 0xC4B4F4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:9 STA @VIRTUAL02
    case 0xC4B4F5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:10 ASL
    case 0xC4B4F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:11 TAX
    case 0xC4B4F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:12 LDA LOADED_YOUR_SANCTUARY_LOCATIONS,X
    case 0xC4B4F9: cpu.execute_instruction<0xBD>(0x00B692, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:13 BNE @UNKNOWN0
    case 0xC4B4FC: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:14 LDA @VIRTUAL02
    case 0xC4B4FE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:15 JSL LOAD_YOUR_SANCTUARY_LOCATION
    case 0xC4B500: cpu.execute_instruction<0x22>(0xC4B492, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:16 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4B504: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B508: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B508.
    case 0xC4B50A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B50B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B50D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B50D.
    case 0xC4B50F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B510: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:22 LDY #$0800
    case 0xC4B512: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000800, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:22 LDY #$0800
    // Overlapping static entry reached from 0xC4B512.
    case 0xC4B514: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:23 LDA @VIRTUAL02
    case 0xC4B515: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:24 JSL MULT16
    case 0xC4B517: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:25 CLC
    case 0xC4B51B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:26 ADC @VIRTUAL06
    case 0xC4B51C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:27 STA @VIRTUAL06
    case 0xC4B51E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:28 STA @LOCAL00
    case 0xC4B520: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:29 LDA @VIRTUAL06+2
    case 0xC4B522: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:30 STA @LOCAL00+2
    case 0xC4B524: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:31 LDY #$3800
    case 0xC4B526: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003800, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:31 LDY #$3800
    // Overlapping static entry reached from 0xC4B526.
    case 0xC4B528: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:32 LDX #$0780
    case 0xC4B529: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000780, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:32 LDX #$0780
    // Overlapping static entry reached from 0xC4B529.
    case 0xC4B52B: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B52C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:33 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4B52B.
    case 0xC4B52D: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:34 LDA #0
    case 0xC4B52E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:35 JSL PREPARE_VRAM_COPY
    case 0xC4B530: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:35 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4B52E.
    case 0xC4B531: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:35 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4B531.
    case 0xC4B533: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B534: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B533.
    case 0xC4B535: cpu.execute_instruction<0x00>(0x000040, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B534.
    case 0xC4B536: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B537: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B539: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B539.
    case 0xC4B53B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B53C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:38 LDY #$0200
    case 0xC4B53E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000200, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:38 LDY #$0200
    // Overlapping static entry reached from 0xC4B53E.
    case 0xC4B540: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:39 LDA @VIRTUAL02
    case 0xC4B541: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:40 JSL MULT16
    case 0xC4B543: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:41 CLC
    case 0xC4B547: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:42 ADC @VIRTUAL06
    case 0xC4B548: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:43 STA @VIRTUAL06
    case 0xC4B54A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:44 STA @LOCAL00
    case 0xC4B54C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:45 LDA @VIRTUAL06+2
    case 0xC4B54E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:46 STA @LOCAL00+2
    case 0xC4B550: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:47 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4B552: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:47 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B552.
    case 0xC4B554: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:48 LDA #.LOWORD(PALETTES)
    case 0xC4B555: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:48 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4B554.
    case 0xC4B556: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:48 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4B555.
    case 0xC4B557: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:49 JSL MEMCPY16
    case 0xC4B558: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B55C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:51 LDA #PALETTE_UPLOAD::BG_ONLY
    case 0xC4B55E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008D08, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:52 STA PALETTE_UPLOAD_MODE
    case 0xC4B560: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:52 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4B55E.
    case 0xC4B561: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4B563: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:54 STZ SCREEN_TOP_Y
    case 0xC4B565: cpu.execute_instruction<0x9C>(0x0046FC, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:55 STZ SCREEN_LEFT_X
    case 0xC4B568: cpu.execute_instruction<0x9C>(0x0046FA, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:56 STZ BG1_Y_POS
    case 0xC4B56B: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:57 STZ BG1_X_POS
    case 0xC4B56E: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:58 END_C_FUNCTION
    case 0xC4B571: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:58 END_C_FUNCTION
    case 0xC4B572: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/door_transition.asm (source_named).
bool execute_overworld_door_transition_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/door_transition.asm:3 BEGIN_C_FUNCTION
    case 0xC06E2D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06E2F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06E30: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06E31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC06E31.
    case 0xC06E33: cpu.execute_instruction<0xFF>(0x28A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06E34: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06E35: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06E37: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06E39: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06E3B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06E3D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06E3F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06E41: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06E43: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06E45: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06E47: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06E49: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06E4B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC06E4D.
    case 0xC06E4F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E50: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E52: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E53: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E55: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E57: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06E59.
    case 0xC06E5B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E5C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06E5E.
    case 0xC06E60: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E61: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E63: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E65: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E67: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E69: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E6B: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:17 BEQ @UNKNOWN1
    case 0xC06E6D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06E6F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06E71: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06E73: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06E75: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:19 JSL UNKNOWN_C10004
    case 0xC06E77: cpu.execute_instruction<0x22>(0xC10000, 4); return true;
    // src/overworld/door_transition.asm:21 STZ LADDER_STAIRS_TILE_Y
    case 0xC06E7B: cpu.execute_instruction<0x9C>(0x006130, 3); return true;
    // src/overworld/door_transition.asm:22 STZ LADDER_STAIRS_TILE_X
    case 0xC06E7E: cpu.execute_instruction<0x9C>(0x00612E, 3); return true;
    // src/overworld/door_transition.asm:23 LDA #door_data::event_flag
    case 0xC06E81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/door_transition.asm:23 LDA #door_data::event_flag
    // Overlapping static entry reached from 0xC06E81.
    case 0xC06E83: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06E84: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06E86: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06E88: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06E8A: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06E8C: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06E8E: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06E90: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06E92: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:26 CLC
    case 0xC06E94: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:27 ADC @VIRTUAL06
    case 0xC06E95: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:28 STA @VIRTUAL06
    case 0xC06E97: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:29 LDA [@VIRTUAL06]
    case 0xC06E99: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:30 BEQ @UNKNOWN3
    case 0xC06E9B: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/overworld/door_transition.asm:31 AND #$7FFF
    case 0xC06E9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/overworld/door_transition.asm:31 AND #$7FFF
    // Overlapping static entry reached from 0xC06E9D.
    case 0xC06E9F: cpu.execute_instruction<0x7F>(0x14D022, 4); return true;
    // src/overworld/door_transition.asm:32 JSL GET_EVENT_FLAG
    case 0xC06EA0: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/door_transition.asm:32 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC06E9F.
    case 0xC06EA3: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // src/overworld/door_transition.asm:33 STA @LOCAL02
    case 0xC06EA4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/door_transition.asm:33 STA @LOCAL02
    // Overlapping static entry reached from 0xC06EA3.
    case 0xC06EA5: cpu.execute_instruction<0x14>(0x0000A2, 2); return true;
    // src/overworld/door_transition.asm:34 LDX #0
    case 0xC06EA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/door_transition.asm:34 LDX #0
    // Overlapping static entry reached from 0xC06EA5.
    case 0xC06EA7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/door_transition.asm:34 LDX #0
    // Overlapping static entry reached from 0xC06EA6.
    case 0xC06EA8: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:35 LDA [@VIRTUAL06]
    case 0xC06EA9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:36 CMP #EVENT_FLAG_UNSET
    case 0xC06EAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/overworld/door_transition.asm:36 CMP #EVENT_FLAG_UNSET
    // Overlapping static entry reached from 0xC06EAB.
    case 0xC06EAD: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/door_transition.asm:37 BLTEQ @UNKNOWN2
    case 0xC06EAE: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/door_transition.asm:37 BLTEQ @UNKNOWN2
    case 0xC06EB0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/door_transition.asm:38 LDX #1
    case 0xC06EB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:38 LDX #1
    // Overlapping static entry reached from 0xC06EB2.
    case 0xC06EB4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/door_transition.asm:40 STX @VIRTUAL02
    case 0xC06EB5: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:41 LDA @LOCAL02
    case 0xC06EB7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/door_transition.asm:42 CMP @VIRTUAL02
    case 0xC06EB9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:43 BEQ @UNKNOWN3
    case 0xC06EBB: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:44 STZ USING_DOOR
    case 0xC06EBD: cpu.execute_instruction<0x9C>(0x006148, 3); return true;
    // src/overworld/door_transition.asm:45 JMP @UNKNOWN15
    case 0xC06EC0: cpu.execute_instruction<0x4C>(0x00702E, 3); return true;
    // src/overworld/door_transition.asm:47 LDY #1
    case 0xC06EC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:47 LDY #1
    // Overlapping static entry reached from 0xC06EC3.
    case 0xC06EC5: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/door_transition.asm:48 STY @LOCAL01
    case 0xC06EC6: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/door_transition.asm:49 BRA @UNKNOWN5
    case 0xC06EC8: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/door_transition.asm:51 LDX #0
    case 0xC06ECA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/door_transition.asm:51 LDX #0
    // Overlapping static entry reached from 0xC06ECA.
    case 0xC06ECC: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/door_transition.asm:52 TYA
    case 0xC06ECD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:53 JSL SET_EVENT_FLAG
    case 0xC06ECE: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/overworld/door_transition.asm:54 LDY @LOCAL01
    case 0xC06ED2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/door_transition.asm:55 INY
    case 0xC06ED4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:56 STY @LOCAL01
    case 0xC06ED5: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/door_transition.asm:58 CPY #10
    case 0xC06ED7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/overworld/door_transition.asm:58 CPY #10
    // Overlapping static entry reached from 0xC06ED7.
    case 0xC06ED9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/door_transition.asm:59 BLTEQ @UNKNOWN4
    case 0xC06EDA: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/door_transition.asm:59 BLTEQ @UNKNOWN4
    case 0xC06EDC: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // src/overworld/door_transition.asm:60 JSL UNKNOWN_C06B3D
    case 0xC06EDE: cpu.execute_instruction<0x22>(0xC06D6B, 4); return true;
    // src/overworld/door_transition.asm:61 JSL UNKNOWN_C07C5B
    case 0xC06EE2: cpu.execute_instruction<0x22>(0xC07EAB, 4); return true;
    // src/overworld/door_transition.asm:62 LDA #$FFFF
    case 0xC06EE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/door_transition.asm:62 LDA #$FFFF
    // Overlapping static entry reached from 0xC06EE6.
    case 0xC06EE8: cpu.execute_instruction<0xFF>(0xB67C8D, 4); return true;
    // src/overworld/door_transition.asm:63 STA ENTITY_FADE_ENTITY
    case 0xC06EE9: cpu.execute_instruction<0x8D>(0x00B67C, 3); return true;
    // src/overworld/door_transition.asm:64 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC06EEC: cpu.execute_instruction<0x9C>(0x0060DE, 3); return true;
    // src/overworld/door_transition.asm:65 LDA #door_data::unknown10
    case 0xC06EEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/overworld/door_transition.asm:65 LDA #door_data::unknown10
    // Overlapping static entry reached from 0xC06EEF.
    case 0xC06EF1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06EF2: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06EF4: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06EF6: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06EF8: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:67 CLC
    case 0xC06EFA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:68 ADC @VIRTUAL06
    case 0xC06EFB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:69 STA @VIRTUAL06
    case 0xC06EFD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:70 LDX #1
    case 0xC06EFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:70 LDX #1
    // Overlapping static entry reached from 0xC06EFF.
    case 0xC06F01: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:71 LDA [@VIRTUAL06]
    case 0xC06F02: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:72 AND #$00FF
    case 0xC06F04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC06F04.
    case 0xC06F06: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:73 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC06F07: cpu.execute_instruction<0x22>(0xC06ADD, 4); return true;
    // src/overworld/door_transition.asm:74 JSL PLAY_SOUND
    case 0xC06F0B: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/overworld/door_transition.asm:75 LDA DISABLED_TRANSITIONS
    case 0xC06F0F: cpu.execute_instruction<0xAD>(0x00B68A, 3); return true;
    // src/overworld/door_transition.asm:76 BEQ @UNKNOWN6
    case 0xC06F12: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:77 LDX #1
    case 0xC06F14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:77 LDX #1
    // Overlapping static entry reached from 0xC06F14.
    case 0xC06F16: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/door_transition.asm:78 TXA
    case 0xC06F17: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:79 JSL FADE_OUT
    case 0xC06F18: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/overworld/door_transition.asm:80 BRA @UNKNOWN7
    case 0xC06F1C: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/door_transition.asm:82 LDX #1
    case 0xC06F1E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:82 LDX #1
    // Overlapping static entry reached from 0xC06F1E.
    case 0xC06F20: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:83 LDA [@VIRTUAL06]
    case 0xC06F21: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:84 AND #$00FF
    case 0xC06F23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC06F23.
    case 0xC06F25: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:85 JSL SCREEN_TRANSITION
    case 0xC06F26: cpu.execute_instruction<0x22>(0xC06890, 4); return true;
    // src/overworld/door_transition.asm:87 LDY #door_data::unknown8
    case 0xC06F2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/door_transition.asm:87 LDY #door_data::unknown8
    // Overlapping static entry reached from 0xC06F2A.
    case 0xC06F2C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/door_transition.asm:88 LDA [@VIRTUAL0A],Y
    case 0xC06F2D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:89 ASL
    case 0xC06F2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:90 ASL
    case 0xC06F30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:91 ASL
    case 0xC06F31: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:92 STA @VIRTUAL02
    case 0xC06F32: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:93 LDY #door_data::unknown6
    case 0xC06F34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/door_transition.asm:93 LDY #door_data::unknown6
    // Overlapping static entry reached from 0xC06F34.
    case 0xC06F36: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/door_transition.asm:94 LDA [@VIRTUAL0A],Y
    case 0xC06F37: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:95 STA @LOCAL02
    case 0xC06F39: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/door_transition.asm:96 AND #$3FFF
    case 0xC06F3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/overworld/door_transition.asm:96 AND #$3FFF
    // Overlapping static entry reached from 0xC06F3B.
    case 0xC06F3D: cpu.execute_instruction<0x3F>(0x0A0A0A, 4); return true;
    // src/overworld/door_transition.asm:97 ASL
    case 0xC06F3E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:98 ASL
    case 0xC06F3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:99 ASL
    case 0xC06F40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:100 STA @VIRTUAL04
    case 0xC06F41: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC06F43: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:102 LDA #14
    case 0xC06F45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00E20E, 3); return true;
    // src/overworld/door_transition.asm:103 SEP #PROC_FLAGS::INDEX8
    case 0xC06F47: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:103 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC06F45.
    case 0xC06F48: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/overworld/door_transition.asm:104 TAY
    case 0xC06F49: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC06F4A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:106 LDA @LOCAL02
    case 0xC06F4C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/door_transition.asm:107 JSL ASR8_UNKNOWN1
    case 0xC06F4E: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/overworld/door_transition.asm:108 ASL
    case 0xC06F52: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:109 REP #PROC_FLAGS::INDEX8
    case 0xC06F53: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:110 TAX
    case 0xC06F55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:111 LDA f:UNKNOWN_C3E1D8,X
    case 0xC06F56: cpu.execute_instruction<0xBF>(0xC3E1C2, 4); return true;
    // src/overworld/door_transition.asm:112 CMP #2
    case 0xC06F5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/door_transition.asm:112 CMP #2
    // Overlapping static entry reached from 0xC06F5A.
    case 0xC06F5C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/door_transition.asm:113 BEQ @UNKNOWN8
    case 0xC06F5D: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:114 LDA @VIRTUAL02
    case 0xC06F5F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:115 CLC
    case 0xC06F61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:116 ADC #8
    case 0xC06F62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/door_transition.asm:116 ADC #8
    // Overlapping static entry reached from 0xC06F62.
    case 0xC06F64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/door_transition.asm:117 STA @VIRTUAL02
    case 0xC06F65: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:119 LDA DEBUG
    case 0xC06F67: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/overworld/door_transition.asm:120 BEQ @UNKNOWN10
    case 0xC06F6A: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/overworld/door_transition.asm:121 LDA DEBUG_MODE_NUMBER
    case 0xC06F6C: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/overworld/door_transition.asm:122 CMP #6
    case 0xC06F6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/door_transition.asm:122 CMP #6
    // Overlapping static entry reached from 0xC06F6F.
    case 0xC06F71: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/door_transition.asm:123 BEQ @UNKNOWN9
    case 0xC06F72: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:124 LDX @VIRTUAL04
    case 0xC06F74: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:125 LDA @VIRTUAL02
    case 0xC06F76: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:126 JSL UNKNOWN_C068F4
    case 0xC06F78: cpu.execute_instruction<0x22>(0xC06B22, 4); return true;
    // src/overworld/door_transition.asm:128 LDA REPLAY_MODE_ACTIVE
    case 0xC06F7C: cpu.execute_instruction<0xAD>(0x00B718, 3); return true;
    // src/overworld/door_transition.asm:129 BNE @UNKNOWN11
    case 0xC06F7F: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/overworld/door_transition.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC06F81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:131 LDY #door_data::unknown10
    case 0xC06F83: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/overworld/door_transition.asm:131 LDY #door_data::unknown10
    // Overlapping static entry reached from 0xC06F83.
    case 0xC06F85: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/door_transition.asm:132 LDA [@VIRTUAL0A],Y
    case 0xC06F86: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC06F88: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:134 AND #$00FF
    case 0xC06F8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC06F8A.
    case 0xC06F8C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:135 JSL UNKNOWN_EFE895
    case 0xC06F8D: cpu.execute_instruction<0x22>(0xEFD1B8, 4); return true;
    // src/overworld/door_transition.asm:136 BRA @UNKNOWN11
    case 0xC06F91: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:138 LDX @VIRTUAL04
    case 0xC06F93: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:139 LDA @VIRTUAL02
    case 0xC06F95: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:140 JSL UNKNOWN_C068F4
    case 0xC06F97: cpu.execute_instruction<0x22>(0xC06B22, 4); return true;
    // src/overworld/door_transition.asm:142 LDX @VIRTUAL04
    case 0xC06F9B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:143 LDA @VIRTUAL02
    case 0xC06F9D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:144 JSL LOAD_MAP_AT_POSITION
    case 0xC06F9F: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/overworld/door_transition.asm:145 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC06FA3: cpu.execute_instruction<0x9C>(0x002C8E, 3); return true;
    // src/overworld/door_transition.asm:146 STZ GAME_STATE+game_state::walking_style
    case 0xC06FA6: cpu.execute_instruction<0x9C>(0x009B34, 3); return true;
    // src/overworld/door_transition.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC06FA9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:148 LDA #14
    case 0xC06FAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00480E, 3); return true;
    // src/overworld/door_transition.asm:149 PHA
    case 0xC06FAD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC06FAE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:151 LDY #door_data::unknown6
    case 0xC06FB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/door_transition.asm:151 LDY #door_data::unknown6
    // Overlapping static entry reached from 0xC06FB0.
    case 0xC06FB2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/door_transition.asm:152 LDA [@VIRTUAL0A],Y
    case 0xC06FB3: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:153 SEP #PROC_FLAGS::INDEX8
    case 0xC06FB5: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:154 PLY
    case 0xC06FB7: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:155 JSL ASR8_UNKNOWN1
    case 0xC06FB8: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/overworld/door_transition.asm:156 ASL
    case 0xC06FBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:157 REP #PROC_FLAGS::INDEX8
    case 0xC06FBD: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:158 TAX
    case 0xC06FBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:159 LDA f:UNKNOWN_C3E1D8,X
    case 0xC06FC0: cpu.execute_instruction<0xBF>(0xC3E1C2, 4); return true;
    // src/overworld/door_transition.asm:160 TAY
    case 0xC06FC4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:161 LDX @VIRTUAL04
    case 0xC06FC5: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:162 LDA @VIRTUAL02
    case 0xC06FC7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:163 JSL UNKNOWN_C03FA9
    case 0xC06FC9: cpu.execute_instruction<0x22>(0xC04230, 4); return true;
    // src/overworld/door_transition.asm:164 LDA DEBUG
    case 0xC06FCD: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/overworld/door_transition.asm:165 BEQ @UNKNOWN12
    case 0xC06FD0: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/overworld/door_transition.asm:166 LDA REPLAY_MODE_ACTIVE
    case 0xC06FD2: cpu.execute_instruction<0xAD>(0x00B718, 3); return true;
    // src/overworld/door_transition.asm:167 BNE @UNKNOWN12
    case 0xC06FD5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:168 JSL SAVE_REPLAY_SAVE_SLOT
    case 0xC06FD7: cpu.execute_instruction<0x22>(0xEFD094, 4); return true;
    // src/overworld/door_transition.asm:170 JSL UNKNOWN_C069AF
    case 0xC06FDB: cpu.execute_instruction<0x22>(0xC06BDD, 4); return true;
    // src/overworld/door_transition.asm:171 JSL UNKNOWN_C065A3
    case 0xC06FDF: cpu.execute_instruction<0x22>(0xC067D1, 4); return true;
    // src/overworld/door_transition.asm:172 LDA #door_data::unknown10
    case 0xC06FE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/overworld/door_transition.asm:172 LDA #door_data::unknown10
    // Overlapping static entry reached from 0xC06FE3.
    case 0xC06FE5: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06FE6: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06FE8: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06FEA: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06FEC: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:174 CLC
    case 0xC06FEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:175 ADC @VIRTUAL06
    case 0xC06FEF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:176 STA @VIRTUAL06
    case 0xC06FF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:177 LDX #0
    case 0xC06FF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/door_transition.asm:177 LDX #0
    // Overlapping static entry reached from 0xC06FF3.
    case 0xC06FF5: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:178 LDA [@VIRTUAL06]
    case 0xC06FF6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:179 AND #$00FF
    case 0xC06FF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC06FF8.
    case 0xC06FFA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:180 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC06FFB: cpu.execute_instruction<0x22>(0xC06ADD, 4); return true;
    // src/overworld/door_transition.asm:181 JSL PLAY_SOUND
    case 0xC06FFF: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/overworld/door_transition.asm:182 LDA DISABLED_TRANSITIONS
    case 0xC07003: cpu.execute_instruction<0xAD>(0x00B68A, 3); return true;
    // src/overworld/door_transition.asm:183 BEQ @UNKNOWN13
    case 0xC07006: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:184 LDX #1
    case 0xC07008: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:184 LDX #1
    // Overlapping static entry reached from 0xC07008.
    case 0xC0700A: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/door_transition.asm:185 TXA
    case 0xC0700B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:186 JSL FADE_IN
    case 0xC0700C: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/overworld/door_transition.asm:187 BRA @UNKNOWN14
    case 0xC07010: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/door_transition.asm:189 LDX #0
    case 0xC07012: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/door_transition.asm:189 LDX #0
    // Overlapping static entry reached from 0xC07012.
    case 0xC07014: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:190 LDA [@VIRTUAL06]
    case 0xC07015: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:191 AND #$00FF
    case 0xC07017: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:191 AND #$00FF
    // Overlapping static entry reached from 0xC07017.
    case 0xC07019: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:192 JSL SCREEN_TRANSITION
    case 0xC0701A: cpu.execute_instruction<0x22>(0xC06890, 4); return true;
    // src/overworld/door_transition.asm:194 LDA #$FFFF
    case 0xC0701E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/door_transition.asm:194 LDA #$FFFF
    // Overlapping static entry reached from 0xC0701E.
    case 0xC07020: cpu.execute_instruction<0xFF>(0x614A8D, 4); return true;
    // src/overworld/door_transition.asm:195 STA STAIRS_DIRECTION
    case 0xC07021: cpu.execute_instruction<0x8D>(0x00614A, 3); return true;
    // src/overworld/door_transition.asm:196 STZ PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC07024: cpu.execute_instruction<0x9C>(0x000A2A, 3); return true;
    // src/overworld/door_transition.asm:197 JSL SPAWN_BUZZ_BUZZ
    case 0xC07027: cpu.execute_instruction<0x22>(0xC06D4F, 4); return true;
    // src/overworld/door_transition.asm:198 STZ USING_DOOR
    case 0xC0702B: cpu.execute_instruction<0x9C>(0x006148, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/door_transition.asm:200 END_C_FUNCTION
    case 0xC0702E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/door_transition.asm:200 END_C_FUNCTION
    case 0xC0702F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/enable_your_sanctuary_display.asm (source_named).
bool execute_overworld_enable_your_sanctuary_display_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/enable_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B0E1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/enable_your_sanctuary_display.asm:5 LDY #$6000
    case 0xC4B0E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:5 LDY #$6000
    // Overlapping static entry reached from 0xC4B0E3.
    case 0xC4B0E5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/enable_your_sanctuary_display.asm:6 LDX #$3800
    case 0xC4B0E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:6 LDX #$3800
    // Overlapping static entry reached from 0xC4B0E6.
    case 0xC4B0E8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/enable_your_sanctuary_display.asm:7 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC4B0E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:7 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC4B0E9.
    case 0xC4B0EB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/enable_your_sanctuary_display.asm:8 JSL SET_BG1_VRAM_LOCATION
    case 0xC4B0EC: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/overworld/enable_your_sanctuary_display.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B0F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/enable_your_sanctuary_display.asm:10 LDA #$11
    case 0xC4B0F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:11 STA TM_MIRROR
    case 0xC4B0F4: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B0F2.
    case 0xC4B0F5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/enable_your_sanctuary_display.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B0F5.
    case 0xC4B0F6: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/enable_your_sanctuary_display.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC4B0F7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/enable_your_sanctuary_display.asm:13 END_C_FUNCTION
    case 0xC4B0F9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/find_free_space_7E4682.asm (source_named).
bool execute_overworld_find_free_space_7e4682_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_free_space_7E4682.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01AB3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_free_space_7E4682.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC01AB1.
    case 0xC01AB4: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AB5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AB6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AB7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC01AB8.
    case 0xC01ABA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01ABB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01ABC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:10 STA @VIRTUAL02
    case 0xC01ABD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC01ABA.
    case 0xC01ABE: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:11 LDX #0
    case 0xC01ABF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:11 LDX #0
    // Overlapping static entry reached from 0xC01ABF.
    case 0xC01AC1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:12 STX @LOCAL01
    case 0xC01AC2: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:13 LDA @VIRTUAL02
    case 0xC01AC4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:14 STA UNREAD_7E4A6A
    case 0xC01AC6: cpu.execute_instruction<0x8D>(0x004DF0, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:15 BRA @UNKNOWN1
    case 0xC01AC9: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:17 LDA OVERWORLD_SPRITEMAPS + spritemap::special_flags,X
    case 0xC01ACB: cpu.execute_instruction<0xBD>(0x004A08, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:18 AND #$00FF
    case 0xC01ACE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC01ACE.
    case 0xC01AD0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:19 CMP #<-1
    case 0xC01AD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:19 CMP #<-1
    // Overlapping static entry reached from 0xC01AD1.
    case 0xC01AD3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:20 BEQ @UNKNOWN2
    case 0xC01AD4: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:21 TXA
    case 0xC01AD6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:22 CLC
    case 0xC01AD7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:23 ADC #.SIZEOF(spritemap)
    case 0xC01AD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:23 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01AD8.
    case 0xC01ADA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:24 TAX
    case 0xC01ADB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:25 STX @LOCAL01
    case 0xC01ADC: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:27 CPX #$0380
    case 0xC01ADE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000380, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:27 CPX #$0380
    // Overlapping static entry reached from 0xC01ADE.
    case 0xC01AE0: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:28 BCC @UNKNOWN0
    case 0xC01AE1: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:28 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC01AE0.
    case 0xC01AE2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:29 LDA #.LOWORD(-255)
    case 0xC01AE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00FF01, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:29 LDA #.LOWORD(-255)
    // Overlapping static entry reached from 0xC01AE3.
    case 0xC01AE5: cpu.execute_instruction<0xFF>(0x8A4180, 4); return true;
    // src/overworld/find_free_space_7E4682.asm:30 BRA @UNKNOWN7
    case 0xC01AE6: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:32 TXA
    case 0xC01AE8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:33 CLC
    case 0xC01AE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:34 ADC @VIRTUAL02
    case 0xC01AEA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:35 CMP #$0380
    case 0xC01AEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000380, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:35 CMP #$0380
    // Overlapping static entry reached from 0xC01AEC.
    case 0xC01AEE: cpu.execute_instruction<0x03>(0x0000B0, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:36 BCS @UNKNOWN6
    case 0xC01AEF: cpu.execute_instruction<0xB0>(0x000035, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:36 BCS @UNKNOWN6
    // Overlapping static entry reached from 0xC01AEE.
    case 0xC01AF0: cpu.execute_instruction<0x35>(0x00008A, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:37 TXA
    case 0xC01AF1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:38 STA @LOCAL00
    case 0xC01AF2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:39 BRA @UNKNOWN5
    case 0xC01AF4: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:41 TAX
    case 0xC01AF6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:42 LDA OVERWORLD_SPRITEMAPS + spritemap::special_flags,X
    case 0xC01AF7: cpu.execute_instruction<0xBD>(0x004A08, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:43 AND #$00FF
    case 0xC01AFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC01AFA.
    case 0xC01AFC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:44 CMP #<-1
    case 0xC01AFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:44 CMP #<-1
    // Overlapping static entry reached from 0xC01AFD.
    case 0xC01AFF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:45 BEQ @UNKNOWN4
    case 0xC01B00: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:46 LDA @LOCAL00
    case 0xC01B02: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:47 CLC
    case 0xC01B04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:48 ADC #.SIZEOF(spritemap)
    case 0xC01B05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:48 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01B05.
    case 0xC01B07: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:49 TAX
    case 0xC01B08: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:50 STX @LOCAL01
    case 0xC01B09: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:51 BRA @UNKNOWN1
    case 0xC01B0B: cpu.execute_instruction<0x80>(0x0000D1, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:53 LDA @LOCAL00
    case 0xC01B0D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:54 CLC
    case 0xC01B0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:55 ADC #.SIZEOF(spritemap)
    case 0xC01B10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:55 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01B10.
    case 0xC01B12: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:56 STA @LOCAL00
    case 0xC01B13: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:58 LDX @LOCAL01
    case 0xC01B15: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:59 TXA
    case 0xC01B17: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:60 CLC
    case 0xC01B18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:61 ADC @VIRTUAL02
    case 0xC01B19: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:62 STA @VIRTUAL04
    case 0xC01B1B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:63 LDA @LOCAL00
    case 0xC01B1D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:64 CMP @VIRTUAL04
    case 0xC01B1F: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:65 BCC @UNKNOWN3
    case 0xC01B21: cpu.execute_instruction<0x90>(0x0000D3, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:66 TXA
    case 0xC01B23: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:67 BRA @UNKNOWN7
    case 0xC01B24: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:69 LDA #.LOWORD(-254)
    case 0xC01B26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x00FF02, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:69 LDA #.LOWORD(-254)
    // Overlapping static entry reached from 0xC01B26.
    case 0xC01B28: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/find_free_space_7E4682.asm:71 END_C_FUNCTION
    case 0xC01B29: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/find_free_space_7E4682.asm:71 END_C_FUNCTION
    case 0xC01B2A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/find_nearby_checkable_tpt_entry.asm (source_named).
bool execute_overworld_find_nearby_checkable_tpt_entry_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04500: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC044FD.
    case 0xC04501: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC04502: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC04503: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC04504: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC04504.
    case 0xC04506: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC04507: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    case 0xC04508: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04508.
    case 0xC0450A: cpu.execute_instruction<0xFF>(0x60E88D, 4); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:10 STA INTERACTING_NPC_ID
    case 0xC0450B: cpu.execute_instruction<0x8D>(0x0060E8, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:11 STA INTERACTING_NPC_ENTITY
    case 0xC0450E: cpu.execute_instruction<0x8D>(0x0060EA, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:12 JSR UNKNOWN_C041E3
    case 0xC04511: cpu.execute_instruction<0x20>(0x00446A, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:13 STA @LOCAL01
    case 0xC04514: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    case 0xC04516: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04516.
    case 0xC04518: cpu.execute_instruction<0xFF>(0xA229F0, 4); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:15 BEQ @UNKNOWN0
    case 0xC04519: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC0451B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x009B3A, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC04518.
    case 0xC0451C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC0451B.
    case 0xC0451D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:17 STX @LOCAL00
    case 0xC0451E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:18 LDA __BSS_START__,X
    case 0xC04520: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:19 ASL
    case 0xC04523: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:20 TAX
    case 0xC04524: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:21 LDA @LOCAL01
    case 0xC04525: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:22 CMP ENTITY_DIRECTIONS,X
    case 0xC04527: cpu.execute_instruction<0xDD>(0x002EF4, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:23 BEQ @UNKNOWN0
    case 0xC0452A: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:24 STA GAME_STATE + game_state::leader_direction
    case 0xC0452C: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:25 LDX @LOCAL00
    case 0xC0452F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:26 LDA __BSS_START__,X
    case 0xC04531: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:27 ASL
    case 0xC04534: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:28 TAX
    case 0xC04535: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:29 LDA @LOCAL01
    case 0xC04536: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:30 STA ENTITY_DIRECTIONS,X
    case 0xC04538: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:31 LDX @LOCAL00
    case 0xC0453B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:32 LDA __BSS_START__,X
    case 0xC0453D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:33 JSL UNKNOWN_C0A780
    case 0xC04540: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:35 LDA INTERACTING_NPC_ID
    case 0xC04544: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC04547: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC04548: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/find_nearby_talkable_tpt_entry.asm (source_named).
bool execute_overworld_find_nearby_talkable_tpt_entry_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC046D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC046D6.
    case 0xC046DA: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC046DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC046DC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC046DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC046DD.
    case 0xC046DF: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC046E0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    case 0xC046E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC046E1.
    case 0xC046E3: cpu.execute_instruction<0xFF>(0x60E88D, 4); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:10 STA INTERACTING_NPC_ID
    case 0xC046E4: cpu.execute_instruction<0x8D>(0x0060E8, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:11 STA INTERACTING_NPC_ENTITY
    case 0xC046E7: cpu.execute_instruction<0x8D>(0x0060EA, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:12 JSR UNKNOWN_C043BC
    case 0xC046EA: cpu.execute_instruction<0x20>(0x004643, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:13 STA @LOCAL01
    case 0xC046ED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    case 0xC046EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC046EF.
    case 0xC046F1: cpu.execute_instruction<0xFF>(0xA229F0, 4); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:15 BEQ @UNKNOWN0
    case 0xC046F2: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC046F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x009B3A, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC046F1.
    case 0xC046F5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC046F4.
    case 0xC046F6: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:17 STX @LOCAL00
    case 0xC046F7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:18 LDA __BSS_START__,X
    case 0xC046F9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:19 ASL
    case 0xC046FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:20 TAX
    case 0xC046FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:21 LDA @LOCAL01
    case 0xC046FE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:22 CMP ENTITY_DIRECTIONS,X
    case 0xC04700: cpu.execute_instruction<0xDD>(0x002EF4, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:23 BEQ @UNKNOWN0
    case 0xC04703: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:24 STA GAME_STATE + game_state::leader_direction
    case 0xC04705: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:25 LDX @LOCAL00
    case 0xC04708: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:26 LDA __BSS_START__,X
    case 0xC0470A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:27 ASL
    case 0xC0470D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:28 TAX
    case 0xC0470E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:29 LDA @LOCAL01
    case 0xC0470F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:30 STA ENTITY_DIRECTIONS,X
    case 0xC04711: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:31 LDX @LOCAL00
    case 0xC04714: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:32 LDA __BSS_START__,X
    case 0xC04716: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:33 JSL UNKNOWN_C0A780
    case 0xC04719: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:35 LDA INTERACTING_NPC_ID
    case 0xC0471D: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC04720: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC04721: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_direction_from_player_to_entity.asm (source_named).
bool execute_overworld_get_direction_from_player_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C4D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4DC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C4DD.
    case 0xC0C4DF: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4E0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0C4E1: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C4DF.
    case 0xC0C4E3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:11 ASL
    case 0xC0C4E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:12 STA @LOCAL02
    case 0xC0C4E5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:13 LDA GAME_STATE + game_state::leader_y_coord
    case 0xC0C4E7: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:14 STA @LOCAL00
    case 0xC0C4EA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:15 LDY GAME_STATE + game_state::leader_x_coord
    case 0xC0C4EC: cpu.execute_instruction<0xAC>(0x009B28, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:16 LDA @LOCAL02
    case 0xC0C4EF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:17 TAX
    case 0xC0C4F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:18 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C4F2: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:19 TAX
    case 0xC0C4F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:20 STX @LOCAL01
    case 0xC0C4F6: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:21 LDA @LOCAL02
    case 0xC0C4F8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:22 TAX
    case 0xC0C4FA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:23 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C4FB: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:24 LDX @LOCAL01
    case 0xC0C4FE: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:25 JSL GET_DIRECTION_TO
    case 0xC0C500: cpu.execute_instruction<0x22>(0xC43CF6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:26 END_C_FUNCTION
    case 0xC0C504: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:26 END_C_FUNCTION
    case 0xC0C505: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_direction_to.asm (source_named).
bool execute_overworld_get_direction_to_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_direction_to.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43CF6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CF8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CF9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CFA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC43CFB.
    case 0xC43CFD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CFE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CFF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:13 STX @VIRTUAL04
    case 0xC43D00: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/overworld/get_direction_to.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC43CFD.
    case 0xC43D01: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/overworld/get_direction_to.asm:14 STA @VIRTUAL02
    case 0xC43D02: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC43D01.
    case 0xC43D03: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/overworld/get_direction_to.asm:15 LDX @PARAM03
    case 0xC43D04: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/overworld/get_direction_to.asm:16 TXA
    case 0xC43D06: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:17 STA @LOCAL01
    case 0xC43D07: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:18 TYA
    case 0xC43D09: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:19 SEC
    case 0xC43D0A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:20 SBC @VIRTUAL02
    case 0xC43D0B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:21 TAX
    case 0xC43D0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:22 LDA @LOCAL01
    case 0xC43D0E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:23 SEC
    case 0xC43D10: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:24 SBC @VIRTUAL04
    case 0xC43D11: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/get_direction_to.asm:25 STA @LOCAL00
    case 0xC43D13: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_direction_to.asm:26 STX @VIRTUAL02
    case 0xC43D15: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:27 LDA #0
    case 0xC43D17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:27 LDA #0
    // Overlapping static entry reached from 0xC43D17.
    case 0xC43D19: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_direction_to.asm:28 CLC
    case 0xC43D1A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:29 SBC @VIRTUAL02
    case 0xC43D1B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC43D1D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC43D1F: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC43D21: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC43D23: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/overworld/get_direction_to.asm:31 LDX #0
    case 0xC43D25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:31 LDX #0
    // Overlapping static entry reached from 0xC43D25.
    case 0xC43D27: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/get_direction_to.asm:32 BRA @UNKNOWN4
    case 0xC43D28: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/get_direction_to.asm:34 CPX #0
    case 0xC43D2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:34 CPX #0
    // Overlapping static entry reached from 0xC43D2A.
    case 0xC43D2C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/get_direction_to.asm:35 BNE @UNKNOWN3
    case 0xC43D2D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/get_direction_to.asm:36 LDX #1
    case 0xC43D2F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/get_direction_to.asm:36 LDX #1
    // Overlapping static entry reached from 0xC43D2F.
    case 0xC43D31: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/get_direction_to.asm:37 BRA @UNKNOWN4
    case 0xC43D32: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/get_direction_to.asm:39 LDX #2
    case 0xC43D34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/get_direction_to.asm:39 LDX #2
    // Overlapping static entry reached from 0xC43D34.
    case 0xC43D36: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/get_direction_to.asm:41 LDA @LOCAL00
    case 0xC43D37: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/get_direction_to.asm:42 STA @VIRTUAL02
    case 0xC43D39: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:43 LDA #0
    case 0xC43D3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:43 LDA #0
    // Overlapping static entry reached from 0xC43D3B.
    case 0xC43D3D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_direction_to.asm:44 CLC
    case 0xC43D3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:45 SBC @VIRTUAL02
    case 0xC43D3F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC43D41: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC43D43: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC43D45: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC43D47: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/overworld/get_direction_to.asm:47 LDA #0
    case 0xC43D49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:47 LDA #0
    // Overlapping static entry reached from 0xC43D49.
    case 0xC43D4B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_direction_to.asm:48 STA @LOCAL01
    case 0xC43D4C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:49 BRA @UNKNOWN9
    case 0xC43D4E: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:51 LDA @LOCAL00
    case 0xC43D50: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/get_direction_to.asm:52 BNE @UNKNOWN8
    case 0xC43D52: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/overworld/get_direction_to.asm:53 LDA #1
    case 0xC43D54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/get_direction_to.asm:53 LDA #1
    // Overlapping static entry reached from 0xC43D54.
    case 0xC43D56: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_direction_to.asm:54 STA @LOCAL01
    case 0xC43D57: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:55 BRA @UNKNOWN9
    case 0xC43D59: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/overworld/get_direction_to.asm:57 LDA #2
    case 0xC43D5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/get_direction_to.asm:57 LDA #2
    // Overlapping static entry reached from 0xC43D5B.
    case 0xC43D5D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_direction_to.asm:58 STA @LOCAL01
    case 0xC43D5E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:60 TXA
    case 0xC43D60: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:61 ASL
    case 0xC43D61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:62 STA @VIRTUAL02
    case 0xC43D62: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:63 LDA @LOCAL01
    case 0xC43D64: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC43D66: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC43D68: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC43D69: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC43D6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:65 CLC
    case 0xC43D6C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:66 ADC @VIRTUAL02
    case 0xC43D6D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:67 TAX
    case 0xC43D6F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:68 LDA f:DIRECTION_MATRIX,X
    case 0xC43D70: cpu.execute_instruction<0xBF>(0xC43CE4, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_direction_to.asm:69 END_C_FUNCTION
    case 0xC43D74: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_direction_to.asm:69 END_C_FUNCTION
    case 0xC43D75: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_distance_to_magic_truffle.asm (source_named).
bool execute_overworld_get_distance_to_magic_truffle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46738: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC4673A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC4673B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC4673C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4673C.
    case 0xC4673E: cpu.execute_instruction<0xFF>(0x78A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC4673F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:10 LDA #OVERWORLD_SPRITE::UNKNOWN2
    case 0xC46740: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000178, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:10 LDA #OVERWORLD_SPRITE::UNKNOWN2
    // Overlapping static entry reached from 0xC46740.
    case 0xC46742: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    case 0xC46743: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    // Overlapping static entry reached from 0xC46742.
    case 0xC46744: cpu.execute_instruction<0x76>(0x00003D, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    // Overlapping static entry reached from 0xC46744.
    case 0xC46746: cpu.execute_instruction<0xC4>(0x000085, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:12 STA @VIRTUAL04
    case 0xC46747: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC46746.
    case 0xC46748: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    case 0xC46749: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46748.
    case 0xC4674A: cpu.execute_instruction<0xFF>(0x06D0FF, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46749.
    case 0xC4674B: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:14 BNE @UNKNOWN0
    case 0xC4674C: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    case 0xC4674E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    // Overlapping static entry reached from 0xC4674B.
    case 0xC4674F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    // Overlapping static entry reached from 0xC4674E.
    case 0xC46750: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:16 JMP @UNKNOWN15
    case 0xC46751: cpu.execute_instruction<0x4C>(0x006836, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:18 LDA @VIRTUAL04
    case 0xC46754: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:19 ASL
    case 0xC46756: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:20 TAX
    case 0xC46757: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:21 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46758: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:22 STA @LOCAL02
    case 0xC4675B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:23 LDY GAME_STATE+game_state::leader_x_coord
    case 0xC4675D: cpu.execute_instruction<0xAC>(0x009B28, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:24 TYA
    case 0xC46760: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:25 SEC
    case 0xC46761: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:26 SBC #64
    case 0xC46762: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000040, 2); else cpu.execute_instruction<0xE9>(0x000040, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:26 SBC #64
    // Overlapping static entry reached from 0xC46762.
    case 0xC46764: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:27 STA @VIRTUAL02
    case 0xC46765: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:28 LDA @LOCAL02
    case 0xC46767: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:29 CMP @VIRTUAL02
    case 0xC46769: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:30 BCC @UNKNOWN2
    case 0xC4676B: cpu.execute_instruction<0x90>(0x000031, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:31 TYA
    case 0xC4676D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:32 CLC
    case 0xC4676E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:33 ADC #64
    case 0xC4676F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:33 ADC #64
    // Overlapping static entry reached from 0xC4676F.
    case 0xC46771: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:34 STA @VIRTUAL02
    case 0xC46772: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:35 LDA @LOCAL02
    case 0xC46774: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:36 CMP @VIRTUAL02
    case 0xC46776: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:37 BGT @UNKNOWN2
    case 0xC46778: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:37 BGT @UNKNOWN2
    case 0xC4677A: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:38 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC4677C: cpu.execute_instruction<0xBC>(0x000BC0, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC4677F: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:40 STA @LOCAL02
    case 0xC46782: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:41 SEC
    case 0xC46784: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:42 SBC #64
    case 0xC46785: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000040, 2); else cpu.execute_instruction<0xE9>(0x000040, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:42 SBC #64
    // Overlapping static entry reached from 0xC46785.
    case 0xC46787: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:43 STA @VIRTUAL02
    case 0xC46788: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:44 TYA
    case 0xC4678A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:45 CMP @VIRTUAL02
    case 0xC4678B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:46 BCC @UNKNOWN2
    case 0xC4678D: cpu.execute_instruction<0x90>(0x00000F, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:47 LDA @LOCAL02
    case 0xC4678F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:48 CLC
    case 0xC46791: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:49 ADC #64
    case 0xC46792: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:49 ADC #64
    // Overlapping static entry reached from 0xC46792.
    case 0xC46794: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:50 STA @VIRTUAL02
    case 0xC46795: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:51 TYA
    case 0xC46797: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:52 CMP @VIRTUAL02
    case 0xC46798: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:53 BLTEQ @UNKNOWN3
    case 0xC4679A: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:53 BLTEQ @UNKNOWN3
    case 0xC4679C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:55 LDA #1
    case 0xC4679E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:55 LDA #1
    // Overlapping static entry reached from 0xC4679E.
    case 0xC467A0: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:56 JMP @UNKNOWN15
    case 0xC467A1: cpu.execute_instruction<0x4C>(0x006836, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:58 LDA @LOCAL02
    case 0xC467A4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:59 STA @VIRTUAL02
    case 0xC467A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:60 TYA
    case 0xC467A8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:61 SEC
    case 0xC467A9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:62 SBC @VIRTUAL02
    case 0xC467AA: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:63 STA @LOCAL02
    case 0xC467AC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:64 STA @VIRTUAL02
    case 0xC467AE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:65 LDA #0
    case 0xC467B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:65 LDA #0
    // Overlapping static entry reached from 0xC467B0.
    case 0xC467B2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:66 CLC
    case 0xC467B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:67 SBC @VIRTUAL02
    case 0xC467B4: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC467B6: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC467B8: cpu.execute_instruction<0x10>(0x000010, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC467BA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC467BC: cpu.execute_instruction<0x30>(0x00000C, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:69 LDA @LOCAL02
    case 0xC467BE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:70 EOR #$FFFF
    case 0xC467C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:70 EOR #$FFFF
    // Overlapping static entry reached from 0xC467C0.
    case 0xC467C2: cpu.execute_instruction<0xFF>(0x02851A, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:71 INC
    case 0xC467C3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:72 STA @VIRTUAL02
    case 0xC467C4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:73 STA @LOCAL01
    case 0xC467C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:74 BRA @UNKNOWN7
    case 0xC467C8: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:76 LDA @LOCAL02
    case 0xC467CA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:77 STA @VIRTUAL02
    case 0xC467CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:78 STA @LOCAL01
    case 0xC467CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:80 LDA @VIRTUAL04
    case 0xC467D0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:81 ASL
    case 0xC467D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:82 TAX
    case 0xC467D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:83 LDA ENTITY_ABS_X_TABLE,X
    case 0xC467D4: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:84 SEC
    case 0xC467D7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:85 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC467D8: cpu.execute_instruction<0xED>(0x009B28, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:86 STA @LOCAL02
    case 0xC467DB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:87 STA @VIRTUAL02
    case 0xC467DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:88 LDA #0
    case 0xC467DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:88 LDA #0
    // Overlapping static entry reached from 0xC467DF.
    case 0xC467E1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:89 CLC
    case 0xC467E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:90 SBC @VIRTUAL02
    case 0xC467E3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC467E5: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC467E7: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC467E9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC467EB: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:92 LDA @LOCAL02
    case 0xC467ED: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:93 EOR #$FFFF
    case 0xC467EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:93 EOR #$FFFF
    // Overlapping static entry reached from 0xC467EF.
    case 0xC467F1: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:94 INC
    case 0xC467F2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:95 BRA @UNKNOWN11
    case 0xC467F3: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:97 LDA @LOCAL02
    case 0xC467F5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:99 LDX @LOCAL01
    case 0xC467F7: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:100 STX @VIRTUAL02
    case 0xC467F9: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:101 CLC
    case 0xC467FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:102 ADC @VIRTUAL02
    case 0xC467FC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:103 STA @VIRTUAL02
    case 0xC467FE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:104 LDA #16
    case 0xC46800: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:104 LDA #16
    // Overlapping static entry reached from 0xC46800.
    case 0xC46802: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:105 CLC
    case 0xC46803: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:106 SBC @VIRTUAL02
    case 0xC46804: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC46806: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC46808: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC4680A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC4680C: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:108 LDA #10
    case 0xC4680E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:108 LDA #10
    // Overlapping static entry reached from 0xC4680E.
    case 0xC46810: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:109 BRA @UNKNOWN15
    case 0xC46811: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:111 LDA @VIRTUAL04
    case 0xC46813: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:112 ASL
    case 0xC46815: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:113 TAX
    case 0xC46816: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:114 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46817: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:115 STA @LOCAL00
    case 0xC4681A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:116 LDY ENTITY_ABS_X_TABLE,X
    case 0xC4681C: cpu.execute_instruction<0xBC>(0x000B84, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:117 LDX GAME_STATE + game_state::leader_y_coord
    case 0xC4681F: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:118 LDA GAME_STATE + game_state::leader_x_coord
    case 0xC46822: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:119 JSL UNKNOWN_C41EFF
    case 0xC46825: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:120 LDY #$2000
    case 0xC46829: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:120 LDY #$2000
    // Overlapping static entry reached from 0xC46829.
    case 0xC4682B: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:121 CLC
    case 0xC4682C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    case 0xC4682D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    // Overlapping static entry reached from 0xC4682B.
    case 0xC4682E: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    // Overlapping static entry reached from 0xC4682D.
    case 0xC4682F: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC46830: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC4682F.
    case 0xC46831: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:124 INC
    case 0xC46834: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:125 INC
    case 0xC46835: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:127 END_C_FUNCTION
    case 0xC46836: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:127 END_C_FUNCTION
    case 0xC46837: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_off_bicycle.asm (source_named).
bool execute_overworld_get_off_bicycle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_off_bicycle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1BD2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BD2E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BD2F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BD30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BD30.
    case 0xC1BD32: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BD33: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/get_off_bicycle.asm:7 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1BD34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/get_off_bicycle.asm:7 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1BD34.
    case 0xC1BD36: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/get_off_bicycle.asm:7 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1BD37: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BD3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    // Overlapping static entry reached from 0xC1BD3A.
    case 0xC1BD3C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BD3D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BD3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    // Overlapping static entry reached from 0xC1BD3F.
    case 0xC1BD41: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BD42: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_off_bicycle.asm:9 JSR SET_WORKING_MEMORY
    case 0xC1BD44: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BD47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00299D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    // Overlapping static entry reached from 0xC1BD47.
    case 0xC1BD49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BD4A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    // Overlapping static entry reached from 0xC1BD49.
    case 0xC1BD4B: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BD4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    // Overlapping static entry reached from 0xC1BD4C.
    case 0xC1BD4E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BD4F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BD51: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/get_off_bicycle.asm:11 JSR CLOSE_FOCUS_WINDOW
    case 0xC1BD55: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/overworld/get_off_bicycle.asm:12 JSL WINDOW_TICK
    case 0xC1BD58: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/overworld/get_off_bicycle.asm:13 JSL UNKNOWN_C03CFD
    case 0xC1BD5C: cpu.execute_instruction<0x22>(0xC03F64, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_off_bicycle.asm:14 END_C_FUNCTION
    case 0xC1BD60: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_off_bicycle.asm:14 END_C_FUNCTION
    case 0xC1BD61: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_on_bicycle.asm (source_named).
bool execute_overworld_get_on_bicycle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_on_bicycle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03EC5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03EC7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03EC8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03EC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC03EC9.
    case 0xC03ECB: cpu.execute_instruction<0xFF>(0x54AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03ECC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/get_on_bicycle.asm:8 LDA GAME_STATE+game_state::party_count
    case 0xC03ECD: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/overworld/get_on_bicycle.asm:8 LDA GAME_STATE+game_state::party_count
    // Overlapping static entry reached from 0xC03ECB.
    case 0xC03ECF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/get_on_bicycle.asm:9 AND #$00FF
    case 0xC03ED0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_on_bicycle.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC03ED0.
    case 0xC03ED2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/get_on_bicycle.asm:10 CMP #1
    case 0xC03ED3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/get_on_bicycle.asm:10 CMP #1
    // Overlapping static entry reached from 0xC03ED3.
    case 0xC03ED5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/get_on_bicycle.asm:11 BNEL @UNKNOWN3
    case 0xC03ED6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/get_on_bicycle.asm:11 BNEL @UNKNOWN3
    case 0xC03ED8: cpu.execute_instruction<0x4C>(0x003F62, 3); return true;
    // src/overworld/get_on_bicycle.asm:12 LDA GAME_STATE + game_state::unknown96
    case 0xC03EDB: cpu.execute_instruction<0xAD>(0x009B3C, 3); return true;
    // src/overworld/get_on_bicycle.asm:13 AND #$00FF
    case 0xC03EDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_on_bicycle.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC03EDE.
    case 0xC03EE0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/get_on_bicycle.asm:14 CMP #1
    case 0xC03EE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/get_on_bicycle.asm:14 CMP #1
    // Overlapping static entry reached from 0xC03EE1.
    case 0xC03EE3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/get_on_bicycle.asm:15 BNEL @UNKNOWN3
    case 0xC03EE4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/get_on_bicycle.asm:15 BNEL @UNKNOWN3
    case 0xC03EE6: cpu.execute_instruction<0x4C>(0x003F62, 3); return true;
    // src/overworld/get_on_bicycle.asm:16 LDA DISABLE_MUSIC_CHANGES
    case 0xC03EE9: cpu.execute_instruction<0xAD>(0x00615E, 3); return true;
    // src/overworld/get_on_bicycle.asm:17 BNE @UNKNOWN2
    case 0xC03EEC: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/overworld/get_on_bicycle.asm:18 LDA #MUSIC::BICYCLE
    case 0xC03EEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x000052, 3); return true;
    // src/overworld/get_on_bicycle.asm:18 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC03EEE.
    case 0xC03EF0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/get_on_bicycle.asm:19 JSL CHANGE_MUSIC
    case 0xC03EF1: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/overworld/get_on_bicycle.asm:21 LDA #24
    case 0xC03EF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/overworld/get_on_bicycle.asm:21 LDA #24
    // Overlapping static entry reached from 0xC03EF5.
    case 0xC03EF7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/get_on_bicycle.asm:22 JSL UNKNOWN_C02140
    case 0xC03EF8: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/overworld/get_on_bicycle.asm:23 LDA #6
    case 0xC03EFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/overworld/get_on_bicycle.asm:23 LDA #6
    // Overlapping static entry reached from 0xC03EFC.
    case 0xC03EFE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/get_on_bicycle.asm:24 STA GAME_STATE + game_state::unknown92
    case 0xC03EFF: cpu.execute_instruction<0x8D>(0x009B38, 3); return true;
    // src/overworld/get_on_bicycle.asm:25 LDA #WALKING_STYLE::BICYCLE
    case 0xC03F02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/get_on_bicycle.asm:25 LDA #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC03F02.
    case 0xC03F04: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/get_on_bicycle.asm:26 STA GAME_STATE+game_state::walking_style
    case 0xC03F05: cpu.execute_instruction<0x8D>(0x009B34, 3); return true;
    // src/overworld/get_on_bicycle.asm:27 STZ PARTY_CHARACTERS+char_struct::position_index
    case 0xC03F08: cpu.execute_instruction<0x9C>(0x009CBB, 3); return true;
    // src/overworld/get_on_bicycle.asm:28 STZ GAME_STATE + game_state::unknown88
    case 0xC03F0B: cpu.execute_instruction<0x9C>(0x009B2E, 3); return true;
    // src/overworld/get_on_bicycle.asm:29 STZ NEW_ENTITY_VAR0
    case 0xC03F0E: cpu.execute_instruction<0x9C>(0x000A2E, 3); return true;
    // src/overworld/get_on_bicycle.asm:30 STZ NEW_ENTITY_VAR1
    case 0xC03F11: cpu.execute_instruction<0x9C>(0x000A30, 3); return true;
    // src/overworld/get_on_bicycle.asm:31 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03F14: cpu.execute_instruction<0xAD>(0x000BB4, 3); return true;
    // src/overworld/get_on_bicycle.asm:32 STA @LOCAL00
    case 0xC03F17: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_on_bicycle.asm:33 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03F19: cpu.execute_instruction<0xAD>(0x000BF0, 3); return true;
    // src/overworld/get_on_bicycle.asm:34 STA @LOCAL01
    case 0xC03F1C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_on_bicycle.asm:35 LDY #24
    case 0xC03F1E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/overworld/get_on_bicycle.asm:35 LDY #24
    // Overlapping static entry reached from 0xC03F1E.
    case 0xC03F20: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/get_on_bicycle.asm:36 LDX #EVENT_SCRIPT::EVENT_002
    case 0xC03F21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/get_on_bicycle.asm:36 LDX #EVENT_SCRIPT::EVENT_002
    // Overlapping static entry reached from 0xC03F21.
    case 0xC03F23: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/get_on_bicycle.asm:37 LDA #OVERWORLD_SPRITE::NESS_BICYCLE
    case 0xC03F24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/overworld/get_on_bicycle.asm:37 LDA #OVERWORLD_SPRITE::NESS_BICYCLE
    // Overlapping static entry reached from 0xC03F24.
    case 0xC03F26: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/get_on_bicycle.asm:38 JSL CREATE_ENTITY
    case 0xC03F27: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/overworld/get_on_bicycle.asm:39 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    case 0xC03F2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000DC, 2); else cpu.execute_instruction<0xA2>(0x0010DC, 3); return true;
    // src/overworld/get_on_bicycle.asm:39 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    // Overlapping static entry reached from 0xC03F2B.
    case 0xC03F2D: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/overworld/get_on_bicycle.asm:40 LDA __BSS_START__,X
    case 0xC03F2E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:40 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03F2D.
    case 0xC03F2F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/get_on_bicycle.asm:41 ORA #OBJECT_TICK_DISABLED
    case 0xC03F31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/overworld/get_on_bicycle.asm:41 ORA #OBJECT_TICK_DISABLED
    // Overlapping static entry reached from 0xC03F31.
    case 0xC03F33: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/get_on_bicycle.asm:42 STA __BSS_START__,X
    case 0xC03F34: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:43 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    case 0xC03F37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000028, 2); else cpu.execute_instruction<0xA2>(0x001028, 3); return true;
    // src/overworld/get_on_bicycle.asm:43 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    // Overlapping static entry reached from 0xC03F37.
    case 0xC03F39: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/overworld/get_on_bicycle.asm:44 LDA __BSS_START__,X
    case 0xC03F3A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:44 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03F39.
    case 0xC03F3B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/get_on_bicycle.asm:45 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    case 0xC03F3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x003000, 3); return true;
    // src/overworld/get_on_bicycle.asm:45 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    // Overlapping static entry reached from 0xC03F3D.
    case 0xC03F3F: cpu.execute_instruction<0x30>(0x00009D, 2); return true;
    // src/overworld/get_on_bicycle.asm:46 STA __BSS_START__,X
    case 0xC03F40: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:46 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03F3F.
    case 0xC03F41: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/get_on_bicycle.asm:47 STZ ENTITY_ANIMATION_FRAME + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03F43: cpu.execute_instruction<0x9C>(0x001118, 3); return true;
    // src/overworld/get_on_bicycle.asm:48 LDA GAME_STATE+game_state::leader_direction
    case 0xC03F46: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/overworld/get_on_bicycle.asm:49 STA ENTITY_DIRECTIONS + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03F49: cpu.execute_instruction<0x8D>(0x002F24, 3); return true;
    // src/overworld/get_on_bicycle.asm:50 LDA #0
    case 0xC03F4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:50 LDA #0
    // Overlapping static entry reached from 0xC03F4C.
    case 0xC03F4E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/get_on_bicycle.asm:51 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC03F4F: cpu.execute_instruction<0x22>(0xC4D0E4, 4); return true;
    // src/overworld/get_on_bicycle.asm:52 LDA #1
    case 0xC03F53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/get_on_bicycle.asm:52 LDA #1
    // Overlapping static entry reached from 0xC03F53.
    case 0xC03F55: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/get_on_bicycle.asm:53 STA GAME_STATE + game_state::unknown90
    case 0xC03F56: cpu.execute_instruction<0x8D>(0x009B36, 3); return true;
    // src/overworld/get_on_bicycle.asm:54 STA UNREAD_7E5DBA
    case 0xC03F59: cpu.execute_instruction<0x8D>(0x006140, 3); return true;
    // src/overworld/get_on_bicycle.asm:55 LDA #2
    case 0xC03F5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/get_on_bicycle.asm:55 LDA #2
    // Overlapping static entry reached from 0xC03F5C.
    case 0xC03F5E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/get_on_bicycle.asm:56 STA INPUT_DISABLE_FRAME_COUNTER
    case 0xC03F5F: cpu.execute_instruction<0x8D>(0x0060FA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_on_bicycle.asm:58 END_C_FUNCTION
    case 0xC03F62: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_on_bicycle.asm:58 END_C_FUNCTION
    case 0xC03F63: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_opposite_direction_from_player_to_entity.asm (source_named).
bool execute_overworld_get_opposite_direction_from_player_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_opposite_direction_from_player_to_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C5EA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:5 JSL GET_DIRECTION_FROM_PLAYER_TO_ENTITY
    case 0xC0C5EC: cpu.execute_instruction<0x22>(0xC0C4D9, 4); return true;
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:6 ASL
    case 0xC0C5F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:7 TAX
    case 0xC0C5F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:8 LDA f:OPPOSITE_DIRECTIONS,X
    case 0xC0C5F2: cpu.execute_instruction<0xBF>(0xC0C4C9, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_opposite_direction_from_player_to_entity.asm:9 END_C_FUNCTION
    case 0xC0C5F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_position_of_party_member.asm (source_named).
bool execute_overworld_get_position_of_party_member_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_position_of_party_member.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44965: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC44967: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC44968: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC44969: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC4496A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4496A.
    case 0xC4496C: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC4496D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC4496E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:10 TAX
    case 0xC4496F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:11 LDY CURRENT_ENTITY_SLOT
    case 0xC44970: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/overworld/get_position_of_party_member.asm:12 STY @LOCAL02
    case 0xC44973: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/get_position_of_party_member.asm:13 CPX #<-2
    case 0xC44975: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FE, 2); else cpu.execute_instruction<0xE0>(0x0000FE, 3); return true;
    // src/overworld/get_position_of_party_member.asm:13 CPX #<-2
    // Overlapping static entry reached from 0xC44975.
    case 0xC44977: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/get_position_of_party_member.asm:14 BNE @UNKNOWN0
    case 0xC44978: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/overworld/get_position_of_party_member.asm:15 LDA GAME_STATE+game_state::party_count
    case 0xC4497A: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/overworld/get_position_of_party_member.asm:16 AND #$00FF
    case 0xC4497D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_position_of_party_member.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC4497D.
    case 0xC4497F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/get_position_of_party_member.asm:17 TAX
    case 0xC44980: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:18 STX @LOCAL01
    case 0xC44981: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/get_position_of_party_member.asm:19 TXA
    case 0xC44983: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:20 DEC
    case 0xC44984: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:21 ASL
    case 0xC44985: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:23 CLC
    case 0xC44986: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:24 ADC #.LOWORD(GAME_STATE)
    case 0xC44987: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/get_position_of_party_member.asm:24 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC44987.
    case 0xC44989: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:25 TAX
    case 0xC4498A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:26 LDA a:game_state::unknownA2,X
    case 0xC4498B: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/overworld/get_position_of_party_member.asm:31 STA @LOCAL00
    case 0xC4498E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_position_of_party_member.asm:32 ASL
    case 0xC44990: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:33 TAX
    case 0xC44991: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:34 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44992: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/get_position_of_party_member.asm:35 BNE @UNKNOWN1
    case 0xC44995: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/overworld/get_position_of_party_member.asm:36 LDX @LOCAL01
    case 0xC44997: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/get_position_of_party_member.asm:37 TXA
    case 0xC44999: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:38 DEC
    case 0xC4499A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:39 DEC
    case 0xC4499B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:40 ASL
    case 0xC4499C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:42 CLC
    case 0xC4499D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:43 ADC #.LOWORD(GAME_STATE)
    case 0xC4499E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/get_position_of_party_member.asm:43 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4499E.
    case 0xC449A0: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:44 TAX
    case 0xC449A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:45 LDA a:game_state::unknownA2,X
    case 0xC449A2: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/overworld/get_position_of_party_member.asm:50 STA @LOCAL00
    case 0xC449A5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_position_of_party_member.asm:51 BRA @UNKNOWN1
    case 0xC449A7: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/overworld/get_position_of_party_member.asm:53 TXA
    case 0xC449A9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC449AA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/get_position_of_party_member.asm:55 JSL UNKNOWN_C4608C
    case 0xC449AC: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/overworld/get_position_of_party_member.asm:56 STA @LOCAL00
    case 0xC449B0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_position_of_party_member.asm:58 LDY @LOCAL02
    case 0xC449B2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/get_position_of_party_member.asm:59 TYA
    case 0xC449B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:60 ASL
    case 0xC449B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:61 TAY
    case 0xC449B6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:62 LDA @LOCAL00
    case 0xC449B7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/get_position_of_party_member.asm:63 ASL
    case 0xC449B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:64 TAX
    case 0xC449BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:65 LDA ENTITY_ABS_X_TABLE,X
    case 0xC449BB: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/get_position_of_party_member.asm:66 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC449BE: cpu.execute_instruction<0x99>(0x000FBC, 3); return true;
    // src/overworld/get_position_of_party_member.asm:67 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC449C1: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/overworld/get_position_of_party_member.asm:68 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC449C4: cpu.execute_instruction<0x99>(0x000FF8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_position_of_party_member.asm:69 END_C_FUNCTION
    case 0xC449C7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_position_of_party_member.asm:69 END_C_FUNCTION
    case 0xC449C8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_screen_transition_sound_effect.asm (source_named).
bool execute_overworld_get_screen_transition_sound_effect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06ADD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06ADF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC06AE2.
    case 0xC06AE4: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:10 STA @LOCAL00
    case 0xC06AE7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC06AE4.
    case 0xC06AE8: cpu.execute_instruction<0x0E>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06AE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001400, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06AE9.
    case 0xC06AEB: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06AEC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06AEB.
    case 0xC06AED: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06AEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06AED.
    case 0xC06AEF: cpu.execute_instruction<0xD0>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06AEE.
    case 0xC06AF0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06AF1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:12 LDA @LOCAL00
    case 0xC06AF3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AF5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AF7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AF8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:14 CLC
    case 0xC06AFC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:15 ADC @VIRTUAL06
    case 0xC06AFD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:16 STA @VIRTUAL06
    case 0xC06AFF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:16 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC08526.
    case 0xC06B00: cpu.execute_instruction<0x06>(0x0000E0, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    case 0xC06B01: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    // Overlapping static entry reached from 0xC06B00.
    case 0xC06B02: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    // Overlapping static entry reached from 0xC06B01.
    case 0xC06B03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:18 BNE @UNKNOWN0
    case 0xC06B04: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC06B06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:20 LDY #screen_transition_config::ending_sound_effect
    case 0xC06B08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000B, 2); else cpu.execute_instruction<0xA0>(0x00000B, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:20 LDY #screen_transition_config::ending_sound_effect
    // Overlapping static entry reached from 0xC06B08.
    case 0xC06B0A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:21 LDA [@VIRTUAL06],Y
    case 0xC06B0B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC06B0D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:23 AND #$00FF
    case 0xC06B0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC06B0F.
    case 0xC06B11: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:24 BRA @UNKNOWN1
    case 0xC06B12: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC06B14: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:27 LDY #screen_transition_config::start_sound_effect
    case 0xC06B16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:27 LDY #screen_transition_config::start_sound_effect
    // Overlapping static entry reached from 0xC06B16.
    case 0xC06B18: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:28 LDA [@VIRTUAL06],Y
    case 0xC06B19: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC06B1B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:30 AND #$00FF
    case 0xC06B1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC06B1D.
    case 0xC06B1F: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:32 END_C_FUNCTION
    case 0xC06B20: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:32 END_C_FUNCTION
    case 0xC06B21: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_town_map_id.asm (source_named).
bool execute_overworld_get_town_map_id_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_town_map_id.asm:3 BEGIN_C_FUNCTION
    case 0xC4A544: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A546: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A547: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A548: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A549: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A549.
    case 0xC4A54B: cpu.execute_instruction<0xFF>(0xEB685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A54C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A54D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:8 XBA
    case 0xC4A54E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:9 AND #$00FF
    case 0xC4A54F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_town_map_id.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC4A54F.
    case 0xC4A551: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/overworld/get_town_map_id.asm:10 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4A552: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:10 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4A554: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/overworld/get_town_map_id.asm:10 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4A555: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/get_town_map_id.asm:11 STA @VIRTUAL02
    case 0xC4A557: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_town_map_id.asm:12 LDY #128
    case 0xC4A559: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x000080, 3); return true;
    // src/overworld/get_town_map_id.asm:12 LDY #128
    // Overlapping static entry reached from 0xC4A559.
    case 0xC4A55B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/get_town_map_id.asm:13 TXA
    case 0xC4A55C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:14 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4A55D: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // include/macros.asm:712 STA scratch
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A561: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:713 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A563: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:714 ADC scratch
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A564: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:715 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A566: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:716 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A567: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:717 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A568: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:718 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A569: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:719 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A56A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:16 CLC
    case 0xC4A56B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:17 ADC @VIRTUAL02
    case 0xC4A56C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/get_town_map_id.asm:18 TAX
    case 0xC4A56E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:19 LDA f:MAP_DATA_PER_SECTOR_TOWN_MAP_DATA,X
    case 0xC4A56F: cpu.execute_instruction<0xBF>(0xEFA022, 4); return true;
    // src/overworld/get_town_map_id.asm:20 AND #$00FF
    case 0xC4A573: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_town_map_id.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC4A573.
    case 0xC4A575: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_town_map_id.asm:21 END_C_FUNCTION
    case 0xC4A576: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/get_town_map_id.asm:21 END_C_FUNCTION
    case 0xC4A577: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
