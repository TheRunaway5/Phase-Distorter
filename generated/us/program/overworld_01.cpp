// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/overworld/actionscript/animated_background_callback.asm (source_named).
bool execute_overworld_actionscript_animated_background_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/animated_background_callback.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48BDA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/animated_background_callback.asm:5 JSL UNKNOWN_C2DB3F
    case 0xC48BDC: cpu.execute_instruction<0x22>(0xC2DB3F, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/animated_background_callback.asm:6 END_C_FUNCTION
    case 0xC48BE0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/centre_screen_on_entity_callback.asm (source_named).
bool execute_overworld_actionscript_centre_screen_on_entity_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48C2B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC48C2D: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:6 ASL
    case 0xC48C30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:7 TAY
    case 0xC48C31: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:8 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC48C32: cpu.execute_instruction<0xB9>(0x000BCA, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:9 TAX
    case 0xC48C35: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:10 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC48C36: cpu.execute_instruction<0xB9>(0x000B8E, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:11 JSL CENTER_SCREEN
    case 0xC48C39: cpu.execute_instruction<0x22>(0xC0400E, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback.asm:12 END_C_FUNCTION
    case 0xC48C3D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm (source_named).
bool execute_overworld_actionscript_centre_screen_on_entity_callback_offset_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48C3E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC48C40: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:6 ASL
    case 0xC48C43: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:7 TAY
    case 0xC48C44: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:8 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC48C45: cpu.execute_instruction<0xB9>(0x000BCA, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:9 CLC
    case 0xC48C48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:10 ADC ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC48C49: cpu.execute_instruction<0x79>(0x000E9A, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:11 TAX
    case 0xC48C4C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:12 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC48C4D: cpu.execute_instruction<0xB9>(0x000B8E, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:13 CLC
    case 0xC48C50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:14 ADC ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC48C51: cpu.execute_instruction<0x79>(0x000E5E, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:14 ADC ENTITY_SCRIPT_VAR0_TABLE,Y
    // Overlapping static entry reached from 0xC48CA4.
    case 0xC48C53: cpu.execute_instruction<0x0E>(0x000E22, 3); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:15 JSL CENTER_SCREEN
    case 0xC48C54: cpu.execute_instruction<0x22>(0xC0400E, 4); return true;
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:15 JSL CENTER_SCREEN
    // Overlapping static entry reached from 0xC48C53.
    case 0xC48C56: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:16 END_C_FUNCTION
    case 0xC48C58: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/choose_random.asm (source_named).
bool execute_overworld_actionscript_choose_random_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/choose_random.asm:3 LDA [$80],Y
    case 0xC09F82: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/choose_random.asm:4 AND #$00FF
    case 0xC09F84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/choose_random.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09F84.
    case 0xC09F86: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/actionscript/choose_random.asm:5 STA $90
    case 0xC09F87: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/choose_random.asm:6 INY
    case 0xC09F89: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:7 STY $94
    case 0xC09F8A: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/choose_random.asm:8 TAY
    case 0xC09F8C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:9 JSL RAND
    case 0xC09F8D: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/overworld/actionscript/choose_random.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC09F91: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/choose_random.asm:11 JSL DIVISION8S_DIVISOR_POSITIVE
    case 0xC09F93: cpu.execute_instruction<0x22>(0xC0912C, 4); return true;
    // src/overworld/actionscript/choose_random.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC09F97: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/choose_random.asm:13 TYA
    case 0xC09F99: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:14 ASL
    case 0xC09F9A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:15 ADC $94
    case 0xC09F9B: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/choose_random.asm:16 TAY
    case 0xC09F9D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:17 LDA $90
    case 0xC09F9E: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/choose_random.asm:18 ASL
    case 0xC09FA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/choose_random.asm:19 ADC $94
    case 0xC09FA1: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/choose_random.asm:20 STA $94
    case 0xC09FA3: cpu.execute_instruction<0x85>(0x000094, 2); return true;
    // src/overworld/actionscript/choose_random.asm:21 LDA [$80],Y
    case 0xC09FA5: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/choose_random.asm:22 RTL
    case 0xC09FA7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/clear_current_entity_collision.asm (source_named).
bool execute_overworld_actionscript_clear_current_entity_collision_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_current_entity_collision.asm:3 LDX $88
    case 0xC0A6DA: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/clear_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0A6DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0A6DC.
    case 0xC0A6DE: cpu.execute_instruction<0xFF>(0x289E9D, 4); return true;
    // src/overworld/actionscript/clear_current_entity_collision.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A6DF: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision.asm:6 RTL
    case 0xC0A6E2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/clear_current_entity_collision2.asm (source_named).
bool execute_overworld_actionscript_clear_current_entity_collision2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0A838: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0A838.
    case 0xC0A83A: cpu.execute_instruction<0xFF>(0x9D88A6, 4); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:4 LDX $88
    case 0xC0A83B: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A83D: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    // Overlapping static entry reached from 0xC0A83A.
    case 0xC0A83E: cpu.execute_instruction<0x9E>(0x006B28, 3); return true;
    // src/overworld/actionscript/clear_current_entity_collision2.asm:6 RTL
    case 0xC0A840: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/clear_entity_draw_sorting_table.asm (source_named).
bool execute_overworld_actionscript_clear_entity_draw_sorting_table_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:5 STZ ENTITY_DRAW_SORTING
    case 0xC00000: cpu.execute_instruction<0x9C>(0x00280C, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:6 LDX #.LOWORD(ENTITY_DRAW_SORTING)
    case 0xC00003: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00280C, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:6 LDX #.LOWORD(ENTITY_DRAW_SORTING)
    // Overlapping static entry reached from 0xC00003.
    case 0xC00005: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:7 LDY #.LOWORD(ENTITY_DRAW_SORTING)+1
    case 0xC00006: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00280D, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:7 LDY #.LOWORD(ENTITY_DRAW_SORTING)+1
    // Overlapping static entry reached from 0xC00006.
    case 0xC00008: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:8 LDA #$003B
    case 0xC00009: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00003B, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:8 LDA #$003B
    // Overlapping static entry reached from 0xC00009.
    case 0xC0000B: cpu.execute_instruction<0x00>(0x000054, 2); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:9 MVN #$7E,#$7E
    case 0xC0000C: cpu.execute_instruction<0x54>(0x007E7E, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:10 LDA #.LOWORD(ENTITY_DRAW_SORTING)
    case 0xC0000F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00280C, 3); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:10 LDA #.LOWORD(ENTITY_DRAW_SORTING)
    // Overlapping static entry reached from 0xC0000F.
    case 0xC00011: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:11 RTS
    case 0xC00012: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/clear_sprite_tick_callback.asm (source_named).
bool execute_overworld_actionscript_clear_sprite_tick_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:4 LDA #.LOWORD(MOVEMENT_NOP)
    case 0xC09DA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00943B, 3); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:4 LDA #.LOWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09DA1.
    case 0xC09DA3: cpu.execute_instruction<0x94>(0x00009D, 2); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC09DA4: cpu.execute_instruction<0x9D>(0x00107A, 3); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    // Overlapping static entry reached from 0xC09DA3.
    case 0xC09DA5: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    // Overlapping static entry reached from 0xC09DA5.
    case 0xC09DA6: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    case 0xC09DA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09DA6.
    case 0xC09DA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x009D00, 3); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09DA7.
    case 0xC09DA9: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:7 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09DAA: cpu.execute_instruction<0x9D>(0x0010B6, 3); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:7 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09DA8.
    case 0xC09DAB: cpu.execute_instruction<0xB6>(0x000010, 2); return true;
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:8 RTS
    case 0xC09DAD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/disable_current_entity_collision.asm (source_named).
bool execute_overworld_actionscript_disable_current_entity_collision_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/disable_current_entity_collision.asm:3 LDX $88
    case 0xC0A6D1: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/disable_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_DISABLED
    case 0xC0A6D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/disable_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0A6D3.
    case 0xC0A6D5: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/actionscript/disable_current_entity_collision.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A6D6: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/overworld/actionscript/disable_current_entity_collision.asm:6 RTL
    case 0xC0A6D9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/disable_current_entity_collision2.asm (source_named).
bool execute_overworld_actionscript_disable_current_entity_collision2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/disable_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_DISABLED
    case 0xC0A82F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/disable_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0A82F.
    case 0xC0A831: cpu.execute_instruction<0x80>(0x0000A6, 2); return true;
    // src/overworld/actionscript/disable_current_entity_collision2.asm:4 LDX $88
    case 0xC0A832: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/disable_current_entity_collision2.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A834: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/overworld/actionscript/disable_current_entity_collision2.asm:6 RTL
    case 0xC0A837: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/fade_in.asm (source_named).
bool execute_overworld_actionscript_fade_in_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/fade_in.asm:3 LDA [$80],Y
    case 0xC09FAE: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/fade_in.asm:4 INY
    case 0xC09FB0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:5 INY
    case 0xC09FB1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:6 STY $94
    case 0xC09FB2: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_in.asm:7 XBA
    case 0xC09FB4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:8 TAX
    case 0xC09FB5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:9 XBA
    case 0xC09FB6: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_in.asm:10 JMP f:FADE_IN
    case 0xC09FB7: cpu.execute_instruction<0x5C>(0xC0886C, 4); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/fade_out.asm (source_named).
bool execute_overworld_actionscript_fade_out_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/fade_out.asm:3 LDA [$80],Y
    case 0xC09FBB: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/fade_out.asm:4 INY
    case 0xC09FBD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:5 INY
    case 0xC09FBE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:6 STY $94
    case 0xC09FBF: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_out.asm:7 XBA
    case 0xC09FC1: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:8 TAX
    case 0xC09FC2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:9 XBA
    case 0xC09FC3: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out.asm:10 JMP f:FADE_OUT
    case 0xC09FC4: cpu.execute_instruction<0x5C>(0xC0887A, 4); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/fade_out_with_mosaic.asm (source_named).
bool execute_overworld_actionscript_fade_out_with_mosaic_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/fade_out_with_mosaic.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0AA07: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:4 PHA
    case 0xC0AA0B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:5 STY $94
    case 0xC0AA0C: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0AA0E: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:7 PHA
    case 0xC0AA12: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:8 STY $94
    case 0xC0AA13: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0AA15: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:10 STY $94
    case 0xC0AA19: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:11 TAY
    case 0xC0AA1B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:12 PLX
    case 0xC0AA1C: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:13 PLA
    case 0xC0AA1D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:14 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0AA1E: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/overworld/actionscript/fade_out_with_mosaic.asm:15 RTL
    case 0xC0AA22: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/get_direction_rotated_clockwise.asm (source_named).
bool execute_overworld_actionscript_get_direction_rotated_clockwise_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C682: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C684: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C685: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C686: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C687: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C687.
    case 0xC0C689: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C68A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C68B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:9 STA @LOCAL00
    case 0xC0C68C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC0C689.
    case 0xC0C68D: cpu.execute_instruction<0x0E>(0x0042AD, 3); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0C68E: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C68D.
    case 0xC0C690: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:11 ASL
    case 0xC0C691: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:12 TAX
    case 0xC0C692: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:13 LDA @LOCAL00
    case 0xC0C693: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:14 CLC
    case 0xC0C695: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:15 ADC ENTITY_DIRECTIONS,X
    case 0xC0C696: cpu.execute_instruction<0x7D>(0x002AF6, 3); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:16 AND #$0007
    case 0xC0C699: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:16 AND #$0007
    // Overlapping static entry reached from 0xC0C699.
    case 0xC0C69B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:17 END_C_FUNCTION
    case 0xC0C69C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:17 END_C_FUNCTION
    case 0xC0C69D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm (source_named).
bool execute_overworld_actionscript_get_direction_turned_randomly_left_or_right_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C69E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:4 JSL RAND
    case 0xC0C6A0: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:5 AND #$0001
    case 0xC0C6A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:5 AND #$0001
    // Overlapping static entry reached from 0xC0C6A4.
    case 0xC0C6A6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:6 BEQ @UNKNOWN0
    case 0xC0C6A7: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:7 LDA #$0001
    case 0xC0C6A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:7 LDA #$0001
    // Overlapping static entry reached from 0xC0C6A9.
    case 0xC0C6AB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:8 BRA @UNKNOWN1
    case 0xC0C6AC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:10 LDA #$FFFF
    case 0xC0C6AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:10 LDA #$FFFF
    // Overlapping static entry reached from 0xC0C6AE.
    case 0xC0C6B0: cpu.execute_instruction<0xFF>(0xC68222, 4); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:12 JSL GET_DIRECTION_ROTATED_CLOCKWISE
    case 0xC0C6B1: cpu.execute_instruction<0x22>(0xC0C682, 4); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:12 JSL GET_DIRECTION_ROTATED_CLOCKWISE
    // Overlapping static entry reached from 0xC0C6B0.
    case 0xC0C6B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00006B, 2); else cpu.execute_instruction<0xC0>(0x00C26B, 3); return true;
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:13 RTL
    case 0xC0C6B5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/get_position_of_party_member.asm (source_named).
bool execute_overworld_actionscript_get_position_of_party_member_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/get_position_of_party_member.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A943: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/overworld/actionscript/get_position_of_party_member.asm:4 STY $94
    case 0xC0A947: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/get_position_of_party_member.asm:5 JSL GET_POSITION_OF_PARTY_MEMBER
    case 0xC0A949: cpu.execute_instruction<0x22>(0xC46BE9, 4); return true;
    // src/overworld/actionscript/get_position_of_party_member.asm:6 RTL
    case 0xC0A94D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/jump_to_loaded_movement_pointer.asm (source_named).
bool execute_overworld_actionscript_jump_to_loaded_movement_pointer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/jump_to_loaded_movement_pointer.asm:3 JML (.LOWORD(CURRENT_ENTITY_TICK_CALLBACK))
    case 0xC09D9E: cpu.execute_instruction<0xDC>(0x000A5A, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/make_party_look_at_active_entity.asm (source_named).
bool execute_overworld_actionscript_make_party_look_at_active_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48B3B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC48B3D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC48B3E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC48B3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC48B3F.
    case 0xC48B41: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC48B42: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC48B43: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:11 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC48B41.
    case 0xC48B45: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:12 STA @LOCAL04
    case 0xC48B46: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:13 LDA FRAME_COUNTER
    case 0xC48B48: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:14 AND #$00FF
    case 0xC48B4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC48B4B.
    case 0xC48B4D: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:15 AND #$0001
    case 0xC48B4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:15 AND #$0001
    // Overlapping static entry reached from 0xC48B4E.
    case 0xC48B50: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:16 BNEL @UNKNOWN6
    case 0xC48B51: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:16 BNEL @UNKNOWN6
    case 0xC48B53: cpu.execute_instruction<0x4C>(0x008BD8, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:17 STZ @LOCAL03
    case 0xC48B56: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:18 BRA @UNKNOWN5
    case 0xC48B58: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:27 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    case 0xC48B5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00008B, 2); else cpu.execute_instruction<0xA0>(0x00988B, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:27 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    // Overlapping static entry reached from 0xC48B5A.
    case 0xC48B5C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:28 LDA (@LOCAL03),Y
    case 0xC48B5D: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:30 AND #$00FF
    case 0xC48B5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC48B5F.
    case 0xC48B61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:31 STA @VIRTUAL02
    case 0xC48B62: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:32 LDA #16
    case 0xC48B64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:32 LDA #16
    // Overlapping static entry reached from 0xC48B64.
    case 0xC48B66: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:33 CLC
    case 0xC48B67: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:34 SBC @VIRTUAL02
    case 0xC48B68: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC48B6A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC48B6C: cpu.execute_instruction<0x10>(0x000059, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC48B6E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC48B70: cpu.execute_instruction<0x30>(0x000055, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:36 LDA @LOCAL03
    case 0xC48B72: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:37 ASL
    case 0xC48B74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:44 TAX
    case 0xC48B75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:45 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC48B76: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:47 STA @VIRTUAL04
    case 0xC48B79: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:48 ASL
    case 0xC48B7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:49 STA @VIRTUAL02
    case 0xC48B7C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:50 LDA @LOCAL04
    case 0xC48B7E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:51 ASL
    case 0xC48B80: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:52 TAX
    case 0xC48B81: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:53 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC48B82: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:54 STA @LOCAL00
    case 0xC48B85: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:55 LDY ENTITY_ABS_X_TABLE,X
    case 0xC48B87: cpu.execute_instruction<0xBC>(0x000B8E, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:56 LDX @VIRTUAL02
    case 0xC48B8A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:57 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC48B8C: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:58 TAX
    case 0xC48B8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:59 STX @LOCAL02
    case 0xC48B90: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:60 LDX @VIRTUAL02
    case 0xC48B92: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:61 LDA ENTITY_ABS_X_TABLE,X
    case 0xC48B94: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:62 LDX @LOCAL02
    case 0xC48B97: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:63 JSL UNKNOWN_C41EFF
    case 0xC48B99: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:64 LDY #$2000
    case 0xC48B9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:64 LDY #$2000
    // Overlapping static entry reached from 0xC48B9D.
    case 0xC48B9F: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:65 CLC
    case 0xC48BA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    case 0xC48BA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    // Overlapping static entry reached from 0xC48B9F.
    case 0xC48BA2: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    // Overlapping static entry reached from 0xC48BA1.
    case 0xC48BA3: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC48BA4: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC48BA3.
    case 0xC48BA5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC48BA5.
    case 0xC48BA6: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:68 STA @LOCAL01
    case 0xC48BA8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:69 LDA @VIRTUAL02
    case 0xC48BAA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:70 CLC
    case 0xC48BAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:71 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC48BAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:71 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC48BAD.
    case 0xC48BAF: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:72 TAX
    case 0xC48BB0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:73 LDA @LOCAL01
    case 0xC48BB1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:74 STA @VIRTUAL02
    case 0xC48BB3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:75 LDA __BSS_START__,X
    case 0xC48BB5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:76 CMP @VIRTUAL02
    case 0xC48BB8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:77 BEQ @UNKNOWN4
    case 0xC48BBA: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:78 LDA @LOCAL01
    case 0xC48BBC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:79 STA __BSS_START__,X
    case 0xC48BBE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:80 LDA @VIRTUAL04
    case 0xC48BC1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:81 JSL UNKNOWN_C0A780
    case 0xC48BC3: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:83 INC @LOCAL03
    case 0xC48BC7: cpu.execute_instruction<0xE6>(0x000014, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:85 LDA GAME_STATE+game_state::party_count
    case 0xC48BC9: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:86 AND #$00FF
    case 0xC48BCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC48BCC.
    case 0xC48BCE: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:87 CMP @LOCAL03
    case 0xC48BCF: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC48BD1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC48BD3: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC48BD5: cpu.execute_instruction<0x4C>(0x008B5A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:90 END_C_FUNCTION
    case 0xC48BD8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:90 END_C_FUNCTION
    case 0xC48BD9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/prepare_new_entity.asm (source_named).
bool execute_overworld_actionscript_prepare_new_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A912: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:4 STY $94
    case 0xC0A916: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:5 PHA
    case 0xC0A918: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A919: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:7 STY $94
    case 0xC0A91D: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:8 PHA
    case 0xC0A91F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:9 JSL MOVEMENT_DATA_READ8
    case 0xC0A920: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:10 STY $94
    case 0xC0A924: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:11 PLY
    case 0xC0A926: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:12 PLX
    case 0xC0A927: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:13 JSL PREPARE_NEW_ENTITY
    case 0xC0A928: cpu.execute_instruction<0x22>(0xC46E37, 4); return true;
    // src/overworld/actionscript/prepare_new_entity.asm:14 RTL
    case 0xC0A92C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/prepare_new_entity_at_party_leader.asm (source_named).
bool execute_overworld_actionscript_prepare_new_entity_at_party_leader_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity_at_party_leader.asm:3 LDA #$0001
    case 0xC0A8FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/actionscript/prepare_new_entity_at_party_leader.asm:3 LDA #$0001
    // Overlapping static entry reached from 0xC0A8FF.
    case 0xC0A901: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/actionscript/prepare_new_entity_at_party_leader.asm:4 JSL PREPARE_NEW_ENTITY_AT_EXISTING_ENTITY_LOCATION
    case 0xC0A902: cpu.execute_instruction<0x22>(0xC46DAD, 4); return true;
    // src/overworld/actionscript/prepare_new_entity_at_party_leader.asm:5 RTL
    case 0xC0A906: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/prepare_new_entity_at_self.asm (source_named).
bool execute_overworld_actionscript_prepare_new_entity_at_self_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:3 LDA #$0000
    case 0xC0A8F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0A8F7.
    case 0xC0A8F9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:4 JSL PREPARE_NEW_ENTITY_AT_EXISTING_ENTITY_LOCATION
    case 0xC0A8FA: cpu.execute_instruction<0x22>(0xC46DAD, 4); return true;
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:5 RTL
    case 0xC0A8FE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm (source_named).
bool execute_overworld_actionscript_prepare_new_entity_at_teleport_destination_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A907: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:4 STY $94
    case 0xC0A90B: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:5 JSL PREPARE_NEW_ENTITY_AT_TELEPORT_DESTINATION
    case 0xC0A90D: cpu.execute_instruction<0x22>(0xC46DE5, 4); return true;
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:6 RTL
    case 0xC0A911: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/run_actionscript_frame.asm (source_named).
bool execute_overworld_actionscript_run_actionscript_frame_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/run_actionscript_frame.asm:3 LDA DISABLE_ACTIONSCRIPT
    case 0xC09466: cpu.execute_instruction<0xAD>(0x000A60, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:4 BEQ @UNKNOWN0
    case 0xC09469: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:5 RTL
    case 0xC0946B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:7 JMP $800000 | .LOWORD(@UNKNOWN1)
    case 0xC0946C: cpu.execute_instruction<0x5C>(0x809470, 4); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:9 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC09470: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC09472: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:11 PHD
    case 0xC09474: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:12 PHA
    case 0xC09475: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:13 TDC
    case 0xC09476: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:14 SEC
    case 0xC09477: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:15 SBC #$00A0
    case 0xC09478: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000A0, 2); else cpu.execute_instruction<0xE9>(0x0000A0, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:15 SBC #$00A0
    // Overlapping static entry reached from 0xC09478.
    case 0xC0947A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:16 AND #$FF00
    case 0xC0947B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:16 AND #$FF00
    // Overlapping static entry reached from 0xC0947B.
    case 0xC0947D: cpu.execute_instruction<0xFF>(0xEE685B, 4); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:17 TCD
    case 0xC0947E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:18 PLA
    case 0xC0947F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:19 INC DISABLE_ACTIONSCRIPT
    case 0xC09480: cpu.execute_instruction<0xEE>(0x000A60, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:19 INC DISABLE_ACTIONSCRIPT
    // Overlapping static entry reached from 0xC0947D.
    case 0xC09481: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:20 LDX FIRST_ENTITY
    case 0xC09483: cpu.execute_instruction<0xAE>(0x000A50, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:21 BMI @UNKNOWN5
    case 0xC09486: cpu.execute_instruction<0x30>(0x000043, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:22 STZ $80
    case 0xC09488: cpu.execute_instruction<0x64>(0x000080, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:23 STZ $86
    case 0xC0948A: cpu.execute_instruction<0x64>(0x000086, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:25 STX $88
    case 0xC0948C: cpu.execute_instruction<0x86>(0x000088, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:26 STX CURRENT_ENTITY_OFFSET
    case 0xC0948E: cpu.execute_instruction<0x8E>(0x001A44, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:27 STX CURRENT_ENTITY_SLOT
    case 0xC09491: cpu.execute_instruction<0x8E>(0x001A42, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:28 LSR CURRENT_ENTITY_SLOT
    case 0xC09494: cpu.execute_instruction<0x4E>(0x001A42, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:29 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09497: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:30 STA NEXT_ACTIVE_ENTITY
    case 0xC0949A: cpu.execute_instruction<0x8D>(0x000A56, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:31 JSR UNKNOWN_C094D0
    case 0xC0949D: cpu.execute_instruction<0x20>(0x0094D0, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:32 LDX NEXT_ACTIVE_ENTITY
    case 0xC094A0: cpu.execute_instruction<0xAE>(0x000A56, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:33 BPL @UNKNOWN2
    case 0xC094A3: cpu.execute_instruction<0x10>(0x0000E7, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:34 LDX FIRST_ENTITY
    case 0xC094A5: cpu.execute_instruction<0xAE>(0x000A50, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:35 BMI @UNKNOWN5
    case 0xC094A8: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:37 STX CURRENT_ENTITY_SLOT
    case 0xC094AA: cpu.execute_instruction<0x8E>(0x001A42, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:38 LSR CURRENT_ENTITY_SLOT
    case 0xC094AD: cpu.execute_instruction<0x4E>(0x001A42, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:39 STX $88
    case 0xC094B0: cpu.execute_instruction<0x86>(0x000088, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:40 BIT ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC094B2: cpu.execute_instruction<0x3C>(0x0010B6, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:41 BVS @UNKNOWN4
    case 0xC094B5: cpu.execute_instruction<0x70>(0x000003, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:42 JSR (.LOWORD(ENTITY_MOVE_CALLBACK),X)
    case 0xC094B7: cpu.execute_instruction<0xFC>(0x00121E, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:44 JSR (.LOWORD(ENTITY_SCREEN_POSITION_CALLBACK),X)
    case 0xC094BA: cpu.execute_instruction<0xFC>(0x0011A6, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:45 LDX $88
    case 0xC094BD: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:46 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC094BF: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:47 TAX
    case 0xC094C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:48 BPL @UNKNOWN3
    case 0xC094C3: cpu.execute_instruction<0x10>(0x0000E5, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:49 LDX #$0000
    case 0xC094C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:49 LDX #$0000
    // Overlapping static entry reached from 0xC094C5.
    case 0xC094C7: cpu.execute_instruction<0x00>(0x0000FC, 2); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:50 JSR (.LOWORD(CURRENT_ENTITY_DRAW_CALLBACK),X)
    case 0xC094C8: cpu.execute_instruction<0xFC>(0x000A5E, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:52 PLD
    case 0xC094CB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:53 STZ DISABLE_ACTIONSCRIPT
    case 0xC094CC: cpu.execute_instruction<0x9C>(0x000A60, 3); return true;
    // src/overworld/actionscript/run_actionscript_frame.asm:54 RTL
    case 0xC094CF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/00.asm (source_named).
bool execute_overworld_actionscript_script_00_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/00.asm:3 LDX $88
    case 0xC095F2: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/00.asm:4 JSR UNKNOWN_C09C3B
    case 0xC095F4: cpu.execute_instruction<0x20>(0x009C3B, 3); return true;
    // src/overworld/actionscript/script/00.asm:5 LDX $8A
    case 0xC095F7: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/00.asm:6 LDA #$FFFF
    case 0xC095F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/script/00.asm:6 LDA #$FFFF
    // Overlapping static entry reached from 0xC095F9.
    case 0xC095FB: cpu.execute_instruction<0xFF>(0x13729D, 4); return true;
    // src/overworld/actionscript/script/00.asm:7 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC095FC: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // src/overworld/actionscript/script/00.asm:8 STA ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC095FF: cpu.execute_instruction<0x8D>(0x000A58, 3); return true;
    // src/overworld/actionscript/script/00.asm:9 RTS
    case 0xC09602: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/01.asm (source_named).
bool execute_overworld_actionscript_script_01_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/01.asm:3 LDA [$80],Y
    case 0xC09603: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/01.asm:4 LDX $8A
    case 0xC09605: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/01.asm:5 INY
    case 0xC09607: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:7 STA $90
    case 0xC09608: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/01.asm:8 STY $94
    case 0xC0960A: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/01.asm:9 TYA
    case 0xC0960C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:10 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0960D: cpu.execute_instruction<0xBC>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/01.asm:11 STA ($84),Y
    case 0xC09610: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/01.asm:12 INY
    case 0xC09612: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:13 INY
    case 0xC09613: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:14 LDA $90
    case 0xC09614: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/01.asm:15 STA ($84),Y
    case 0xC09616: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/01.asm:16 INY
    case 0xC09618: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:17 TYA
    case 0xC09619: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/01.asm:18 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0961A: cpu.execute_instruction<0x9D>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/01.asm:19 LDY $94
    case 0xC0961D: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/01.asm:20 RTS
    case 0xC0961F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/02.asm (source_named).
bool execute_overworld_actionscript_script_02_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/02.asm:3 STY $94
    case 0xC09627: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/02.asm:4 LDX $8A
    case 0xC09629: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/02.asm:5 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0962B: cpu.execute_instruction<0xBC>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/02.asm:6 DEY
    case 0xC0962E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC0962F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/02.asm:8 LDA ($84),Y
    case 0xC09631: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/02.asm:9 DEC
    case 0xC09633: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:10 STA ($84),Y
    case 0xC09634: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/02.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC09636: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/02.asm:12 BNE @UNKNOWN0
    case 0xC09638: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/overworld/actionscript/script/02.asm:13 DEY
    case 0xC0963A: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:14 DEY
    case 0xC0963B: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:15 TYA
    case 0xC0963C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:16 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0963D: cpu.execute_instruction<0x9D>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/02.asm:17 LDY $94
    case 0xC09640: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/02.asm:18 RTS
    case 0xC09642: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:20 DEY
    case 0xC09643: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:21 DEY
    case 0xC09644: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:22 LDA ($84),Y
    case 0xC09645: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/02.asm:23 TAY
    case 0xC09647: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/02.asm:24 RTS
    case 0xC09648: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/03.asm (source_named).
bool execute_overworld_actionscript_script_03_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/03.asm:3 LDA [$80],Y
    case 0xC0964D: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/03.asm:4 TAX
    case 0xC0964F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/03.asm:5 INY
    case 0xC09650: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/03.asm:6 INY
    case 0xC09651: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/03.asm:7 LDA [$80],Y
    case 0xC09652: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/03.asm:8 STA $82
    case 0xC09654: cpu.execute_instruction<0x85>(0x000082, 2); return true;
    // src/overworld/actionscript/script/03.asm:9 TXY
    case 0xC09656: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/actionscript/script/03.asm:10 RTS
    case 0xC09657: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/04.asm (source_named).
bool execute_overworld_actionscript_script_04_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/04.asm:3 LDA [$80],Y
    case 0xC09685: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/04.asm:4 STA $8C
    case 0xC09687: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/04.asm:5 INY
    case 0xC09689: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:6 INY
    case 0xC0968A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:7 LDA [$80],Y
    case 0xC0968B: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/04.asm:8 STA $8E
    case 0xC0968D: cpu.execute_instruction<0x85>(0x00008E, 2); return true;
    // src/overworld/actionscript/script/04.asm:9 INY
    case 0xC0968F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:10 TYA
    case 0xC09690: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:11 LDX $8A
    case 0xC09691: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/04.asm:12 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09693: cpu.execute_instruction<0xBC>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/04.asm:13 STA ($84),Y
    case 0xC09696: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/04.asm:14 INY
    case 0xC09698: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:15 INY
    case 0xC09699: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:16 LDA $82
    case 0xC0969A: cpu.execute_instruction<0xA5>(0x000082, 2); return true;
    // src/overworld/actionscript/script/04.asm:17 STA ($84),Y
    case 0xC0969C: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/04.asm:17 STA ($84),Y
    // Overlapping static entry reached from 0xC096FE.
    case 0xC0969D: cpu.execute_instruction<0x84>(0x0000C8, 2); return true;
    // src/overworld/actionscript/script/04.asm:18 INY
    case 0xC0969E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:19 TYA
    case 0xC0969F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/04.asm:20 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC096A0: cpu.execute_instruction<0x9D>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/04.asm:21 LDA $8E
    case 0xC096A3: cpu.execute_instruction<0xA5>(0x00008E, 2); return true;
    // src/overworld/actionscript/script/04.asm:22 STA $82
    case 0xC096A5: cpu.execute_instruction<0x85>(0x000082, 2); return true;
    // src/overworld/actionscript/script/04.asm:23 LDY $8C
    case 0xC096A7: cpu.execute_instruction<0xA4>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/04.asm:24 RTS
    case 0xC096A9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/05.asm (source_named).
bool execute_overworld_actionscript_script_05_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/05.asm:3 LDX $8A
    case 0xC096AA: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/05.asm:4 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC096AC: cpu.execute_instruction<0xBC>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/05.asm:4 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    // Overlapping static entry reached from 0xC0970E.
    case 0xC096AD: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/overworld/actionscript/script/05.asm:5 BNE @UNKNOWN0
    case 0xC096AF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/overworld/actionscript/script/05.asm:6 JMP .LOWORD(MOVEMENT_CODE_0C)
    case 0xC096B1: cpu.execute_instruction<0x4C>(0x0099C3, 3); return true;
    // src/overworld/actionscript/script/05.asm:8 DEY
    case 0xC096B4: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:9 LDA ($84),Y
    case 0xC096B5: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/05.asm:10 STA $82
    case 0xC096B7: cpu.execute_instruction<0x85>(0x000082, 2); return true;
    // src/overworld/actionscript/script/05.asm:11 DEY
    case 0xC096B9: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:12 DEY
    case 0xC096BA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:13 TYA
    case 0xC096BB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:14 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC096BC: cpu.execute_instruction<0x9D>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/05.asm:15 LDA ($84),Y
    case 0xC096BF: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/05.asm:16 TAY
    case 0xC096C1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/05.asm:17 RTS
    case 0xC096C2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/06.asm (source_named).
bool execute_overworld_actionscript_script_06_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/06.asm:3 LDX $8A
    case 0xC096C3: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/06.asm:4 LDA [$80],Y
    case 0xC096C5: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/06.asm:5 AND #$00FF
    case 0xC096C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/06.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC096C7.
    case 0xC096C9: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/06.asm:6 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC096CA: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // src/overworld/actionscript/script/06.asm:7 INY
    case 0xC096CD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/06.asm:8 RTS
    case 0xC096CE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/07.asm (source_named).
bool execute_overworld_actionscript_script_07_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/07.asm:3 STY $94
    case 0xC099DD: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/07.asm:4 JSR UNKNOWN_C09D03
    case 0xC099DF: cpu.execute_instruction<0x20>(0x009D03, 3); return true;
    // src/overworld/actionscript/script/07.asm:5 BCS @UNKNOWN0
    case 0xC099E2: cpu.execute_instruction<0xB0>(0x000025, 2); return true;
    // src/overworld/actionscript/script/07.asm:6 STY ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC099E4: cpu.execute_instruction<0x8C>(0x000A58, 3); return true;
    // src/overworld/actionscript/script/07.asm:7 LDX $8A
    case 0xC099E7: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/07.asm:8 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC099E9: cpu.execute_instruction<0xBD>(0x00125A, 3); return true;
    // src/overworld/actionscript/script/07.asm:9 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC099EC: cpu.execute_instruction<0x99>(0x00125A, 3); return true;
    // src/overworld/actionscript/script/07.asm:10 TYA
    case 0xC099EF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:11 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC099F0: cpu.execute_instruction<0x9D>(0x00125A, 3); return true;
    // src/overworld/actionscript/script/07.asm:12 TYX
    case 0xC099F3: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:13 STZ ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC099F4: cpu.execute_instruction<0x9E>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/07.asm:13 STZ ENTITY_SCRIPT_STACK_OFFSETS,X
    // Overlapping static entry reached from 0xC09A56.
    case 0xC099F5: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/overworld/actionscript/script/07.asm:14 STZ ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC099F7: cpu.execute_instruction<0x9E>(0x001372, 3); return true;
    // src/overworld/actionscript/script/07.asm:15 LDY $94
    case 0xC099FA: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/07.asm:16 LDA [$80],Y
    case 0xC099FC: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/07.asm:17 STA ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC099FE: cpu.execute_instruction<0x9D>(0x0013FE, 3); return true;
    // src/overworld/actionscript/script/07.asm:18 LDA $82
    case 0xC09A01: cpu.execute_instruction<0xA5>(0x000082, 2); return true;
    // src/overworld/actionscript/script/07.asm:19 STA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC09A03: cpu.execute_instruction<0x9D>(0x00148A, 3); return true;
    // src/overworld/actionscript/script/07.asm:20 INY
    case 0xC09A06: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:21 INY
    case 0xC09A07: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:22 RTS
    case 0xC09A08: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:24 LDY $94
    case 0xC09A09: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/07.asm:25 INY
    case 0xC09A0B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:26 INY
    case 0xC09A0C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/07.asm:27 RTS
    case 0xC09A0D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/08.asm (source_named).
bool execute_overworld_actionscript_script_08_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/08.asm:3 LDX $88
    case 0xC09A1A: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/08.asm:4 LDA [$80],Y
    case 0xC09A1C: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/08.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC09A1E: cpu.execute_instruction<0x9D>(0x00107A, 3); return true;
    // src/overworld/actionscript/script/08.asm:6 INY
    case 0xC09A21: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/08.asm:7 INY
    case 0xC09A22: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/08.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC09A23: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/08.asm:9 LDA [$80],Y
    case 0xC09A25: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/08.asm:10 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09A27: cpu.execute_instruction<0x9D>(0x0010B6, 3); return true;
    // src/overworld/actionscript/script/08.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC09A2A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/08.asm:12 INY
    case 0xC09A2C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/08.asm:13 RTS
    case 0xC09A2D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/09.asm (source_named).
bool execute_overworld_actionscript_script_09_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/09.asm:3 DEY
    case 0xC09A2E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/09.asm:4 LDX $8A
    case 0xC09A2F: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/09.asm:5 LDA #$FFFF
    case 0xC09A31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/script/09.asm:5 LDA #$FFFF
    // Overlapping static entry reached from 0xC09A31.
    case 0xC09A33: cpu.execute_instruction<0xFF>(0x13729D, 4); return true;
    // src/overworld/actionscript/script/09.asm:6 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09A34: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // src/overworld/actionscript/script/09.asm:7 RTS
    case 0xC09A37: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0A.asm (source_named).
bool execute_overworld_actionscript_script_0a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0A.asm:3 LDX $8A
    case 0xC0995D: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/0A.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0995F: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/0A.asm:5 BNE @RETURN
    case 0xC09962: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/actionscript/script/0A.asm:6 LDA [$80],Y
    case 0xC09964: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0A.asm:7 TAY
    case 0xC09966: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0A.asm:8 RTS
    case 0xC09967: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0A.asm:10 INY
    case 0xC09968: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0A.asm:11 INY
    case 0xC09969: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0A.asm:12 RTS
    case 0xC0996A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0B.asm (source_named).
bool execute_overworld_actionscript_script_0b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0B.asm:3 LDX $8A
    case 0xC0996B: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/0B.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0996D: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/0B.asm:5 BEQ @RETURN
    case 0xC09970: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/actionscript/script/0B.asm:6 LDA [$80],Y
    case 0xC09972: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0B.asm:7 TAY
    case 0xC09974: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0B.asm:8 RTS
    case 0xC09975: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0B.asm:10 INY
    case 0xC09976: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0B.asm:11 INY
    case 0xC09977: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0B.asm:12 RTS
    case 0xC09978: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0C.asm (source_named).
bool execute_overworld_actionscript_script_0c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0C.asm:3 STY $94
    case 0xC099C3: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/0C.asm:4 LDY $8A
    case 0xC099C5: cpu.execute_instruction<0xA4>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/0C.asm:6 LDX $88
    case 0xC099C7: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/0C.asm:7 JSR UNKNOWN_C09D12
    case 0xC099C9: cpu.execute_instruction<0x20>(0x009D12, 3); return true;
    // src/overworld/actionscript/script/0C.asm:8 LDA #$FFFF
    case 0xC099CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/script/0C.asm:8 LDA #$FFFF
    // Overlapping static entry reached from 0xC099CC.
    case 0xC099CE: cpu.execute_instruction<0xFF>(0x137299, 4); return true;
    // src/overworld/actionscript/script/0C.asm:9 STA ENTITY_SCRIPT_SLEEP_FRAMES,Y
    case 0xC099CF: cpu.execute_instruction<0x99>(0x001372, 3); return true;
    // src/overworld/actionscript/script/0C.asm:10 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC099D2: cpu.execute_instruction<0xBD>(0x000ADA, 3); return true;
    // src/overworld/actionscript/script/0C.asm:11 BPL @UNKNOWN0
    case 0xC099D5: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/0C.asm:12 JMP MOVEMENT_CODE_00
    case 0xC099D7: cpu.execute_instruction<0x4C>(0x0095F2, 3); return true;
    // src/overworld/actionscript/script/0C.asm:14 LDY $94
    case 0xC099DA: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/0C.asm:15 RTS
    case 0xC099DC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0D.asm (source_named).
bool execute_overworld_actionscript_script_0d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0D.asm:3 LDA [$80],Y
    case 0xC09A9F: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0D.asm:4 INY
    case 0xC09AA1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:6 INY
    case 0xC09AA2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:8 STA $8C
    case 0xC09AA3: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/0D.asm:9 LDA [$80],Y
    case 0xC09AA5: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0D.asm:10 AND #$00FF
    case 0xC09AA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/0D.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09AA7.
    case 0xC09AA9: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/0D.asm:11 ASL
    case 0xC09AAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:12 TAX
    case 0xC09AAB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:13 INY
    case 0xC09AAC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:14 LDA [$80],Y
    case 0xC09AAD: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0D.asm:15 STA $90
    case 0xC09AAF: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/0D.asm:16 INY
    case 0xC09AB1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:17 INY
    case 0xC09AB2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0D.asm:18 LDA f:UNKNOWN_C09ABD,X
    case 0xC09AB3: cpu.execute_instruction<0xBF>(0xC09ABD, 4); return true;
    // src/overworld/actionscript/script/0D.asm:19 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC09AB7: cpu.execute_instruction<0x8D>(0x000A5A, 3); return true;
    // src/overworld/actionscript/script/0D.asm:20 JMP (.LOWORD(CURRENT_ENTITY_TICK_CALLBACK))
    case 0xC09ABA: cpu.execute_instruction<0x6C>(0x000A5A, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0E.asm (source_named).
bool execute_overworld_actionscript_script_0e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0E.asm:3 LDA [$80],Y
    case 0xC09AE2: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0E.asm:4 AND #$00FF
    case 0xC09AE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/0E.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09AE4.
    case 0xC09AE6: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/0E.asm:5 ASL
    case 0xC09AE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:6 TAX
    case 0xC09AE8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09AE9: cpu.execute_instruction<0xBF>(0xC09AF9, 4); return true;
    // src/overworld/actionscript/script/0E.asm:8 ADC $88
    case 0xC09AED: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/0E.asm:9 TAX
    case 0xC09AEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:10 INY
    case 0xC09AF0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:11 LDA [$80],Y
    case 0xC09AF1: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/0E.asm:12 STA __BSS_START__,X
    case 0xC09AF3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/actionscript/script/0E.asm:13 INY
    case 0xC09AF6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:14 INY
    case 0xC09AF7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/0E.asm:15 RTS
    case 0xC09AF8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/0F.asm (source_named).
bool execute_overworld_actionscript_script_0f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0F.asm:3 LDX $88
    case 0xC09B09: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/0F.asm:4 JSR CLEAR_SPRITE_TICK_CALLBACK
    case 0xC09B0B: cpu.execute_instruction<0x20>(0x009DA1, 3); return true;
    // src/overworld/actionscript/script/0F.asm:5 RTS
    case 0xC09B0E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/10.asm (source_named).
bool execute_overworld_actionscript_script_10_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/10.asm:3 LDX $8A
    case 0xC09979: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/10.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0997B: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/10.asm:5 STA $90
    case 0xC0997E: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/10.asm:6 LDA [$80],Y
    case 0xC09980: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/10.asm:7 AND #$00FF
    case 0xC09982: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/10.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC09982.
    case 0xC09984: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/overworld/actionscript/script/10.asm:8 INY
    case 0xC09985: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:9 STY $94
    case 0xC09986: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/10.asm:10 CMP $90
    case 0xC09988: cpu.execute_instruction<0xC5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/10.asm:11 BCC MOVEMENT_CODE_10_UNKNOWN0
    case 0xC0998A: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/overworld/actionscript/script/10.asm:12 BNE MOVEMENT_CODE_10_UNKNOWN1
    case 0xC0998C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/actionscript/script/10.asm:14 ASL
    case 0xC0998E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:15 ADC $94
    case 0xC0998F: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/script/10.asm:16 TAY
    case 0xC09991: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:17 RTS
    case 0xC09992: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:19 LDA $90
    case 0xC09993: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/10.asm:20 ASL
    case 0xC09995: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:21 CLC
    case 0xC09996: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:22 ADC $94
    case 0xC09997: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/script/10.asm:23 TAY
    case 0xC09999: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:24 LDA [$80],Y
    case 0xC0999A: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/10.asm:25 TAY
    case 0xC0999C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/10.asm:26 RTS
    case 0xC0999D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/11.asm (source_named).
bool execute_overworld_actionscript_script_11_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/11.asm:3 LDX $8A
    case 0xC0999E: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/11.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC099A0: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/11.asm:5 STA $90
    case 0xC099A3: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/11.asm:6 LDA [$80],Y
    case 0xC099A5: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/11.asm:7 AND #$00FF
    case 0xC099A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/11.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC099A7.
    case 0xC099A9: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/overworld/actionscript/script/11.asm:8 INY
    case 0xC099AA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:9 STY $94
    case 0xC099AB: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/11.asm:10 CMP $90
    case 0xC099AD: cpu.execute_instruction<0xC5>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/actionscript/script/11.asm:11 BLTEQ MOVEMENT_CODE_10_UNKNOWN0
    case 0xC099AF: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/actionscript/script/11.asm:11 BLTEQ MOVEMENT_CODE_10_UNKNOWN0
    case 0xC099B1: cpu.execute_instruction<0xF0>(0x0000DB, 2); return true;
    // src/overworld/actionscript/script/11.asm:12 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC099B3: cpu.execute_instruction<0xBC>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/11.asm:13 ASL
    case 0xC099B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:14 ADC $94
    case 0xC099B7: cpu.execute_instruction<0x65>(0x000094, 2); return true;
    // src/overworld/actionscript/script/11.asm:15 STA ($84),Y
    case 0xC099B9: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/11.asm:16 INY
    case 0xC099BB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:17 INY
    case 0xC099BC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:18 TYA
    case 0xC099BD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/11.asm:19 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC099BE: cpu.execute_instruction<0x9D>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/11.asm:20 BRA MOVEMENT_CODE_10_UNKNOWN1
    case 0xC099C1: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/12.asm (source_named).
bool execute_overworld_actionscript_script_12_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/12.asm:3 LDA [$80],Y
    case 0xC09B0F: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/12.asm:4 TAX
    case 0xC09B11: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/12.asm:5 INY
    case 0xC09B12: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/12.asm:6 INY
    case 0xC09B13: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/12.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC09B14: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/12.asm:8 LDA [$80],Y
    case 0xC09B16: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/12.asm:9 STA __BSS_START__,X
    case 0xC09B18: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/actionscript/script/12.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC09B1B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/12.asm:11 INY
    case 0xC09B1D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/12.asm:12 RTS
    case 0xC09B1E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/13.asm (source_named).
bool execute_overworld_actionscript_script_13_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/13.asm:3 STY $94
    case 0xC09A0E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/13.asm:4 LDX $8A
    case 0xC09A10: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/13.asm:5 LDY ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09A12: cpu.execute_instruction<0xBC>(0x00125A, 3); return true;
    // src/overworld/actionscript/script/13.asm:6 BPL MOVEMENT_CODE_0C_UNK1
    case 0xC09A15: cpu.execute_instruction<0x10>(0x0000B0, 2); return true;
    // src/overworld/actionscript/script/13.asm:7 LDY $94
    case 0xC09A17: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/13.asm:8 RTS
    case 0xC09A19: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/14.asm (source_named).
bool execute_overworld_actionscript_script_14_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/14.asm:3 LDA [$80],Y
    case 0xC09A87: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/14.asm:4 AND #$00FF
    case 0xC09A89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/14.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09A89.
    case 0xC09A8B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/14.asm:5 ASL
    case 0xC09A8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/14.asm:6 TAX
    case 0xC09A8D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/14.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09A8E: cpu.execute_instruction<0xBF>(0xC09AF9, 4); return true;
    // src/overworld/actionscript/script/14.asm:8 CLC
    case 0xC09A92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/14.asm:9 ADC $88
    case 0xC09A93: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/14.asm:10 BRA MOVEMENT_CODE_0D_UNK1
    case 0xC09A95: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/15.asm (source_named).
bool execute_overworld_actionscript_script_15_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/15.asm:3 LDA [$80],Y
    case 0xC09B1F: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/15.asm:4 TAX
    case 0xC09B21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:5 INY
    case 0xC09B22: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:6 INY
    case 0xC09B23: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:7 LDA [$80],Y
    case 0xC09B24: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/15.asm:8 STA __BSS_START__,X
    case 0xC09B26: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/actionscript/script/15.asm:9 INY
    case 0xC09B29: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:10 INY
    case 0xC09B2A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/15.asm:11 RTS
    case 0xC09B2B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/16.asm (source_named).
bool execute_overworld_actionscript_script_16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/16.asm:3 LDX $8A
    case 0xC09B2C: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/16.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B2E: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/16.asm:5 BNE MOVEMENT_CODE_16_UNKNOWN0
    case 0xC09B31: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/overworld/actionscript/script/16.asm:7 LDA [$80],Y
    case 0xC09B33: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/16.asm:8 TAY
    case 0xC09B35: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:9 LDA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09B36: cpu.execute_instruction<0xBD>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/16.asm:10 SEC
    case 0xC09B39: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:11 SBC #$0003
    case 0xC09B3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/overworld/actionscript/script/16.asm:11 SBC #$0003
    // Overlapping static entry reached from 0xC09B3A.
    case 0xC09B3C: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/16.asm:12 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09B3D: cpu.execute_instruction<0x9D>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/16.asm:13 RTS
    case 0xC09B40: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:15 INY
    case 0xC09B41: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:16 INY
    case 0xC09B42: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/16.asm:17 RTS
    case 0xC09B43: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/17.asm (source_named).
bool execute_overworld_actionscript_script_17_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/17.asm:3 LDX $8A
    case 0xC09B44: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/17.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B46: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/17.asm:5 BEQ MOVEMENT_CODE_16_UNKNOWN0
    case 0xC09B49: cpu.execute_instruction<0xF0>(0x0000F6, 2); return true;
    // src/overworld/actionscript/script/17.asm:6 BRA MOVEMENT_CODE_16_ENTRY2
    case 0xC09B4B: cpu.execute_instruction<0x80>(0x0000E6, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/18.asm (source_named).
bool execute_overworld_actionscript_script_18_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/18.asm:3 LDA [$80],Y
    case 0xC09A5C: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/18.asm:4 STA $8C
    case 0xC09A5E: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/18.asm:5 INY
    case 0xC09A60: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:6 INY
    case 0xC09A61: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:7 LDA [$80],Y
    case 0xC09A62: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/18.asm:8 AND #$00FF
    case 0xC09A64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/18.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09A64.
    case 0xC09A66: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/18.asm:9 ASL
    case 0xC09A67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:10 TAX
    case 0xC09A68: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:11 INY
    case 0xC09A69: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:12 LDA [$80],Y
    case 0xC09A6A: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/18.asm:13 STA $90
    case 0xC09A6C: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/18.asm:14 INY
    case 0xC09A6E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/18.asm:15 LDA f:UNKNOWN_C09ABD,X
    case 0xC09A6F: cpu.execute_instruction<0xBF>(0xC09ABD, 4); return true;
    // src/overworld/actionscript/script/18.asm:16 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC09A73: cpu.execute_instruction<0x8D>(0x000A5A, 3); return true;
    // src/overworld/actionscript/script/18.asm:17 LDA #$0000
    case 0xC09A76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/script/18.asm:17 LDA #$0000
    // Overlapping static entry reached from 0xC09A76.
    case 0xC09A78: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/actionscript/script/18.asm:18 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC09A79: cpu.execute_instruction<0x8D>(0x000A5C, 3); return true;
    // src/overworld/actionscript/script/18.asm:19 LDX #$0000
    case 0xC09A7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/actionscript/script/18.asm:19 LDX #$0000
    // Overlapping static entry reached from 0xC09A7C.
    case 0xC09A7E: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/overworld/actionscript/script/18.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC09A7F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/18.asm:21 JSR JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC09A81: cpu.execute_instruction<0x20>(0x009D9E, 3); return true;
    // src/overworld/actionscript/script/18.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC09A84: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/18.asm:23 RTS
    case 0xC09A86: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/19.asm (source_named).
bool execute_overworld_actionscript_script_19_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/19.asm:3 LDA [$80],Y
    case 0xC09649: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/19.asm:4 TAY
    case 0xC0964B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/19.asm:5 RTS
    case 0xC0964C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1A.asm (source_named).
bool execute_overworld_actionscript_script_1a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1A.asm:3 LDA [$80],Y
    case 0xC09658: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1A.asm:4 STA $90
    case 0xC0965A: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/1A.asm:5 INY
    case 0xC0965C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:6 INY
    case 0xC0965D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:7 TYA
    case 0xC0965E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:8 LDX $8A
    case 0xC0965F: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1A.asm:9 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09661: cpu.execute_instruction<0xBC>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/1A.asm:10 STA ($84),Y
    case 0xC09664: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/overworld/actionscript/script/1A.asm:11 INY
    case 0xC09666: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:12 INY
    case 0xC09667: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:13 TYA
    case 0xC09668: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1A.asm:14 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09669: cpu.execute_instruction<0x9D>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/1A.asm:15 LDY $90
    case 0xC0966C: cpu.execute_instruction<0xA4>(0x000090, 2); return true;
    // src/overworld/actionscript/script/1A.asm:16 RTS
    case 0xC0966E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1B.asm (source_named).
bool execute_overworld_actionscript_script_1b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1B.asm:3 STY $94
    case 0xC0966F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/1B.asm:4 LDX $8A
    case 0xC09671: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1B.asm:5 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09673: cpu.execute_instruction<0xBC>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/1B.asm:6 BNE @UNKNOWN0
    case 0xC09676: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/overworld/actionscript/script/1B.asm:7 JMP .LOWORD(MOVEMENT_CODE_0C)
    case 0xC09678: cpu.execute_instruction<0x4C>(0x0099C3, 3); return true;
    // src/overworld/actionscript/script/1B.asm:9 DEY
    case 0xC0967B: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1B.asm:10 DEY
    case 0xC0967C: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1B.asm:11 TYA
    case 0xC0967D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1B.asm:12 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0967E: cpu.execute_instruction<0x9D>(0x0012E6, 3); return true;
    // src/overworld/actionscript/script/1B.asm:13 LDA ($84),Y
    case 0xC09681: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/overworld/actionscript/script/1B.asm:14 TAY
    case 0xC09683: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1B.asm:15 RTS
    case 0xC09684: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1C.asm (source_named).
bool execute_overworld_actionscript_script_1c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1C.asm:3 LDX $88
    case 0xC09B4D: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/1C.asm:4 LDA [$80],Y
    case 0xC09B4F: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1C.asm:5 STA ENTITY_SPRITEMAP_POINTER_LOW,X
    case 0xC09B51: cpu.execute_instruction<0x9D>(0x00112E, 3); return true;
    // src/overworld/actionscript/script/1C.asm:6 INY
    case 0xC09B54: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1C.asm:7 INY
    case 0xC09B55: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1C.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC09B56: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/1C.asm:9 LDA [$80],Y
    case 0xC09B58: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1C.asm:10 STA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC09B5A: cpu.execute_instruction<0x9D>(0x00116A, 3); return true;
    // src/overworld/actionscript/script/1C.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC09B5D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/actionscript/script/1C.asm:12 INY
    case 0xC09B5F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1C.asm:13 RTS
    case 0xC09B60: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1D.asm (source_named).
bool execute_overworld_actionscript_script_1d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1D.asm:3 LDA [$80],Y
    case 0xC09B61: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1D.asm:4 LDX $8A
    case 0xC09B63: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1D.asm:5 STA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B65: cpu.execute_instruction<0x9D>(0x001516, 3); return true;
    // src/overworld/actionscript/script/1D.asm:6 INY
    case 0xC09B68: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1D.asm:7 INY
    case 0xC09B69: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1D.asm:8 RTS
    case 0xC09B6A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1E.asm (source_named).
bool execute_overworld_actionscript_script_1e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1E.asm:3 LDA [$80],Y
    case 0xC09B6B: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1E.asm:4 TAX
    case 0xC09B6D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1E.asm:5 LDA __BSS_START__,X
    case 0xC09B6E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/script/1E.asm:6 LDX $8A
    case 0xC09B71: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1E.asm:7 STA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B73: cpu.execute_instruction<0x9D>(0x001516, 3); return true;
    // src/overworld/actionscript/script/1E.asm:8 INY
    case 0xC09B76: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1E.asm:9 INY
    case 0xC09B77: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1E.asm:10 RTS
    case 0xC09B78: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/1F.asm (source_named).
bool execute_overworld_actionscript_script_1f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1F.asm:3 LDA [$80],Y
    case 0xC09B79: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/1F.asm:4 AND #$00FF
    case 0xC09B7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/1F.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09B7B.
    case 0xC09B7D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/1F.asm:5 ASL
    case 0xC09B7E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1F.asm:6 TAX
    case 0xC09B7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1F.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09B80: cpu.execute_instruction<0xBF>(0xC09AF9, 4); return true;
    // src/overworld/actionscript/script/1F.asm:8 ADC $88
    case 0xC09B84: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/1F.asm:9 STA $8C
    case 0xC09B86: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/1F.asm:10 LDX $8A
    case 0xC09B88: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/1F.asm:11 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B8A: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/1F.asm:12 STA ($8C)
    case 0xC09B8D: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/overworld/actionscript/script/1F.asm:13 INY
    case 0xC09B8F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/1F.asm:14 RTS
    case 0xC09B90: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/20.asm (source_named).
bool execute_overworld_actionscript_script_20_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/20.asm:3 LDA [$80],Y
    case 0xC09B91: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/20.asm:4 AND #$00FF
    case 0xC09B93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/20.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09B93.
    case 0xC09B95: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/20.asm:5 ASL
    case 0xC09B96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/20.asm:6 TAX
    case 0xC09B97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/20.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09B98: cpu.execute_instruction<0xBF>(0xC09AF9, 4); return true;
    // src/overworld/actionscript/script/20.asm:8 ADC $88
    case 0xC09B9C: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/20.asm:9 TAX
    case 0xC09B9E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/20.asm:10 LDA __BSS_START__,X
    case 0xC09B9F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/script/20.asm:11 LDX $8A
    case 0xC09BA2: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/20.asm:12 STA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09BA4: cpu.execute_instruction<0x9D>(0x001516, 3); return true;
    // src/overworld/actionscript/script/20.asm:13 INY
    case 0xC09BA7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/20.asm:14 RTS
    case 0xC09BA8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/21.asm (source_named).
bool execute_overworld_actionscript_script_21_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/21.asm:3 LDA [$80],Y
    case 0xC09BB4: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/21.asm:4 AND #$00FF
    case 0xC09BB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/21.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09BB6.
    case 0xC09BB8: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/21.asm:5 ASL
    case 0xC09BB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/21.asm:6 TAX
    case 0xC09BBA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/21.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09BBB: cpu.execute_instruction<0xBF>(0xC09AF9, 4); return true;
    // src/overworld/actionscript/script/21.asm:8 ADC $88
    case 0xC09BBF: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/21.asm:9 TAX
    case 0xC09BC1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/21.asm:10 LDA __BSS_START__,X
    case 0xC09BC2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/script/21.asm:11 LDX $8A
    case 0xC09BC5: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/21.asm:12 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09BC7: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // src/overworld/actionscript/script/21.asm:13 INY
    case 0xC09BCA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/21.asm:14 RTS
    case 0xC09BCB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/22.asm (source_named).
bool execute_overworld_actionscript_script_22_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/22.asm:3 LDA [$80],Y
    case 0xC09BE4: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/22.asm:4 LDX $88
    case 0xC09BE6: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/22.asm:5 STA ENTITY_DRAW_CALLBACK,X
    case 0xC09BE8: cpu.execute_instruction<0x9D>(0x0011E2, 3); return true;
    // src/overworld/actionscript/script/22.asm:6 INY
    case 0xC09BEB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/22.asm:7 INY
    case 0xC09BEC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/22.asm:8 RTS
    case 0xC09BED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/23.asm (source_named).
bool execute_overworld_actionscript_script_23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/23.asm:3 LDA [$80],Y
    case 0xC09BEE: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/23.asm:4 LDX $88
    case 0xC09BF0: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/23.asm:5 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    case 0xC09BF2: cpu.execute_instruction<0x9D>(0x0011A6, 3); return true;
    // src/overworld/actionscript/script/23.asm:6 INY
    case 0xC09BF5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/23.asm:7 INY
    case 0xC09BF6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/23.asm:8 RTS
    case 0xC09BF7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/24.asm (source_named).
bool execute_overworld_actionscript_script_24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/24.asm:3 LDX $8A
    case 0xC09620: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/24.asm:5 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09622: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/24.asm:6 BRA MOVEMENT_CODE_01_ENTRY2
    case 0xC09625: cpu.execute_instruction<0x80>(0x0000E1, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/25.asm (source_named).
bool execute_overworld_actionscript_script_25_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/25.asm:3 LDA [$80],Y
    case 0xC09BF8: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/25.asm:4 LDX $88
    case 0xC09BFA: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/25.asm:5 STA ENTITY_MOVE_CALLBACK,X
    case 0xC09BFC: cpu.execute_instruction<0x9D>(0x00121E, 3); return true;
    // src/overworld/actionscript/script/25.asm:6 INY
    case 0xC09BFF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/25.asm:7 INY
    case 0xC09C00: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/25.asm:8 RTS
    case 0xC09C01: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/26.asm (source_named).
bool execute_overworld_actionscript_script_26_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/26.asm:3 LDA [$80],Y
    case 0xC09BCC: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/26.asm:4 AND #$00FF
    case 0xC09BCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/26.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09BCE.
    case 0xC09BD0: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/26.asm:5 ASL
    case 0xC09BD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/26.asm:6 TAX
    case 0xC09BD2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/26.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09BD3: cpu.execute_instruction<0xBF>(0xC09AF9, 4); return true;
    // src/overworld/actionscript/script/26.asm:8 ADC $88
    case 0xC09BD7: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/overworld/actionscript/script/26.asm:9 TAX
    case 0xC09BD9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/26.asm:10 LDA __BSS_START__,X
    case 0xC09BDA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/actionscript/script/26.asm:11 LDX $88
    case 0xC09BDD: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/26.asm:12 STA ENTITY_ANIMATION_FRAME,X
    case 0xC09BDF: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/overworld/actionscript/script/26.asm:13 INY
    case 0xC09BE2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/26.asm:14 RTS
    case 0xC09BE3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/27.asm (source_named).
bool execute_overworld_actionscript_script_27_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/27.asm:3 LDA #.LOWORD(ENTITY_SCRIPT_TEMPVARS)
    case 0xC09A97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x001516, 3); return true;
    // src/overworld/actionscript/script/27.asm:3 LDA #.LOWORD(ENTITY_SCRIPT_TEMPVARS)
    // Overlapping static entry reached from 0xC09A97.
    case 0xC09A99: cpu.execute_instruction<0x15>(0x000018, 2); return true;
    // src/overworld/actionscript/script/27.asm:4 CLC
    case 0xC09A9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/27.asm:5 ADC $8A
    case 0xC09A9B: cpu.execute_instruction<0x65>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/27.asm:6 BRA MOVEMENT_CODE_0D_UNK2
    case 0xC09A9D: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/28.asm (source_named).
bool execute_overworld_actionscript_script_28_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/28.asm:3 LDX $88
    case 0xC096E3: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/28.asm:4 LDA [$80],Y
    case 0xC096E5: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/28.asm:5 INY
    case 0xC096E7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/28.asm:6 INY
    case 0xC096E8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/28.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC096E9: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/overworld/actionscript/script/28.asm:8 LDA #$8000
    case 0xC096EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/script/28.asm:8 LDA #$8000
    // Overlapping static entry reached from 0xC096EC.
    case 0xC096EE: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/28.asm:9 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC096EF: cpu.execute_instruction<0x9D>(0x000C42, 3); return true;
    // src/overworld/actionscript/script/28.asm:10 RTS
    case 0xC096F2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/29.asm (source_named).
bool execute_overworld_actionscript_script_29_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/29.asm:3 LDX $88
    case 0xC096F3: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/29.asm:4 LDA [$80],Y
    case 0xC096F5: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/29.asm:5 INY
    case 0xC096F7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/29.asm:6 INY
    case 0xC096F8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/29.asm:7 STA ENTITY_ABS_Y_TABLE,X
    case 0xC096F9: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/overworld/actionscript/script/29.asm:8 LDA #$8000
    case 0xC096FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/script/29.asm:8 LDA #$8000
    // Overlapping static entry reached from 0xC096FC.
    case 0xC096FE: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/29.asm:9 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC096FF: cpu.execute_instruction<0x9D>(0x000C7E, 3); return true;
    // src/overworld/actionscript/script/29.asm:10 RTS
    case 0xC09702: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2A.asm (source_named).
bool execute_overworld_actionscript_script_2a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2A.asm:3 LDX $88
    case 0xC09703: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2A.asm:4 LDA [$80],Y
    case 0xC09705: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2A.asm:5 INY
    case 0xC09707: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2A.asm:6 INY
    case 0xC09708: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2A.asm:7 STA ENTITY_ABS_Z_TABLE,X
    case 0xC09709: cpu.execute_instruction<0x9D>(0x000C06, 3); return true;
    // src/overworld/actionscript/script/2A.asm:8 LDA #$8000
    case 0xC0970C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/actionscript/script/2A.asm:8 LDA #$8000
    // Overlapping static entry reached from 0xC0970C.
    case 0xC0970E: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/2A.asm:9 STA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC0970F: cpu.execute_instruction<0x9D>(0x000CBA, 3); return true;
    // src/overworld/actionscript/script/2A.asm:10 RTS
    case 0xC09712: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2B.asm (source_named).
bool execute_overworld_actionscript_script_2b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2B.asm:3 LDX $88
    case 0xC098A0: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2B.asm:4 LDA [$80],Y
    case 0xC098A2: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2B.asm:5 CLC
    case 0xC098A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2B.asm:6 ADC ENTITY_ABS_X_TABLE,X
    case 0xC098A5: cpu.execute_instruction<0x7D>(0x000B8E, 3); return true;
    // src/overworld/actionscript/script/2B.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC098A8: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/overworld/actionscript/script/2B.asm:8 INY
    case 0xC098AB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2B.asm:9 INY
    case 0xC098AC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2B.asm:10 RTS
    case 0xC098AD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2C.asm (source_named).
bool execute_overworld_actionscript_script_2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2C.asm:3 LDX $88
    case 0xC098AE: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2C.asm:4 LDA [$80],Y
    case 0xC098B0: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2C.asm:5 CLC
    case 0xC098B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2C.asm:6 ADC ENTITY_ABS_Y_TABLE,X
    case 0xC098B3: cpu.execute_instruction<0x7D>(0x000BCA, 3); return true;
    // src/overworld/actionscript/script/2C.asm:7 STA ENTITY_ABS_Y_TABLE,X
    case 0xC098B6: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/overworld/actionscript/script/2C.asm:8 INY
    case 0xC098B9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2C.asm:9 INY
    case 0xC098BA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2C.asm:10 RTS
    case 0xC098BB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2D.asm (source_named).
bool execute_overworld_actionscript_script_2d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2D.asm:3 LDX $88
    case 0xC098BC: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2D.asm:4 LDA [$80],Y
    case 0xC098BE: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2D.asm:5 CLC
    case 0xC098C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2D.asm:6 ADC ENTITY_ABS_Z_TABLE,X
    case 0xC098C1: cpu.execute_instruction<0x7D>(0x000C06, 3); return true;
    // src/overworld/actionscript/script/2D.asm:7 STA ENTITY_ABS_Z_TABLE,X
    case 0xC098C4: cpu.execute_instruction<0x9D>(0x000C06, 3); return true;
    // src/overworld/actionscript/script/2D.asm:8 INY
    case 0xC098C7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2D.asm:9 INY
    case 0xC098C8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2D.asm:10 RTS
    case 0xC098C9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2E.asm (source_named).
bool execute_overworld_actionscript_script_2e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2E.asm:3 LDX $88
    case 0xC0976D: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2E.asm:4 LDA [$80],Y
    case 0xC0976F: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2E.asm:5 INY
    case 0xC09771: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:6 INY
    case 0xC09772: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:7 STA $90
    case 0xC09773: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/2E.asm:8 AND #$00FF
    case 0xC09775: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/2E.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09775.
    case 0xC09777: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/2E.asm:9 XBA
    case 0xC09778: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:10 CLC
    case 0xC09779: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:11 ADC ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0977A: cpu.execute_instruction<0x7D>(0x000DAA, 3); return true;
    // src/overworld/actionscript/script/2E.asm:12 STA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0977D: cpu.execute_instruction<0x9D>(0x000DAA, 3); return true;
    // src/overworld/actionscript/script/2E.asm:13 LDA $90
    case 0xC09780: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/2E.asm:14 AND #$FF00
    case 0xC09782: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/2E.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC09782.
    case 0xC09784: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/2E.asm:15 BPL @UNKNOWN0
    case 0xC09785: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/2E.asm:16 ORA #$00FF
    case 0xC09787: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/2E.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09784.
    case 0xC09788: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/2E.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09787.
    case 0xC09789: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/2E.asm:18 XBA
    case 0xC0978A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2E.asm:19 ADC ENTITY_DELTA_X_TABLE,X
    case 0xC0978B: cpu.execute_instruction<0x7D>(0x000CF6, 3); return true;
    // src/overworld/actionscript/script/2E.asm:19 ADC ENTITY_DELTA_X_TABLE,X
    // Overlapping static entry reached from 0xC09788.
    case 0xC0978C: cpu.execute_instruction<0xF6>(0x00000C, 2); return true;
    // src/overworld/actionscript/script/2E.asm:20 STA ENTITY_DELTA_X_TABLE,X
    case 0xC0978E: cpu.execute_instruction<0x9D>(0x000CF6, 3); return true;
    // src/overworld/actionscript/script/2E.asm:21 RTS
    case 0xC09791: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/2F.asm (source_named).
bool execute_overworld_actionscript_script_2f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2F.asm:3 LDX $88
    case 0xC09792: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/2F.asm:4 LDA [$80],Y
    case 0xC09794: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/2F.asm:5 INY
    case 0xC09796: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:6 INY
    case 0xC09797: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:7 STA $90
    case 0xC09798: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/2F.asm:8 AND #$00FF
    case 0xC0979A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/2F.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC0979A.
    case 0xC0979C: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/2F.asm:9 XBA
    case 0xC0979D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:10 CLC
    case 0xC0979E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:11 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0979F: cpu.execute_instruction<0x7D>(0x000DE6, 3); return true;
    // src/overworld/actionscript/script/2F.asm:12 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC097A2: cpu.execute_instruction<0x9D>(0x000DE6, 3); return true;
    // src/overworld/actionscript/script/2F.asm:13 LDA $90
    case 0xC097A5: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/2F.asm:14 AND #$FF00
    case 0xC097A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/2F.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC097A7.
    case 0xC097A9: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/2F.asm:15 BPL @UNKNOWN0
    case 0xC097AA: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    case 0xC097AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097A9.
    case 0xC097AD: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097AC.
    case 0xC097AE: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/2F.asm:18 XBA
    case 0xC097AF: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC097B0: cpu.execute_instruction<0x7D>(0x000D32, 3); return true;
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC097AD.
    case 0xC097B1: cpu.execute_instruction<0x32>(0x00000D, 2); return true;
    // src/overworld/actionscript/script/2F.asm:20 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC097B3: cpu.execute_instruction<0x9D>(0x000D32, 3); return true;
    // src/overworld/actionscript/script/2F.asm:21 RTS
    case 0xC097B6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/30.asm (source_named).
bool execute_overworld_actionscript_script_30_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/30.asm:3 LDX $88
    case 0xC097B7: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/30.asm:4 LDA [$80],Y
    case 0xC097B9: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/30.asm:5 INY
    case 0xC097BB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:6 INY
    case 0xC097BC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:7 STA $90
    case 0xC097BD: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/30.asm:8 AND #$00FF
    case 0xC097BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/30.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC097BF.
    case 0xC097C1: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/30.asm:9 XBA
    case 0xC097C2: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:10 CLC
    case 0xC097C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:11 ADC ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC097C4: cpu.execute_instruction<0x7D>(0x000E22, 3); return true;
    // src/overworld/actionscript/script/30.asm:12 STA ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC097C7: cpu.execute_instruction<0x9D>(0x000E22, 3); return true;
    // src/overworld/actionscript/script/30.asm:13 LDA $90
    case 0xC097CA: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/30.asm:14 AND #$FF00
    case 0xC097CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/30.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC097CC.
    case 0xC097CE: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/30.asm:15 BPL @UNKNOWN0
    case 0xC097CF: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/30.asm:16 ORA #$00FF
    case 0xC097D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/30.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097CE.
    case 0xC097D2: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/30.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097D1.
    case 0xC097D3: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/30.asm:18 XBA
    case 0xC097D4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/30.asm:19 ADC ENTITY_DELTA_Z_TABLE,X
    case 0xC097D5: cpu.execute_instruction<0x7D>(0x000D6E, 3); return true;
    // src/overworld/actionscript/script/30.asm:19 ADC ENTITY_DELTA_Z_TABLE,X
    // Overlapping static entry reached from 0xC097D2.
    case 0xC097D6: cpu.execute_instruction<0x6E>(0x009D0D, 3); return true;
    // src/overworld/actionscript/script/30.asm:20 STA ENTITY_DELTA_Z_TABLE,X
    case 0xC097D8: cpu.execute_instruction<0x9D>(0x000D6E, 3); return true;
    // src/overworld/actionscript/script/30.asm:20 STA ENTITY_DELTA_Z_TABLE,X
    // Overlapping static entry reached from 0xC097D6.
    case 0xC097D9: cpu.execute_instruction<0x6E>(0x00600D, 3); return true;
    // src/overworld/actionscript/script/30.asm:21 RTS
    case 0xC097DB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/31.asm (source_named).
bool execute_overworld_actionscript_script_31_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/31.asm:3 LDA [$80],Y
    case 0xC097DC: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/31.asm:4 AND #$00FF
    case 0xC097DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/31.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC097DE.
    case 0xC097E0: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/31.asm:5 ASL
    case 0xC097E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:6 TAX
    case 0xC097E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:7 INY
    case 0xC097E3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:8 LDA [$80],Y
    case 0xC097E4: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/31.asm:9 STA ENTITY_BG_HORIZONTAL_OFFSET_LOW,X
    case 0xC097E6: cpu.execute_instruction<0x9D>(0x001A02, 3); return true;
    // src/overworld/actionscript/script/31.asm:10 STZ ENTITY_BG_HORIZONTAL_OFFSET_HIGH,X
    case 0xC097E9: cpu.execute_instruction<0x9E>(0x001A12, 3); return true;
    // src/overworld/actionscript/script/31.asm:11 INY
    case 0xC097EC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:12 INY
    case 0xC097ED: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/31.asm:13 RTS
    case 0xC097EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/32.asm (source_named).
bool execute_overworld_actionscript_script_32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/32.asm:3 LDA [$80],Y
    case 0xC097EF: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/32.asm:4 AND #$00FF
    case 0xC097F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/32.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC097F1.
    case 0xC097F3: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/32.asm:5 ASL
    case 0xC097F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:6 TAX
    case 0xC097F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:7 INY
    case 0xC097F6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:8 LDA [$80],Y
    case 0xC097F7: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/32.asm:9 STA ENTITY_BG_VERTICAL_OFFSET_LOW,X
    case 0xC097F9: cpu.execute_instruction<0x9D>(0x001A0A, 3); return true;
    // src/overworld/actionscript/script/32.asm:10 STZ ENTITY_BG_VERTICAL_OFFSET_HIGH,X
    case 0xC097FC: cpu.execute_instruction<0x9E>(0x001A1A, 3); return true;
    // src/overworld/actionscript/script/32.asm:11 INY
    case 0xC097FF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:12 INY
    case 0xC09800: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/32.asm:13 RTS
    case 0xC09801: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/33.asm (source_named).
bool execute_overworld_actionscript_script_33_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/33.asm:3 LDA [$80],Y
    case 0xC09802: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/33.asm:4 AND #$00FF
    case 0xC09804: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/33.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09804.
    case 0xC09806: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/33.asm:5 ASL
    case 0xC09807: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:6 TAX
    case 0xC09808: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:7 INY
    case 0xC09809: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:8 LDA [$80],Y
    case 0xC0980A: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/33.asm:9 STA $90
    case 0xC0980C: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/33.asm:10 AND #$00FF
    case 0xC0980E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/33.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC0980E.
    case 0xC09810: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/33.asm:11 XBA
    case 0xC09811: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:12 STA ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC09812: cpu.execute_instruction<0x9D>(0x001A32, 3); return true;
    // src/overworld/actionscript/script/33.asm:13 LDA $90
    case 0xC09815: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/33.asm:14 AND #$FF00
    case 0xC09817: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/33.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC09817.
    case 0xC09819: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/33.asm:15 BPL @UNKNOWN0
    case 0xC0981A: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/33.asm:16 ORA #$00FF
    case 0xC0981C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/33.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09819.
    case 0xC0981D: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/33.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC0981C.
    case 0xC0981E: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/33.asm:18 XBA
    case 0xC0981F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:19 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC09820: cpu.execute_instruction<0x9D>(0x001A22, 3); return true;
    // src/overworld/actionscript/script/33.asm:19 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC0981D.
    case 0xC09821: cpu.execute_instruction<0x22>(0xC8C81A, 4); return true;
    // src/overworld/actionscript/script/33.asm:20 INY
    case 0xC09823: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:21 INY
    case 0xC09824: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/33.asm:22 RTS
    case 0xC09825: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/34.asm (source_named).
bool execute_overworld_actionscript_script_34_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/34.asm:3 LDA [$80],Y
    case 0xC09826: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/34.asm:4 AND #$00FF
    case 0xC09828: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/34.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09828.
    case 0xC0982A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/34.asm:5 ASL
    case 0xC0982B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:6 TAX
    case 0xC0982C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:7 INY
    case 0xC0982D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:8 LDA [$80],Y
    case 0xC0982E: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/34.asm:9 STA $90
    case 0xC09830: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/34.asm:10 AND #$00FF
    case 0xC09832: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/34.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09832.
    case 0xC09834: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/34.asm:11 XBA
    case 0xC09835: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:12 STA ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09836: cpu.execute_instruction<0x9D>(0x001A3A, 3); return true;
    // src/overworld/actionscript/script/34.asm:13 LDA $90
    case 0xC09839: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/34.asm:14 AND #$FF00
    case 0xC0983B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/34.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC0983B.
    case 0xC0983D: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/34.asm:15 BPL @UNKNOWN0
    case 0xC0983E: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/34.asm:16 ORA #$00FF
    case 0xC09840: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/34.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC0983D.
    case 0xC09841: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/34.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09840.
    case 0xC09842: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/34.asm:18 XBA
    case 0xC09843: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:19 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC09844: cpu.execute_instruction<0x9D>(0x001A2A, 3); return true;
    // src/overworld/actionscript/script/34.asm:19 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09841.
    case 0xC09845: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:19 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09845.
    case 0xC09846: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:20 INY
    case 0xC09847: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:21 INY
    case 0xC09848: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/34.asm:22 RTS
    case 0xC09849: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/35.asm (source_named).
bool execute_overworld_actionscript_script_35_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/35.asm:3 LDA [$80],Y
    case 0xC0984A: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/35.asm:4 AND #$00FF
    case 0xC0984C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/35.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC0984C.
    case 0xC0984E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/35.asm:5 ASL
    case 0xC0984F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:6 TAX
    case 0xC09850: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:7 INY
    case 0xC09851: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:8 LDA [$80],Y
    case 0xC09852: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/35.asm:9 STA $90
    case 0xC09854: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/35.asm:10 AND #$00FF
    case 0xC09856: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/35.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09856.
    case 0xC09858: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/35.asm:11 XBA
    case 0xC09859: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:12 CLC
    case 0xC0985A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:13 ADC ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC0985B: cpu.execute_instruction<0x7D>(0x001A32, 3); return true;
    // src/overworld/actionscript/script/35.asm:14 STA ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC0985E: cpu.execute_instruction<0x9D>(0x001A32, 3); return true;
    // src/overworld/actionscript/script/35.asm:15 LDA $90
    case 0xC09861: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/35.asm:16 AND #$FF00
    case 0xC09863: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/35.asm:16 AND #$FF00
    // Overlapping static entry reached from 0xC09863.
    case 0xC09865: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/35.asm:17 BPL @UNKNOWN0
    case 0xC09866: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/35.asm:18 ORA #$00FF
    case 0xC09868: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/35.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09865.
    case 0xC09869: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/35.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09868.
    case 0xC0986A: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/35.asm:20 XBA
    case 0xC0986B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:21 ADC ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC0986C: cpu.execute_instruction<0x7D>(0x001A22, 3); return true;
    // src/overworld/actionscript/script/35.asm:21 ADC ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09869.
    case 0xC0986D: cpu.execute_instruction<0x22>(0x229D1A, 4); return true;
    // src/overworld/actionscript/script/35.asm:22 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC0986F: cpu.execute_instruction<0x9D>(0x001A22, 3); return true;
    // src/overworld/actionscript/script/35.asm:22 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC0986D.
    case 0xC09871: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:23 INY
    case 0xC09872: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:24 INY
    case 0xC09873: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/35.asm:25 RTS
    case 0xC09874: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/36.asm (source_named).
bool execute_overworld_actionscript_script_36_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/36.asm:3 LDA [$80],Y
    case 0xC09875: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/36.asm:4 AND #$00FF
    case 0xC09877: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/36.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09877.
    case 0xC09879: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/36.asm:5 ASL
    case 0xC0987A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:6 TAX
    case 0xC0987B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:7 INY
    case 0xC0987C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:8 LDA [$80],Y
    case 0xC0987D: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/36.asm:9 STA $90
    case 0xC0987F: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/36.asm:10 AND #$00FF
    case 0xC09881: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/36.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09881.
    case 0xC09883: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/36.asm:11 XBA
    case 0xC09884: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:12 CLC
    case 0xC09885: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:13 ADC ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09886: cpu.execute_instruction<0x7D>(0x001A3A, 3); return true;
    // src/overworld/actionscript/script/36.asm:14 STA ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09889: cpu.execute_instruction<0x9D>(0x001A3A, 3); return true;
    // src/overworld/actionscript/script/36.asm:15 LDA $90
    case 0xC0988C: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/36.asm:16 AND #$FF00
    case 0xC0988E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/36.asm:16 AND #$FF00
    // Overlapping static entry reached from 0xC0988E.
    case 0xC09890: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/36.asm:17 BPL @UNKNOWN0
    case 0xC09891: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    case 0xC09893: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09890.
    case 0xC09894: cpu.execute_instruction<0xFF>(0x7DEB00, 4); return true;
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09893.
    case 0xC09895: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/36.asm:20 XBA
    case 0xC09896: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC09897: cpu.execute_instruction<0x7D>(0x001A2A, 3); return true;
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09894.
    case 0xC09898: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09898.
    case 0xC09899: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:22 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC0989A: cpu.execute_instruction<0x9D>(0x001A2A, 3); return true;
    // src/overworld/actionscript/script/36.asm:23 INY
    case 0xC0989D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:24 INY
    case 0xC0989E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/36.asm:25 RTS
    case 0xC0989F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/37.asm (source_named).
bool execute_overworld_actionscript_script_37_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/37.asm:3 LDA [$80],Y
    case 0xC098CA: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/37.asm:4 AND #$00FF
    case 0xC098CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/37.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC098CC.
    case 0xC098CE: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/37.asm:5 ASL
    case 0xC098CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:6 TAX
    case 0xC098D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:7 INY
    case 0xC098D1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:8 LDA [$80],Y
    case 0xC098D2: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/37.asm:9 CLC
    case 0xC098D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:10 ADC ENTITY_BG_HORIZONTAL_OFFSET_LOW,X
    case 0xC098D5: cpu.execute_instruction<0x7D>(0x001A02, 3); return true;
    // src/overworld/actionscript/script/37.asm:11 STA ENTITY_BG_HORIZONTAL_OFFSET_LOW,X
    case 0xC098D8: cpu.execute_instruction<0x9D>(0x001A02, 3); return true;
    // src/overworld/actionscript/script/37.asm:12 INY
    case 0xC098DB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:13 INY
    case 0xC098DC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/37.asm:14 RTS
    case 0xC098DD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/38.asm (source_named).
bool execute_overworld_actionscript_script_38_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/38.asm:3 LDA [$80],Y
    case 0xC098DE: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/38.asm:4 AND #$00FF
    case 0xC098E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/38.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC098E0.
    case 0xC098E2: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/38.asm:5 ASL
    case 0xC098E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:6 TAX
    case 0xC098E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:7 INY
    case 0xC098E5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:8 LDA [$80],Y
    case 0xC098E6: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/38.asm:9 CLC
    case 0xC098E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:10 ADC ENTITY_BG_VERTICAL_OFFSET_LOW,X
    case 0xC098E9: cpu.execute_instruction<0x7D>(0x001A0A, 3); return true;
    // src/overworld/actionscript/script/38.asm:11 STA ENTITY_BG_VERTICAL_OFFSET_LOW,X
    case 0xC098EC: cpu.execute_instruction<0x9D>(0x001A0A, 3); return true;
    // src/overworld/actionscript/script/38.asm:12 INY
    case 0xC098EF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:13 INY
    case 0xC098F0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/38.asm:14 RTS
    case 0xC098F1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/39.asm (source_named).
bool execute_overworld_actionscript_script_39_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/39.asm:3 LDX $88
    case 0xC098F2: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/39.asm:4 STZ ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC098F4: cpu.execute_instruction<0x9E>(0x000DAA, 3); return true;
    // src/overworld/actionscript/script/39.asm:5 STZ ENTITY_DELTA_X_TABLE,X
    case 0xC098F7: cpu.execute_instruction<0x9E>(0x000CF6, 3); return true;
    // src/overworld/actionscript/script/39.asm:6 STZ ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC098FA: cpu.execute_instruction<0x9E>(0x000DE6, 3); return true;
    // src/overworld/actionscript/script/39.asm:7 STZ ENTITY_DELTA_Y_TABLE,X
    case 0xC098FD: cpu.execute_instruction<0x9E>(0x000D32, 3); return true;
    // src/overworld/actionscript/script/39.asm:8 STZ ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC09900: cpu.execute_instruction<0x9E>(0x000E22, 3); return true;
    // src/overworld/actionscript/script/39.asm:9 STZ ENTITY_DELTA_Z_TABLE,X
    case 0xC09903: cpu.execute_instruction<0x9E>(0x000D6E, 3); return true;
    // src/overworld/actionscript/script/39.asm:10 RTS
    case 0xC09906: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3A.asm (source_named).
bool execute_overworld_actionscript_script_3a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3A.asm:3 LDA [$80],Y
    case 0xC0991C: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/3A.asm:4 AND #$00FF
    case 0xC0991E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3A.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC0991E.
    case 0xC09920: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/actionscript/script/3A.asm:5 ASL
    case 0xC09921: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3A.asm:6 TAX
    case 0xC09922: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3A.asm:7 STZ ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC09923: cpu.execute_instruction<0x9E>(0x001A32, 3); return true;
    // src/overworld/actionscript/script/3A.asm:8 STZ ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC09926: cpu.execute_instruction<0x9E>(0x001A22, 3); return true;
    // src/overworld/actionscript/script/3A.asm:9 STZ ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09929: cpu.execute_instruction<0x9E>(0x001A3A, 3); return true;
    // src/overworld/actionscript/script/3A.asm:10 STZ ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC0992C: cpu.execute_instruction<0x9E>(0x001A2A, 3); return true;
    // src/overworld/actionscript/script/3A.asm:11 INY
    case 0xC0992F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3A.asm:12 RTS
    case 0xC09930: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3B_45.asm (source_named).
bool execute_overworld_actionscript_script_3b_45_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3B_45.asm:3 LDX $88
    case 0xC096CF: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:4 LDA [$80],Y
    case 0xC096D1: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:5 AND #$00FF
    case 0xC096D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3B_45.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC096D3.
    case 0xC096D5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:6 CMP #$00FF
    case 0xC096D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3B_45.asm:6 CMP #$00FF
    // Overlapping static entry reached from 0xC096D6.
    case 0xC096D8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:7 BNE @UNKNOWN0
    case 0xC096D9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/overworld/actionscript/script/3B_45.asm:8 LDA #$FFFF
    case 0xC096DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/script/3B_45.asm:8 LDA #$FFFF
    // Overlapping static entry reached from 0xC096DB.
    case 0xC096DD: cpu.execute_instruction<0xFF>(0x10F29D, 4); return true;
    // src/overworld/actionscript/script/3B_45.asm:10 STA ENTITY_ANIMATION_FRAME,X
    case 0xC096DE: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/overworld/actionscript/script/3B_45.asm:11 INY
    case 0xC096E1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3B_45.asm:12 RTS
    case 0xC096E2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3C_46.asm (source_named).
bool execute_overworld_actionscript_script_3c_46_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3C_46.asm:3 LDX $88
    case 0xC09A38: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3C_46.asm:4 INC ENTITY_ANIMATION_FRAME,X
    case 0xC09A3A: cpu.execute_instruction<0xFE>(0x0010F2, 3); return true;
    // src/overworld/actionscript/script/3C_46.asm:5 RTS
    case 0xC09A3D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3D_47.asm (source_named).
bool execute_overworld_actionscript_script_3d_47_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3D_47.asm:3 LDX $88
    case 0xC09A3E: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3D_47.asm:4 DEC ENTITY_ANIMATION_FRAME,X
    case 0xC09A40: cpu.execute_instruction<0xDE>(0x0010F2, 3); return true;
    // src/overworld/actionscript/script/3D_47.asm:5 RTS
    case 0xC09A43: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3E_48.asm (source_named).
bool execute_overworld_actionscript_script_3e_48_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3E_48.asm:3 LDX $88
    case 0xC09A44: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:4 LDA [$80],Y
    case 0xC09A46: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:5 AND #$00FF
    case 0xC09A48: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC09A48.
    case 0xC09A4A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:6 CMP #$0080
    case 0xC09A4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:6 CMP #$0080
    // Overlapping static entry reached from 0xC09A4B.
    case 0xC09A4D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:7 BCC @UNKNOWN0
    case 0xC09A4E: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:8 ORA #$FF00
    case 0xC09A50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:8 ORA #$FF00
    // Overlapping static entry reached from 0xC09A50.
    case 0xC09A52: cpu.execute_instruction<0xFF>(0xF27D18, 4); return true;
    // src/overworld/actionscript/script/3E_48.asm:9 CLC
    case 0xC09A53: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3E_48.asm:11 ADC ENTITY_ANIMATION_FRAME,X
    case 0xC09A54: cpu.execute_instruction<0x7D>(0x0010F2, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:11 ADC ENTITY_ANIMATION_FRAME,X
    // Overlapping static entry reached from 0xC09A52.
    case 0xC09A56: cpu.execute_instruction<0x10>(0x00009D, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:12 STA ENTITY_ANIMATION_FRAME,X
    case 0xC09A57: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/overworld/actionscript/script/3E_48.asm:12 STA ENTITY_ANIMATION_FRAME,X
    // Overlapping static entry reached from 0xC09A56.
    case 0xC09A58: cpu.execute_instruction<0xF2>(0x000010, 2); return true;
    // src/overworld/actionscript/script/3E_48.asm:13 INY
    case 0xC09A5A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3E_48.asm:14 RTS
    case 0xC09A5B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/3F_49.asm (source_named).
bool execute_overworld_actionscript_script_3f_49_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3F_49.asm:3 LDX $88
    case 0xC09713: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:4 LDA [$80],Y
    case 0xC09715: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:5 INY
    case 0xC09717: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3F_49.asm:6 INY
    case 0xC09718: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3F_49.asm:7 STA $90
    case 0xC09719: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:8 AND #$00FF
    case 0xC0971B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC0971B.
    case 0xC0971D: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:9 XBA
    case 0xC0971E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3F_49.asm:10 STA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0971F: cpu.execute_instruction<0x9D>(0x000DAA, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:11 LDA $90
    case 0xC09722: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:12 AND #$FF00
    case 0xC09724: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:12 AND #$FF00
    // Overlapping static entry reached from 0xC09724.
    case 0xC09726: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/3F_49.asm:13 BPL @UNKNOWN0
    case 0xC09727: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:14 ORA #$00FF
    case 0xC09729: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09726.
    case 0xC0972A: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/3F_49.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09729.
    case 0xC0972B: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:16 XBA
    case 0xC0972C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/3F_49.asm:17 STA ENTITY_DELTA_X_TABLE,X
    case 0xC0972D: cpu.execute_instruction<0x9D>(0x000CF6, 3); return true;
    // src/overworld/actionscript/script/3F_49.asm:17 STA ENTITY_DELTA_X_TABLE,X
    // Overlapping static entry reached from 0xC0972A.
    case 0xC0972E: cpu.execute_instruction<0xF6>(0x00000C, 2); return true;
    // src/overworld/actionscript/script/3F_49.asm:18 RTS
    case 0xC09730: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/40_4A.asm (source_named).
bool execute_overworld_actionscript_script_40_4a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/40_4A.asm:3 LDX $88
    case 0xC09731: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:4 LDA [$80],Y
    case 0xC09733: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:5 INY
    case 0xC09735: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/40_4A.asm:6 INY
    case 0xC09736: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/40_4A.asm:7 STA $90
    case 0xC09737: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:8 AND #$00FF
    case 0xC09739: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09739.
    case 0xC0973B: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:9 XBA
    case 0xC0973C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/40_4A.asm:10 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0973D: cpu.execute_instruction<0x9D>(0x000DE6, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:11 LDA $90
    case 0xC09740: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:12 AND #$FF00
    case 0xC09742: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:12 AND #$FF00
    // Overlapping static entry reached from 0xC09742.
    case 0xC09744: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/40_4A.asm:13 BPL @UNKNOWN0
    case 0xC09745: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:14 ORA #$00FF
    case 0xC09747: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09744.
    case 0xC09748: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/40_4A.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09747.
    case 0xC09749: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:16 XBA
    case 0xC0974A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/40_4A.asm:17 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC0974B: cpu.execute_instruction<0x9D>(0x000D32, 3); return true;
    // src/overworld/actionscript/script/40_4A.asm:17 STA ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC09748.
    case 0xC0974C: cpu.execute_instruction<0x32>(0x00000D, 2); return true;
    // src/overworld/actionscript/script/40_4A.asm:18 RTS
    case 0xC0974E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/41_4B.asm (source_named).
bool execute_overworld_actionscript_script_41_4b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/41_4B.asm:3 LDX $88
    case 0xC0974F: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:4 LDA [$80],Y
    case 0xC09751: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:5 INY
    case 0xC09753: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/41_4B.asm:6 INY
    case 0xC09754: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/41_4B.asm:7 STA $90
    case 0xC09755: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:8 AND #$00FF
    case 0xC09757: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09757.
    case 0xC09759: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:9 XBA
    case 0xC0975A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/41_4B.asm:10 STA ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC0975B: cpu.execute_instruction<0x9D>(0x000E22, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:11 LDA $90
    case 0xC0975E: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:12 AND #$FF00
    case 0xC09760: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:12 AND #$FF00
    // Overlapping static entry reached from 0xC09760.
    case 0xC09762: cpu.execute_instruction<0xFF>(0x090310, 4); return true;
    // src/overworld/actionscript/script/41_4B.asm:13 BPL @UNKNOWN0
    case 0xC09763: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:14 ORA #$00FF
    case 0xC09765: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09762.
    case 0xC09766: cpu.execute_instruction<0xFF>(0x9DEB00, 4); return true;
    // src/overworld/actionscript/script/41_4B.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09765.
    case 0xC09767: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/actionscript/script/41_4B.asm:16 XBA
    case 0xC09768: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/actionscript/script/41_4B.asm:17 STA ENTITY_DELTA_Z_TABLE,X
    case 0xC09769: cpu.execute_instruction<0x9D>(0x000D6E, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:17 STA ENTITY_DELTA_Z_TABLE,X
    // Overlapping static entry reached from 0xC09766.
    case 0xC0976A: cpu.execute_instruction<0x6E>(0x00600D, 3); return true;
    // src/overworld/actionscript/script/41_4B.asm:18 RTS
    case 0xC0976C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/42_4C.asm (source_named).
bool execute_overworld_actionscript_script_42_4c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/42_4C.asm:3 LDA [$80],Y
    case 0xC0993D: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:4 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC0993F: cpu.execute_instruction<0x8D>(0x000A5A, 3); return true;
    // src/overworld/actionscript/script/42_4C.asm:5 INY
    case 0xC09942: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/42_4C.asm:6 INY
    case 0xC09943: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/42_4C.asm:7 LDA [$80],Y
    case 0xC09944: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:8 INY
    case 0xC09946: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/42_4C.asm:9 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC09947: cpu.execute_instruction<0x8D>(0x000A5C, 3); return true;
    // src/overworld/actionscript/script/42_4C.asm:10 STY $94
    case 0xC0994A: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:11 LDX $8A
    case 0xC0994C: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:12 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0994E: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/42_4C.asm:13 JSL JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC09951: cpu.execute_instruction<0x22>(0xC09D9E, 4); return true;
    // src/overworld/actionscript/script/42_4C.asm:14 LDX $8A
    case 0xC09955: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:15 STA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09957: cpu.execute_instruction<0x9D>(0x001516, 3); return true;
    // src/overworld/actionscript/script/42_4C.asm:16 LDY $94
    case 0xC0995A: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/overworld/actionscript/script/42_4C.asm:17 RTS
    case 0xC0995C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/43.asm (source_named).
bool execute_overworld_actionscript_script_43_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/43.asm:3 LDX $88
    case 0xC09931: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/script/43.asm:4 LDA [$80],Y
    case 0xC09933: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/43.asm:5 AND #$00FF
    case 0xC09935: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/43.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC09935.
    case 0xC09937: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/overworld/actionscript/script/43.asm:6 INY
    case 0xC09938: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/43.asm:7 STA ENTITY_DRAW_PRIORITY,X
    case 0xC09939: cpu.execute_instruction<0x9D>(0x00103E, 3); return true;
    // src/overworld/actionscript/script/43.asm:8 RTS
    case 0xC0993C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/44.asm (source_named).
bool execute_overworld_actionscript_script_44_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/44.asm:3 LDX $8A
    case 0xC09BA9: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/overworld/actionscript/script/44.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09BAB: cpu.execute_instruction<0xBD>(0x001516, 3); return true;
    // src/overworld/actionscript/script/44.asm:5 BEQ @RETURN
    case 0xC09BAE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/actionscript/script/44.asm:6 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09BB0: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // src/overworld/actionscript/script/44.asm:8 RTS
    case 0xC09BB3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/read16.asm (source_named).
bool execute_overworld_actionscript_script_read16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/read16.asm:3 LDA [$80],Y
    case 0xC09D94: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/read16.asm:4 INY
    case 0xC09D96: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read16.asm:5 INY
    case 0xC09D97: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read16.asm:6 RTL
    case 0xC09D98: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/read16_copy.asm (source_named).
bool execute_overworld_actionscript_script_read16_copy_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/read16_copy.asm:3 LDA [$80],Y
    case 0xC09D99: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/read16_copy.asm:4 INY
    case 0xC09D9B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read16_copy.asm:5 INY
    case 0xC09D9C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read16_copy.asm:6 RTS
    case 0xC09D9D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/read8.asm (source_named).
bool execute_overworld_actionscript_script_read8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/read8.asm:3 LDA [$80],Y
    case 0xC09D86: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/read8.asm:4 INY
    case 0xC09D88: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read8.asm:5 AND #$00FF
    case 0xC09D89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/read8.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC09D89.
    case 0xC09D8B: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/overworld/actionscript/script/read8.asm:6 RTL
    case 0xC09D8C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/script/read8_copy.asm (source_named).
bool execute_overworld_actionscript_script_read8_copy_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/read8_copy.asm:3 LDA [$80],Y
    case 0xC09D8D: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/overworld/actionscript/script/read8_copy.asm:4 INY
    case 0xC09D8F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/actionscript/script/read8_copy.asm:5 AND #$00FF
    case 0xC09D90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/actionscript/script/read8_copy.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC09D90.
    case 0xC09D92: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/overworld/actionscript/script/read8_copy.asm:6 RTS
    case 0xC09D93: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/set_direction.asm (source_named).
bool execute_overworld_actionscript_set_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/set_direction.asm:3 LDX $88
    case 0xC0A65F: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/set_direction.asm:4 TAY
    case 0xC0A661: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/actionscript/set_direction.asm:5 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0A662: cpu.execute_instruction<0xBD>(0x002C5E, 3); return true;
    // src/overworld/actionscript/set_direction.asm:6 BMI @UNKNOWN0
    case 0xC0A665: cpu.execute_instruction<0x30>(0x000004, 2); return true;
    // src/overworld/actionscript/set_direction.asm:7 TYA
    case 0xC0A667: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/set_direction.asm:8 STA ENTITY_DIRECTIONS,X
    case 0xC0A668: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/overworld/actionscript/set_direction.asm:10 TYA
    case 0xC0A66B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/set_direction.asm:11 RTL
    case 0xC0A66C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/set_direction8.asm (source_named).
bool execute_overworld_actionscript_set_direction8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/set_direction8.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A651: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/overworld/actionscript/set_direction8.asm:4 STY $94
    case 0xC0A655: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/set_direction8.asm:5 JSL SET_DIRECTION
    case 0xC0A657: cpu.execute_instruction<0x22>(0xC0A65F, 4); return true;
    // src/overworld/actionscript/set_direction8.asm:6 STA ENTITY_MOVING_DIRECTIONS,X
    case 0xC0A65B: cpu.execute_instruction<0x9D>(0x001A86, 3); return true;
    // src/overworld/actionscript/set_direction8.asm:7 RTL
    case 0xC0A65E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/set_surface_flags.asm (source_named).
bool execute_overworld_actionscript_set_surface_flags_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/set_surface_flags.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A679: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/overworld/actionscript/set_surface_flags.asm:4 STY $94
    case 0xC0A67D: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/overworld/actionscript/set_surface_flags.asm:5 LDX $88
    case 0xC0A67F: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/overworld/actionscript/set_surface_flags.asm:6 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0A681: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // src/overworld/actionscript/set_surface_flags.asm:7 RTL
    case 0xC0A684: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/simple_screen_position_callback.asm (source_named).
bool execute_overworld_actionscript_simple_screen_position_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48BE1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC48BE3: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:6 ASL
    case 0xC48BE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:7 TAX
    case 0xC48BE7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC48BE8: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:9 SEC
    case 0xC48BEB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:10 SBC BG1_X_POS
    case 0xC48BEC: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:11 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC48BEF: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC48BF2: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:13 ASL
    case 0xC48BF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:14 TAX
    case 0xC48BF6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:15 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC48BF7: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:16 SEC
    case 0xC48BFA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:17 SBC BG1_Y_POS
    case 0xC48BFB: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback.asm:18 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC48BFE: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback.asm:19 END_C_FUNCTION
    case 0xC48C01: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/simple_screen_position_callback_offset.asm (source_named).
bool execute_overworld_actionscript_simple_screen_position_callback_offset_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback_offset.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48C02: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC48C04: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:6 ASL
    case 0xC48C07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:7 TAX
    case 0xC48C08: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC48C09: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:9 SEC
    case 0xC48C0C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:10 SBC BG1_X_POS
    case 0xC48C0D: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:11 CLC
    case 0xC48C10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:12 ADC ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC48C11: cpu.execute_instruction<0x7D>(0x000E5E, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:13 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC48C14: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xC48C17: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:15 ASL
    case 0xC48C1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:16 TAX
    case 0xC48C1B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:17 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC48C1C: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:18 SEC
    case 0xC48C1F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:19 SBC BG1_Y_POS
    case 0xC48C20: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:20 CLC
    case 0xC48C23: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:21 ADC ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC48C24: cpu.execute_instruction<0x7D>(0x000E9A, 3); return true;
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:22 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC48C27: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback_offset.asm:23 END_C_FUNCTION
    case 0xC48C2A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/actionscript/test_player_in_area.asm (source_named).
bool execute_overworld_actionscript_test_player_in_area_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46E74: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC46E76: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC46E77: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC46E78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46E78.
    case 0xC46E7A: cpu.execute_instruction<0xFF>(0x3FAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC46E7B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:9 LDA PSI_TELEPORT_DESTINATION
    case 0xC46E7C: cpu.execute_instruction<0xAD>(0x009F3F, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:9 LDA PSI_TELEPORT_DESTINATION
    // Overlapping static entry reached from 0xC46E7A.
    case 0xC46E7E: cpu.execute_instruction<0x9F>(0xA905F0, 4); return true;
    // src/overworld/actionscript/test_player_in_area.asm:10 BEQ @UNKNOWN0
    case 0xC46E7F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    case 0xC46E81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    // Overlapping static entry reached from 0xC46E7E.
    case 0xC46E82: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    // Overlapping static entry reached from 0xC46E81.
    case 0xC46E83: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:12 BRA @UNKNOWN10
    case 0xC46E84: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:14 LDY CURRENT_ENTITY_SLOT
    case 0xC46E86: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:15 TYA
    case 0xC46E89: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:16 ASL
    case 0xC46E8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:17 TAX
    case 0xC46E8B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:18 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC46E8C: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:19 SEC
    case 0xC46E8F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:20 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC46E90: cpu.execute_instruction<0xED>(0x009877, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:21 STA @LOCAL01
    case 0xC46E93: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:22 STA @VIRTUAL02
    case 0xC46E95: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:23 LDA #0
    case 0xC46E97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:23 LDA #0
    // Overlapping static entry reached from 0xC46E97.
    case 0xC46E99: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:24 CLC
    case 0xC46E9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:25 SBC @VIRTUAL02
    case 0xC46E9B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC46E9D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC46E9F: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC46EA1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC46EA3: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:27 LDA @LOCAL01
    case 0xC46EA5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:28 EOR #$FFFF
    case 0xC46EA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:28 EOR #$FFFF
    // Overlapping static entry reached from 0xC46EA7.
    case 0xC46EA9: cpu.execute_instruction<0xFF>(0x0E851A, 4); return true;
    // src/overworld/actionscript/test_player_in_area.asm:29 INC
    case 0xC46EAA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:30 STA @LOCAL00
    case 0xC46EAB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:31 BRA @UNKNOWN4
    case 0xC46EAD: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:33 LDA @LOCAL01
    case 0xC46EAF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:34 STA @LOCAL00
    case 0xC46EB1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:36 TYA
    case 0xC46EB3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:37 ASL
    case 0xC46EB4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:38 TAX
    case 0xC46EB5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:39 LDA @LOCAL00
    case 0xC46EB6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:40 CMP ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC46EB8: cpu.execute_instruction<0xDD>(0x000ED6, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:41 BCS @UNKNOWN9
    case 0xC46EBB: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:42 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC46EBD: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:43 SEC
    case 0xC46EC0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:44 SBC GAME_STATE+game_state::leader_y_coord
    case 0xC46EC1: cpu.execute_instruction<0xED>(0x00987B, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:45 STA @LOCAL01
    case 0xC46EC4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:46 STA @VIRTUAL02
    case 0xC46EC6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:47 LDA #0
    case 0xC46EC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:47 LDA #0
    // Overlapping static entry reached from 0xC46EC8.
    case 0xC46ECA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:48 CLC
    case 0xC46ECB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:49 SBC @VIRTUAL02
    case 0xC46ECC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC46ECE: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC46ED0: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC46ED2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC46ED4: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:51 LDA @LOCAL01
    case 0xC46ED6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:52 EOR #$FFFF
    case 0xC46ED8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:52 EOR #$FFFF
    // Overlapping static entry reached from 0xC46ED8.
    case 0xC46EDA: cpu.execute_instruction<0xFF>(0x10851A, 4); return true;
    // src/overworld/actionscript/test_player_in_area.asm:53 INC
    case 0xC46EDB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:54 STA @LOCAL01
    case 0xC46EDC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:55 BRA @UNKNOWN8
    case 0xC46EDE: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:57 LDA @LOCAL01
    case 0xC46EE0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:58 STA @LOCAL01
    case 0xC46EE2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:60 TYA
    case 0xC46EE4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:61 ASL
    case 0xC46EE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:62 TAX
    case 0xC46EE6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/actionscript/test_player_in_area.asm:63 LDA @LOCAL01
    case 0xC46EE7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:64 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC46EE9: cpu.execute_instruction<0xDD>(0x000F12, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:65 BCS @UNKNOWN9
    case 0xC46EEC: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:66 LDA #TRUE
    case 0xC46EEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:66 LDA #TRUE
    // Overlapping static entry reached from 0xC46EEE.
    case 0xC46EF0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:67 BRA @UNKNOWN10
    case 0xC46EF1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/actionscript/test_player_in_area.asm:69 LDA #FALSE
    case 0xC46EF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/actionscript/test_player_in_area.asm:69 LDA #FALSE
    // Overlapping static entry reached from 0xC46EF3.
    case 0xC46EF5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:71 END_C_FUNCTION
    case 0xC46EF6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:71 END_C_FUNCTION
    case 0xC46EF7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/activate_hotspot.asm (source_named).
bool execute_overworld_activate_hotspot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/activate_hotspot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC072CF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC072D4.
    case 0xC072D6: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:16 STX @LOCAL06
    case 0xC072D9: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/overworld/activate_hotspot.asm:16 STX @LOCAL06
    // Overlapping static entry reached from 0xC072D6.
    case 0xC072DA: cpu.execute_instruction<0x1C>(0x001A85, 3); return true;
    // src/overworld/activate_hotspot.asm:17 STA @LOCAL05
    case 0xC072DB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC072DD: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC072DF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC072E1: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC072E3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC072E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00F2FB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC072E5.
    case 0xC072E7: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC072E8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC072E7.
    case 0xC072E9: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC072EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC072E9.
    case 0xC072EB: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC072EA.
    case 0xC072EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC072ED: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/activate_hotspot.asm:20 LDA @LOCAL06
    case 0xC072EF: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/activate_hotspot.asm:21 ASL
    case 0xC072F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:22 ASL
    case 0xC072F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:23 ASL
    case 0xC072F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:24 CLC
    case 0xC072F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:25 ADC @VIRTUAL06
    case 0xC072F5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:26 STA @VIRTUAL06
    case 0xC072F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:27 STA @LOCAL04
    case 0xC072F9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/activate_hotspot.asm:28 LDA @VIRTUAL06+2
    case 0xC072FB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/activate_hotspot.asm:29 STA @LOCAL04+2
    case 0xC072FD: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/activate_hotspot.asm:30 LDA @LOCAL05
    case 0xC072FF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/activate_hotspot.asm:31 DEC
    case 0xC07301: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07302: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07304: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07305: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07307: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07308: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0730A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:33 CLC
    case 0xC0730B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:34 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC0730C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x005E3C, 3); return true;
    // src/overworld/activate_hotspot.asm:34 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC0730C.
    case 0xC0730E: cpu.execute_instruction<0x5E>(0x0084A8, 3); return true;
    // src/overworld/activate_hotspot.asm:35 TAY
    case 0xC0730F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:36 STY @LOCAL03
    case 0xC07310: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/activate_hotspot.asm:36 STY @LOCAL03
    // Overlapping static entry reached from 0xC0730E.
    case 0xC07311: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/overworld/activate_hotspot.asm:37 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC07312: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/overworld/activate_hotspot.asm:37 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC07311.
    case 0xC07313: cpu.execute_instruction<0x77>(0x000098, 2); return true;
    // src/overworld/activate_hotspot.asm:38 STA @LOCAL02
    case 0xC07315: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/activate_hotspot.asm:39 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC07317: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/overworld/activate_hotspot.asm:40 LDA [@VIRTUAL06]
    case 0xC0731A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:41 ASL
    case 0xC0731C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:42 ASL
    case 0xC0731D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:43 ASL
    case 0xC0731E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:44 STA @LOCAL01
    case 0xC0731F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07321: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07323: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07325: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07327: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/activate_hotspot.asm:46 LDY #2
    case 0xC07329: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/activate_hotspot.asm:46 LDY #2
    // Overlapping static entry reached from 0xC07329.
    case 0xC0732B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/activate_hotspot.asm:47 LDA [@VIRTUAL06],Y
    case 0xC0732C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:48 ASL
    case 0xC0732E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:49 ASL
    case 0xC0732F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:50 ASL
    case 0xC07330: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:51 STA @LOCAL00
    case 0xC07331: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/activate_hotspot.asm:52 LDY #4
    case 0xC07333: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/activate_hotspot.asm:52 LDY #4
    // Overlapping static entry reached from 0xC07333.
    case 0xC07335: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/activate_hotspot.asm:53 LDA [@VIRTUAL06],Y
    case 0xC07336: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:54 ASL
    case 0xC07338: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:55 ASL
    case 0xC07339: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:56 ASL
    case 0xC0733A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:57 STA @VIRTUAL02
    case 0xC0733B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/activate_hotspot.asm:58 LDY #6
    case 0xC0733D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/activate_hotspot.asm:58 LDY #6
    // Overlapping static entry reached from 0xC0733D.
    case 0xC0733F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/activate_hotspot.asm:59 LDA [@VIRTUAL06],Y
    case 0xC07340: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/activate_hotspot.asm:60 ASL
    case 0xC07342: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:61 ASL
    case 0xC07343: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:62 ASL
    case 0xC07344: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:63 STA @VIRTUAL04
    case 0xC07345: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/activate_hotspot.asm:64 LDA @LOCAL02
    case 0xC07347: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/activate_hotspot.asm:65 CMP @LOCAL01
    case 0xC07349: cpu.execute_instruction<0xC5>(0x000010, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/activate_hotspot.asm:66 BLTEQ @UNKNOWN0
    case 0xC0734B: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/activate_hotspot.asm:66 BLTEQ @UNKNOWN0
    case 0xC0734D: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/overworld/activate_hotspot.asm:67 CMP @VIRTUAL02
    case 0xC0734F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/activate_hotspot.asm:68 BCS @UNKNOWN0
    case 0xC07351: cpu.execute_instruction<0xB0>(0x000010, 2); return true;
    // src/overworld/activate_hotspot.asm:69 CPX @LOCAL00
    case 0xC07353: cpu.execute_instruction<0xE4>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/activate_hotspot.asm:70 BLTEQ @UNKNOWN0
    case 0xC07355: cpu.execute_instruction<0x90>(0x00000C, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/activate_hotspot.asm:70 BLTEQ @UNKNOWN0
    case 0xC07357: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/activate_hotspot.asm:71 TXA
    case 0xC07359: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:72 CMP @VIRTUAL04
    case 0xC0735A: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/overworld/activate_hotspot.asm:73 BCS @UNKNOWN0
    case 0xC0735C: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/overworld/activate_hotspot.asm:74 LDX #1
    case 0xC0735E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/activate_hotspot.asm:74 LDX #1
    // Overlapping static entry reached from 0xC0735E.
    case 0xC07360: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/activate_hotspot.asm:75 BRA @UNKNOWN1
    case 0xC07361: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/activate_hotspot.asm:77 LDX #2
    case 0xC07363: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/activate_hotspot.asm:77 LDX #2
    // Overlapping static entry reached from 0xC07363.
    case 0xC07365: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/activate_hotspot.asm:79 TXA
    case 0xC07366: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:80 LDY @LOCAL03
    case 0xC07367: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/activate_hotspot.asm:81 STA a:active_hotspot::mode,Y
    case 0xC07369: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/overworld/activate_hotspot.asm:82 LDA @LOCAL01
    case 0xC0736C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/activate_hotspot.asm:83 STA a:active_hotspot::x1,Y
    case 0xC0736E: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/activate_hotspot.asm:84 LDA @VIRTUAL02
    case 0xC07371: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/activate_hotspot.asm:85 STA a:active_hotspot::x2,Y
    case 0xC07373: cpu.execute_instruction<0x99>(0x000006, 3); return true;
    // src/overworld/activate_hotspot.asm:86 LDA @LOCAL00
    case 0xC07376: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/activate_hotspot.asm:87 STA a:active_hotspot::y1,Y
    case 0xC07378: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/overworld/activate_hotspot.asm:88 LDA @VIRTUAL04
    case 0xC0737B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/activate_hotspot.asm:89 STA a:active_hotspot::y2,Y
    case 0xC0737D: cpu.execute_instruction<0x99>(0x000008, 3); return true;
    // src/overworld/activate_hotspot.asm:90 TYA
    case 0xC07380: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:91 CLC
    case 0xC07381: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:92 ADC #active_hotspot::pointer
    case 0xC07382: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/overworld/activate_hotspot.asm:92 ADC #active_hotspot::pointer
    // Overlapping static entry reached from 0xC07382.
    case 0xC07384: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/activate_hotspot.asm:93 TAY
    case 0xC07385: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC07386: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC07388: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC0738B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC0738D: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/activate_hotspot.asm:95 LDA @LOCAL05
    case 0xC07390: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/activate_hotspot.asm:96 DEC
    case 0xC07392: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:97 STA @LOCAL02
    case 0xC07393: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/activate_hotspot.asm:98 CLC
    case 0xC07395: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:99 ADC #.LOWORD(GAME_STATE)
    case 0xC07396: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/overworld/activate_hotspot.asm:99 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC07396.
    case 0xC07398: cpu.execute_instruction<0x97>(0x0000A8, 2); return true;
    // src/overworld/activate_hotspot.asm:100 TAY
    case 0xC07399: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:101 TXA
    case 0xC0739A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC0739B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/activate_hotspot.asm:103 STA __BSS_START__ + game_state::active_hotspot_modes,Y
    case 0xC0739D: cpu.execute_instruction<0x99>(0x0000C8, 3); return true;
    // src/overworld/activate_hotspot.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC073A0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/activate_hotspot.asm:105 LDA @LOCAL06
    case 0xC073A2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/activate_hotspot.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC073A4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/activate_hotspot.asm:107 STA __BSS_START__+game_state::active_hotspot_ids,Y
    case 0xC073A6: cpu.execute_instruction<0x99>(0x0000CA, 3); return true;
    // src/overworld/activate_hotspot.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC073A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/activate_hotspot.asm:109 LDA @LOCAL02
    case 0xC073AB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/activate_hotspot.asm:110 ASL
    case 0xC073AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:111 ASL
    case 0xC073AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:112 CLC
    case 0xC073AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:118 ADC #.LOWORD(GAME_STATE) + game_state::active_hotspot_pointers
    case 0xC073B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C1, 2); else cpu.execute_instruction<0x69>(0x0098C1, 3); return true;
    // src/overworld/activate_hotspot.asm:118 ADC #.LOWORD(GAME_STATE) + game_state::active_hotspot_pointers
    // Overlapping static entry reached from 0xC073B0.
    case 0xC073B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/activate_hotspot.asm:120 TAY
    case 0xC073B3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC073B4: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC073B6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC073B9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC073BB: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/activate_hotspot.asm:122 END_C_FUNCTION
    case 0xC073BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/activate_hotspot.asm:122 END_C_FUNCTION
    case 0xC073BF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/adjust_position_horizontal.asm (source_named).
bool execute_overworld_adjust_position_horizontal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_position_horizontal.asm:3 BEGIN_C_FUNCTION
    case 0xC02D8F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D91: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D92: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D93: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC02D94.
    case 0xC02D96: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D97: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D98: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:12 TAY
    case 0xC02D99: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02D9A: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02D9C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02D9E: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02DA0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02DA2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02DA4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02DA6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02DA8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:15 TXA
    case 0xC02DAA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    case 0xC02DAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC02DAB.
    case 0xC02DAD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    case 0xC02DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    // Overlapping static entry reached from 0xC02DAE.
    case 0xC02DB0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:18 BEQ @IN_SHALLOW_WATER
    case 0xC02DB1: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    case 0xC02DB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC02DB3.
    case 0xC02DB5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:20 BEQL @IN_DEEP_WATER
    case 0xC02DB6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:20 BEQL @IN_DEEP_WATER
    case 0xC02DB8: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:21 JMP @NOT_IN_WATER
    case 0xC02DBB: cpu.execute_instruction<0x4C>(0x002EF4, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:23 TYA
    case 0xC02DBE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:24 ASL
    case 0xC02DBF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:25 ASL
    case 0xC02DC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:26 STA @VIRTUAL02
    case 0xC02DC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:27 LDA GAME_STATE+game_state::walking_style
    case 0xC02DC3: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:28 ASL
    case 0xC02DC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:29 ASL
    case 0xC02DC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:30 ASL
    case 0xC02DC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:31 ASL
    case 0xC02DC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:32 ASL
    case 0xC02DCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:33 CLC
    case 0xC02DCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:34 ADC @VIRTUAL02
    case 0xC02DCC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:35 CLC
    case 0xC02DCE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:36 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02DCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x004DD6, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:36 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02DCF.
    case 0xC02DD1: cpu.execute_instruction<0x4D>(0x00B9A8, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:37 TAY
    case 0xC02DD2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02DD3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC02DD1.
    case 0xC02DD4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02DD6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02DD8: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02DDB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DDD: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DDF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE3: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE9: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DEB: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02DEF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02DF1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02DF3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02DF5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02DF7: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02DF9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02DFB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02DFD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02DFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02DFF.
    case 0xC02E01: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02E02: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02E04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02E04.
    case 0xC02E06: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02E07: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:43 JSL MULT32
    case 0xC02E09: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E0D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E0F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E11: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E13: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02E15: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02E17: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02E19: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02E1B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:46 PHA
    case 0xC02E1D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:47 LDA @VIRTUAL06
    case 0xC02E1E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:48 PHA
    case 0xC02E20: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E21: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E23: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E25: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E27: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E29: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E2B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E2D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E2F: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E31: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E33: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E35: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E37: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC02E3B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC02E3C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC02E3E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC02E3F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:52 CLC
    case 0xC02E41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E42: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E44: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E46: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E48: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E4A: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E4C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02E4E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02E50: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02E52: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02E54: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:55 JMP @UNKNOWN14
    case 0xC02E56: cpu.execute_instruction<0x4C>(0x003015, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:57 TYA
    case 0xC02E59: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:58 ASL
    case 0xC02E5A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:59 ASL
    case 0xC02E5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:60 STA @VIRTUAL02
    case 0xC02E5C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:61 LDA GAME_STATE+game_state::walking_style
    case 0xC02E5E: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:62 ASL
    case 0xC02E61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:63 ASL
    case 0xC02E62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:64 ASL
    case 0xC02E63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:65 ASL
    case 0xC02E64: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:66 ASL
    case 0xC02E65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:67 CLC
    case 0xC02E66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:68 ADC @VIRTUAL02
    case 0xC02E67: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:69 CLC
    case 0xC02E69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:70 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02E6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x004DD6, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:70 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02E6A.
    case 0xC02E6C: cpu.execute_instruction<0x4D>(0x00B9A8, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:71 TAY
    case 0xC02E6D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02E6E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC02E6C.
    case 0xC02E6F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02E71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02E73: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02E76: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E78: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E7A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E7C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E7E: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E80: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E82: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E84: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E86: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E88: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E8A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E8C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E8E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E90: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E92: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E94: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E96: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E98: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC02E9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00547A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02E9A.
    case 0xC02E9C: cpu.execute_instruction<0x54>(0x000A85, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC02E9D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC02E9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02E9F.
    case 0xC02EA1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC02EA2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:77 JSL MULT32
    case 0xC02EA4: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02EA8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02EAA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02EAC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02EAE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02EB0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02EB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02EB4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02EB6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:80 PHA
    case 0xC02EB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:81 LDA @VIRTUAL06
    case 0xC02EB9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:82 PHA
    case 0xC02EBB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02EBC: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02EBE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02EC0: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02EC2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02EC4: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02EC6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02EC8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ECA: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ECC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ECE: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ED0: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ED2: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ED4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC02ED6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC02ED7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC02ED9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC02EDA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:86 CLC
    case 0xC02EDC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EDD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EDF: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EE1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EE3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EE5: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EE7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02EE9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02EEB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02EED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02EEF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:89 JMP @UNKNOWN14
    case 0xC02EF1: cpu.execute_instruction<0x4C>(0x003015, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:91 LDA DEMO_FRAMES_LEFT
    case 0xC02EF4: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:92 BEQ @UNKNOWN8
    case 0xC02EF7: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:93 TYA
    case 0xC02EF9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:94 ASL
    case 0xC02EFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:95 ASL
    case 0xC02EFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:96 STA @VIRTUAL02
    case 0xC02EFC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:97 LDA GAME_STATE+game_state::walking_style
    case 0xC02EFE: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:98 ASL
    case 0xC02F01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:99 ASL
    case 0xC02F02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:100 ASL
    case 0xC02F03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:101 ASL
    case 0xC02F04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:102 ASL
    case 0xC02F05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:103 CLC
    case 0xC02F06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:104 ADC @VIRTUAL02
    case 0xC02F07: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:105 CLC
    case 0xC02F09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:106 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02F0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x004DD6, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:106 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02F0A.
    case 0xC02F0C: cpu.execute_instruction<0x4D>(0x00B9A8, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:107 TAY
    case 0xC02F0D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02F0E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02F0C.
    case 0xC02F0F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02F11: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02F13: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02F16: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:109 CLC
    case 0xC02F18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F19: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F1B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F1D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F1F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F21: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F23: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02F25: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02F27: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02F29: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02F2B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:112 JMP @UNKNOWN14
    case 0xC02F2D: cpu.execute_instruction<0x4C>(0x003015, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:114 LDA GAME_STATE + game_state::party_status
    case 0xC02F30: cpu.execute_instruction<0xAD>(0x009840, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:115 AND #$00FF
    case 0xC02F33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC02F33.
    case 0xC02F35: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:116 CMP #3
    case 0xC02F36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:116 CMP #3
    // Overlapping static entry reached from 0xC02F36.
    case 0xC02F38: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:117 BNEL @UNKNOWN13
    case 0xC02F39: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:117 BNEL @UNKNOWN13
    case 0xC02F3B: cpu.execute_instruction<0x4C>(0x002FE1, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:118 LDA GAME_STATE+game_state::walking_style
    case 0xC02F3E: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:119 STA @LOCAL00
    case 0xC02F41: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:120 BNEL @UNKNOWN13
    case 0xC02F43: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:120 BNEL @UNKNOWN13
    case 0xC02F45: cpu.execute_instruction<0x4C>(0x002FE1, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:121 TYA
    case 0xC02F48: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:122 ASL
    case 0xC02F49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:123 ASL
    case 0xC02F4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:124 STA @VIRTUAL02
    case 0xC02F4B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:125 LDA @LOCAL00
    case 0xC02F4D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:126 ASL
    case 0xC02F4F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:127 ASL
    case 0xC02F50: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:128 ASL
    case 0xC02F51: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:129 ASL
    case 0xC02F52: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:130 ASL
    case 0xC02F53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:131 CLC
    case 0xC02F54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:132 ADC @VIRTUAL02
    case 0xC02F55: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:133 CLC
    case 0xC02F57: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:134 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02F58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x004DD6, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:134 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02F58.
    case 0xC02F5A: cpu.execute_instruction<0x4D>(0x00B9A8, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:135 TAY
    case 0xC02F5B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02F5C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC02F5A.
    case 0xC02F5D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02F5F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02F61: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02F64: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F66: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F68: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F6A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F6C: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F6E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F70: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F72: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F74: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F76: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F78: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F7A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F7C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F7E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02F80: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02F82: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02F84: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02F86: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC02F88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02F88.
    case 0xC02F8A: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC02F8B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC02F8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02F8D.
    case 0xC02F8F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC02F90: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:141 JSL MULT32
    case 0xC02F92: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F96: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F98: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F9A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F9C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02F9E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FA0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FA2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FA4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:144 PHA
    case 0xC02FA6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:145 LDA @VIRTUAL06
    case 0xC02FA7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:146 PHA
    case 0xC02FA9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FAA: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FAC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FAE: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FB0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FB2: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FB4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FB6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FB8: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FBA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FBC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FBE: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FC0: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FC2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC02FC4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC02FC5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC02FC7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC02FC8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:150 CLC
    case 0xC02FCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FD1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FD3: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FD5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02FD7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02FD9: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02FDB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02FDD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:153 BRA @UNKNOWN14
    case 0xC02FDF: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:155 TYA
    case 0xC02FE1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:156 ASL
    case 0xC02FE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:157 ASL
    case 0xC02FE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:158 STA @VIRTUAL02
    case 0xC02FE4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:159 LDA GAME_STATE+game_state::walking_style
    case 0xC02FE6: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:160 ASL
    case 0xC02FE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:161 ASL
    case 0xC02FEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:162 ASL
    case 0xC02FEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:163 ASL
    case 0xC02FEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:164 ASL
    case 0xC02FED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:165 CLC
    case 0xC02FEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:166 ADC @VIRTUAL02
    case 0xC02FEF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:167 CLC
    case 0xC02FF1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_horizontal.asm:168 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02FF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x004DD6, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:168 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02FF2.
    case 0xC02FF4: cpu.execute_instruction<0x4D>(0x00B9A8, 3); return true;
    // src/overworld/adjust_position_horizontal.asm:169 TAY
    case 0xC02FF5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02FF6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02FF4.
    case 0xC02FF7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02FF9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02FFB: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02FFE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_horizontal.asm:171 CLC
    case 0xC03000: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03001: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03003: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03005: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03007: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03009: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0300B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0300D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0300F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC03089.
    case 0xC03010: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03011: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03013: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:175 END_C_FUNCTION
    case 0xC03015: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_position_horizontal.asm:175 END_C_FUNCTION
    case 0xC03016: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/adjust_position_vertical.asm (source_named).
bool execute_overworld_adjust_position_vertical_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_position_vertical.asm:3 BEGIN_C_FUNCTION
    case 0xC03017: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC03019: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC0301A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC0301B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC0301C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0301C.
    case 0xC0301E: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC0301F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC03020: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:12 TAY
    case 0xC03021: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03022: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03024: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03026: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03028: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0302A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0302C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0302E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03030: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/adjust_position_vertical.asm:15 TXA
    case 0xC03032: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    case 0xC03033: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC03033.
    case 0xC03035: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/adjust_position_vertical.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    case 0xC03036: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/adjust_position_vertical.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    // Overlapping static entry reached from 0xC03036.
    case 0xC03038: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/adjust_position_vertical.asm:18 BEQ @IN_SHALLOW_WATER
    case 0xC03039: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/adjust_position_vertical.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    case 0xC0303B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC0303B.
    case 0xC0303D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:20 BEQL @IN_DEEP_WATER
    case 0xC0303E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:20 BEQL @IN_DEEP_WATER
    case 0xC03040: cpu.execute_instruction<0x4C>(0x0030E1, 3); return true;
    // src/overworld/adjust_position_vertical.asm:21 JMP @NOT_IN_WATER
    case 0xC03043: cpu.execute_instruction<0x4C>(0x00317C, 3); return true;
    // src/overworld/adjust_position_vertical.asm:23 TYA
    case 0xC03046: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:24 ASL
    case 0xC03047: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:25 ASL
    case 0xC03048: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:26 STA @VIRTUAL02
    case 0xC03049: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:27 LDA GAME_STATE+game_state::walking_style
    case 0xC0304B: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_vertical.asm:28 ASL
    case 0xC0304E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:29 ASL
    case 0xC0304F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:30 ASL
    case 0xC03050: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:31 ASL
    case 0xC03051: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:32 ASL
    case 0xC03052: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:33 CLC
    case 0xC03053: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:34 ADC @VIRTUAL02
    case 0xC03054: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:35 CLC
    case 0xC03056: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:36 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC03057: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004F96, 3); return true;
    // src/overworld/adjust_position_vertical.asm:36 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03057.
    case 0xC03059: cpu.execute_instruction<0x4F>(0x00B9A8, 4); return true;
    // src/overworld/adjust_position_vertical.asm:37 TAY
    case 0xC0305A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0305B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC03059.
    case 0xC0305D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0305E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03060: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03063: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03065: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03067: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03069: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0306B: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0306D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0306F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03071: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03073: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03075: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03077: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03079: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0307B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0307D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0307F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03081: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03083: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03085: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC03087: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03087.
    case 0xC03089: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC0308A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC0308C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0308C.
    case 0xC0308E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC0308F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:43 JSL MULT32
    case 0xC03091: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03095: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03097: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03099: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0309B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0309D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0309F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC030A1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC030A3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_vertical.asm:46 PHA
    case 0xC030A5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:47 LDA @VIRTUAL06
    case 0xC030A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_vertical.asm:48 PHA
    case 0xC030A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC030A9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC030AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC030AD: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC030AF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B1: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B7: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030BB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030BD: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030BF: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030C1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC030C3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC030C4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC030C6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC030C7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:52 CLC
    case 0xC030C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030CC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030CE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030D0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030D2: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030D4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030D6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030D8: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030DA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030DC: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:55 JMP @UNKNOWN14
    case 0xC030DE: cpu.execute_instruction<0x4C>(0x00329D, 3); return true;
    // src/overworld/adjust_position_vertical.asm:57 TYA
    case 0xC030E1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:58 ASL
    case 0xC030E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:59 ASL
    case 0xC030E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:60 STA @VIRTUAL02
    case 0xC030E4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:61 LDA GAME_STATE+game_state::walking_style
    case 0xC030E6: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_vertical.asm:62 ASL
    case 0xC030E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:63 ASL
    case 0xC030EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:64 ASL
    case 0xC030EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:65 ASL
    case 0xC030EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:66 ASL
    case 0xC030ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:67 CLC
    case 0xC030EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:68 ADC @VIRTUAL02
    case 0xC030EF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:69 CLC
    case 0xC030F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:70 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC030F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004F96, 3); return true;
    // src/overworld/adjust_position_vertical.asm:70 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC030F2.
    case 0xC030F4: cpu.execute_instruction<0x4F>(0x00B9A8, 4); return true;
    // src/overworld/adjust_position_vertical.asm:71 TAY
    case 0xC030F5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC030F6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC030F4.
    case 0xC030F8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC030F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC030FB: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC030FE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03100: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03102: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03104: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03106: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03108: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0310A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0310C: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0310E: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03110: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03112: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03114: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03116: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03118: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0311A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0311C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0311E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03120: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03122: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00547A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03122.
    case 0xC03124: cpu.execute_instruction<0x54>(0x000A85, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03125: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03127: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03127.
    case 0xC03129: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC0312A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:77 JSL MULT32
    case 0xC0312C: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03130: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03132: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03134: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03136: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03138: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0313A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0313C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0313E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_vertical.asm:80 PHA
    case 0xC03140: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:81 LDA @VIRTUAL06
    case 0xC03141: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_vertical.asm:82 PHA
    case 0xC03143: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03144: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03146: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03148: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0314A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0314C: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0314E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03150: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03152: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03154: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03156: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03158: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0315A: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0315C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0315E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0315F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC03161: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC03162: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:86 CLC
    case 0xC03164: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03165: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03167: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03169: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0316B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0316D: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0316F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03171: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03173: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03175: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03177: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:89 JMP @UNKNOWN14
    case 0xC03179: cpu.execute_instruction<0x4C>(0x00329D, 3); return true;
    // src/overworld/adjust_position_vertical.asm:91 LDA DEMO_FRAMES_LEFT
    case 0xC0317C: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // src/overworld/adjust_position_vertical.asm:92 BEQ @UNKNOWN8
    case 0xC0317F: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/overworld/adjust_position_vertical.asm:93 TYA
    case 0xC03181: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:94 ASL
    case 0xC03182: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:95 ASL
    case 0xC03183: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:96 STA @VIRTUAL02
    case 0xC03184: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:97 LDA GAME_STATE+game_state::walking_style
    case 0xC03186: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_vertical.asm:98 ASL
    case 0xC03189: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:99 ASL
    case 0xC0318A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:100 ASL
    case 0xC0318B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:101 ASL
    case 0xC0318C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:102 ASL
    case 0xC0318D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:103 CLC
    case 0xC0318E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:104 ADC @VIRTUAL02
    case 0xC0318F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:105 CLC
    case 0xC03191: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:106 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC03192: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004F96, 3); return true;
    // src/overworld/adjust_position_vertical.asm:106 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03192.
    case 0xC03194: cpu.execute_instruction<0x4F>(0x00B9A8, 4); return true;
    // src/overworld/adjust_position_vertical.asm:107 TAY
    case 0xC03195: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03196: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03194.
    case 0xC03198: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03199: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0319B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0319E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:109 CLC
    case 0xC031A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A9: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031AB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031AD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031AF: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B3: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:112 JMP @UNKNOWN14
    case 0xC031B5: cpu.execute_instruction<0x4C>(0x00329D, 3); return true;
    // src/overworld/adjust_position_vertical.asm:114 LDA GAME_STATE + game_state::party_status
    case 0xC031B8: cpu.execute_instruction<0xAD>(0x009840, 3); return true;
    // src/overworld/adjust_position_vertical.asm:115 AND #$00FF
    case 0xC031BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_position_vertical.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC031BB.
    case 0xC031BD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/adjust_position_vertical.asm:116 CMP #3
    case 0xC031BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/adjust_position_vertical.asm:116 CMP #3
    // Overlapping static entry reached from 0xC031BE.
    case 0xC031C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:117 BNEL @UNKNOWN13
    case 0xC031C1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:117 BNEL @UNKNOWN13
    case 0xC031C3: cpu.execute_instruction<0x4C>(0x003269, 3); return true;
    // src/overworld/adjust_position_vertical.asm:118 LDA GAME_STATE+game_state::walking_style
    case 0xC031C6: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_vertical.asm:119 STA @LOCAL00
    case 0xC031C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:120 BNEL @UNKNOWN13
    case 0xC031CB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:120 BNEL @UNKNOWN13
    case 0xC031CD: cpu.execute_instruction<0x4C>(0x003269, 3); return true;
    // src/overworld/adjust_position_vertical.asm:121 TYA
    case 0xC031D0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:122 ASL
    case 0xC031D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:123 ASL
    case 0xC031D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:124 STA @VIRTUAL02
    case 0xC031D3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:125 LDA @LOCAL00
    case 0xC031D5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_position_vertical.asm:126 ASL
    case 0xC031D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:127 ASL
    case 0xC031D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:128 ASL
    case 0xC031D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:129 ASL
    case 0xC031DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:130 ASL
    case 0xC031DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:131 CLC
    case 0xC031DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:132 ADC @VIRTUAL02
    case 0xC031DD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:133 CLC
    case 0xC031DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:134 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC031E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004F96, 3); return true;
    // src/overworld/adjust_position_vertical.asm:134 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC031E0.
    case 0xC031E2: cpu.execute_instruction<0x4F>(0x00B9A8, 4); return true;
    // src/overworld/adjust_position_vertical.asm:135 TAY
    case 0xC031E3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC031E4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC031E2.
    case 0xC031E6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC031E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC031E9: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC031EC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031EE: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F4: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031FA: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031FC: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031FE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03200: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03202: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03204: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03206: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03208: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0320A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0320C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0320E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03210: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03210.
    case 0xC03212: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03213: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03215: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03215.
    case 0xC03217: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03218: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:141 JSL MULT32
    case 0xC0321A: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0321E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03220: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03222: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03224: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03226: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03228: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0322A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0322C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/adjust_position_vertical.asm:144 PHA
    case 0xC0322E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:145 LDA @VIRTUAL06
    case 0xC0322F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/adjust_position_vertical.asm:146 PHA
    case 0xC03231: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03232: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03234: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03236: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03238: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0323A: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0323C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0323E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03240: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03242: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03244: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03246: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03248: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0324A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0324C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0324D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0324F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC03250: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:150 CLC
    case 0xC03252: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03253: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03255: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03257: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03259: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0325B: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0325D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0325F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03261: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03263: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03265: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:153 BRA @UNKNOWN14
    case 0xC03267: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/overworld/adjust_position_vertical.asm:155 TYA
    case 0xC03269: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:156 ASL
    case 0xC0326A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:157 ASL
    case 0xC0326B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:158 STA @VIRTUAL02
    case 0xC0326C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:159 LDA GAME_STATE+game_state::walking_style
    case 0xC0326E: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/adjust_position_vertical.asm:160 ASL
    case 0xC03271: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:161 ASL
    case 0xC03272: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:162 ASL
    case 0xC03273: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:163 ASL
    case 0xC03274: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:164 ASL
    case 0xC03275: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:165 CLC
    case 0xC03276: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:166 ADC @VIRTUAL02
    case 0xC03277: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/adjust_position_vertical.asm:167 CLC
    case 0xC03279: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_position_vertical.asm:168 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC0327A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004F96, 3); return true;
    // src/overworld/adjust_position_vertical.asm:168 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC0327A.
    case 0xC0327C: cpu.execute_instruction<0x4F>(0x00B9A8, 4); return true;
    // src/overworld/adjust_position_vertical.asm:169 TAY
    case 0xC0327D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0327E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0327C.
    case 0xC03280: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03281: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03283: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03286: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/adjust_position_vertical.asm:171 CLC
    case 0xC03288: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03289: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0328B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0328D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0328F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03291: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03293: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03295: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03297: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03299: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0329B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_position_vertical.asm:175 END_C_FUNCTION
    case 0xC0329D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_position_vertical.asm:175 END_C_FUNCTION
    case 0xC0329E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/adjust_single_colour.asm (source_named).
bool execute_overworld_adjust_single_colour_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_single_colour.asm:8 BEGIN_C_FUNCTION
    case 0xC00434: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00436: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00437: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00438: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00439: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC00439.
    case 0xC0043B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC0043C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC0043D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:15 STX @VIRTUAL02
    case 0xC0043E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:15 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC0043B.
    case 0xC0043F: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/overworld/adjust_single_colour.asm:16 STA @LOCAL00
    case 0xC00440: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/adjust_single_colour.asm:17 CMP @VIRTUAL02
    case 0xC00442: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:18 BNE @UNKNOWN0 ;channel 1 != channel 2
    case 0xC00444: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/adjust_single_colour.asm:19 LDA @VIRTUAL02
    case 0xC00446: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:20 BRA @UNKNOWN4
    case 0xC00448: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/overworld/adjust_single_colour.asm:22 CMP @VIRTUAL02
    case 0xC0044A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/adjust_single_colour.asm:23 BLTEQ @UNKNOWN2 ;channel1 <= channel 2
    case 0xC0044C: cpu.execute_instruction<0x90>(0x000018, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/adjust_single_colour.asm:23 BLTEQ @UNKNOWN2 ;channel1 <= channel 2
    case 0xC0044E: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/overworld/adjust_single_colour.asm:24 SEC
    case 0xC00450: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:25 SBC @VIRTUAL02
    case 0xC00451: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:26 CMP #6
    case 0xC00453: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/adjust_single_colour.asm:26 CMP #6
    // Overlapping static entry reached from 0xC00453.
    case 0xC00455: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/adjust_single_colour.asm:27 BLTEQ @UNKNOWN1 ;channel1 - channel2 <= 6
    case 0xC00456: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/adjust_single_colour.asm:27 BLTEQ @UNKNOWN1 ;channel1 - channel2 <= 6
    case 0xC00458: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/adjust_single_colour.asm:28 LDA @LOCAL00
    case 0xC0045A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_single_colour.asm:29 SEC
    case 0xC0045C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:30 SBC #6
    case 0xC0045D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/overworld/adjust_single_colour.asm:30 SBC #6
    // Overlapping static entry reached from 0xC0045D.
    case 0xC0045F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/adjust_single_colour.asm:31 STA @VIRTUAL02
    case 0xC00460: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:33 LDA @VIRTUAL02
    case 0xC00462: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:34 BRA @UNKNOWN4
    case 0xC00464: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/overworld/adjust_single_colour.asm:36 STA @VIRTUAL04
    case 0xC00466: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_single_colour.asm:37 LDA @VIRTUAL02
    case 0xC00468: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:38 SEC
    case 0xC0046A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:39 SBC @VIRTUAL04
    case 0xC0046B: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/adjust_single_colour.asm:40 CMP #6
    case 0xC0046D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/adjust_single_colour.asm:40 CMP #6
    // Overlapping static entry reached from 0xC0046D.
    case 0xC0046F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/adjust_single_colour.asm:41 BLTEQ @UNKNOWN3 ;channel2 - channel1 <= 6
    case 0xC00470: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/adjust_single_colour.asm:41 BLTEQ @UNKNOWN3 ;channel2 - channel1 <= 6
    case 0xC00472: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/adjust_single_colour.asm:42 LDA @LOCAL00
    case 0xC00474: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_single_colour.asm:43 CLC
    case 0xC00476: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_single_colour.asm:44 ADC #6
    case 0xC00477: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/adjust_single_colour.asm:44 ADC #6
    // Overlapping static entry reached from 0xC00477.
    case 0xC00479: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/adjust_single_colour.asm:45 STA @VIRTUAL02
    case 0xC0047A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_single_colour.asm:47 LDA @VIRTUAL02
    case 0xC0047C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_single_colour.asm:49 END_C_FUNCTION
    case 0xC0047E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_single_colour.asm:49 END_C_FUNCTION
    case 0xC0047F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/adjust_sprite_palettes_by_average.asm (source_named).
bool execute_overworld_adjust_sprite_palettes_by_average_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00480: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00482: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00483: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00484: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC00484.
    case 0xC00486: cpu.execute_instruction<0xFF>(0x40A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00487: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:16 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC00488: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:16 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC00488.
    case 0xC0048A: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:17 JSR GET_COLOUR_AVERAGE
    case 0xC0048B: cpu.execute_instruction<0x20>(0x000391, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:18 LDY SAVED_COLOUR_AVERAGE_RED
    case 0xC0048E: cpu.execute_instruction<0xAC>(0x0043D6, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:19 LDA COLOUR_AVERAGE_RED
    case 0xC00491: cpu.execute_instruction<0xAD>(0x0043D0, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:20 XBA
    case 0xC00494: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:21 AND #$FF00
    case 0xC00495: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:21 AND #$FF00
    // Overlapping static entry reached from 0xC00495.
    case 0xC00497: cpu.execute_instruction<0xFF>(0x915B22, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_RED / SAVED_COLOUR_AVERAGE_RED
    case 0xC00498: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_RED / SAVED_COLOUR_AVERAGE_RED
    // Overlapping static entry reached from 0xC00497.
    case 0xC0049B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x002085, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:23 STA @LOCAL09
    case 0xC0049C: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:23 STA @LOCAL09
    // Overlapping static entry reached from 0xC0049B.
    case 0xC0049D: cpu.execute_instruction<0x20>(0x00D8AC, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:24 LDY SAVED_COLOUR_AVERAGE_GREEN
    case 0xC0049E: cpu.execute_instruction<0xAC>(0x0043D8, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:24 LDY SAVED_COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC0049D.
    case 0xC004A0: cpu.execute_instruction<0x43>(0x0000AD, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:25 LDA COLOUR_AVERAGE_GREEN
    case 0xC004A1: cpu.execute_instruction<0xAD>(0x0043D2, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:25 LDA COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC004A0.
    case 0xC004A2: cpu.execute_instruction<0xD2>(0x000043, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:26 XBA
    case 0xC004A4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:27 AND #$FF00
    case 0xC004A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:27 AND #$FF00
    // Overlapping static entry reached from 0xC004A5.
    case 0xC004A7: cpu.execute_instruction<0xFF>(0x915B22, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_GREEN / SAVED_COLOUR_AVERAGE_GREEN
    case 0xC004A8: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_GREEN / SAVED_COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC004A7.
    case 0xC004AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001E85, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:29 STA @LOCAL08
    case 0xC004AC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:29 STA @LOCAL08
    // Overlapping static entry reached from 0xC004AB.
    case 0xC004AD: cpu.execute_instruction<0x1E>(0x00DAAC, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:30 LDY SAVED_COLOUR_AVERAGE_BLUE
    case 0xC004AE: cpu.execute_instruction<0xAC>(0x0043DA, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:30 LDY SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004AD.
    case 0xC004B0: cpu.execute_instruction<0x43>(0x0000AD, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:31 LDA COLOUR_AVERAGE_BLUE
    case 0xC004B1: cpu.execute_instruction<0xAD>(0x0043D4, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:31 LDA COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004B0.
    case 0xC004B2: cpu.execute_instruction<0xD4>(0x000043, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:32 XBA
    case 0xC004B4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:33 AND #$FF00
    case 0xC004B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:33 AND #$FF00
    // Overlapping static entry reached from 0xC004B5.
    case 0xC004B7: cpu.execute_instruction<0xFF>(0x915B22, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    case 0xC004B8: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC08D20.
    case 0xC004B9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004B9.
    case 0xC004BA: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004B7.
    case 0xC004BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001C85, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:35 STA @LOCAL07
    case 0xC004BC: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:35 STA @LOCAL07
    // Overlapping static entry reached from 0xC004BB.
    case 0xC004BD: cpu.execute_instruction<0x1C>(0x0003A0, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:36 LDY #3
    case 0xC004BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:36 LDY #3
    // Overlapping static entry reached from 0xC004BE.
    case 0xC004C0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:37 LDA @LOCAL09
    case 0xC004C1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:38 CLC
    case 0xC004C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:39 ADC @LOCAL08
    case 0xC004C4: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:40 CLC
    case 0xC004C6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:41 ADC @LOCAL07
    case 0xC004C7: cpu.execute_instruction<0x65>(0x00001C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:42 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC004C9: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:43 STA @LOCAL06
    case 0xC004CD: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:44 LDA @LOCAL09
    case 0xC004CF: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:45 CMP #256
    case 0xC004D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:45 CMP #256
    // Overlapping static entry reached from 0xC004D1.
    case 0xC004D3: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    case 0xC004D4: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004D3.
    case 0xC004D5: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    case 0xC004D6: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004D5.
    case 0xC004D7: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    case 0xC004D8: cpu.execute_instruction<0x4C>(0x0005E5, 3); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004D7.
    case 0xC004D9: cpu.execute_instruction<0xE5>(0x000005, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:47 LDA @LOCAL08
    case 0xC004DB: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:48 CMP #256
    case 0xC004DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:48 CMP #256
    // Overlapping static entry reached from 0xC004DD.
    case 0xC004DF: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    case 0xC004E0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004DF.
    case 0xC004E1: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    case 0xC004E2: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004E1.
    case 0xC004E3: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    case 0xC004E4: cpu.execute_instruction<0x4C>(0x0005E5, 3); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004E3.
    case 0xC004E5: cpu.execute_instruction<0xE5>(0x000005, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:50 LDA @LOCAL07
    case 0xC004E7: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:51 CMP #256
    case 0xC004E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:51 CMP #256
    // Overlapping static entry reached from 0xC004E9.
    case 0xC004EB: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    case 0xC004EC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004EB.
    case 0xC004ED: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    case 0xC004EE: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004ED.
    case 0xC004EF: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    case 0xC004F0: cpu.execute_instruction<0x4C>(0x0005E5, 3); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004EF.
    case 0xC004F1: cpu.execute_instruction<0xE5>(0x000005, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:53 LDA #128
    case 0xC004F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:53 LDA #128
    // Overlapping static entry reached from 0xC004F3.
    case 0xC004F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:54 STA @LOCAL05
    case 0xC004F6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:55 JMP @UNKNOWN6
    case 0xC004F8: cpu.execute_instruction<0x4C>(0x0005D9, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:57 LDA @LOCAL05
    case 0xC004FB: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:58 ASL
    case 0xC004FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:59 TAX
    case 0xC004FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:60 LDA PALETTES,X
    case 0xC004FF: cpu.execute_instruction<0xBD>(0x000200, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:61 TAX
    case 0xC00502: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:63 AND #BGR555::RED
    case 0xC00503: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:63 AND #BGR555::RED
    // Overlapping static entry reached from 0xC00503.
    case 0xC00505: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:64 STA @LOCAL04
    case 0xC00506: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:65 TAY
    case 0xC00508: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:66 STY @LOCAL03
    case 0xC00509: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:68 TXA
    case 0xC0050B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:69 AND #BGR555::GREEN
    case 0xC0050C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:69 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC0050C.
    case 0xC0050E: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:71 LSR
    case 0xC0050F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:72 LSR
    case 0xC00510: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:73 LSR
    case 0xC00511: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:74 LSR
    case 0xC00512: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:75 LSR
    case 0xC00513: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:76 STA @VIRTUAL02
    case 0xC00514: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:77 STA @LOCAL02
    case 0xC00516: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:78 LDA @VIRTUAL02
    case 0xC00518: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:79 STA @LOCAL01
    case 0xC0051A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:81 TXA
    case 0xC0051C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:82 AND #BGR555::BLUE
    case 0xC0051D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:82 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC0051D.
    case 0xC0051F: cpu.execute_instruction<0x7C>(0x0029EB, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:84 XBA
    case 0xC00520: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:85 AND #$00FF
    case 0xC00521: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC00521.
    case 0xC00523: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:86 LSR
    case 0xC00524: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:87 LSR
    case 0xC00525: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:88 STA @VIRTUAL04
    case 0xC00526: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:89 STA @LOCAL00
    case 0xC00528: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:90 LDA @LOCAL04
    case 0xC0052A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:91 CMP @VIRTUAL02
    case 0xC0052C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:92 BNE @UNKNOWN4 ;red != green
    case 0xC0052E: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:93 LDA @VIRTUAL02
    case 0xC00530: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:94 CMP @VIRTUAL04
    case 0xC00532: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:95 BNE @UNKNOWN4 ;green != blue
    case 0xC00534: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:96 LDA @LOCAL04
    case 0xC00536: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:97 STA @VIRTUAL02
    case 0xC00538: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:98 LDA @VIRTUAL04
    case 0xC0053A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:99 CMP @VIRTUAL02
    case 0xC0053C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:100 BNE @UNKNOWN4 ;blue != red
    case 0xC0053E: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:101 LDY @LOCAL06
    case 0xC00540: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:102 LDA @LOCAL04
    case 0xC00542: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:103 JSL MULT16 ; red *= ???
    case 0xC00544: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:104 STA @LOCAL04
    case 0xC00548: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:105 LDY @LOCAL06
    case 0xC0054A: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:106 LDA @LOCAL02
    case 0xC0054C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:107 STA @VIRTUAL02
    case 0xC0054E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:108 JSL MULT16 ; blue *= ???
    case 0xC00550: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:109 STA @VIRTUAL02
    case 0xC00554: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:110 LDY @LOCAL06
    case 0xC00556: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:111 LDA @VIRTUAL04
    case 0xC00558: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:112 JSL MULT16 ; green *= ???
    case 0xC0055A: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:113 STA @VIRTUAL04
    case 0xC0055E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:114 BRA @UNKNOWN5
    case 0xC00560: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:116 LDY @LOCAL09
    case 0xC00562: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:117 LDA @LOCAL04
    case 0xC00564: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:118 JSL MULT16 ; red *= ???
    case 0xC00566: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:119 STA @LOCAL04
    case 0xC0056A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:120 LDY @LOCAL08
    case 0xC0056C: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:121 LDA @LOCAL02
    case 0xC0056E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:122 STA @VIRTUAL02
    case 0xC00570: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:123 JSL MULT16 ; blue *= ???
    case 0xC00572: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:124 STA @VIRTUAL02
    case 0xC00576: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:125 LDY @LOCAL07
    case 0xC00578: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:126 LDA @VIRTUAL04
    case 0xC0057A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:127 JSL MULT16 ; green *= ???
    case 0xC0057C: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:128 STA @VIRTUAL04
    case 0xC00580: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:130 LDA @LOCAL04
    case 0xC00582: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:131 XBA
    case 0xC00584: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:132 AND #$00FF
    case 0xC00585: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC00585.
    case 0xC00587: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:133 AND #$001F
    case 0xC00588: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:133 AND #$001F
    // Overlapping static entry reached from 0xC00588.
    case 0xC0058A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:134 TAX
    case 0xC0058B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:135 LDY @LOCAL03
    case 0xC0058C: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:136 TYA
    case 0xC0058E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:137 JSR ADJUST_SINGLE_COLOUR ;red & new red
    case 0xC0058F: cpu.execute_instruction<0x20>(0x000434, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:138 TAY
    case 0xC00592: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:139 STY @LOCAL03
    case 0xC00593: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:140 LDA @VIRTUAL02
    case 0xC00595: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:141 XBA
    case 0xC00597: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:142 AND #$00FF
    case 0xC00598: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC00598.
    case 0xC0059A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:143 AND #$001F
    case 0xC0059B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:143 AND #$001F
    // Overlapping static entry reached from 0xC0059B.
    case 0xC0059D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:144 TAX
    case 0xC0059E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:145 LDA @LOCAL01
    case 0xC0059F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:146 JSR ADJUST_SINGLE_COLOUR ;green & new green
    case 0xC005A1: cpu.execute_instruction<0x20>(0x000434, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:147 STA @VIRTUAL02
    case 0xC005A4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:148 LDA @VIRTUAL04
    case 0xC005A6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:149 XBA
    case 0xC005A8: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:150 AND #$00FF
    case 0xC005A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:150 AND #$00FF
    // Overlapping static entry reached from 0xC005A9.
    case 0xC005AB: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:151 AND #$001F
    case 0xC005AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:151 AND #$001F
    // Overlapping static entry reached from 0xC005AC.
    case 0xC005AE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:152 TAX
    case 0xC005AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:153 LDA @LOCAL00
    case 0xC005B0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:154 JSR ADJUST_SINGLE_COLOUR ;blue & new blue
    case 0xC005B2: cpu.execute_instruction<0x20>(0x000434, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:155 STA @LOCAL00
    case 0xC005B5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:156 LDA @LOCAL05
    case 0xC005B7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:157 ASL
    case 0xC005B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:158 TAX
    case 0xC005BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:159 LDY @LOCAL03 ;final red
    case 0xC005BB: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:160 LDA @VIRTUAL02 ;final green
    case 0xC005BD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:161 ASL
    case 0xC005BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:162 ASL
    case 0xC005C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:163 ASL
    case 0xC005C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:164 ASL
    case 0xC005C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:165 ASL
    case 0xC005C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:166 STA @VIRTUAL04
    case 0xC005C4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:167 LDA @LOCAL00 ;final blue
    case 0xC005C6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:168 XBA
    case 0xC005C8: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:169 AND #$FF00
    case 0xC005C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:169 AND #$FF00
    // Overlapping static entry reached from 0xC005C9.
    case 0xC005CB: cpu.execute_instruction<0xFF>(0x050A0A, 4); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:170 ASL
    case 0xC005CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:171 ASL
    case 0xC005CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:172 ORA @VIRTUAL04
    case 0xC005CE: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:172 ORA @VIRTUAL04
    // Overlapping static entry reached from 0xC005CB.
    case 0xC005CF: cpu.execute_instruction<0x04>(0x000084, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:173 STY @VIRTUAL02
    case 0xC005D0: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:173 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC005CF.
    case 0xC005D1: cpu.execute_instruction<0x02>(0x000005, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:174 ORA @VIRTUAL02
    case 0xC005D2: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:175 STA PALETTES,X
    case 0xC005D4: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:176 INC @LOCAL05
    case 0xC005D7: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:178 LDA @LOCAL05
    case 0xC005D9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:179 CMP #256
    case 0xC005DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/adjust_sprite_palettes_by_average.asm:179 CMP #256
    // Overlapping static entry reached from 0xC005DB.
    case 0xC005DD: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    case 0xC005DE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005DD.
    case 0xC005DF: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    case 0xC005E0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005DF.
    case 0xC005E1: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    case 0xC005E2: cpu.execute_instruction<0x4C>(0x0004FB, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005E1.
    case 0xC005E3: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005E3.
    case 0xC005E4: cpu.execute_instruction<0x04>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:182 END_C_FUNCTION
    case 0xC005E5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:182 END_C_FUNCTION
    case 0xC005E6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/attempt_homesickness.asm (source_named).
bool execute_overworld_attempt_homesickness_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/attempt_homesickness.asm:3 BEGIN_C_FUNCTION
    case 0xC1BE4D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BE4F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BE50: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BE51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BE51.
    case 0xC1BE53: cpu.execute_instruction<0xFF>(0xDCAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BE54: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:8 LDA PARTY_CHARACTERS+char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC1BE55: cpu.execute_instruction<0xAD>(0x0099DC, 3); return true;
    // src/overworld/attempt_homesickness.asm:8 LDA PARTY_CHARACTERS+char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC1BE53.
    case 0xC1BE57: cpu.execute_instruction<0x99>(0x00FF29, 3); return true;
    // src/overworld/attempt_homesickness.asm:9 AND #$00FF
    case 0xC1BE58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/attempt_homesickness.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC1BE58.
    case 0xC1BE5A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/attempt_homesickness.asm:10 CMP #STATUS_0::UNCONSCIOUS
    case 0xC1BE5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/attempt_homesickness.asm:10 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC1BE5B.
    case 0xC1BE5D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/attempt_homesickness.asm:11 BEQ @FAILED
    case 0xC1BE5E: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/overworld/attempt_homesickness.asm:12 LDX #0
    case 0xC1BE60: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/attempt_homesickness.asm:12 LDX #0
    // Overlapping static entry reached from 0xC1BE60.
    case 0xC1BE62: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/attempt_homesickness.asm:13 LDA #15
    case 0xC1BE63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/overworld/attempt_homesickness.asm:13 LDA #15
    // Overlapping static entry reached from 0xC1BE63.
    case 0xC1BE65: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/attempt_homesickness.asm:14 STA @LOCAL00
    case 0xC1BE66: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/attempt_homesickness.asm:15 BRA @UNKNOWN5
    case 0xC1BE68: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/overworld/attempt_homesickness.asm:17 LDA @LOCAL00
    case 0xC1BE6A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/attempt_homesickness.asm:18 STA @VIRTUAL02
    case 0xC1BE6C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/attempt_homesickness.asm:19 LDA PARTY_CHARACTERS+char_struct::level
    case 0xC1BE6E: cpu.execute_instruction<0xAD>(0x0099D3, 3); return true;
    // src/overworld/attempt_homesickness.asm:20 AND #$00FF
    case 0xC1BE71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/attempt_homesickness.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1BE71.
    case 0xC1BE73: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/attempt_homesickness.asm:21 CLC
    case 0xC1BE74: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:22 SBC @VIRTUAL02
    case 0xC1BE75: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BE77: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BE79: cpu.execute_instruction<0x10>(0x00002D, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BE7B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BE7D: cpu.execute_instruction<0x30>(0x000029, 2); return true;
    // src/overworld/attempt_homesickness.asm:24 LDA f:HOMESICKNESS_PROBABILITY,X
    case 0xC1BE7F: cpu.execute_instruction<0xBF>(0xC45C8A, 4); return true;
    // src/overworld/attempt_homesickness.asm:25 AND #$00FF
    case 0xC1BE83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/attempt_homesickness.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC1BE83.
    case 0xC1BE85: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/attempt_homesickness.asm:26 BEQ @UNKNOWN3
    case 0xC1BE86: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/overworld/attempt_homesickness.asm:27 AND #$00FF
    case 0xC1BE88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/attempt_homesickness.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1BE88.
    case 0xC1BE8A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/attempt_homesickness.asm:28 JSL RAND_MOD
    case 0xC1BE8B: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // src/overworld/attempt_homesickness.asm:29 CMP #0
    case 0xC1BE8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/attempt_homesickness.asm:29 CMP #0
    // Overlapping static entry reached from 0xC1BE8F.
    case 0xC1BE91: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/attempt_homesickness.asm:30 BNE @UNKNOWN3
    case 0xC1BE92: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/overworld/attempt_homesickness.asm:31 LDY #STATUS_5::HOMESICK + 1
    case 0xC1BE94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/attempt_homesickness.asm:31 LDY #STATUS_5::HOMESICK + 1
    // Overlapping static entry reached from 0xC1BE94.
    case 0xC1BE96: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/attempt_homesickness.asm:32 LDX #STATUS_GROUP::HOMESICKNESS + 1
    case 0xC1BE97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/overworld/attempt_homesickness.asm:32 LDX #STATUS_GROUP::HOMESICKNESS + 1
    // Overlapping static entry reached from 0xC1BE97.
    case 0xC1BE99: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/attempt_homesickness.asm:33 LDA #PARTY_MEMBER::NESS
    case 0xC1BE9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/attempt_homesickness.asm:33 LDA #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC1BE9A.
    case 0xC1BE9C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/attempt_homesickness.asm:34 JSL INFLICT_STATUS_NONBATTLE
    case 0xC1BE9D: cpu.execute_instruction<0x22>(0xC458FE, 4); return true;
    // src/overworld/attempt_homesickness.asm:35 BRA @RETURN
    case 0xC1BEA1: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/overworld/attempt_homesickness.asm:37 LDA #0
    case 0xC1BEA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/attempt_homesickness.asm:37 LDA #0
    // Overlapping static entry reached from 0xC1BEA3.
    case 0xC1BEA5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/attempt_homesickness.asm:38 BRA @RETURN
    case 0xC1BEA6: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/overworld/attempt_homesickness.asm:40 INX
    case 0xC1BEA8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:41 LDA @LOCAL00
    case 0xC1BEA9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/attempt_homesickness.asm:42 CLC
    case 0xC1BEAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    case 0xC1BEAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    // Overlapping static entry reached from 0xC171A1.
    case 0xC1BEAD: cpu.execute_instruction<0x0F>(0x0E8500, 4); return true;
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    // Overlapping static entry reached from 0xC1BEAC.
    case 0xC1BEAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/attempt_homesickness.asm:44 STA @LOCAL00
    case 0xC1BEAF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/attempt_homesickness.asm:46 STX @VIRTUAL02
    case 0xC1BEB1: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/attempt_homesickness.asm:47 LDA #100 / 15
    case 0xC1BEB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/overworld/attempt_homesickness.asm:47 LDA #100 / 15
    // Overlapping static entry reached from 0xC1BEB3.
    case 0xC1BEB5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/attempt_homesickness.asm:48 CLC
    case 0xC1BEB6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/attempt_homesickness.asm:49 SBC @VIRTUAL02
    case 0xC1BEB7: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BEB9: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BEBB: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BEBD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BEBF: cpu.execute_instruction<0x30>(0x0000A9, 2); return true;
    // src/overworld/attempt_homesickness.asm:52 LDA #0
    case 0xC1BEC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/attempt_homesickness.asm:52 LDA #0
    // Overlapping static entry reached from 0xC1BEC1.
    case 0xC1BEC3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/attempt_homesickness.asm:54 END_C_FUNCTION
    case 0xC1BEC4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/attempt_homesickness.asm:54 END_C_FUNCTION
    case 0xC1BEC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/battle_swirl_sequence.asm (source_named).
bool execute_overworld_battle_swirl_sequence_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/battle_swirl_sequence.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E8E0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E8E2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E8E3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E8E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E8E4.
    case 0xC2E8E6: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E8E7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/battle_swirl_sequence.asm:12 LDA #$0001
    case 0xC2E8E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:12 LDA #$0001
    // Overlapping static entry reached from 0xC2E8E8.
    case 0xC2E8EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:13 STA $16
    case 0xC2E8EB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:14 LDA #$0004
    case 0xC2E8ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:14 LDA #$0004
    // Overlapping static entry reached from 0xC2E8ED.
    case 0xC2E8EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:15 STA @SWIRL_RED
    case 0xC2E8F0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:16 STA @SWIRL_GREEN
    case 0xC2E8F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:17 LDY #$0000
    case 0xC2E8F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC2E8F4.
    case 0xC2E8F6: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:18 STY @SWIRL_BLUE
    case 0xC2E8F7: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:19 LDA BATTLE_INITIATIVE
    case 0xC2E8F9: cpu.execute_instruction<0xAD>(0x004DBC, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:20 BEQ @UNKNOWN0
    case 0xC2E8FC: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:21 CMP #INITIATIVE::PARTY_FIRST
    case 0xC2E8FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:21 CMP #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC2E8FE.
    case 0xC2E900: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:22 BEQ @UNKNOWN1
    case 0xC2E901: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:23 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC2E903: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:23 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC2E903.
    case 0xC2E905: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:24 BEQ @UNKNOWN2
    case 0xC2E906: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:25 BRA @UNKNOWN3
    case 0xC2E908: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:27 LDX #MUSIC::BATTLE_SWIRL4
    case 0xC2E90A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B0, 2); else cpu.execute_instruction<0xA2>(0x0000B0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:27 LDX #MUSIC::BATTLE_SWIRL4
    // Overlapping static entry reached from 0xC2E90A.
    case 0xC2E90C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:28 STX @SWIRL_MUSIC
    case 0xC2E90D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:29 LDA #$000E
    case 0xC2E90F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:29 LDA #$000E
    // Overlapping static entry reached from 0xC2E90F.
    case 0xC2E911: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:30 STA $02
    case 0xC2E912: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:31 STA $0E
    case 0xC2E914: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:32 BRA @UNKNOWN3
    case 0xC2E916: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:34 LDX #MUSIC::BATTLE_SWIRL4
    case 0xC2E918: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B0, 2); else cpu.execute_instruction<0xA2>(0x0000B0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:34 LDX #MUSIC::BATTLE_SWIRL4
    // Overlapping static entry reached from 0xC2E918.
    case 0xC2E91A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:35 STX @SWIRL_MUSIC
    case 0xC2E91B: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:36 LDA #$001C
    case 0xC2E91D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:36 LDA #$001C
    // Overlapping static entry reached from 0xC2E91D.
    case 0xC2E91F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:37 STA @SWIRL_RED
    case 0xC2E920: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:38 LDA #$0005
    case 0xC2E922: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:38 LDA #$0005
    // Overlapping static entry reached from 0xC2E922.
    case 0xC2E924: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:39 STA @SWIRL_GREEN
    case 0xC2E925: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:40 LDY #$000C
    case 0xC2E927: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:40 LDY #$000C
    // Overlapping static entry reached from 0xC2E927.
    case 0xC2E929: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:41 STY @SWIRL_BLUE
    case 0xC2E92A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:42 LDA #$0006
    case 0xC2E92C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:42 LDA #$0006
    // Overlapping static entry reached from 0xC2E92C.
    case 0xC2E92E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:43 STA $02
    case 0xC2E92F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:44 STA $0E
    case 0xC2E931: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:45 BRA @UNKNOWN3
    case 0xC2E933: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:47 LDX #MUSIC::BATTLE_SWIRL2
    case 0xC2E935: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000009, 2); else cpu.execute_instruction<0xA2>(0x000009, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:47 LDX #MUSIC::BATTLE_SWIRL2
    // Overlapping static entry reached from 0xC2E935.
    case 0xC2E937: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:48 STX @SWIRL_MUSIC
    case 0xC2E938: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:49 STZ @SWIRL_RED
    case 0xC2E93A: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:50 LDA #$001F
    case 0xC2E93C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:50 LDA #$001F
    // Overlapping static entry reached from 0xC2E93C.
    case 0xC2E93E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:51 STA @SWIRL_GREEN
    case 0xC2E93F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:52 TAY
    case 0xC2E941: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/battle_swirl_sequence.asm:53 STY @SWIRL_BLUE
    case 0xC2E942: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:54 LDA #$0006
    case 0xC2E944: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:54 LDA #$0006
    // Overlapping static entry reached from 0xC2E944.
    case 0xC2E946: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:55 STA $02
    case 0xC2E947: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:56 STA $0E
    case 0xC2E949: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:58 LDA CURRENT_BATTLE_GROUP
    case 0xC2E94B: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:59 CMP #ENEMY_GROUP::BOSS_FRANK
    case 0xC2E94E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0001C0, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:59 CMP #ENEMY_GROUP::BOSS_FRANK
    // Overlapping static entry reached from 0xC2E94E.
    case 0xC2E950: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:60 BCC @UNKNOWN4
    case 0xC2E951: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:60 BCC @UNKNOWN4
    // Overlapping static entry reached from 0xC2E950.
    case 0xC2E952: cpu.execute_instruction<0x11>(0x0000A9, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    case 0xC2E953: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    // Overlapping static entry reached from 0xC2E952.
    case 0xC2E954: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    // Overlapping static entry reached from 0xC2E953.
    case 0xC2E955: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:62 STA $16
    case 0xC2E956: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:63 LDA #$000E
    case 0xC2E958: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:63 LDA #$000E
    // Overlapping static entry reached from 0xC2E958.
    case 0xC2E95A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:64 STA $02
    case 0xC2E95B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:65 STA $0E
    case 0xC2E95D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:66 LDX #MUSIC::BATTLE_SWIRL1
    case 0xC2E95F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:66 LDX #MUSIC::BATTLE_SWIRL1
    // Overlapping static entry reached from 0xC2E95F.
    case 0xC2E961: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:67 STX @SWIRL_MUSIC
    case 0xC2E962: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:69 LDX @SWIRL_MUSIC
    case 0xC2E964: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:70 TXA
    case 0xC2E966: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/battle_swirl_sequence.asm:71 JSL CHANGE_MUSIC
    case 0xC2E967: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:72 JSL UNKNOWN_C04F47
    case 0xC2E96B: cpu.execute_instruction<0x22>(0xC04F47, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:73 LDA $0E
    case 0xC2E96F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:74 STA $02
    case 0xC2E971: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:75 AND #$0004
    case 0xC2E973: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:75 AND #$0004
    // Overlapping static entry reached from 0xC2E973.
    case 0xC2E975: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:76 BEQ @UNKNOWN6
    case 0xC2E976: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:77 LDY @SWIRL_BLUE
    case 0xC2E978: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:78 LDX @SWIRL_GREEN
    case 0xC2E97A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:79 LDA @SWIRL_RED
    case 0xC2E97C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:80 JSL SET_COLDATA
    case 0xC2E97E: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:81 LDA $02
    case 0xC2E982: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:82 AND #$0008
    case 0xC2E984: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:82 AND #$0008
    // Overlapping static entry reached from 0xC2E984.
    case 0xC2E986: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:83 BEQ @UNKNOWN5
    case 0xC2E987: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:84 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_DIV2 | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    case 0xC2E989: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:84 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_DIV2 | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    // Overlapping static entry reached from 0xC2E989.
    case 0xC2E98B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:85 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    case 0xC2E98C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:85 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    // Overlapping static entry reached from 0xC2E98C.
    case 0xC2E98E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:86 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2E98F: cpu.execute_instruction<0x22>(0xC0B039, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:87 BRA @UNKNOWN6
    case 0xC2E993: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:89 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    case 0xC2E995: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000BF, 2); else cpu.execute_instruction<0xA2>(0x0000BF, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:89 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    // Overlapping static entry reached from 0xC2E995.
    case 0xC2E997: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:90 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    case 0xC2E998: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:90 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    // Overlapping static entry reached from 0xC2E998.
    case 0xC2E99A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:91 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2E99B: cpu.execute_instruction<0x22>(0xC0B039, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:93 LDY #$001E
    case 0xC2E99F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001E, 2); else cpu.execute_instruction<0xA0>(0x00001E, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:93 LDY #$001E
    // Overlapping static entry reached from 0xC2E99F.
    case 0xC2E9A1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:94 LDX $02
    case 0xC2E9A2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:95 LDA $16
    case 0xC2E9A4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:96 JSL UNKNOWN_C2E8C4
    case 0xC2E9A6: cpu.execute_instruction<0x22>(0xC2E8C4, 4); return true;
    // src/overworld/battle_swirl_sequence.asm:97 LDA $02
    case 0xC2E9AA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:98 AND #$0004
    case 0xC2E9AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:98 AND #$0004
    // Overlapping static entry reached from 0xC2E9AC.
    case 0xC2E9AE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:99 BEQ @UNKNOWN7
    case 0xC2E9AF: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:100 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E9B1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:101 LDA #$0020
    case 0xC2E9B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008D20, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    case 0xC2E9B5: cpu.execute_instruction<0x8D>(0x00AEC8, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E9B3.
    case 0xC2E9B6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E9B6.
    case 0xC2E9B7: cpu.execute_instruction<0xAE>(0x000780, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:103 BRA @UNKNOWN8
    case 0xC2E9B8: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E9BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/battle_swirl_sequence.asm:106 LDA #$000F
    case 0xC2E9BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x008D0F, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    case 0xC2E9BE: cpu.execute_instruction<0x8D>(0x00AEC8, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E9BC.
    case 0xC2E9BF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E9BF.
    case 0xC2E9C0: cpu.execute_instruction<0xAE>(0x00CB9C, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:109 STZ SWIRL_AUTO_RESTORE
    case 0xC2E9C1: cpu.execute_instruction<0x9C>(0x00AECB, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:109 STZ SWIRL_AUTO_RESTORE
    // Overlapping static entry reached from 0xC2E9C0.
    case 0xC2E9C3: cpu.execute_instruction<0xAE>(0x0020C2, 3); return true;
    // src/overworld/battle_swirl_sequence.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xC2E9C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:111 END_C_FUNCTION
    case 0xC2E9C6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/battle_swirl_sequence.asm:111 END_C_FUNCTION
    case 0xC2E9C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/change_music_5DD6.asm (source_named).
bool execute_overworld_change_music_5dd6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/change_music_5DD6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC069ED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/change_music_5DD6.asm:5 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC069EF: cpu.execute_instruction<0xAD>(0x005DD6, 3); return true;
    // src/overworld/change_music_5DD6.asm:6 JSL CHANGE_MUSIC
    case 0xC069F2: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/change_music_5DD6.asm:7 END_C_FUNCTION
    case 0xC069F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/check.asm (source_named).
bool execute_overworld_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1323B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1323D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1323E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1323F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1323F.
    case 0xC13241: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC13242: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13243: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13243.
    case 0xC13245: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13246: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13248: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13248.
    case 0xC1324A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1324B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1324D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1324D.
    case 0xC1324F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13250: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/overworld/check.asm:12 JSL FIND_NEARBY_CHECKABLE_TPT_ENTRY
    case 0xC13253: cpu.execute_instruction<0x22>(0xC04279, 4); return true;
    // src/overworld/check.asm:13 LDA INTERACTING_NPC_ID
    case 0xC13257: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:14 BEQL @UNKNOWN9
    case 0xC1325A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:14 BEQL @UNKNOWN9
    case 0xC1325C: cpu.execute_instruction<0x4C>(0x003394, 3); return true;
    // src/overworld/check.asm:15 LDA INTERACTING_NPC_ID
    case 0xC1325F: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/overworld/check.asm:16 CMP #$FFFF
    case 0xC13262: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/check.asm:16 CMP #$FFFF
    // Overlapping static entry reached from 0xC13262.
    case 0xC13264: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    case 0xC13265: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    case 0xC13267: cpu.execute_instruction<0x4C>(0x003394, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC13264.
    case 0xC13268: cpu.execute_instruction<0x94>(0x000033, 2); return true;
    // src/overworld/check.asm:18 LDA INTERACTING_NPC_ID
    case 0xC1326A: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/overworld/check.asm:19 CMP #$FFFE
    case 0xC1326D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x00FFFE, 3); return true;
    // src/overworld/check.asm:19 CMP #$FFFE
    // Overlapping static entry reached from 0xC1326D.
    case 0xC1326F: cpu.execute_instruction<0xFF>(0xAD0DD0, 4); return true;
    // src/overworld/check.asm:20 BNE @UNKNOWN2
    case 0xC13270: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13272: cpu.execute_instruction<0xAD>(0x005DDE, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1326F.
    case 0xC13273: cpu.execute_instruction<0xDE>(0x00855D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13275: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13273.
    case 0xC13276: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13277: cpu.execute_instruction<0xAD>(0x005DE0, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC1327A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/check.asm:22 JMP @UNKNOWN9
    case 0xC1327C: cpu.execute_instruction<0x4C>(0x003394, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC1327F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x008985, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1327F.
    case 0xC13281: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13282: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13281.
    case 0xC13283: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13284: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13283.
    case 0xC13285: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13284.
    case 0xC13286: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13287: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC13289: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1328B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1328D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1328F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/check.asm:26 LDA INTERACTING_NPC_ID
    case 0xC13291: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13294: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13296: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13297: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13298: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13299: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1329A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/check.asm:28 STA @LOCAL01
    case 0xC1329C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/check.asm:29 CLC
    case 0xC1329E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:30 ADC @VIRTUAL06
    case 0xC1329F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:31 STA @VIRTUAL06
    case 0xC132A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/check.asm:32 LDA [@VIRTUAL06]
    case 0xC132A3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/check.asm:33 AND #$00FF
    case 0xC132A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/check.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC132A5.
    case 0xC132A7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/check.asm:34 CMP #NPC_TYPE::PERSON
    case 0xC132A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/check.asm:34 CMP #NPC_TYPE::PERSON
    // Overlapping static entry reached from 0xC132A8.
    case 0xC132AA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:35 BEQL @UNKNOWN9
    case 0xC132AB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:35 BEQL @UNKNOWN9
    case 0xC132AD: cpu.execute_instruction<0x4C>(0x003394, 3); return true;
    // src/overworld/check.asm:36 CMP #NPC_TYPE::ITEM_BOX
    case 0xC132B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/check.asm:36 CMP #NPC_TYPE::ITEM_BOX
    // Overlapping static entry reached from 0xC132B0.
    case 0xC132B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/check.asm:37 BEQ @UNKNOWN5
    case 0xC132B3: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/check.asm:38 CMP #NPC_TYPE::OBJECT
    case 0xC132B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/check.asm:38 CMP #NPC_TYPE::OBJECT
    // Overlapping static entry reached from 0xC132B5.
    case 0xC132B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:39 BEQL @UNKNOWN8
    case 0xC132B8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:39 BEQL @UNKNOWN8
    case 0xC132BA: cpu.execute_instruction<0x4C>(0x003375, 3); return true;
    // src/overworld/check.asm:40 JMP @UNKNOWN9
    case 0xC132BD: cpu.execute_instruction<0x4C>(0x003394, 3); return true;
    // src/overworld/check.asm:42 LDA @LOCAL01
    case 0xC132C0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/check.asm:43 CLC
    case 0xC132C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:44 ADC #npc_config::item
    case 0xC132C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/overworld/check.asm:44 ADC #npc_config::item
    // Overlapping static entry reached from 0xC132C3.
    case 0xC132C5: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC132C6: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC132C8: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC132CA: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC132CC: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/check.asm:46 CLC
    case 0xC132CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:47 ADC @VIRTUAL06
    case 0xC132CF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:48 STA @VIRTUAL06
    case 0xC132D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/check.asm:49 LDA [@VIRTUAL06]
    case 0xC132D3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/check.asm:50 CMP #$100
    case 0xC132D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/check.asm:50 CMP #$100
    // Overlapping static entry reached from 0xC132D5.
    case 0xC132D7: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/overworld/check.asm:51 BCS @GIFT_MONEY
    case 0xC132D8: cpu.execute_instruction<0xB0>(0x000011, 2); return true;
    // src/overworld/check.asm:51 BCS @GIFT_MONEY
    // Overlapping static entry reached from 0xC132D7.
    case 0xC132D9: cpu.execute_instruction<0x11>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    case 0xC132DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC132D9.
    case 0xC132DB: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    case 0xC132DC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC132DB.
    case 0xC132DD: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132DE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132E0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132E2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132E4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/check.asm:54 JSR SET_WORKING_MEMORY
    case 0xC132E6: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/overworld/check.asm:55 BRA @GIFT_COMMON
    case 0xC132E9: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:60 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC132EB: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:60 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC132ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:60 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC132EF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:60 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC132F1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132F5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132F7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132F9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/check.asm:63 JSR SET_WORKING_MEMORY
    case 0xC132FB: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/overworld/check.asm:64 LDA INTERACTING_NPC_ID
    case 0xC132FE: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13301: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13303: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13304: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13305: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13306: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13307: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/check.asm:66 CLC
    case 0xC13309: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:67 ADC #npc_config::item
    case 0xC1330A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/overworld/check.asm:67 ADC #npc_config::item
    // Overlapping static entry reached from 0xC1330A.
    case 0xC1330C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1330D: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1330F: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13311: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13313: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/check.asm:69 CLC
    case 0xC13315: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:70 ADC @VIRTUAL06
    case 0xC13316: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:71 STA @VIRTUAL06
    case 0xC13318: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/check.asm:72 LDA [@VIRTUAL06]
    case 0xC1331A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/check.asm:73 SEC
    case 0xC1331C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/check.asm:74 SBC #$100
    case 0xC1331D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/overworld/check.asm:74 SBC #$100
    // Overlapping static entry reached from 0xC1331D.
    case 0xC1331F: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    case 0xC13320: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC1331F.
    case 0xC13321: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    case 0xC13322: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC13321.
    case 0xC13323: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13324: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13326: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13328: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1332A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/check.asm:77 JSR SET_ARGUMENT_MEMORY
    case 0xC1332C: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC1332F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x008985, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1332F.
    case 0xC13331: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13332: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13331.
    case 0xC13333: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13334: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13333.
    case 0xC13335: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13334.
    case 0xC13336: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13337: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/check.asm:80 LDA INTERACTING_NPC_ID
    case 0xC13339: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1333C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1333E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1333F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13340: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13341: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13342: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/check.asm:82 STA @LOCAL01
    case 0xC13344: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/check.asm:83 CLC
    case 0xC13346: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:84 ADC #npc_config::event_flag
    case 0xC13347: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/check.asm:84 ADC #npc_config::event_flag
    // Overlapping static entry reached from 0xC13347.
    case 0xC13349: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1334A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1334C: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1334E: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13350: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/check.asm:86 CLC
    case 0xC13352: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:87 ADC @VIRTUAL0A
    case 0xC13353: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/check.asm:88 STA @VIRTUAL0A
    case 0xC13355: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/check.asm:89 LDA [@VIRTUAL0A]
    case 0xC13357: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/check.asm:90 STA CURRENT_INTERACTING_EVENT_FLAG
    case 0xC13359: cpu.execute_instruction<0x8D>(0x009C88, 3); return true;
    // src/overworld/check.asm:91 LDA @LOCAL01
    case 0xC1335C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/check.asm:92 CLC
    case 0xC1335E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:93 ADC #npc_config::text_pointer
    case 0xC1335F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/overworld/check.asm:93 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC1335F.
    case 0xC13361: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/check.asm:94 CLC
    case 0xC13362: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:95 ADC @VIRTUAL06
    case 0xC13363: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:96 STA @VIRTUAL06
    case 0xC13365: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13367: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13367.
    case 0xC13369: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1336A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1336C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1336D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1336F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13371: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/overworld/check.asm:98 BRA @UNKNOWN9
    case 0xC13373: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/overworld/check.asm:100 LDA @LOCAL01
    case 0xC13375: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/check.asm:101 CLC
    case 0xC13377: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:102 ADC #npc_config::text_pointer
    case 0xC13378: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/overworld/check.asm:102 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC13378.
    case 0xC1337A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1337B: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1337D: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1337F: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13381: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/check.asm:104 CLC
    case 0xC13383: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/check.asm:105 ADC @VIRTUAL06
    case 0xC13384: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/check.asm:106 STA @VIRTUAL06
    case 0xC13386: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13388: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13388.
    case 0xC1338A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1338B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1338D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1338E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13390: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13392: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13394: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13396: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13398: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC1339A: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/check.asm:110 END_C_FUNCTION
    case 0xC1339C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/check.asm:110 END_C_FUNCTION
    case 0xC1339D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/create_entity.asm (source_named).
bool execute_overworld_create_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_entity.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC01E49: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E4B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E4C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E4D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CF, 2); else cpu.execute_instruction<0x69>(0x00FFCF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    // Overlapping static entry reached from 0xC01E4E.
    case 0xC01E50: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E51: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E52: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:27 STY @VIRTUAL04
    case 0xC01E53: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:27 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC01E50.
    case 0xC01E54: cpu.execute_instruction<0x04>(0x000048, 2); return true;
    // src/overworld/create_entity.asm:28 PHA
    case 0xC01E55: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:29 LDA @VIRTUAL04
    case 0xC01E56: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:30 STA @LOCAL0D
    case 0xC01E58: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/overworld/create_entity.asm:31 PLA
    case 0xC01E5A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:32 STX @LOCAL0C
    case 0xC01E5B: cpu.execute_instruction<0x86>(0x00002D, 2); return true;
    // src/overworld/create_entity.asm:33 STA @LOCAL0B
    case 0xC01E5D: cpu.execute_instruction<0x85>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:34 LDY @PARAM04
    case 0xC01E5F: cpu.execute_instruction<0xA4>(0x000041, 2); return true;
    // src/overworld/create_entity.asm:35 STY @LOCAL0A
    case 0xC01E61: cpu.execute_instruction<0x84>(0x000029, 2); return true;
    // src/overworld/create_entity.asm:36 LDX @PARAM03
    case 0xC01E63: cpu.execute_instruction<0xA6>(0x00003F, 2); return true;
    // src/overworld/create_entity.asm:37 STX @LOCAL09
    case 0xC01E65: cpu.execute_instruction<0x86>(0x000027, 2); return true;
    // src/overworld/create_entity.asm:38 LDA DEBUG
    case 0xC01E67: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/overworld/create_entity.asm:39 BEQ @UNKNOWN0
    case 0xC01E6A: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/overworld/create_entity.asm:40 LDA @LOCAL0B
    case 0xC01E6C: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:41 CMP #$FFFF
    case 0xC01E6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/create_entity.asm:41 CMP #$FFFF
    // Overlapping static entry reached from 0xC01E6E.
    case 0xC01E70: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/overworld/create_entity.asm:42 BNE @UNKNOWN0
    case 0xC01E71: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:43 LDA #0
    case 0xC01E73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/create_entity.asm:43 LDA #0
    // Overlapping static entry reached from 0xC01E70.
    case 0xC01E74: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:43 LDA #0
    // Overlapping static entry reached from 0xC01E73.
    case 0xC01E75: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/overworld/create_entity.asm:44 JMP @UNKNOWN8
    case 0xC01E76: cpu.execute_instruction<0x4C>(0x0020EF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00133F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E79.
    case 0xC01E7B: cpu.execute_instruction<0x13>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E7C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E7B.
    case 0xC01E7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E7E.
    case 0xC01E80: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E81: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/create_entity.asm:47 LDA @LOCAL0B
    case 0xC01E83: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:48 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:48 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:49 CLC
    case 0xC01E87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:50 ADC @VIRTUAL0A
    case 0xC01E88: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:51 STA @VIRTUAL0A
    case 0xC01E8A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC01E8C.
    case 0xC01E8E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E8F: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E91: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E92: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E94: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E96: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01E98: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01E9A: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01E9C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01E9E: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/overworld/create_entity.asm:54 LDA @LOCAL0B
    case 0xC01EA0: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:55 JSR UNKNOWN_C01DED
    case 0xC01EA2: cpu.execute_instruction<0x20>(0x001DED, 3); return true;
    // src/overworld/create_entity.asm:56 STA @VIRTUAL02
    case 0xC01EA5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:57 LDY @VIRTUAL04
    case 0xC01EA7: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:58 LDX NEW_SPRITE_TILE_HEIGHT
    case 0xC01EA9: cpu.execute_instruction<0xAE>(0x00467C, 3); return true;
    // src/overworld/create_entity.asm:59 LDA NEW_SPRITE_TILE_WIDTH
    case 0xC01EAC: cpu.execute_instruction<0xAD>(0x00467A, 3); return true;
    // src/overworld/create_entity.asm:60 JSL UNKNOWN_C01C52
    case 0xC01EAF: cpu.execute_instruction<0x22>(0xC01C52, 4); return true;
    // src/overworld/create_entity.asm:61 STA @LOCAL07
    case 0xC01EB3: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:63 LDA @LOCAL07
    case 0xC01EB5: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:64 CMP #$7FFF
    case 0xC01EB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/overworld/create_entity.asm:64 CMP #$7FFF
    // Overlapping static entry reached from 0xC01EB7.
    case 0xC01EB9: cpu.execute_instruction<0x7F>(0xB002F0, 4); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    case 0xC01EBA: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    case 0xC01EBC: cpu.execute_instruction<0xB0>(0x0000F7, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    // Overlapping static entry reached from 0xC01EB9.
    case 0xC01EBD: cpu.execute_instruction<0xF7>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x002B0D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EBD.
    case 0xC01EBF: cpu.execute_instruction<0x0D>(0x00852B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EBE.
    case 0xC01EC0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EC1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EBF.
    case 0xC01EC2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EC2.
    case 0xC01EC4: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EC3.
    case 0xC01EC5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EC6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:67 LDA @VIRTUAL02
    case 0xC01EC8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:68 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01ECA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:68 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01ECB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:69 CLC
    case 0xC01ECC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:70 ADC @VIRTUAL06
    case 0xC01ECD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:71 STA @VIRTUAL06
    case 0xC01ECF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01ED1.
    case 0xC01ED3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED4: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EDB: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/overworld/create_entity.asm:73 LDA [@VIRTUAL0A]
    case 0xC01EDD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:74 AND #$00FF
    case 0xC01EDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC01EDF.
    case 0xC01EE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:76 JSL FIND_FREE_7E4682
    case 0xC01EE9: cpu.execute_instruction<0x22>(0xC01A9D, 4); return true;
    // src/overworld/create_entity.asm:77 STA @LOCAL06
    case 0xC01EED: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/overworld/create_entity.asm:79 LDA @LOCAL06
    case 0xC01EEF: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/overworld/create_entity.asm:79 LDA @LOCAL06
    // Overlapping static entry reached from 0xC0E651.
    case 0xC01EF0: cpu.execute_instruction<0x1F>(0x7FFFC9, 4); return true;
    // src/overworld/create_entity.asm:80 CMP #$7FFF
    case 0xC01EF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/overworld/create_entity.asm:80 CMP #$7FFF
    // Overlapping static entry reached from 0xC01EF1.
    case 0xC01EF3: cpu.execute_instruction<0x7F>(0xB002F0, 4); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    case 0xC01EF4: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    case 0xC01EF6: cpu.execute_instruction<0xB0>(0x0000F7, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    // Overlapping static entry reached from 0xC01EF3.
    case 0xC01EF7: cpu.execute_instruction<0xF7>(0x0000A9, 2); return true;
    // src/overworld/create_entity.asm:82 LDA #1
    case 0xC01EF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/create_entity.asm:82 LDA #1
    // Overlapping static entry reached from 0xC01EF7.
    case 0xC01EF9: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:82 LDA #1
    // Overlapping static entry reached from 0xC01EF8.
    case 0xC01EFA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/create_entity.asm:83 STA NEW_ENTITY_PRIORITY
    case 0xC01EFB: cpu.execute_instruction<0x8D>(0x000A4A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:87 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC01EFE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:87 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC01F00: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:87 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC01F02: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:87 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC01F04: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:88 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01F06: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:88 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01F08: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:88 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01F0A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:88 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01F0C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F0E: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F10: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F12: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F14: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC01F16: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:92 LDY #3
    case 0xC01F18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/create_entity.asm:92 LDY #3
    // Overlapping static entry reached from 0xC01F18.
    case 0xC01F1A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:93 LDA [@VIRTUAL06],Y
    case 0xC01F1B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC01F1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:95 AND #$00FF
    case 0xC01F1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC01F1F.
    case 0xC01F21: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/create_entity.asm:96 TAY
    case 0xC01F22: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:97 LDX @LOCAL07
    case 0xC01F23: cpu.execute_instruction<0xA6>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:98 LDA @LOCAL06
    case 0xC01F25: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/overworld/create_entity.asm:99 JSR UNKNOWN_C01D38
    case 0xC01F27: cpu.execute_instruction<0x20>(0x001D38, 3); return true;
    // src/overworld/create_entity.asm:100 LDA @LOCAL0D
    case 0xC01F2A: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/overworld/create_entity.asm:101 STA @VIRTUAL04
    case 0xC01F2C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:102 CMP #$FFFF
    case 0xC01F2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/create_entity.asm:102 CMP #$FFFF
    // Overlapping static entry reached from 0xC01F2E.
    case 0xC01F30: cpu.execute_instruction<0xFF>(0xA519F0, 4); return true;
    // src/overworld/create_entity.asm:103 BEQ @UNKNOWN5
    case 0xC01F31: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/overworld/create_entity.asm:104 LDA @VIRTUAL04
    case 0xC01F33: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:104 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC01F30.
    case 0xC01F34: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/overworld/create_entity.asm:105 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC01F35: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/overworld/create_entity.asm:105 STA ENTITY_ALLOCATION_MIN_SLOT
    // Overlapping static entry reached from 0xC01F34.
    case 0xC01F36: cpu.execute_instruction<0x4C>(0x00A50A, 3); return true;
    // src/overworld/create_entity.asm:106 LDA @VIRTUAL04
    case 0xC01F38: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:107 INC
    case 0xC01F3A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:108 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC01F3B: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/overworld/create_entity.asm:109 LDY @LOCAL0A
    case 0xC01F3E: cpu.execute_instruction<0xA4>(0x000029, 2); return true;
    // src/overworld/create_entity.asm:110 LDX @LOCAL09
    case 0xC01F40: cpu.execute_instruction<0xA6>(0x000027, 2); return true;
    // src/overworld/create_entity.asm:111 LDA @LOCAL0C
    case 0xC01F42: cpu.execute_instruction<0xA5>(0x00002D, 2); return true;
    // src/overworld/create_entity.asm:112 JSL INIT_ENTITY
    case 0xC01F44: cpu.execute_instruction<0x22>(0xC09321, 4); return true;
    // src/overworld/create_entity.asm:113 STA @VIRTUAL02
    case 0xC01F48: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:114 BRA @UNKNOWN6
    case 0xC01F4A: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:116 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xC01F4C: cpu.execute_instruction<0x9C>(0x000A4C, 3); return true;
    // src/overworld/create_entity.asm:117 LDA #22
    case 0xC01F4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x000016, 3); return true;
    // src/overworld/create_entity.asm:117 LDA #22
    // Overlapping static entry reached from 0xC01F4F.
    case 0xC01F51: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/create_entity.asm:118 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC01F52: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/overworld/create_entity.asm:119 LDY @LOCAL0A
    case 0xC01F55: cpu.execute_instruction<0xA4>(0x000029, 2); return true;
    // src/overworld/create_entity.asm:120 LDX @LOCAL09
    case 0xC01F57: cpu.execute_instruction<0xA6>(0x000027, 2); return true;
    // src/overworld/create_entity.asm:121 LDA @LOCAL0C
    case 0xC01F59: cpu.execute_instruction<0xA5>(0x00002D, 2); return true;
    // src/overworld/create_entity.asm:122 JSL INIT_ENTITY
    case 0xC01F5B: cpu.execute_instruction<0x22>(0xC09321, 4); return true;
    // src/overworld/create_entity.asm:123 STA @VIRTUAL02
    case 0xC01F5F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:124 ORA #$0080
    case 0xC01F61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000080, 3); return true;
    // src/overworld/create_entity.asm:124 ORA #$0080
    // Overlapping static entry reached from 0xC01F61.
    case 0xC01F63: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/create_entity.asm:125 TAX
    case 0xC01F64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:126 LDA #$FFFF
    case 0xC01F65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/create_entity.asm:126 LDA #$FFFF
    // Overlapping static entry reached from 0xC01F65.
    case 0xC01F67: cpu.execute_instruction<0xFF>(0x1C1122, 4); return true;
    // src/overworld/create_entity.asm:127 JSL ALLOC_SPRITE_MEM
    case 0xC01F68: cpu.execute_instruction<0x22>(0xC01C11, 4); return true;
    // src/overworld/create_entity.asm:127 JSL ALLOC_SPRITE_MEM
    // Overlapping static entry reached from 0xC01F67.
    case 0xC01F6B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/overworld/create_entity.asm:129 LDA @VIRTUAL02
    case 0xC01F6C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:129 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC01F6B.
    case 0xC01F6D: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:130 ASL
    case 0xC01F6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:131 TAY
    case 0xC01F6F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:132 STY @LOCAL05
    case 0xC01F70: cpu.execute_instruction<0x84>(0x00001D, 2); return true;
    // src/overworld/create_entity.asm:133 LDA @LOCAL06
    case 0xC01F72: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/overworld/create_entity.asm:134 CLC
    case 0xC01F74: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:135 ADC #.LOWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01F75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00467E, 3); return true;
    // src/overworld/create_entity.asm:135 ADC #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F75.
    case 0xC01F77: cpu.execute_instruction<0x46>(0x000099, 2); return true;
    // src/overworld/create_entity.asm:136 STA ENTITY_SPRITEMAP_POINTER_LOW,Y
    case 0xC01F78: cpu.execute_instruction<0x99>(0x00112E, 3); return true;
    // src/overworld/create_entity.asm:136 STA ENTITY_SPRITEMAP_POINTER_LOW,Y
    // Overlapping static entry reached from 0xC01F77.
    case 0xC01F79: cpu.execute_instruction<0x2E>(0x00A911, 3); return true;
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01F7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F79.
    case 0xC01F7C: cpu.execute_instruction<0x7E>(0x009900, 3); return true;
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F7B.
    case 0xC01F7D: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/overworld/create_entity.asm:138 STA ENTITY_SPRITEMAP_POINTER_HIGH,Y
    case 0xC01F7E: cpu.execute_instruction<0x99>(0x00116A, 3); return true;
    // src/overworld/create_entity.asm:138 STA ENTITY_SPRITEMAP_POINTER_HIGH,Y
    // Overlapping static entry reached from 0xC01F7C.
    case 0xC01F7F: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:138 STA ENTITY_SPRITEMAP_POINTER_HIGH,Y
    // Overlapping static entry reached from 0xC01F7F.
    case 0xC01F80: cpu.execute_instruction<0x11>(0x0000A7, 2); return true;
    // src/overworld/create_entity.asm:139 LDA [@VIRTUAL0A]
    case 0xC01F81: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:139 LDA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC01F80.
    case 0xC01F82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:140 AND #$00FF
    case 0xC01F83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC01F83.
    case 0xC01F85: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F86: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F8A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:142 STA ENTITY_SPRITEMAP_SIZES,Y
    case 0xC01F8C: cpu.execute_instruction<0x99>(0x002916, 3); return true;
    // src/overworld/create_entity.asm:143 LDA @LOCAL07
    case 0xC01F8F: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:144 STA ENTITY_SPRITEMAP_BEGINNING_INDICES,Y
    case 0xC01F91: cpu.execute_instruction<0x99>(0x002952, 3); return true;
    // src/overworld/create_entity.asm:145 TYA
    case 0xC01F94: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:146 CLC
    case 0xC01F95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:147 ADC #.LOWORD(ENTITY_VRAM_ADDRESS)
    case 0xC01F96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008E, 2); else cpu.execute_instruction<0x69>(0x00298E, 3); return true;
    // src/overworld/create_entity.asm:147 ADC #.LOWORD(ENTITY_VRAM_ADDRESS)
    // Overlapping static entry reached from 0xC01F96.
    case 0xC01F98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000AA, 2); else cpu.execute_instruction<0x29>(0x0086AA, 3); return true;
    // src/overworld/create_entity.asm:148 TAX
    case 0xC01F99: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:149 STX @LOCAL04
    case 0xC01F9A: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/overworld/create_entity.asm:149 STX @LOCAL04
    // Overlapping static entry reached from 0xC01F98.
    case 0xC01F9B: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:150 LDA @LOCAL07
    case 0xC01F9C: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/overworld/create_entity.asm:151 ASL
    case 0xC01F9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:152 TAX
    case 0xC01F9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:153 LDA f:UNKNOWN_C42F8C,X
    case 0xC01FA0: cpu.execute_instruction<0xBF>(0xC42F8C, 4); return true;
    // src/overworld/create_entity.asm:154 CLC
    case 0xC01FA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:155 ADC #$4000
    case 0xC01FA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004000, 3); return true;
    // src/overworld/create_entity.asm:155 ADC #$4000
    // Overlapping static entry reached from 0xC01FA5.
    case 0xC01FA7: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:156 LDX @LOCAL04
    case 0xC01FA8: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/overworld/create_entity.asm:157 STA __BSS_START__,X
    case 0xC01FAA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/create_entity.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC01FAD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:159 LDY #sprite_grouping::width
    case 0xC01FAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/create_entity.asm:159 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC01FAF.
    case 0xC01FB1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:160 LDA [@VIRTUAL06],Y
    case 0xC01FB2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC01FB4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:162 AND #$00FF
    case 0xC01FB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC01FB6.
    case 0xC01FB8: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:163 ASL
    case 0xC01FB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:164 LDY @LOCAL05
    case 0xC01FBA: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/create_entity.asm:165 STA ENTITY_BYTE_WIDTHS,Y
    case 0xC01FBC: cpu.execute_instruction<0x99>(0x002A7E, 3); return true;
    // src/overworld/create_entity.asm:166 LDA [@VIRTUAL06]
    case 0xC01FBF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:167 AND #$00FF
    case 0xC01FC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:167 AND #$00FF
    // Overlapping static entry reached from 0xC01FC1.
    case 0xC01FC3: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/overworld/create_entity.asm:168 STA ENTITY_TILE_HEIGHTS,Y
    case 0xC01FC4: cpu.execute_instruction<0x99>(0x002ABA, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FC7: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FCB: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FCD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:170 SEP #PROC_FLAGS::ACCUM8
    case 0xC01FCF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:171 LDY #sprite_grouping::spritebank
    case 0xC01FD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/create_entity.asm:171 LDY #sprite_grouping::spritebank
    // Overlapping static entry reached from 0xC01FD1.
    case 0xC01FD3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:172 LDA [@VIRTUAL06],Y
    case 0xC01FD4: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:173 REP #PROC_FLAGS::ACCUM8
    case 0xC01FD6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:174 AND #$00FF
    case 0xC01FD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:174 AND #$00FF
    // Overlapping static entry reached from 0xC01FD8.
    case 0xC01FDA: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/create_entity.asm:175 LDY @LOCAL05
    case 0xC01FDB: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/create_entity.asm:176 STA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC01FDD: cpu.execute_instruction<0x99>(0x002A42, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00133F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FE0.
    case 0xC01FE2: cpu.execute_instruction<0x13>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FE3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FE2.
    case 0xC01FE4: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FE4.
    case 0xC01FE6: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FE5.
    case 0xC01FE7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FE8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:178 LDA @LOCAL0B
    case 0xC01FEA: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:179 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01FEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:179 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01FED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:180 CLC
    case 0xC01FEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:181 ADC @VIRTUAL06
    case 0xC01FEF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:182 STA @VIRTUAL06
    case 0xC01FF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FF3.
    case 0xC01FF5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FF6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FF8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FF9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FFB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FFD: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC01FFF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02001: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02003: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02005: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/create_entity.asm:185 LDA @LOCAL0B
    case 0xC02007: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:186 LDY @LOCAL05
    case 0xC02009: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/create_entity.asm:187 STA ENTITY_SPRITE_IDS,Y
    case 0xC0200B: cpu.execute_instruction<0x99>(0x002CD6, 3); return true;
    // src/overworld/create_entity.asm:188 LDA @LOCAL01+2
    case 0xC0200E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/create_entity.asm:189 STA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC02010: cpu.execute_instruction<0x99>(0x002A06, 3); return true;
    // src/overworld/create_entity.asm:190 LDA @LOCAL01
    case 0xC02013: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/create_entity.asm:191 CLC
    case 0xC02015: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:192 ADC #sprite_grouping::spritepointerarray
    case 0xC02016: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/overworld/create_entity.asm:192 ADC #sprite_grouping::spritepointerarray
    // Overlapping static entry reached from 0xC02016.
    case 0xC02018: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/overworld/create_entity.asm:193 STA ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC02019: cpu.execute_instruction<0x99>(0x0029CA, 3); return true;
    // src/overworld/create_entity.asm:194 LDA NEW_SPRITE_TILE_HEIGHT
    case 0xC0201C: cpu.execute_instruction<0xAD>(0x00467C, 3); return true;
    // src/overworld/create_entity.asm:195 AND #$0001
    case 0xC0201F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/overworld/create_entity.asm:195 AND #$0001
    // Overlapping static entry reached from 0xC0201F.
    case 0xC02021: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/create_entity.asm:196 BEQ @UNKNOWN7
    case 0xC02022: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:197 LDA __BSS_START__,X
    case 0xC02024: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/create_entity.asm:198 CLC
    case 0xC02027: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:199 ADC #$0100
    case 0xC02028: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/overworld/create_entity.asm:199 ADC #$0100
    // Overlapping static entry reached from 0xC02028.
    case 0xC0202A: cpu.execute_instruction<0x01>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:200 STA __BSS_START__,X
    case 0xC0202B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/create_entity.asm:200 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0202A.
    case 0xC0202C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:202 LDA @VIRTUAL02
    case 0xC0202E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:203 ASL
    case 0xC02030: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:204 TAX
    case 0xC02031: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:205 STX @LOCAL04
    case 0xC02032: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02034: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02036: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02038: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0203A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:207 INC @VIRTUAL06
    case 0xC0203C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:208 INC @VIRTUAL06
    case 0xC0203E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02040: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02042: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02044: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02046: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/overworld/create_entity.asm:210 LDA [@LOCAL03]
    case 0xC02048: cpu.execute_instruction<0xA7>(0x000017, 2); return true;
    // src/overworld/create_entity.asm:211 AND #$00FF
    case 0xC0204A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:211 AND #$00FF
    // Overlapping static entry reached from 0xC0204A.
    case 0xC0204C: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:212 STA ENTITY_SIZES,X
    case 0xC0204D: cpu.execute_instruction<0x9D>(0x002B6E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02050: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02052: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02054: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02056: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_entity.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC02058: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:215 LDY #sprite_grouping::hitbox_width_ud
    case 0xC0205A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/create_entity.asm:215 LDY #sprite_grouping::hitbox_width_ud
    // Overlapping static entry reached from 0xC0205A.
    case 0xC0205C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:216 LDA [@VIRTUAL06],Y
    case 0xC0205D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:217 REP #PROC_FLAGS::ACCUM8
    case 0xC0205F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:218 AND #$00FF
    case 0xC02061: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC02061.
    case 0xC02063: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:219 STA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC02064: cpu.execute_instruction<0x9D>(0x003366, 3); return true;
    // src/overworld/create_entity.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC02067: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:221 LDY #sprite_grouping::hitbox_height_ud
    case 0xC02069: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/overworld/create_entity.asm:221 LDY #sprite_grouping::hitbox_height_ud
    // Overlapping static entry reached from 0xC02069.
    case 0xC0206B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:222 LDA [@VIRTUAL06],Y
    case 0xC0206C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC0206E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:224 AND #$00FF
    case 0xC02070: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC02070.
    case 0xC02072: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:225 STA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC02073: cpu.execute_instruction<0x9D>(0x0033A2, 3); return true;
    // src/overworld/create_entity.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC02076: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:227 LDY #sprite_grouping::hitbox_width_lr
    case 0xC02078: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/create_entity.asm:227 LDY #sprite_grouping::hitbox_width_lr
    // Overlapping static entry reached from 0xC02078.
    case 0xC0207A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:228 LDA [@VIRTUAL06],Y
    case 0xC0207B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xC0207D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:230 AND #$00FF
    case 0xC0207F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC0207F.
    case 0xC02081: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:231 STA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC02082: cpu.execute_instruction<0x9D>(0x0033DE, 3); return true;
    // src/overworld/create_entity.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC02085: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:233 LDY #sprite_grouping::hitbox_height_lr
    case 0xC02087: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/overworld/create_entity.asm:233 LDY #sprite_grouping::hitbox_height_lr
    // Overlapping static entry reached from 0xC02087.
    case 0xC02089: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:234 LDA [@VIRTUAL06],Y
    case 0xC0208A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_entity.asm:235 REP #PROC_FLAGS::ACCUM8
    case 0xC0208C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:236 AND #$00FF
    case 0xC0208E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC0208E.
    case 0xC02090: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/create_entity.asm:237 STA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC02091: cpu.execute_instruction<0x9D>(0x001A4A, 3); return true;
    // src/overworld/create_entity.asm:238 LDA [@LOCAL03]
    case 0xC02094: cpu.execute_instruction<0xA7>(0x000017, 2); return true;
    // src/overworld/create_entity.asm:239 AND #$00FF
    case 0xC02096: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC02096.
    case 0xC02098: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:240 ASL
    case 0xC02099: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:241 TAX
    case 0xC0209A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:242 LDA f:UNKNOWN_C42AEB,X
    case 0xC0209B: cpu.execute_instruction<0xBF>(0xC42AEB, 4); return true;
    // src/overworld/create_entity.asm:243 LDX @LOCAL04
    case 0xC0209F: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/overworld/create_entity.asm:244 STA ENTITY_HITBOX_ENABLED,X
    case 0xC020A1: cpu.execute_instruction<0x9D>(0x00332A, 3); return true;
    // src/overworld/create_entity.asm:245 SEP #PROC_FLAGS::ACCUM8
    case 0xC020A4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:246 LDY #sprite_grouping::width
    case 0xC020A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/create_entity.asm:246 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC020A6.
    case 0xC020A8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_entity.asm:247 LDA [@VIRTUAL0A],Y
    case 0xC020A9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:248 STA @LOCAL02
    case 0xC020AB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/create_entity.asm:249 STA @VIRTUAL00
    case 0xC020AD: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:250 LDA [@VIRTUAL0A]
    case 0xC020AF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/create_entity.asm:251 SEC
    case 0xC020B1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:252 SBC @VIRTUAL00
    case 0xC020B2: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/overworld/create_entity.asm:253 REP #PROC_FLAGS::ACCUM8
    case 0xC020B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/create_entity.asm:254 AND #$00FF
    case 0xC020B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:254 AND #$00FF
    // Overlapping static entry reached from 0xC020B6.
    case 0xC020B8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/create_entity.asm:255 STA @VIRTUAL04
    case 0xC020B9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:256 LDA @LOCAL02
    case 0xC020BB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/create_entity.asm:257 AND #$00FF
    case 0xC020BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/create_entity.asm:257 AND #$00FF
    // Overlapping static entry reached from 0xC020BD.
    case 0xC020BF: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/create_entity.asm:258 XBA
    case 0xC020C0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:259 AND #$FF00
    case 0xC020C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/create_entity.asm:259 AND #$FF00
    // Overlapping static entry reached from 0xC020C1.
    case 0xC020C3: cpu.execute_instruction<0xFF>(0x9D0405, 4); return true;
    // src/overworld/create_entity.asm:260 ORA @VIRTUAL04
    case 0xC020C4: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/overworld/create_entity.asm:261 STA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    case 0xC020C6: cpu.execute_instruction<0x9D>(0x002BE6, 3); return true;
    // src/overworld/create_entity.asm:261 STA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    // Overlapping static entry reached from 0xC020C3.
    case 0xC020C7: cpu.execute_instruction<0xE6>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:262 LDA #$FFFF
    case 0xC020C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/create_entity.asm:262 LDA #$FFFF
    // Overlapping static entry reached from 0xC020C9.
    case 0xC020CB: cpu.execute_instruction<0xFF>(0x2D4E9D, 4); return true;
    // src/overworld/create_entity.asm:263 STA ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC020CC: cpu.execute_instruction<0x9D>(0x002D4E, 3); return true;
    // src/overworld/create_entity.asm:264 STA ENTITY_ENEMY_IDS,X
    case 0xC020CF: cpu.execute_instruction<0x9D>(0x002D12, 3); return true;
    // src/overworld/create_entity.asm:265 STA ENTITY_NPC_IDS,X
    case 0xC020D2: cpu.execute_instruction<0x9D>(0x002C9A, 3); return true;
    // src/overworld/create_entity.asm:266 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC020D5: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/overworld/create_entity.asm:267 STZ ENTITY_SURFACE_FLAGS,X
    case 0xC020D8: cpu.execute_instruction<0x9E>(0x002BAA, 3); return true;
    // src/overworld/create_entity.asm:268 STZ ENTITY_UNKNOWN_2DC6,X
    case 0xC020DB: cpu.execute_instruction<0x9E>(0x002DC6, 3); return true;
    // src/overworld/create_entity.asm:269 STZ ENTITY_UNUSED,X
    case 0xC020DE: cpu.execute_instruction<0x9E>(0x002D8A, 3); return true;
    // src/overworld/create_entity.asm:270 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC020E1: cpu.execute_instruction<0x9E>(0x002C5E, 3); return true;
    // src/overworld/create_entity.asm:271 STZ ENTITY_MOVEMENT_SPEEDS,X
    case 0xC020E4: cpu.execute_instruction<0x9E>(0x002B32, 3); return true;
    // src/overworld/create_entity.asm:272 STZ ENTITY_DIRECTIONS,X
    case 0xC020E7: cpu.execute_instruction<0x9E>(0x002AF6, 3); return true;
    // src/overworld/create_entity.asm:273 STZ ENTITY_OBSTACLE_FLAGS,X
    case 0xC020EA: cpu.execute_instruction<0x9E>(0x0028DA, 3); return true;
    // src/overworld/create_entity.asm:274 LDA @VIRTUAL02
    case 0xC020ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/create_entity.asm:274 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0211C.
    case 0xC020EE: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // src/overworld/create_entity.asm:276 PLD
    case 0xC020EF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/overworld/create_entity.asm:277 RTL
    case 0xC020F0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/create_prepared_entity_npc.asm (source_named).
bool execute_overworld_create_prepared_entity_npc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC464B5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464B7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464B8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC464BA.
    case 0xC464BC: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464BE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_npc.asm:13 STA @VIRTUAL02
    case 0xC464BF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC464BC.
    case 0xC464C0: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC464C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x008985, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC464C1.
    case 0xC464C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC464C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC464C3.
    case 0xC464C5: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC464C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC464C5.
    case 0xC464C7: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC464C6.
    case 0xC464C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC464C9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:15 LDA @VIRTUAL02
    case 0xC464CB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464CD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464D3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:17 CLC
    case 0xC464D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_npc.asm:18 ADC @VIRTUAL06
    case 0xC464D6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:19 STA @VIRTUAL06
    case 0xC464D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:20 LDA ENTITY_PREPARED_X_COORDINATE
    case 0xC464DA: cpu.execute_instruction<0xAD>(0x009E2D, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:21 STA @LOCAL00
    case 0xC464DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:22 LDA ENTITY_PREPARED_Y_COORDINATE
    case 0xC464DF: cpu.execute_instruction<0xAD>(0x009E2F, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:23 STA @LOCAL01
    case 0xC464E2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:24 LDY #$FFFF
    case 0xC464E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:24 LDY #$FFFF
    // Overlapping static entry reached from 0xC464E4.
    case 0xC464E6: cpu.execute_instruction<0xFF>(0xA01484, 4); return true;
    // src/overworld/create_prepared_entity_npc.asm:25 STY @LOCAL03
    case 0xC464E7: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:26 LDY #1
    case 0xC464E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:26 LDY #1
    // Overlapping static entry reached from 0xC464E6.
    case 0xC464EA: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:26 LDY #1
    // Overlapping static entry reached from 0xC464E9.
    case 0xC464EB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:27 LDA [@VIRTUAL06],Y
    case 0xC464EC: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:28 LDY @LOCAL03
    case 0xC464EE: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:29 JSL CREATE_ENTITY
    case 0xC464F0: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/overworld/create_prepared_entity_npc.asm:30 STA @LOCAL02
    case 0xC464F4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:31 ASL
    case 0xC464F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_npc.asm:32 TAX
    case 0xC464F7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_npc.asm:33 LDA ENTITY_PREPARED_DIRECTION
    case 0xC464F8: cpu.execute_instruction<0xAD>(0x009E31, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:34 STA ENTITY_DIRECTIONS,X
    case 0xC464FB: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:35 LDA @VIRTUAL02
    case 0xC464FE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/create_prepared_entity_npc.asm:36 STA ENTITY_NPC_IDS,X
    case 0xC46500: cpu.execute_instruction<0x9D>(0x002C9A, 3); return true;
    // src/overworld/create_prepared_entity_npc.asm:37 LDA @LOCAL02
    case 0xC46503: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:38 END_C_FUNCTION
    case 0xC46505: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:38 END_C_FUNCTION
    case 0xC46506: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/create_prepared_entity_sprite.asm (source_named).
bool execute_overworld_create_prepared_entity_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46507: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC46509: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4650A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4650B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4650C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4650C.
    case 0xC4650E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4650F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC46510: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_sprite.asm:13 STA @LOCAL03
    case 0xC46511: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:13 STA @LOCAL03
    // Overlapping static entry reached from 0xC4650E.
    case 0xC46512: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:14 LDA ENTITY_PREPARED_X_COORDINATE
    case 0xC46513: cpu.execute_instruction<0xAD>(0x009E2D, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:14 LDA ENTITY_PREPARED_X_COORDINATE
    // Overlapping static entry reached from 0xC46512.
    case 0xC46514: cpu.execute_instruction<0x2D>(0x00859E, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:15 STA @LOCAL00
    case 0xC46516: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:15 STA @LOCAL00
    // Overlapping static entry reached from 0xC46514.
    case 0xC46517: cpu.execute_instruction<0x0E>(0x002FAD, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    case 0xC46518: cpu.execute_instruction<0xAD>(0x009E2F, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    // Overlapping static entry reached from 0xC4656D.
    case 0xC46519: cpu.execute_instruction<0x2F>(0x10859E, 4); return true;
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    // Overlapping static entry reached from 0xC46517.
    case 0xC4651A: cpu.execute_instruction<0x9E>(0x001085, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:17 STA @LOCAL01
    case 0xC4651B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:18 LDY #$FFFF
    case 0xC4651D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:18 LDY #$FFFF
    // Overlapping static entry reached from 0xC4651D.
    case 0xC4651F: cpu.execute_instruction<0xFF>(0x2214A5, 4); return true;
    // src/overworld/create_prepared_entity_sprite.asm:19 LDA @LOCAL03
    case 0xC46520: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    case 0xC46522: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4651F.
    case 0xC46523: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC46523.
    case 0xC46525: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001285, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:21 STA @LOCAL02
    case 0xC46526: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:21 STA @LOCAL02
    // Overlapping static entry reached from 0xC46525.
    case 0xC46527: cpu.execute_instruction<0x12>(0x00000A, 2); return true;
    // src/overworld/create_prepared_entity_sprite.asm:22 ASL
    case 0xC46528: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_sprite.asm:23 TAX
    case 0xC46529: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/create_prepared_entity_sprite.asm:24 LDA ENTITY_PREPARED_DIRECTION
    case 0xC4652A: cpu.execute_instruction<0xAD>(0x009E31, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:25 STA ENTITY_DIRECTIONS,X
    case 0xC4652D: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/overworld/create_prepared_entity_sprite.asm:26 LDA @LOCAL02
    case 0xC46530: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:27 END_C_FUNCTION
    case 0xC46532: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:27 END_C_FUNCTION
    case 0xC46533: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/debug/set_char_level.asm (source_named).
bool execute_overworld_debug_set_char_level_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/set_char_level.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13E7A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC13E7C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC13E7D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC13E7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC13E7E.
    case 0xC13E80: cpu.execute_instruction<0xFF>(0xD4225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC13E81: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/debug/set_char_level.asm:8 JSR SET_INSTANT_PRINTING
    case 0xC13E82: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/overworld/debug/set_char_level.asm:8 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC13E80.
    case 0xC13E84: cpu.execute_instruction<0xE4>(0x0000C3, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13E86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13E86.
    case 0xC13E88: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13E89: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/overworld/debug/set_char_level.asm:10 LDA #2
    case 0xC13E8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/debug/set_char_level.asm:10 LDA #2
    // Overlapping static entry reached from 0xC13E8C.
    case 0xC13E8E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/set_char_level.asm:11 JSR NUM_SELECT_PROMPT
    case 0xC13E8F: cpu.execute_instruction<0x20>(0x00101C, 3); return true;
    // src/overworld/debug/set_char_level.asm:12 LDA @VIRTUAL06
    case 0xC13E92: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/debug/set_char_level.asm:13 STA @VIRTUAL04
    case 0xC13E94: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13E96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13E96.
    case 0xC13E98: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13E99: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13E9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13E9B.
    case 0xC13E9D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13E9E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13EA8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13EAA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13EAC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13EAE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/debug/set_char_level.asm:17 LDX #1
    case 0xC13EB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/debug/set_char_level.asm:17 LDX #1
    // Overlapping static entry reached from 0xC13EB0.
    case 0xC13EB2: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/debug/set_char_level.asm:18 TXA
    case 0xC13EB3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/debug/set_char_level.asm:19 JSR CHAR_SELECT_PROMPT
    case 0xC13EB4: cpu.execute_instruction<0x20>(0x0027EF, 3); return true;
    // src/overworld/debug/set_char_level.asm:20 STA @VIRTUAL02
    case 0xC13EB7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/set_char_level.asm:21 CMP #0
    case 0xC13EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/set_char_level.asm:21 CMP #0
    // Overlapping static entry reached from 0xC13EB9.
    case 0xC13EBB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/set_char_level.asm:22 BEQ @UNKNOWN0
    case 0xC13EBC: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/overworld/debug/set_char_level.asm:23 LDY #1
    case 0xC13EBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/debug/set_char_level.asm:23 LDY #1
    // Overlapping static entry reached from 0xC13EBE.
    case 0xC13EC0: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/debug/set_char_level.asm:24 LDX @VIRTUAL04
    case 0xC13EC1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/debug/set_char_level.asm:25 LDA @VIRTUAL02
    case 0xC13EC3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/set_char_level.asm:26 JSR RESET_CHAR_LEVEL_ONE
    case 0xC13EC5: cpu.execute_instruction<0x20>(0x00D8D0, 3); return true;
    // src/overworld/debug/set_char_level.asm:27 LDY #0
    case 0xC13EC8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/debug/set_char_level.asm:27 LDY #0
    // Overlapping static entry reached from 0xC13EC8.
    case 0xC13ECA: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/debug/set_char_level.asm:28 LDX #100
    case 0xC13ECB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000064, 2); else cpu.execute_instruction<0xA2>(0x000064, 3); return true;
    // src/overworld/debug/set_char_level.asm:28 LDX #100
    // Overlapping static entry reached from 0xC13ECB.
    case 0xC13ECD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/debug/set_char_level.asm:29 LDA @VIRTUAL02
    case 0xC13ECE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/set_char_level.asm:30 JSR RECOVER_HP_AMTPERCENT
    case 0xC13ED0: cpu.execute_instruction<0x20>(0x008F64, 3); return true;
    // src/overworld/debug/set_char_level.asm:31 LDY #0
    case 0xC13ED3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/debug/set_char_level.asm:31 LDY #0
    // Overlapping static entry reached from 0xC13ED3.
    case 0xC13ED5: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/debug/set_char_level.asm:32 LDX #100
    case 0xC13ED6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000064, 2); else cpu.execute_instruction<0xA2>(0x000064, 3); return true;
    // src/overworld/debug/set_char_level.asm:32 LDX #100
    // Overlapping static entry reached from 0xC13ED6.
    case 0xC13ED8: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/debug/set_char_level.asm:33 LDA @VIRTUAL02
    case 0xC13ED9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/set_char_level.asm:34 JSR RECOVER_PP_AMTPERCENT
    case 0xC13EDB: cpu.execute_instruction<0x20>(0x009010, 3); return true;
    // src/overworld/debug/set_char_level.asm:36 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC13EDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/debug/set_char_level.asm:36 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13EDE.
    case 0xC13EE0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/debug/set_char_level.asm:37 JSR CLOSE_WINDOW
    case 0xC13EE1: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/set_char_level.asm:38 END_C_FUNCTION
    case 0xC13EE5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/set_char_level.asm:38 END_C_FUNCTION
    case 0xC13EE6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/debug/y_button_flag.asm (source_named).
bool execute_overworld_debug_y_button_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13D03: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC13D05: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC13D06: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC13D07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC13D07.
    case 0xC13D09: cpu.execute_instruction<0xFF>(0x01A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC13D0A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:8 LDX #EVENT_FLAG::FLG_TEMP_0
    case 0xC13D0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/debug/y_button_flag.asm:8 LDX #EVENT_FLAG::FLG_TEMP_0
    // Overlapping static entry reached from 0xC13D0B.
    case 0xC13D0D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/debug/y_button_flag.asm:9 STX @VIRTUAL02
    case 0xC13D0E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:11 JSR SET_INSTANT_PRINTING
    case 0xC13D10: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13D14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13D14.
    case 0xC13D16: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13D17: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/overworld/debug/y_button_flag.asm:13 LDA #3
    case 0xC13D1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/debug/y_button_flag.asm:13 LDA #3
    // Overlapping static entry reached from 0xC13D1A.
    case 0xC13D1C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_flag.asm:14 JSR UNKNOWN_C10EB4
    case 0xC13D1D: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13D20: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13D22: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13D24: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D26: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D2A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D2C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/debug/y_button_flag.asm:17 JSR PRINT_NUMBER
    case 0xC13D2E: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/overworld/debug/y_button_flag.asm:18 LDA #$0020
    case 0xC13D31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/overworld/debug/y_button_flag.asm:18 LDA #$0020
    // Overlapping static entry reached from 0xC13D31.
    case 0xC13D33: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/debug/y_button_flag.asm:22 JSL UNKNOWN_C43F77
    case 0xC13D34: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/overworld/debug/y_button_flag.asm:23 JSL UNKNOWN_C43CAA
    case 0xC13D38: cpu.execute_instruction<0x22>(0xC43CAA, 4); return true;
    // src/overworld/debug/y_button_flag.asm:25 LDA @VIRTUAL02
    case 0xC13D3C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:26 JSL GET_EVENT_FLAG
    case 0xC13D3E: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/debug/y_button_flag.asm:27 CMP #0
    case 0xC13D42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:27 CMP #0
    // Overlapping static entry reached from 0xC13D42.
    case 0xC13D44: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:28 BEQ @UNKNOWN1
    case 0xC13D45: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC13D47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x00E970, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D47.
    case 0xC13D49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC13D4A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D49.
    case 0xC13D4B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC13D4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D4B.
    case 0xC13D4D: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D4C.
    case 0xC13D4E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC13D4F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/debug/y_button_flag.asm:30 BRA @UNKNOWN2
    case 0xC13D51: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC13D53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x00E973, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D53.
    case 0xC13D55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC13D56: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D55.
    case 0xC13D57: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC13D58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D57.
    case 0xC13D59: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D58.
    case 0xC13D5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC13D5B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D5D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D5F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D61: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D63: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/debug/y_button_flag.asm:35 LDA #$0100
    case 0xC13D65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/overworld/debug/y_button_flag.asm:35 LDA #$0100
    // Overlapping static entry reached from 0xC13D65.
    case 0xC13D67: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/overworld/debug/y_button_flag.asm:36 JSR PRINT_STRING
    case 0xC13D68: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/overworld/debug/y_button_flag.asm:36 JSR PRINT_STRING
    // Overlapping static entry reached from 0xC13D67.
    case 0xC13D69: cpu.execute_instruction<0xFC>(0x00220E, 3); return true;
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    case 0xC13D6B: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC13D69.
    case 0xC13D6C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC13D6C.
    case 0xC13D6D: cpu.execute_instruction<0xE4>(0x0000C3, 2); return true;
    // src/overworld/debug/y_button_flag.asm:38 JSL WINDOW_TICK
    case 0xC13D6F: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/overworld/debug/y_button_flag.asm:39 LDY @VIRTUAL02
    case 0xC13D73: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:40 STY @LOCAL01
    case 0xC13D75: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:42 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC13D77: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/debug/y_button_flag.asm:43 LDA PAD_HELD
    case 0xC13D7B: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_flag.asm:44 AND #PAD::UP
    case 0xC13D7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/overworld/debug/y_button_flag.asm:44 AND #PAD::UP
    // Overlapping static entry reached from 0xC13D7E.
    case 0xC13D80: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:45 BEQ @UNKNOWN4
    case 0xC13D81: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/overworld/debug/y_button_flag.asm:46 LDY @LOCAL01
    case 0xC13D83: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:47 INY
    case 0xC13D85: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:48 STY @LOCAL01
    case 0xC13D86: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:49 BRA @UNKNOWN11
    case 0xC13D88: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/overworld/debug/y_button_flag.asm:51 LDA PAD_HELD
    case 0xC13D8A: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_flag.asm:52 AND #PAD::DOWN
    case 0xC13D8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/overworld/debug/y_button_flag.asm:52 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC13D8D.
    case 0xC13D8F: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:53 BEQ @UNKNOWN5
    case 0xC13D90: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/overworld/debug/y_button_flag.asm:53 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC13D8F.
    case 0xC13D91: cpu.execute_instruction<0x07>(0x0000A4, 2); return true;
    // src/overworld/debug/y_button_flag.asm:54 LDY @LOCAL01
    case 0xC13D92: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:54 LDY @LOCAL01
    // Overlapping static entry reached from 0xC13D91.
    case 0xC13D93: cpu.execute_instruction<0x12>(0x000088, 2); return true;
    // src/overworld/debug/y_button_flag.asm:55 DEY
    case 0xC13D94: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:56 STY @LOCAL01
    case 0xC13D95: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:57 BRA @UNKNOWN11
    case 0xC13D97: cpu.execute_instruction<0x80>(0x00005C, 2); return true;
    // src/overworld/debug/y_button_flag.asm:59 LDA PAD_HELD
    case 0xC13D99: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_flag.asm:60 AND #PAD::RIGHT
    case 0xC13D9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/overworld/debug/y_button_flag.asm:60 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC13D9C.
    case 0xC13D9E: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:61 BEQ @UNKNOWN6
    case 0xC13D9F: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/debug/y_button_flag.asm:61 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC13D9E.
    case 0xC13DA0: cpu.execute_instruction<0x0C>(0x0012A4, 3); return true;
    // src/overworld/debug/y_button_flag.asm:62 LDY @LOCAL01
    case 0xC13DA1: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:63 TYA
    case 0xC13DA3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:64 CLC
    case 0xC13DA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:65 ADC #10
    case 0xC13DA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/overworld/debug/y_button_flag.asm:65 ADC #10
    // Overlapping static entry reached from 0xC13DA5.
    case 0xC13DA7: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/debug/y_button_flag.asm:66 TAY
    case 0xC13DA8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:67 STY @LOCAL01
    case 0xC13DA9: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:68 BRA @UNKNOWN11
    case 0xC13DAB: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/overworld/debug/y_button_flag.asm:70 LDA PAD_HELD
    case 0xC13DAD: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_flag.asm:71 AND #PAD::LEFT
    case 0xC13DB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/overworld/debug/y_button_flag.asm:71 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC13DB0.
    case 0xC13DB2: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:72 BEQ @UNKNOWN7
    case 0xC13DB3: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/debug/y_button_flag.asm:73 LDY @LOCAL01
    case 0xC13DB5: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:74 TYA
    case 0xC13DB7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:75 SEC
    case 0xC13DB8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:76 SBC #10
    case 0xC13DB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/overworld/debug/y_button_flag.asm:76 SBC #10
    // Overlapping static entry reached from 0xC13DB9.
    case 0xC13DBB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/debug/y_button_flag.asm:77 TAY
    case 0xC13DBC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:78 STY @LOCAL01
    case 0xC13DBD: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:79 BRA @UNKNOWN11
    case 0xC13DBF: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/overworld/debug/y_button_flag.asm:81 LDA PAD_PRESS
    case 0xC13DC1: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_flag.asm:82 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC13DC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/overworld/debug/y_button_flag.asm:82 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC13DC4.
    case 0xC13DC6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:83 BEQ @UNKNOWN10
    case 0xC13DC7: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/overworld/debug/y_button_flag.asm:84 LDA @VIRTUAL02
    case 0xC13DC9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:85 JSL GET_EVENT_FLAG
    case 0xC13DCB: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/debug/y_button_flag.asm:86 CMP #0
    case 0xC13DCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:86 CMP #0
    // Overlapping static entry reached from 0xC13DCF.
    case 0xC13DD1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_flag.asm:87 BEQ @UNKNOWN8
    case 0xC13DD2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/debug/y_button_flag.asm:88 LDX #0
    case 0xC13DD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:88 LDX #0
    // Overlapping static entry reached from 0xC13DD4.
    case 0xC13DD6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/debug/y_button_flag.asm:89 BRA @UNKNOWN9
    case 0xC13DD7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/debug/y_button_flag.asm:91 LDX #1
    case 0xC13DD9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/debug/y_button_flag.asm:91 LDX #1
    // Overlapping static entry reached from 0xC13DD9.
    case 0xC13DDB: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/debug/y_button_flag.asm:93 LDA @VIRTUAL02
    case 0xC13DDC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:94 JSL SET_EVENT_FLAG
    case 0xC13DDE: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/overworld/debug/y_button_flag.asm:95 BRA @UNKNOWN11
    case 0xC13DE2: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/debug/y_button_flag.asm:97 LDA PAD_PRESS
    case 0xC13DE4: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_flag.asm:98 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC13DE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:98 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC13DE7.
    case 0xC13DE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x008BF0, 3); return true;
    // src/overworld/debug/y_button_flag.asm:99 BEQ @UNKNOWN3
    case 0xC13DEA: cpu.execute_instruction<0xF0>(0x00008B, 2); return true;
    // src/overworld/debug/y_button_flag.asm:99 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC13DE9.
    case 0xC13DEB: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_flag.asm:100 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC13DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/debug/y_button_flag.asm:100 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13DEC.
    case 0xC13DEE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/debug/y_button_flag.asm:101 JSR CLOSE_WINDOW
    case 0xC13DEF: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/debug/y_button_flag.asm:102 BRA @UNKNOWN14
    case 0xC13DF3: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/overworld/debug/y_button_flag.asm:104 LDY @LOCAL01
    case 0xC13DF5: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/debug/y_button_flag.asm:105 CPY #2000
    case 0xC13DF7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000D0, 2); else cpu.execute_instruction<0xC0>(0x0007D0, 3); return true;
    // src/overworld/debug/y_button_flag.asm:105 CPY #2000
    // Overlapping static entry reached from 0xC13DF7.
    case 0xC13DF9: cpu.execute_instruction<0x07>(0x000090, 2); return true;
    // src/overworld/debug/y_button_flag.asm:106 BCC @UNKNOWN12
    case 0xC13DFA: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/debug/y_button_flag.asm:106 BCC @UNKNOWN12
    // Overlapping static entry reached from 0xC13DF9.
    case 0xC13DFB: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    case 0xC13DFC: cpu.execute_instruction<0x4C>(0x003D10, 3); return true;
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC13DFB.
    case 0xC13DFD: cpu.execute_instruction<0x10>(0x00003D, 2); return true;
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    case 0xC13DFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    // Overlapping static entry reached from 0xC13DFF.
    case 0xC13E01: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/debug/y_button_flag.asm:110 BEQL @UNKNOWN0
    case 0xC13E02: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:110 BEQL @UNKNOWN0
    case 0xC13E04: cpu.execute_instruction<0x4C>(0x003D10, 3); return true;
    // src/overworld/debug/y_button_flag.asm:111 STY @VIRTUAL02
    case 0xC13E07: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/debug/y_button_flag.asm:112 JMP @UNKNOWN0
    case 0xC13E09: cpu.execute_instruction<0x4C>(0x003D10, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_flag.asm:114 END_C_FUNCTION
    case 0xC13E0C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_flag.asm:114 END_C_FUNCTION
    case 0xC13E0D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/debug/y_button_goods.asm (source_named).
bool execute_overworld_debug_y_button_goods_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_goods.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13EE7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC13EE9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC13EEA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC13EEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC13EEB.
    case 0xC13EED: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC13EEE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:9 LDX #0
    case 0xC13EEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:9 LDX #0
    // Overlapping static entry reached from 0xC13EEF.
    case 0xC13EF1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/debug/y_button_goods.asm:10 STX @VIRTUAL04
    case 0xC13EF2: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:12 JSR SET_INSTANT_PRINTING
    case 0xC13EF4: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13EF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13EF8.
    case 0xC13EFA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13EFB: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/overworld/debug/y_button_goods.asm:14 LDA #2
    case 0xC13EFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/debug/y_button_goods.asm:14 LDA #2
    // Overlapping static entry reached from 0xC13EFE.
    case 0xC13F00: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_goods.asm:15 JSR UNKNOWN_C10EB4
    case 0xC13F01: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/overworld/debug/y_button_goods.asm:17 LDA #130
    case 0xC13F04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x000082, 3); return true;
    // src/overworld/debug/y_button_goods.asm:17 LDA #130
    // Overlapping static entry reached from 0xC13F04.
    case 0xC13F06: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_goods.asm:18 JSR UNKNOWN_C10EB4
    case 0xC13F07: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/overworld/debug/y_button_goods.asm:19 LDX #0
    case 0xC13F0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:19 LDX #0
    // Overlapping static entry reached from 0xC13F0A.
    case 0xC13F0C: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/debug/y_button_goods.asm:20 TXA
    case 0xC13F0D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:21 JSL UNKNOWN_C438A5
    case 0xC13F0E: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC13F12: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC13F14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC13F16: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F18: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F1A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F1C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F1E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/debug/y_button_goods.asm:25 JSR PRINT_NUMBER
    case 0xC13F20: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/overworld/debug/y_button_goods.asm:27 LDX #0
    case 0xC13F23: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:27 LDX #0
    // Overlapping static entry reached from 0xC13F23.
    case 0xC13F25: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/debug/y_button_goods.asm:28 LDA #3
    case 0xC13F26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/debug/y_button_goods.asm:28 LDA #3
    // Overlapping static entry reached from 0xC13F26.
    case 0xC13F28: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/debug/y_button_goods.asm:29 JSL UNKNOWN_C438A5
    case 0xC13F29: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/overworld/debug/y_button_goods.asm:31 LDA @VIRTUAL04
    case 0xC13F2D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:32 JSR UNKNOWN_C19216
    case 0xC13F2F: cpu.execute_instruction<0x20>(0x009216, 3); return true;
    // src/overworld/debug/y_button_goods.asm:33 JSR CLEAR_INSTANT_PRINTING
    case 0xC13F32: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/overworld/debug/y_button_goods.asm:34 JSL WINDOW_TICK
    case 0xC13F36: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/overworld/debug/y_button_goods.asm:35 LDA @VIRTUAL04
    case 0xC13F3A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:36 STA @VIRTUAL02
    case 0xC13F3C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:38 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC13F3E: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/debug/y_button_goods.asm:39 LDA PAD_HELD
    case 0xC13F42: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_goods.asm:40 AND #PAD::UP
    case 0xC13F45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/overworld/debug/y_button_goods.asm:40 AND #PAD::UP
    // Overlapping static entry reached from 0xC13F45.
    case 0xC13F47: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:41 BEQ @UNKNOWN2
    case 0xC13F48: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/debug/y_button_goods.asm:42 INC @VIRTUAL02
    case 0xC13F4A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:43 JMP @UNKNOWN7
    case 0xC13F4C: cpu.execute_instruction<0x4C>(0x003FF8, 3); return true;
    // src/overworld/debug/y_button_goods.asm:45 LDA PAD_HELD
    case 0xC13F4F: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_goods.asm:46 AND #PAD::DOWN
    case 0xC13F52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/overworld/debug/y_button_goods.asm:46 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC13F52.
    case 0xC13F54: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:47 BEQ @UNKNOWN3
    case 0xC13F55: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/debug/y_button_goods.asm:47 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC13F54.
    case 0xC13F56: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:48 LDA @VIRTUAL02
    case 0xC13F57: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:49 DEC
    case 0xC13F59: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:50 STA @VIRTUAL02
    case 0xC13F5A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:51 JMP @UNKNOWN7
    case 0xC13F5C: cpu.execute_instruction<0x4C>(0x003FF8, 3); return true;
    // src/overworld/debug/y_button_goods.asm:53 LDA PAD_HELD
    case 0xC13F5F: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_goods.asm:54 AND #PAD::RIGHT
    case 0xC13F62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/overworld/debug/y_button_goods.asm:54 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC13F62.
    case 0xC13F64: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:55 BEQ @UNKNOWN4
    case 0xC13F65: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/debug/y_button_goods.asm:55 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC13F64.
    case 0xC13F66: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:56 LDA @VIRTUAL02
    case 0xC13F67: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:57 CLC
    case 0xC13F69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:58 ADC #10
    case 0xC13F6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/overworld/debug/y_button_goods.asm:58 ADC #10
    // Overlapping static entry reached from 0xC13F6A.
    case 0xC13F6C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/debug/y_button_goods.asm:59 STA @VIRTUAL02
    case 0xC13F6D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:60 JMP @UNKNOWN7
    case 0xC13F6F: cpu.execute_instruction<0x4C>(0x003FF8, 3); return true;
    // src/overworld/debug/y_button_goods.asm:62 LDA PAD_HELD
    case 0xC13F72: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/overworld/debug/y_button_goods.asm:63 AND #PAD::LEFT
    case 0xC13F75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/overworld/debug/y_button_goods.asm:63 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC13F75.
    case 0xC13F77: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:64 BEQ @UNKNOWN5
    case 0xC13F78: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/debug/y_button_goods.asm:65 LDA @VIRTUAL02
    case 0xC13F7A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:66 SEC
    case 0xC13F7C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:67 SBC #10
    case 0xC13F7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/overworld/debug/y_button_goods.asm:67 SBC #10
    // Overlapping static entry reached from 0xC13F7D.
    case 0xC13F7F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/debug/y_button_goods.asm:68 STA @VIRTUAL02
    case 0xC13F80: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:69 BRA @UNKNOWN7
    case 0xC13F82: cpu.execute_instruction<0x80>(0x000074, 2); return true;
    // src/overworld/debug/y_button_goods.asm:71 LDA PAD_PRESS
    case 0xC13F84: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_goods.asm:72 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC13F87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/overworld/debug/y_button_goods.asm:72 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC13F87.
    case 0xC13F89: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:73 BEQ @UNKNOWN6
    case 0xC13F8A: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13F8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13F8C.
    case 0xC13F8E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13F8F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13F91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13F91.
    case 0xC13F93: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13F94: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F96: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F98: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F9A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F9C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13F9E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13FA0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13FA2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13FA4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/debug/y_button_goods.asm:77 LDX #1
    case 0xC13FA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/debug/y_button_goods.asm:77 LDX #1
    // Overlapping static entry reached from 0xC13FA6.
    case 0xC13FA8: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/debug/y_button_goods.asm:78 TXA
    case 0xC13FA9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:79 JSR CHAR_SELECT_PROMPT
    case 0xC13FAA: cpu.execute_instruction<0x20>(0x0027EF, 3); return true;
    // src/overworld/debug/y_button_goods.asm:80 TAY
    case 0xC13FAD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:81 STY @LOCAL02
    case 0xC13FAE: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:82 BEQ @UNKNOWN7
    case 0xC13FB0: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/overworld/debug/y_button_goods.asm:83 TYA
    case 0xC13FB2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:84 JSL FIND_INVENTORY_SPACE2
    case 0xC13FB3: cpu.execute_instruction<0x22>(0xC4572B, 4); return true;
    // src/overworld/debug/y_button_goods.asm:85 CMP #0
    case 0xC13FB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:85 CMP #0
    // Overlapping static entry reached from 0xC13FB7.
    case 0xC13FB9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:86 BEQ @UNKNOWN7
    case 0xC13FBA: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:87 LDX @VIRTUAL04
    case 0xC13FBC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:88 LDY @LOCAL02
    case 0xC13FBE: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:89 TYA
    case 0xC13FC0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:90 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC13FC1: cpu.execute_instruction<0x22>(0xC18BC6, 4); return true;
    // src/overworld/debug/y_button_goods.asm:91 LDX @VIRTUAL04
    case 0xC13FC5: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:92 LDY @LOCAL02
    case 0xC13FC7: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:93 TYA
    case 0xC13FC9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:94 JSL UNKNOWN_C3EE14
    case 0xC13FCA: cpu.execute_instruction<0x22>(0xC3EE14, 4); return true;
    // src/overworld/debug/y_button_goods.asm:95 CMP #0
    case 0xC13FCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:95 CMP #0
    // Overlapping static entry reached from 0xC13FCE.
    case 0xC13FD0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:96 BEQ @UNKNOWN9
    case 0xC13FD1: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/overworld/debug/y_button_goods.asm:97 LDA @VIRTUAL04
    case 0xC13FD3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:98 JSR GET_ITEM_TYPE
    case 0xC13FD5: cpu.execute_instruction<0x20>(0x009EE6, 3); return true;
    // src/overworld/debug/y_button_goods.asm:99 CMP #2
    case 0xC13FD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/debug/y_button_goods.asm:99 CMP #2
    // Overlapping static entry reached from 0xC13FD8.
    case 0xC13FDA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/debug/y_button_goods.asm:100 BNE @UNKNOWN9
    case 0xC13FDB: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:101 LDY @LOCAL02
    case 0xC13FDD: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:102 TYA
    case 0xC13FDF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:103 JSL UNKNOWN_C22351
    case 0xC13FE0: cpu.execute_instruction<0x22>(0xC22351, 4); return true;
    // src/overworld/debug/y_button_goods.asm:104 TAX
    case 0xC13FE4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:105 LDY @LOCAL02
    case 0xC13FE5: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/debug/y_button_goods.asm:106 TYA
    case 0xC13FE7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/debug/y_button_goods.asm:107 JSR EQUIP_ITEM
    case 0xC13FE8: cpu.execute_instruction<0x20>(0x009066, 3); return true;
    // src/overworld/debug/y_button_goods.asm:108 BRA @UNKNOWN9
    case 0xC13FEB: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:110 LDA PAD_PRESS
    case 0xC13FED: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_goods.asm:111 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC13FF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/overworld/debug/y_button_goods.asm:111 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC13FF0.
    case 0xC13FF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0014D0, 3); return true;
    // src/overworld/debug/y_button_goods.asm:112 BNE @UNKNOWN9
    case 0xC13FF3: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/overworld/debug/y_button_goods.asm:112 BNE @UNKNOWN9
    // Overlapping static entry reached from 0xC13FF2.
    case 0xC13FF4: cpu.execute_instruction<0x14>(0x00004C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:113 JMP @UNKNOWN1
    case 0xC13FF5: cpu.execute_instruction<0x4C>(0x003F3E, 3); return true;
    // src/overworld/debug/y_button_goods.asm:113 JMP @UNKNOWN1
    // Overlapping static entry reached from 0xC13FF4.
    case 0xC13FF6: cpu.execute_instruction<0x3E>(0x00A53F, 3); return true;
    // src/overworld/debug/y_button_goods.asm:115 LDA @VIRTUAL02
    case 0xC13FF8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:115 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC13FF6.
    case 0xC13FF9: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/overworld/debug/y_button_goods.asm:116 CMP #$0100
    case 0xC13FFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/debug/y_button_goods.asm:116 CMP #$0100
    // Overlapping static entry reached from 0xC13FFA.
    case 0xC13FFC: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/overworld/debug/y_button_goods.asm:117 BCC @UNKNOWN8
    case 0xC13FFD: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/debug/y_button_goods.asm:117 BCC @UNKNOWN8
    // Overlapping static entry reached from 0xC13FFC.
    case 0xC13FFE: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/debug/y_button_goods.asm:118 JMP @UNKNOWN0
    case 0xC13FFF: cpu.execute_instruction<0x4C>(0x003EF4, 3); return true;
    // src/overworld/debug/y_button_goods.asm:118 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC13FFE.
    case 0xC14000: cpu.execute_instruction<0xF4>(0x00A53E, 3); return true;
    // src/overworld/debug/y_button_goods.asm:120 LDA @VIRTUAL02
    case 0xC14002: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/debug/y_button_goods.asm:120 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC14000.
    case 0xC14003: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/overworld/debug/y_button_goods.asm:121 STA @VIRTUAL04
    case 0xC14004: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/debug/y_button_goods.asm:122 JMP @UNKNOWN0
    case 0xC14006: cpu.execute_instruction<0x4C>(0x003EF4, 3); return true;
    // src/overworld/debug/y_button_goods.asm:124 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC14009: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/debug/y_button_goods.asm:124 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC14009.
    case 0xC1400B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/debug/y_button_goods.asm:125 JSR CLOSE_WINDOW
    case 0xC1400C: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_goods.asm:126 END_C_FUNCTION
    case 0xC14010: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_goods.asm:126 END_C_FUNCTION
    case 0xC14011: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/debug/y_button_guide.asm (source_named).
bool execute_overworld_debug_y_button_guide_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_guide.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13E0E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC13E10: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC13E11: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC13E12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC13E12.
    case 0xC13E14: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC13E15: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:9 LDX #0
    case 0xC13E16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/debug/y_button_guide.asm:9 LDX #0
    // Overlapping static entry reached from 0xC13E16.
    case 0xC13E18: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/debug/y_button_guide.asm:10 STX @LOCAL02
    case 0xC13E19: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:11 TXA
    case 0xC13E1B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:12 STA @LOCAL01
    case 0xC13E1C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/debug/y_button_guide.asm:13 BRA @UNKNOWN2
    case 0xC13E1E: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:15 ASL
    case 0xC13E20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:16 TAX
    case 0xC13E21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:17 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC13E22: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/overworld/debug/y_button_guide.asm:18 CMP #.LOWORD(-1)
    case 0xC13E25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/debug/y_button_guide.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13E25.
    case 0xC13E27: cpu.execute_instruction<0xFF>(0xA605F0, 4); return true;
    // src/overworld/debug/y_button_guide.asm:19 BEQ @UNKNOWN1
    case 0xC13E28: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/debug/y_button_guide.asm:20 LDX @LOCAL02
    case 0xC13E2A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:20 LDX @LOCAL02
    // Overlapping static entry reached from 0xC13E27.
    case 0xC13E2B: cpu.execute_instruction<0x14>(0x0000E8, 2); return true;
    // src/overworld/debug/y_button_guide.asm:21 INX
    case 0xC13E2C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:22 STX @LOCAL02
    case 0xC13E2D: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:24 LDA @LOCAL01
    case 0xC13E2F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/debug/y_button_guide.asm:25 INC
    case 0xC13E31: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/debug/y_button_guide.asm:26 STA @LOCAL01
    case 0xC13E32: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/debug/y_button_guide.asm:28 CMP #MAX_ENTITIES
    case 0xC13E34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/overworld/debug/y_button_guide.asm:28 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC13E34.
    case 0xC13E36: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/debug/y_button_guide.asm:29 BCC @UNKNOWN0
    case 0xC13E37: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/overworld/debug/y_button_guide.asm:30 JSR SET_INSTANT_PRINTING
    case 0xC13E39: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/overworld/debug/y_button_guide.asm:30 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC13DFD.
    case 0xC13E3C: cpu.execute_instruction<0xC3>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13E3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13E3C.
    case 0xC13E3E: cpu.execute_instruction<0x14>(0x000000, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13E3D.
    case 0xC13E3F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13E40: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/overworld/debug/y_button_guide.asm:32 LDA #3
    case 0xC13E43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/debug/y_button_guide.asm:32 LDA #3
    // Overlapping static entry reached from 0xC13E43.
    case 0xC13E45: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/debug/y_button_guide.asm:33 JSR UNKNOWN_C10EB4
    case 0xC13E46: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/overworld/debug/y_button_guide.asm:34 LDX @LOCAL02
    case 0xC13E49: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/overworld/debug/y_button_guide.asm:35 TXA
    case 0xC13E4B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_guide.asm:36 STORE_INT1632 @VIRTUAL06
    case 0xC13E4C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_guide.asm:36 STORE_INT1632 @VIRTUAL06
    case 0xC13E4E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E50: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E52: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E54: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E56: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/debug/y_button_guide.asm:38 JSR PRINT_NUMBER
    case 0xC13E58: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/overworld/debug/y_button_guide.asm:39 JSR CLEAR_INSTANT_PRINTING
    case 0xC13E5B: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/overworld/debug/y_button_guide.asm:40 JSL WINDOW_TICK
    case 0xC13E5F: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/overworld/debug/y_button_guide.asm:41 BRA @UNKNOWN4
    case 0xC13E63: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/debug/y_button_guide.asm:43 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC13E65: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/debug/y_button_guide.asm:45 LDA PAD_PRESS
    case 0xC13E69: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/debug/y_button_guide.asm:46 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC13E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/overworld/debug/y_button_guide.asm:46 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC13E6C.
    case 0xC13E6E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00F4F0, 3); return true;
    // src/overworld/debug/y_button_guide.asm:47 BEQ @UNKNOWN3
    case 0xC13E6F: cpu.execute_instruction<0xF0>(0x0000F4, 2); return true;
    // src/overworld/debug/y_button_guide.asm:47 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC13E6E.
    case 0xC13E70: cpu.execute_instruction<0xF4>(0x0014A9, 3); return true;
    // src/overworld/debug/y_button_guide.asm:48 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC13E71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/debug/y_button_guide.asm:48 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13E71.
    case 0xC13E73: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/debug/y_button_guide.asm:49 JSR CLOSE_WINDOW
    case 0xC13E74: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_guide.asm:50 END_C_FUNCTION
    case 0xC13E78: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_guide.asm:50 END_C_FUNCTION
    case 0xC13E79: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/disable_hotspot.asm (source_named).
bool execute_overworld_disable_hotspot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/disable_hotspot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC071E5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071E7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071E8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071E9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC071EA.
    case 0xC071EC: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071ED: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071EE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:8 TAX
    case 0xC071EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:9 DEX
    case 0xC071F0: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:10 STX @LOCAL00
    case 0xC071F1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/disable_hotspot.asm:11 TXA
    case 0xC071F3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071F4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071F7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071FA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:13 CLC
    case 0xC071FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:14 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC071FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x005E3C, 3); return true;
    // src/overworld/disable_hotspot.asm:14 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC071FE.
    case 0xC07200: cpu.execute_instruction<0x5E>(0x00A9AA, 3); return true;
    // src/overworld/disable_hotspot.asm:15 TAX
    case 0xC07201: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/disable_hotspot.asm:16 LDA #0
    case 0xC07202: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/disable_hotspot.asm:16 LDA #0
    // Overlapping static entry reached from 0xC07200.
    case 0xC07203: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/disable_hotspot.asm:16 LDA #0
    // Overlapping static entry reached from 0xC07202.
    case 0xC07204: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/disable_hotspot.asm:17 STA a:active_hotspot::mode,X
    case 0xC07205: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/disable_hotspot.asm:18 LDX @LOCAL00
    case 0xC07208: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/disable_hotspot.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC0720A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/disable_hotspot.asm:28 STZ GAME_STATE + game_state::active_hotspot_modes,X
    case 0xC0720C: cpu.execute_instruction<0x9E>(0x0098BD, 3); return true;
    // src/overworld/disable_hotspot.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC0720F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/disable_hotspot.asm:31 END_C_FUNCTION
    case 0xC07211: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/disable_hotspot.asm:31 END_C_FUNCTION
    case 0xC07212: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/display_town_map.asm (source_named).
bool execute_overworld_display_town_map_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/display_town_map.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D681: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4D683: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4D684: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4D685: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D685.
    case 0xC4D687: cpu.execute_instruction<0xFF>(0x3CA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4D688: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:9 LDA #60
    case 0xC4D689: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/overworld/display_town_map.asm:9 LDA #60
    // Overlapping static entry reached from 0xC4D689.
    case 0xC4D68B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/display_town_map.asm:10 STA TOWN_MAP_ANIMATION_FRAME
    case 0xC4D68C: cpu.execute_instruction<0x8D>(0x00B4AE, 3); return true;
    // src/overworld/display_town_map.asm:11 LDA #20
    case 0xC4D68F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/overworld/display_town_map.asm:11 LDA #20
    // Overlapping static entry reached from 0xC4D68F.
    case 0xC4D691: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/display_town_map.asm:12 STA TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4D692: cpu.execute_instruction<0x8D>(0x00B4B0, 3); return true;
    // src/overworld/display_town_map.asm:13 LDA #12
    case 0xC4D695: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/overworld/display_town_map.asm:13 LDA #12
    // Overlapping static entry reached from 0xC4D695.
    case 0xC4D697: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/display_town_map.asm:14 STA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4D698: cpu.execute_instruction<0x8D>(0x00B4B2, 3); return true;
    // src/overworld/display_town_map.asm:15 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC4D69B: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/overworld/display_town_map.asm:16 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC4D69E: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/overworld/display_town_map.asm:17 JSR GET_TOWN_MAP_ID
    case 0xC4D6A1: cpu.execute_instruction<0x20>(0x00D274, 3); return true;
    // src/overworld/display_town_map.asm:18 AND #$000F
    case 0xC4D6A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/display_town_map.asm:18 AND #$000F
    // Overlapping static entry reached from 0xC4D6A4.
    case 0xC4D6A6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/display_town_map.asm:19 TAY
    case 0xC4D6A7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:20 STY @LOCAL01
    case 0xC4D6A8: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/display_town_map.asm:21 BEQL @RETURN
    case 0xC4D6AA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/display_town_map.asm:21 BEQL @RETURN
    case 0xC4D6AC: cpu.execute_instruction<0x4C>(0x00D73F, 3); return true;
    // src/overworld/display_town_map.asm:22 TYA
    case 0xC4D6AF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:23 DEC
    case 0xC4D6B0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:24 JSR LOAD_TOWN_MAP_DATA
    case 0xC4D6B1: cpu.execute_instruction<0x20>(0x00D553, 3); return true;
    // src/overworld/display_town_map.asm:26 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4D6B4: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/display_town_map.asm:27 JSL OAM_CLEAR
    case 0xC4D6B8: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/overworld/display_town_map.asm:28 LDY @LOCAL01
    case 0xC4D6BC: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/display_town_map.asm:29 TYA
    case 0xC4D6BE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:30 DEC
    case 0xC4D6BF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:31 JSR UNKNOWN_C4D43F
    case 0xC4D6C0: cpu.execute_instruction<0x20>(0x00D43F, 3); return true;
    // src/overworld/display_town_map.asm:32 JSL UPDATE_SCREEN
    case 0xC4D6C3: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/overworld/display_town_map.asm:33 LDA PAD_PRESS
    case 0xC4D6C7: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/display_town_map.asm:34 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC4D6CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/overworld/display_town_map.asm:34 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC4D6CA.
    case 0xC4D6CC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/display_town_map.asm:35 BNE @UNKNOWN2
    case 0xC4D6CD: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/overworld/display_town_map.asm:36 LDA PAD_PRESS
    case 0xC4D6CF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/display_town_map.asm:37 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC4D6D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/overworld/display_town_map.asm:37 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC4D6D2.
    case 0xC4D6D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0010D0, 3); return true;
    // src/overworld/display_town_map.asm:38 BNE @UNKNOWN2
    case 0xC4D6D5: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/overworld/display_town_map.asm:38 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC4D6D4.
    case 0xC4D6D6: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/overworld/display_town_map.asm:39 LDA PAD_PRESS
    case 0xC4D6D7: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/display_town_map.asm:39 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC4D6D6.
    case 0xC4D6D8: cpu.execute_instruction<0x6D>(0x002900, 3); return true;
    // src/overworld/display_town_map.asm:40 AND #PAD::L_BUTTON
    case 0xC4D6DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/overworld/display_town_map.asm:40 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC4D6D8.
    case 0xC4D6DB: cpu.execute_instruction<0x20>(0x00D000, 3); return true;
    // src/overworld/display_town_map.asm:40 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC4D6DA.
    case 0xC4D6DC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/display_town_map.asm:41 BNE @UNKNOWN2
    case 0xC4D6DD: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/overworld/display_town_map.asm:41 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC4D6DB.
    case 0xC4D6DE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:42 LDA PAD_PRESS
    case 0xC4D6DF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/display_town_map.asm:43 AND #PAD::X_BUTTON
    case 0xC4D6E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/overworld/display_town_map.asm:43 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC4D6E2.
    case 0xC4D6E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/display_town_map.asm:44 BEQ @UNKNOWN1
    case 0xC4D6E5: cpu.execute_instruction<0xF0>(0x0000CD, 2); return true;
    // src/overworld/display_town_map.asm:46 LDX #1
    case 0xC4D6E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/display_town_map.asm:46 LDX #1
    // Overlapping static entry reached from 0xC4D6E7.
    case 0xC4D6E9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/display_town_map.asm:47 LDA #2
    case 0xC4D6EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/display_town_map.asm:47 LDA #2
    // Overlapping static entry reached from 0xC4D6EA.
    case 0xC4D6EC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/display_town_map.asm:48 JSL FADE_OUT
    case 0xC4D6ED: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/overworld/display_town_map.asm:49 LDX #0
    case 0xC4D6F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/display_town_map.asm:49 LDX #0
    // Overlapping static entry reached from 0xC4D6F1.
    case 0xC4D6F3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/display_town_map.asm:50 STX @LOCAL00
    case 0xC4D6F4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/display_town_map.asm:51 BRA @UNKNOWN4
    case 0xC4D6F6: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/overworld/display_town_map.asm:53 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4D6F8: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/display_town_map.asm:54 JSL OAM_CLEAR
    case 0xC4D6FC: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/overworld/display_town_map.asm:55 LDY @LOCAL01
    case 0xC4D700: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/display_town_map.asm:56 TYA
    case 0xC4D702: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:57 DEC
    case 0xC4D703: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:58 JSR UNKNOWN_C4D43F
    case 0xC4D704: cpu.execute_instruction<0x20>(0x00D43F, 3); return true;
    // src/overworld/display_town_map.asm:59 JSL UPDATE_SCREEN
    case 0xC4D707: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/overworld/display_town_map.asm:60 LDX @LOCAL00
    case 0xC4D70B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/display_town_map.asm:61 INX
    case 0xC4D70D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:62 STX @LOCAL00
    case 0xC4D70E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/display_town_map.asm:64 CPX #16
    case 0xC4D710: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/overworld/display_town_map.asm:64 CPX #16
    // Overlapping static entry reached from 0xC4D710.
    case 0xC4D712: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/display_town_map.asm:65 BCC @UNKNOWN3
    case 0xC4D713: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/overworld/display_town_map.asm:66 LDA #1
    case 0xC4D715: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/display_town_map.asm:66 LDA #1
    // Overlapping static entry reached from 0xC4D715.
    case 0xC4D717: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/display_town_map.asm:67 STA DISABLE_MUSIC_CHANGES
    case 0xC4D718: cpu.execute_instruction<0x8D>(0x005DD8, 3); return true;
    // src/overworld/display_town_map.asm:68 JSL RELOAD_MAP
    case 0xC4D71B: cpu.execute_instruction<0x22>(0xC018F3, 4); return true;
    // src/overworld/display_town_map.asm:69 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC4D71F: cpu.execute_instruction<0xAD>(0x005DD6, 3); return true;
    // src/overworld/display_town_map.asm:70 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC4D722: cpu.execute_instruction<0x8D>(0x005DD4, 3); return true;
    // src/overworld/display_town_map.asm:71 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4D725: cpu.execute_instruction<0x22>(0xC4800B, 4); return true;
    // src/overworld/display_town_map.asm:72 STZ DISABLE_MUSIC_CHANGES
    case 0xC4D729: cpu.execute_instruction<0x9C>(0x005DD8, 3); return true;
    // src/overworld/display_town_map.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D72C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/display_town_map.asm:74 LDA #$17
    case 0xC4D72E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/overworld/display_town_map.asm:75 STA TM_MIRROR
    case 0xC4D730: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/display_town_map.asm:75 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D72E.
    case 0xC4D731: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/display_town_map.asm:75 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D731.
    case 0xC4D732: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/display_town_map.asm:76 LDX #1
    case 0xC4D733: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/display_town_map.asm:76 LDX #1
    // Overlapping static entry reached from 0xC4D733.
    case 0xC4D735: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/display_town_map.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC4D736: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/display_town_map.asm:78 LDA #2
    case 0xC4D738: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/display_town_map.asm:78 LDA #2
    // Overlapping static entry reached from 0xC4D738.
    case 0xC4D73A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/display_town_map.asm:79 JSL FADE_IN
    case 0xC4D73B: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/overworld/display_town_map.asm:81 LDY @LOCAL01
    case 0xC4D73F: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/display_town_map.asm:82 TYA
    case 0xC4D741: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/display_town_map.asm:83 END_C_FUNCTION
    case 0xC4D742: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/display_town_map.asm:83 END_C_FUNCTION
    case 0xC4D743: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/display_your_sanctuary_location.asm (source_named).
bool execute_overworld_display_your_sanctuary_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E2D7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2D9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2DA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2DB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E2DC.
    case 0xC4E2DE: cpu.execute_instruction<0xFF>(0x29685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2DF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2E0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:8 AND #$0007
    case 0xC4E2E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC4E2DE.
    case 0xC4E2E2: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC4E2E1.
    case 0xC4E2E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:9 STA @VIRTUAL02
    case 0xC4E2E4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:10 ASL
    case 0xC4E2E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:11 TAX
    case 0xC4E2E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:12 LDA LOADED_YOUR_SANCTUARY_LOCATIONS,X
    case 0xC4E2E8: cpu.execute_instruction<0xBD>(0x00B4BE, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:13 BNE @UNKNOWN0
    case 0xC4E2EB: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:14 LDA @VIRTUAL02
    case 0xC4E2ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:15 JSL LOAD_YOUR_SANCTUARY_LOCATION
    case 0xC4E2EF: cpu.execute_instruction<0x22>(0xC4E281, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:16 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4E2F3: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:19 JSL WAIT_DMA_FINISHED
    case 0xC4E2F7: cpu.execute_instruction<0x22>(0xC08F8B, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E2FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E2FB.
    case 0xC4E2FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E2FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E300: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E300.
    case 0xC4E302: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E303: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:22 LDY #$0800
    case 0xC4E305: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000800, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:22 LDY #$0800
    // Overlapping static entry reached from 0xC4E305.
    case 0xC4E307: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:23 LDA @VIRTUAL02
    case 0xC4E308: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:24 JSL MULT16
    case 0xC4E30A: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:25 CLC
    case 0xC4E30E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:26 ADC @VIRTUAL06
    case 0xC4E30F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:27 STA @VIRTUAL06
    case 0xC4E311: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:28 STA @LOCAL00
    case 0xC4E313: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:29 LDA @VIRTUAL06+2
    case 0xC4E315: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:30 STA @LOCAL00+2
    case 0xC4E317: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:31 LDY #$3800
    case 0xC4E319: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003800, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:31 LDY #$3800
    // Overlapping static entry reached from 0xC4E319.
    case 0xC4E31B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:32 LDX #$0780
    case 0xC4E31C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000780, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:32 LDX #$0780
    // Overlapping static entry reached from 0xC4E31C.
    case 0xC4E31E: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E31F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:33 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E31E.
    case 0xC4E320: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:34 LDA #0
    case 0xC4E321: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:35 JSL PREPARE_VRAM_COPY
    case 0xC4E323: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:35 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E321.
    case 0xC4E324: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:35 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E324.
    case 0xC4E326: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4E327: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E326.
    case 0xC4E328: cpu.execute_instruction<0x00>(0x000040, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E327.
    case 0xC4E329: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4E32A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4E32C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E32C.
    case 0xC4E32E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4E32F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:38 LDY #$0200
    case 0xC4E331: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000200, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:38 LDY #$0200
    // Overlapping static entry reached from 0xC4E331.
    case 0xC4E333: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:39 LDA @VIRTUAL02
    case 0xC4E334: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:40 JSL MULT16
    case 0xC4E336: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:41 CLC
    case 0xC4E33A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/display_your_sanctuary_location.asm:42 ADC @VIRTUAL06
    case 0xC4E33B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:43 STA @VIRTUAL06
    case 0xC4E33D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:44 STA @LOCAL00
    case 0xC4E33F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:45 LDA @VIRTUAL06+2
    case 0xC4E341: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:46 STA @LOCAL00+2
    case 0xC4E343: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:47 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4E345: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:47 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4E345.
    case 0xC4E347: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:48 LDA #.LOWORD(PALETTES)
    case 0xC4E348: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:48 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4E347.
    case 0xC4E349: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:48 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4E348.
    case 0xC4E34A: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:49 JSL MEMCPY16
    case 0xC4E34B: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/overworld/display_your_sanctuary_location.asm:49 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4E3AD.
    case 0xC4E34C: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:49 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4E34C.
    case 0xC4E34E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E34F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:50 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E34E.
    case 0xC4E350: cpu.execute_instruction<0x20>(0x0008A9, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:51 LDA #PALETTE_UPLOAD::BG_ONLY
    case 0xC4E351: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008D08, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:52 STA PALETTE_UPLOAD_MODE
    case 0xC4E353: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:52 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4E351.
    case 0xC4E354: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4E356: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/display_your_sanctuary_location.asm:54 STZ SCREEN_TOP_Y
    case 0xC4E358: cpu.execute_instruction<0x9C>(0x004376, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:55 STZ SCREEN_LEFT_X
    case 0xC4E35B: cpu.execute_instruction<0x9C>(0x004374, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:56 STZ BG1_Y_POS
    case 0xC4E35E: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/overworld/display_your_sanctuary_location.asm:57 STZ BG1_X_POS
    case 0xC4E361: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:58 END_C_FUNCTION
    case 0xC4E364: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:58 END_C_FUNCTION
    case 0xC4E365: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/door_transition.asm (source_named).
bool execute_overworld_door_transition_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/door_transition.asm:3 BEGIN_C_FUNCTION
    case 0xC06BFF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06C01: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06C02: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06C03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC06C03.
    case 0xC06C05: cpu.execute_instruction<0xFF>(0x28A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06C06: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06C07: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06C09: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06C0B: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06C0D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06C0F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06C11: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06C13: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06C15: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06C17: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06C19: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06C1B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06C1D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC06C1F.
    case 0xC06C21: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C22: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C24: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C25: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C27: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C29: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06C2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06C2B.
    case 0xC06C2D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06C2E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06C30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06C30.
    case 0xC06C32: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06C33: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C35: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C37: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C39: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C3B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C3D: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:17 BEQ @UNKNOWN1
    case 0xC06C3F: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06C41: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06C43: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06C45: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06C47: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:19 JSL UNKNOWN_C10004
    case 0xC06C49: cpu.execute_instruction<0x22>(0xC10004, 4); return true;
    // src/overworld/door_transition.asm:21 STZ LADDER_STAIRS_TILE_Y
    case 0xC06C4D: cpu.execute_instruction<0x9C>(0x005DAA, 3); return true;
    // src/overworld/door_transition.asm:22 STZ LADDER_STAIRS_TILE_X
    case 0xC06C50: cpu.execute_instruction<0x9C>(0x005DA8, 3); return true;
    // src/overworld/door_transition.asm:23 LDA #door_data::event_flag
    case 0xC06C53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/door_transition.asm:23 LDA #door_data::event_flag
    // Overlapping static entry reached from 0xC06C53.
    case 0xC06C55: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06C56: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06C58: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06C5A: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06C5C: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06C5E: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06C60: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06C62: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06C64: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:26 CLC
    case 0xC06C66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:27 ADC @VIRTUAL06
    case 0xC06C67: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:28 STA @VIRTUAL06
    case 0xC06C69: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:29 LDA [@VIRTUAL06]
    case 0xC06C6B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:30 BEQ @UNKNOWN3
    case 0xC06C6D: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/overworld/door_transition.asm:31 AND #$7FFF
    case 0xC06C6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/overworld/door_transition.asm:31 AND #$7FFF
    // Overlapping static entry reached from 0xC06C6F.
    case 0xC06C71: cpu.execute_instruction<0x7F>(0x162822, 4); return true;
    // src/overworld/door_transition.asm:32 JSL GET_EVENT_FLAG
    case 0xC06C72: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/door_transition.asm:32 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC06C71.
    case 0xC06C75: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // src/overworld/door_transition.asm:33 STA @LOCAL02
    case 0xC06C76: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/door_transition.asm:33 STA @LOCAL02
    // Overlapping static entry reached from 0xC06C75.
    case 0xC06C77: cpu.execute_instruction<0x14>(0x0000A2, 2); return true;
    // src/overworld/door_transition.asm:34 LDX #0
    case 0xC06C78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/door_transition.asm:34 LDX #0
    // Overlapping static entry reached from 0xC06C77.
    case 0xC06C79: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/door_transition.asm:34 LDX #0
    // Overlapping static entry reached from 0xC06C78.
    case 0xC06C7A: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:35 LDA [@VIRTUAL06]
    case 0xC06C7B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:36 CMP #EVENT_FLAG_UNSET
    case 0xC06C7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/overworld/door_transition.asm:36 CMP #EVENT_FLAG_UNSET
    // Overlapping static entry reached from 0xC06C7D.
    case 0xC06C7F: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/door_transition.asm:37 BLTEQ @UNKNOWN2
    case 0xC06C80: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/door_transition.asm:37 BLTEQ @UNKNOWN2
    case 0xC06C82: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/door_transition.asm:38 LDX #1
    case 0xC06C84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:38 LDX #1
    // Overlapping static entry reached from 0xC06C84.
    case 0xC06C86: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/door_transition.asm:40 STX @VIRTUAL02
    case 0xC06C87: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:41 LDA @LOCAL02
    case 0xC06C89: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/door_transition.asm:42 CMP @VIRTUAL02
    case 0xC06C8B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:43 BEQ @UNKNOWN3
    case 0xC06C8D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:44 STZ USING_DOOR
    case 0xC06C8F: cpu.execute_instruction<0x9C>(0x005DC2, 3); return true;
    // src/overworld/door_transition.asm:45 JMP @UNKNOWN15
    case 0xC06C92: cpu.execute_instruction<0x4C>(0x006E00, 3); return true;
    // src/overworld/door_transition.asm:47 LDY #1
    case 0xC06C95: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:47 LDY #1
    // Overlapping static entry reached from 0xC06C95.
    case 0xC06C97: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/door_transition.asm:48 STY @LOCAL01
    case 0xC06C98: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/door_transition.asm:49 BRA @UNKNOWN5
    case 0xC06C9A: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/door_transition.asm:51 LDX #0
    case 0xC06C9C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/door_transition.asm:51 LDX #0
    // Overlapping static entry reached from 0xC06C9C.
    case 0xC06C9E: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/door_transition.asm:52 TYA
    case 0xC06C9F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:53 JSL SET_EVENT_FLAG
    case 0xC06CA0: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/overworld/door_transition.asm:54 LDY @LOCAL01
    case 0xC06CA4: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/door_transition.asm:55 INY
    case 0xC06CA6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:56 STY @LOCAL01
    case 0xC06CA7: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/door_transition.asm:58 CPY #10
    case 0xC06CA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/overworld/door_transition.asm:58 CPY #10
    // Overlapping static entry reached from 0xC06CA9.
    case 0xC06CAB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/door_transition.asm:59 BLTEQ @UNKNOWN4
    case 0xC06CAC: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/door_transition.asm:59 BLTEQ @UNKNOWN4
    case 0xC06CAE: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // src/overworld/door_transition.asm:60 JSL UNKNOWN_C06B3D
    case 0xC06CB0: cpu.execute_instruction<0x22>(0xC06B3D, 4); return true;
    // src/overworld/door_transition.asm:61 JSL UNKNOWN_C07C5B
    case 0xC06CB4: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // src/overworld/door_transition.asm:62 LDA #$FFFF
    case 0xC06CB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/door_transition.asm:62 LDA #$FFFF
    // Overlapping static entry reached from 0xC06CB8.
    case 0xC06CBA: cpu.execute_instruction<0xFF>(0xB4A88D, 4); return true;
    // src/overworld/door_transition.asm:63 STA ENTITY_FADE_ENTITY
    case 0xC06CBB: cpu.execute_instruction<0x8D>(0x00B4A8, 3); return true;
    // src/overworld/door_transition.asm:64 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC06CBE: cpu.execute_instruction<0x9C>(0x005D58, 3); return true;
    // src/overworld/door_transition.asm:65 LDA #door_data::unknown10
    case 0xC06CC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/overworld/door_transition.asm:65 LDA #door_data::unknown10
    // Overlapping static entry reached from 0xC06CC1.
    case 0xC06CC3: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06CC4: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06CC6: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06CC8: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06CCA: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:67 CLC
    case 0xC06CCC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:68 ADC @VIRTUAL06
    case 0xC06CCD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:69 STA @VIRTUAL06
    case 0xC06CCF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:70 LDX #1
    case 0xC06CD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:70 LDX #1
    // Overlapping static entry reached from 0xC06CD1.
    case 0xC06CD3: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:71 LDA [@VIRTUAL06]
    case 0xC06CD4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:72 AND #$00FF
    case 0xC06CD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC06CD6.
    case 0xC06CD8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:73 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC06CD9: cpu.execute_instruction<0x22>(0xC068AF, 4); return true;
    // src/overworld/door_transition.asm:74 JSL PLAY_SOUND
    case 0xC06CDD: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/overworld/door_transition.asm:75 LDA DISABLED_TRANSITIONS
    case 0xC06CE1: cpu.execute_instruction<0xAD>(0x00B4B6, 3); return true;
    // src/overworld/door_transition.asm:76 BEQ @UNKNOWN6
    case 0xC06CE4: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:77 LDX #1
    case 0xC06CE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:77 LDX #1
    // Overlapping static entry reached from 0xC06CE6.
    case 0xC06CE8: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/door_transition.asm:78 TXA
    case 0xC06CE9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:79 JSL FADE_OUT
    case 0xC06CEA: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/overworld/door_transition.asm:80 BRA @UNKNOWN7
    case 0xC06CEE: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/door_transition.asm:82 LDX #1
    case 0xC06CF0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:82 LDX #1
    // Overlapping static entry reached from 0xC06CF0.
    case 0xC06CF2: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:83 LDA [@VIRTUAL06]
    case 0xC06CF3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:84 AND #$00FF
    case 0xC06CF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC06CF5.
    case 0xC06CF7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:85 JSL SCREEN_TRANSITION
    case 0xC06CF8: cpu.execute_instruction<0x22>(0xC06662, 4); return true;
    // src/overworld/door_transition.asm:87 LDY #door_data::unknown8
    case 0xC06CFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/door_transition.asm:87 LDY #door_data::unknown8
    // Overlapping static entry reached from 0xC06CFC.
    case 0xC06CFE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/door_transition.asm:88 LDA [@VIRTUAL0A],Y
    case 0xC06CFF: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:89 ASL
    case 0xC06D01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:90 ASL
    case 0xC06D02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:91 ASL
    case 0xC06D03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:92 STA @VIRTUAL02
    case 0xC06D04: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:93 LDY #door_data::unknown6
    case 0xC06D06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/door_transition.asm:93 LDY #door_data::unknown6
    // Overlapping static entry reached from 0xC06D06.
    case 0xC06D08: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/door_transition.asm:94 LDA [@VIRTUAL0A],Y
    case 0xC06D09: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:95 STA @LOCAL02
    case 0xC06D0B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/door_transition.asm:96 AND #$3FFF
    case 0xC06D0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/overworld/door_transition.asm:96 AND #$3FFF
    // Overlapping static entry reached from 0xC06D0D.
    case 0xC06D0F: cpu.execute_instruction<0x3F>(0x0A0A0A, 4); return true;
    // src/overworld/door_transition.asm:97 ASL
    case 0xC06D10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:98 ASL
    case 0xC06D11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:99 ASL
    case 0xC06D12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:100 STA @VIRTUAL04
    case 0xC06D13: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC06D15: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:102 LDA #14
    case 0xC06D17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00E20E, 3); return true;
    // src/overworld/door_transition.asm:103 SEP #PROC_FLAGS::INDEX8
    case 0xC06D19: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:103 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC06D17.
    case 0xC06D1A: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/overworld/door_transition.asm:104 TAY
    case 0xC06D1B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC06D1C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:106 LDA @LOCAL02
    case 0xC06D1E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/door_transition.asm:107 JSL ASR8_UNKNOWN1
    case 0xC06D20: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/overworld/door_transition.asm:108 ASL
    case 0xC06D24: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:109 REP #PROC_FLAGS::INDEX8
    case 0xC06D25: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:110 TAX
    case 0xC06D27: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:111 LDA f:UNKNOWN_C3E1D8,X
    case 0xC06D28: cpu.execute_instruction<0xBF>(0xC3E1D8, 4); return true;
    // src/overworld/door_transition.asm:112 CMP #2
    case 0xC06D2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/door_transition.asm:112 CMP #2
    // Overlapping static entry reached from 0xC06D2C.
    case 0xC06D2E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/door_transition.asm:113 BEQ @UNKNOWN8
    case 0xC06D2F: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:114 LDA @VIRTUAL02
    case 0xC06D31: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:115 CLC
    case 0xC06D33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:116 ADC #8
    case 0xC06D34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/door_transition.asm:116 ADC #8
    // Overlapping static entry reached from 0xC06D34.
    case 0xC06D36: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/door_transition.asm:117 STA @VIRTUAL02
    case 0xC06D37: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:119 LDA DEBUG
    case 0xC06D39: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/overworld/door_transition.asm:120 BEQ @UNKNOWN10
    case 0xC06D3C: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/overworld/door_transition.asm:121 LDA DEBUG_MODE_NUMBER
    case 0xC06D3E: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/overworld/door_transition.asm:122 CMP #6
    case 0xC06D41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/door_transition.asm:122 CMP #6
    // Overlapping static entry reached from 0xC06D41.
    case 0xC06D43: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/door_transition.asm:123 BEQ @UNKNOWN9
    case 0xC06D44: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:124 LDX @VIRTUAL04
    case 0xC06D46: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:125 LDA @VIRTUAL02
    case 0xC06D48: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:126 JSL UNKNOWN_C068F4
    case 0xC06D4A: cpu.execute_instruction<0x22>(0xC068F4, 4); return true;
    // src/overworld/door_transition.asm:128 LDA REPLAY_MODE_ACTIVE
    case 0xC06D4E: cpu.execute_instruction<0xAD>(0x00B567, 3); return true;
    // src/overworld/door_transition.asm:129 BNE @UNKNOWN11
    case 0xC06D51: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/overworld/door_transition.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC06D53: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:131 LDY #door_data::unknown10
    case 0xC06D55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/overworld/door_transition.asm:131 LDY #door_data::unknown10
    // Overlapping static entry reached from 0xC06D55.
    case 0xC06D57: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/door_transition.asm:132 LDA [@VIRTUAL0A],Y
    case 0xC06D58: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC06D5A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:134 AND #$00FF
    case 0xC06D5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC06D5C.
    case 0xC06D5E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:135 JSL UNKNOWN_EFE895
    case 0xC06D5F: cpu.execute_instruction<0x22>(0xEFE895, 4); return true;
    // src/overworld/door_transition.asm:136 BRA @UNKNOWN11
    case 0xC06D63: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:138 LDX @VIRTUAL04
    case 0xC06D65: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:139 LDA @VIRTUAL02
    case 0xC06D67: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:140 JSL UNKNOWN_C068F4
    case 0xC06D69: cpu.execute_instruction<0x22>(0xC068F4, 4); return true;
    // src/overworld/door_transition.asm:142 LDX @VIRTUAL04
    case 0xC06D6D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:143 LDA @VIRTUAL02
    case 0xC06D6F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:144 JSL LOAD_MAP_AT_POSITION
    case 0xC06D71: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/overworld/door_transition.asm:145 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC06D75: cpu.execute_instruction<0x9C>(0x002890, 3); return true;
    // src/overworld/door_transition.asm:146 STZ GAME_STATE+game_state::walking_style
    case 0xC06D78: cpu.execute_instruction<0x9C>(0x009883, 3); return true;
    // src/overworld/door_transition.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC06D7B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:148 LDA #14
    case 0xC06D7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00480E, 3); return true;
    // src/overworld/door_transition.asm:149 PHA
    case 0xC06D7F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC06D80: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/door_transition.asm:151 LDY #door_data::unknown6
    case 0xC06D82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/door_transition.asm:151 LDY #door_data::unknown6
    // Overlapping static entry reached from 0xC06D82.
    case 0xC06D84: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/door_transition.asm:152 LDA [@VIRTUAL0A],Y
    case 0xC06D85: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:153 SEP #PROC_FLAGS::INDEX8
    case 0xC06D87: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:154 PLY
    case 0xC06D89: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:155 JSL ASR8_UNKNOWN1
    case 0xC06D8A: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/overworld/door_transition.asm:156 ASL
    case 0xC06D8E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:157 REP #PROC_FLAGS::INDEX8
    case 0xC06D8F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/overworld/door_transition.asm:158 TAX
    case 0xC06D91: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:159 LDA f:UNKNOWN_C3E1D8,X
    case 0xC06D92: cpu.execute_instruction<0xBF>(0xC3E1D8, 4); return true;
    // src/overworld/door_transition.asm:160 TAY
    case 0xC06D96: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:161 LDX @VIRTUAL04
    case 0xC06D97: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:162 LDA @VIRTUAL02
    case 0xC06D99: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/door_transition.asm:163 JSL UNKNOWN_C03FA9
    case 0xC06D9B: cpu.execute_instruction<0x22>(0xC03FA9, 4); return true;
    // src/overworld/door_transition.asm:164 LDA DEBUG
    case 0xC06D9F: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/overworld/door_transition.asm:165 BEQ @UNKNOWN12
    case 0xC06DA2: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/overworld/door_transition.asm:166 LDA REPLAY_MODE_ACTIVE
    case 0xC06DA4: cpu.execute_instruction<0xAD>(0x00B567, 3); return true;
    // src/overworld/door_transition.asm:167 BNE @UNKNOWN12
    case 0xC06DA7: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/door_transition.asm:168 JSL SAVE_REPLAY_SAVE_SLOT
    case 0xC06DA9: cpu.execute_instruction<0x22>(0xEFE771, 4); return true;
    // src/overworld/door_transition.asm:170 JSL UNKNOWN_C069AF
    case 0xC06DAD: cpu.execute_instruction<0x22>(0xC069AF, 4); return true;
    // src/overworld/door_transition.asm:171 JSL UNKNOWN_C065A3
    case 0xC06DB1: cpu.execute_instruction<0x22>(0xC065A3, 4); return true;
    // src/overworld/door_transition.asm:172 LDA #door_data::unknown10
    case 0xC06DB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/overworld/door_transition.asm:172 LDA #door_data::unknown10
    // Overlapping static entry reached from 0xC06DB5.
    case 0xC06DB7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06DB8: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06DBA: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06DBC: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06DBE: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/door_transition.asm:174 CLC
    case 0xC06DC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:175 ADC @VIRTUAL06
    case 0xC06DC1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:176 STA @VIRTUAL06
    case 0xC06DC3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:177 LDX #0
    case 0xC06DC5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/door_transition.asm:177 LDX #0
    // Overlapping static entry reached from 0xC06DC5.
    case 0xC06DC7: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:178 LDA [@VIRTUAL06]
    case 0xC06DC8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:179 AND #$00FF
    case 0xC06DCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC06DCA.
    case 0xC06DCC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:180 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC06DCD: cpu.execute_instruction<0x22>(0xC068AF, 4); return true;
    // src/overworld/door_transition.asm:181 JSL PLAY_SOUND
    case 0xC06DD1: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/overworld/door_transition.asm:182 LDA DISABLED_TRANSITIONS
    case 0xC06DD5: cpu.execute_instruction<0xAD>(0x00B4B6, 3); return true;
    // src/overworld/door_transition.asm:183 BEQ @UNKNOWN13
    case 0xC06DD8: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/door_transition.asm:184 LDX #1
    case 0xC06DDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/door_transition.asm:184 LDX #1
    // Overlapping static entry reached from 0xC06DDA.
    case 0xC06DDC: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/door_transition.asm:185 TXA
    case 0xC06DDD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/door_transition.asm:186 JSL FADE_IN
    case 0xC06DDE: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/overworld/door_transition.asm:187 BRA @UNKNOWN14
    case 0xC06DE2: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/door_transition.asm:189 LDX #0
    case 0xC06DE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/door_transition.asm:189 LDX #0
    // Overlapping static entry reached from 0xC06DE4.
    case 0xC06DE6: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/door_transition.asm:190 LDA [@VIRTUAL06]
    case 0xC06DE7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/door_transition.asm:191 AND #$00FF
    case 0xC06DE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/door_transition.asm:191 AND #$00FF
    // Overlapping static entry reached from 0xC06DE9.
    case 0xC06DEB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/door_transition.asm:192 JSL SCREEN_TRANSITION
    case 0xC06DEC: cpu.execute_instruction<0x22>(0xC06662, 4); return true;
    // src/overworld/door_transition.asm:194 LDA #$FFFF
    case 0xC06DF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/door_transition.asm:194 LDA #$FFFF
    // Overlapping static entry reached from 0xC06DF0.
    case 0xC06DF2: cpu.execute_instruction<0xFF>(0x5DC48D, 4); return true;
    // src/overworld/door_transition.asm:195 STA STAIRS_DIRECTION
    case 0xC06DF3: cpu.execute_instruction<0x8D>(0x005DC4, 3); return true;
    // src/overworld/door_transition.asm:196 STZ PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC06DF6: cpu.execute_instruction<0x9C>(0x000A34, 3); return true;
    // src/overworld/door_transition.asm:197 JSL SPAWN_BUZZ_BUZZ
    case 0xC06DF9: cpu.execute_instruction<0x22>(0xC06B21, 4); return true;
    // src/overworld/door_transition.asm:198 STZ USING_DOOR
    case 0xC06DFD: cpu.execute_instruction<0x9C>(0x005DC2, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/door_transition.asm:200 END_C_FUNCTION
    case 0xC06E00: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/door_transition.asm:200 END_C_FUNCTION
    case 0xC06E01: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/enable_your_sanctuary_display.asm (source_named).
bool execute_overworld_enable_your_sanctuary_display_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/enable_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4DED0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/enable_your_sanctuary_display.asm:5 LDY #$6000
    case 0xC4DED2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:5 LDY #$6000
    // Overlapping static entry reached from 0xC4DED2.
    case 0xC4DED4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/enable_your_sanctuary_display.asm:6 LDX #$3800
    case 0xC4DED5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:6 LDX #$3800
    // Overlapping static entry reached from 0xC4DED5.
    case 0xC4DED7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/enable_your_sanctuary_display.asm:7 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC4DED8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:7 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC4DED8.
    case 0xC4DEDA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/enable_your_sanctuary_display.asm:8 JSL SET_BG1_VRAM_LOCATION
    case 0xC4DEDB: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/overworld/enable_your_sanctuary_display.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DEDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/enable_your_sanctuary_display.asm:10 LDA #$11
    case 0xC4DEE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:11 STA TM_MIRROR
    case 0xC4DEE3: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/enable_your_sanctuary_display.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DEE1.
    case 0xC4DEE4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/enable_your_sanctuary_display.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DEE4.
    case 0xC4DEE5: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/enable_your_sanctuary_display.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC4DEE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/enable_your_sanctuary_display.asm:13 END_C_FUNCTION
    case 0xC4DEE8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/find_free_space_7E4682.asm (source_named).
bool execute_overworld_find_free_space_7e4682_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_free_space_7E4682.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01A9D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_free_space_7E4682.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC01A9B.
    case 0xC01A9E: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01A9F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AA0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AA1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC01AA2.
    case 0xC01AA4: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AA5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AA6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:10 STA @VIRTUAL02
    case 0xC01AA7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC01AA4.
    case 0xC01AA8: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:11 LDX #0
    case 0xC01AA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:11 LDX #0
    // Overlapping static entry reached from 0xC01AA9.
    case 0xC01AAB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:12 STX @LOCAL01
    case 0xC01AAC: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:13 LDA @VIRTUAL02
    case 0xC01AAE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:14 STA UNREAD_7E4A6A
    case 0xC01AB0: cpu.execute_instruction<0x8D>(0x004A6A, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:15 BRA @UNKNOWN1
    case 0xC01AB3: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:17 LDA OVERWORLD_SPRITEMAPS + spritemap::special_flags,X
    case 0xC01AB5: cpu.execute_instruction<0xBD>(0x004682, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:18 AND #$00FF
    case 0xC01AB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC01AB8.
    case 0xC01ABA: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:19 CMP #<-1
    case 0xC01ABB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:19 CMP #<-1
    // Overlapping static entry reached from 0xC01ABB.
    case 0xC01ABD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:20 BEQ @UNKNOWN2
    case 0xC01ABE: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:21 TXA
    case 0xC01AC0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:22 CLC
    case 0xC01AC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:23 ADC #.SIZEOF(spritemap)
    case 0xC01AC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:23 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01AC2.
    case 0xC01AC4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:24 TAX
    case 0xC01AC5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:25 STX @LOCAL01
    case 0xC01AC6: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:27 CPX #$0380
    case 0xC01AC8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000380, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:27 CPX #$0380
    // Overlapping static entry reached from 0xC01AC8.
    case 0xC01ACA: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:28 BCC @UNKNOWN0
    case 0xC01ACB: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:28 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC01ACA.
    case 0xC01ACC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:29 LDA #.LOWORD(-255)
    case 0xC01ACD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00FF01, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:29 LDA #.LOWORD(-255)
    // Overlapping static entry reached from 0xC01ACD.
    case 0xC01ACF: cpu.execute_instruction<0xFF>(0x8A4180, 4); return true;
    // src/overworld/find_free_space_7E4682.asm:30 BRA @UNKNOWN7
    case 0xC01AD0: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:32 TXA
    case 0xC01AD2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:33 CLC
    case 0xC01AD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:34 ADC @VIRTUAL02
    case 0xC01AD4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:35 CMP #$0380
    case 0xC01AD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000380, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:35 CMP #$0380
    // Overlapping static entry reached from 0xC01AD6.
    case 0xC01AD8: cpu.execute_instruction<0x03>(0x0000B0, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:36 BCS @UNKNOWN6
    case 0xC01AD9: cpu.execute_instruction<0xB0>(0x000035, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:36 BCS @UNKNOWN6
    // Overlapping static entry reached from 0xC01AD8.
    case 0xC01ADA: cpu.execute_instruction<0x35>(0x00008A, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:37 TXA
    case 0xC01ADB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:38 STA @LOCAL00
    case 0xC01ADC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:39 BRA @UNKNOWN5
    case 0xC01ADE: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:41 TAX
    case 0xC01AE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:42 LDA OVERWORLD_SPRITEMAPS + spritemap::special_flags,X
    case 0xC01AE1: cpu.execute_instruction<0xBD>(0x004682, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:43 AND #$00FF
    case 0xC01AE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC01AE4.
    case 0xC01AE6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:44 CMP #<-1
    case 0xC01AE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:44 CMP #<-1
    // Overlapping static entry reached from 0xC01AE7.
    case 0xC01AE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:45 BEQ @UNKNOWN4
    case 0xC01AEA: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:46 LDA @LOCAL00
    case 0xC01AEC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:47 CLC
    case 0xC01AEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:48 ADC #.SIZEOF(spritemap)
    case 0xC01AEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:48 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01AEF.
    case 0xC01AF1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:49 TAX
    case 0xC01AF2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:50 STX @LOCAL01
    case 0xC01AF3: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:51 BRA @UNKNOWN1
    case 0xC01AF5: cpu.execute_instruction<0x80>(0x0000D1, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:53 LDA @LOCAL00
    case 0xC01AF7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:54 CLC
    case 0xC01AF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:55 ADC #.SIZEOF(spritemap)
    case 0xC01AFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:55 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01AFA.
    case 0xC01AFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:56 STA @LOCAL00
    case 0xC01AFD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:58 LDX @LOCAL01
    case 0xC01AFF: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:59 TXA
    case 0xC01B01: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:60 CLC
    case 0xC01B02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:61 ADC @VIRTUAL02
    case 0xC01B03: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:62 STA @VIRTUAL04
    case 0xC01B05: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:63 LDA @LOCAL00
    case 0xC01B07: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:64 CMP @VIRTUAL04
    case 0xC01B09: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:65 BCC @UNKNOWN3
    case 0xC01B0B: cpu.execute_instruction<0x90>(0x0000D3, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:66 TXA
    case 0xC01B0D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/find_free_space_7E4682.asm:67 BRA @UNKNOWN7
    case 0xC01B0E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/find_free_space_7E4682.asm:69 LDA #.LOWORD(-254)
    case 0xC01B10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x00FF02, 3); return true;
    // src/overworld/find_free_space_7E4682.asm:69 LDA #.LOWORD(-254)
    // Overlapping static entry reached from 0xC01B10.
    case 0xC01B12: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/find_free_space_7E4682.asm:71 END_C_FUNCTION
    case 0xC01B13: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/find_free_space_7E4682.asm:71 END_C_FUNCTION
    case 0xC01B14: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/find_nearby_checkable_tpt_entry.asm (source_named).
bool execute_overworld_find_nearby_checkable_tpt_entry_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04279: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC04276.
    case 0xC0427A: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC0427B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC0427C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC0427D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0427D.
    case 0xC0427F: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC04280: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    case 0xC04281: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04281.
    case 0xC04283: cpu.execute_instruction<0xFF>(0x5D628D, 4); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:10 STA INTERACTING_NPC_ID
    case 0xC04284: cpu.execute_instruction<0x8D>(0x005D62, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:11 STA INTERACTING_NPC_ENTITY
    case 0xC04287: cpu.execute_instruction<0x8D>(0x005D64, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:12 JSR UNKNOWN_C041E3
    case 0xC0428A: cpu.execute_instruction<0x20>(0x0041E3, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:13 STA @LOCAL01
    case 0xC0428D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    case 0xC0428F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0428F.
    case 0xC04291: cpu.execute_instruction<0xFF>(0xA229F0, 4); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:15 BEQ @UNKNOWN0
    case 0xC04292: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC04294: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000089, 2); else cpu.execute_instruction<0xA2>(0x009889, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC04291.
    case 0xC04295: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000098, 2); else cpu.execute_instruction<0x89>(0x008698, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC04294.
    case 0xC04296: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:17 STX @LOCAL00
    case 0xC04297: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:17 STX @LOCAL00
    // Overlapping static entry reached from 0xC04295.
    case 0xC04298: cpu.execute_instruction<0x0E>(0x0000BD, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:18 LDA __BSS_START__,X
    case 0xC04299: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:18 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC04298.
    case 0xC0429B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:19 ASL
    case 0xC0429C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:20 TAX
    case 0xC0429D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:21 LDA @LOCAL01
    case 0xC0429E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:22 CMP ENTITY_DIRECTIONS,X
    case 0xC042A0: cpu.execute_instruction<0xDD>(0x002AF6, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:23 BEQ @UNKNOWN0
    case 0xC042A3: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:24 STA GAME_STATE + game_state::leader_direction
    case 0xC042A5: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:25 LDX @LOCAL00
    case 0xC042A8: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:26 LDA __BSS_START__,X
    case 0xC042AA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:27 ASL
    case 0xC042AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:28 TAX
    case 0xC042AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:29 LDA @LOCAL01
    case 0xC042AF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:30 STA ENTITY_DIRECTIONS,X
    case 0xC042B1: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:31 LDX @LOCAL00
    case 0xC042B4: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:32 LDA __BSS_START__,X
    case 0xC042B6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:33 JSL UNKNOWN_C0A780
    case 0xC042B9: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // src/overworld/find_nearby_checkable_tpt_entry.asm:35 LDA INTERACTING_NPC_ID
    case 0xC042BD: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC042C0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/find_nearby_checkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC042C1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/find_nearby_talkable_tpt_entry.asm (source_named).
bool execute_overworld_find_nearby_talkable_tpt_entry_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04452: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC0444F.
    case 0xC04453: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC04454: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC04455: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC04456: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC04456.
    case 0xC04458: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC04459: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    case 0xC0445A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0445A.
    case 0xC0445C: cpu.execute_instruction<0xFF>(0x5D628D, 4); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:10 STA INTERACTING_NPC_ID
    case 0xC0445D: cpu.execute_instruction<0x8D>(0x005D62, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:11 STA INTERACTING_NPC_ENTITY
    case 0xC04460: cpu.execute_instruction<0x8D>(0x005D64, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:12 JSR UNKNOWN_C043BC
    case 0xC04463: cpu.execute_instruction<0x20>(0x0043BC, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:13 STA @LOCAL01
    case 0xC04466: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    case 0xC04468: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04468.
    case 0xC0446A: cpu.execute_instruction<0xFF>(0xA229F0, 4); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:15 BEQ @UNKNOWN0
    case 0xC0446B: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC0446D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000089, 2); else cpu.execute_instruction<0xA2>(0x009889, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC0446A.
    case 0xC0446E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000098, 2); else cpu.execute_instruction<0x89>(0x008698, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC0446D.
    case 0xC0446F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:17 STX @LOCAL00
    case 0xC04470: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:17 STX @LOCAL00
    // Overlapping static entry reached from 0xC0446E.
    case 0xC04471: cpu.execute_instruction<0x0E>(0x0000BD, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:18 LDA __BSS_START__,X
    case 0xC04472: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:18 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC04471.
    case 0xC04474: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:19 ASL
    case 0xC04475: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:20 TAX
    case 0xC04476: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:21 LDA @LOCAL01
    case 0xC04477: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:22 CMP ENTITY_DIRECTIONS,X
    case 0xC04479: cpu.execute_instruction<0xDD>(0x002AF6, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:23 BEQ @UNKNOWN0
    case 0xC0447C: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:24 STA GAME_STATE + game_state::leader_direction
    case 0xC0447E: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:25 LDX @LOCAL00
    case 0xC04481: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:26 LDA __BSS_START__,X
    case 0xC04483: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:27 ASL
    case 0xC04486: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:28 TAX
    case 0xC04487: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:29 LDA @LOCAL01
    case 0xC04488: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:30 STA ENTITY_DIRECTIONS,X
    case 0xC0448A: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:31 LDX @LOCAL00
    case 0xC0448D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:32 LDA __BSS_START__,X
    case 0xC0448F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:33 JSL UNKNOWN_C0A780
    case 0xC04492: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // src/overworld/find_nearby_talkable_tpt_entry.asm:35 LDA INTERACTING_NPC_ID
    case 0xC04496: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC04499: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC0449A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_direction_from_player_to_entity.asm (source_named).
bool execute_overworld_get_direction_from_player_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C4F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4F9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4FA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C4FB.
    case 0xC0C4FD: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4FE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0C4FF: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C4FD.
    case 0xC0C501: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:11 ASL
    case 0xC0C502: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:12 STA @LOCAL02
    case 0xC0C503: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:13 LDA GAME_STATE + game_state::leader_y_coord
    case 0xC0C505: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:14 STA @LOCAL00
    case 0xC0C508: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:15 LDY GAME_STATE + game_state::leader_x_coord
    case 0xC0C50A: cpu.execute_instruction<0xAC>(0x009877, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:16 LDA @LOCAL02
    case 0xC0C50D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:17 TAX
    case 0xC0C50F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:18 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C510: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:19 TAX
    case 0xC0C513: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:20 STX @LOCAL01
    case 0xC0C514: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:21 LDA @LOCAL02
    case 0xC0C516: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:22 TAX
    case 0xC0C518: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:23 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C519: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:24 LDX @LOCAL01
    case 0xC0C51C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/get_direction_from_player_to_entity.asm:25 JSL GET_DIRECTION_TO
    case 0xC0C51E: cpu.execute_instruction<0x22>(0xC45FA8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:26 END_C_FUNCTION
    case 0xC0C522: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:26 END_C_FUNCTION
    case 0xC0C523: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_direction_to.asm (source_named).
bool execute_overworld_get_direction_to_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_direction_to.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45FA8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC45FAA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC45FAB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC45FAC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC45FAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC45FAD.
    case 0xC45FAF: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC45FB0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC45FB1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:13 STX @VIRTUAL04
    case 0xC45FB2: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/overworld/get_direction_to.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC45FAF.
    case 0xC45FB3: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/overworld/get_direction_to.asm:14 STA @VIRTUAL02
    case 0xC45FB4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC45FB3.
    case 0xC45FB5: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/overworld/get_direction_to.asm:15 LDX @PARAM03
    case 0xC45FB6: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/overworld/get_direction_to.asm:16 TXA
    case 0xC45FB8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:17 STA @LOCAL01
    case 0xC45FB9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:18 TYA
    case 0xC45FBB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:19 SEC
    case 0xC45FBC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:20 SBC @VIRTUAL02
    case 0xC45FBD: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:21 TAX
    case 0xC45FBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:22 LDA @LOCAL01
    case 0xC45FC0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:23 SEC
    case 0xC45FC2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:24 SBC @VIRTUAL04
    case 0xC45FC3: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/get_direction_to.asm:25 STA @LOCAL00
    case 0xC45FC5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_direction_to.asm:26 STX @VIRTUAL02
    case 0xC45FC7: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:27 LDA #0
    case 0xC45FC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:27 LDA #0
    // Overlapping static entry reached from 0xC45FC9.
    case 0xC45FCB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_direction_to.asm:28 CLC
    case 0xC45FCC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:29 SBC @VIRTUAL02
    case 0xC45FCD: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC45FCF: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC45FD1: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC45FD3: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC45FD5: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/overworld/get_direction_to.asm:31 LDX #0
    case 0xC45FD7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:31 LDX #0
    // Overlapping static entry reached from 0xC45FD7.
    case 0xC45FD9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/get_direction_to.asm:32 BRA @UNKNOWN4
    case 0xC45FDA: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/get_direction_to.asm:34 CPX #0
    case 0xC45FDC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:34 CPX #0
    // Overlapping static entry reached from 0xC45FDC.
    case 0xC45FDE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/get_direction_to.asm:35 BNE @UNKNOWN3
    case 0xC45FDF: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/get_direction_to.asm:36 LDX #1
    case 0xC45FE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/get_direction_to.asm:36 LDX #1
    // Overlapping static entry reached from 0xC45FE1.
    case 0xC45FE3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/get_direction_to.asm:37 BRA @UNKNOWN4
    case 0xC45FE4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/get_direction_to.asm:39 LDX #2
    case 0xC45FE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/get_direction_to.asm:39 LDX #2
    // Overlapping static entry reached from 0xC45FE6.
    case 0xC45FE8: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/get_direction_to.asm:41 LDA @LOCAL00
    case 0xC45FE9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/get_direction_to.asm:42 STA @VIRTUAL02
    case 0xC45FEB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:43 LDA #0
    case 0xC45FED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:43 LDA #0
    // Overlapping static entry reached from 0xC45FED.
    case 0xC45FEF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_direction_to.asm:44 CLC
    case 0xC45FF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:45 SBC @VIRTUAL02
    case 0xC45FF1: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC45FF3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC45FF5: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC45FF7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC45FF9: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/overworld/get_direction_to.asm:47 LDA #0
    case 0xC45FFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_direction_to.asm:47 LDA #0
    // Overlapping static entry reached from 0xC45FFB.
    case 0xC45FFD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_direction_to.asm:48 STA @LOCAL01
    case 0xC45FFE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:49 BRA @UNKNOWN9
    case 0xC46000: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:51 LDA @LOCAL00
    case 0xC46002: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/get_direction_to.asm:52 BNE @UNKNOWN8
    case 0xC46004: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/overworld/get_direction_to.asm:53 LDA #1
    case 0xC46006: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/get_direction_to.asm:53 LDA #1
    // Overlapping static entry reached from 0xC46006.
    case 0xC46008: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_direction_to.asm:54 STA @LOCAL01
    case 0xC46009: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:55 BRA @UNKNOWN9
    case 0xC4600B: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/overworld/get_direction_to.asm:57 LDA #2
    case 0xC4600D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/get_direction_to.asm:57 LDA #2
    // Overlapping static entry reached from 0xC4600D.
    case 0xC4600F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_direction_to.asm:58 STA @LOCAL01
    case 0xC46010: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_direction_to.asm:60 TXA
    case 0xC46012: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:61 ASL
    case 0xC46013: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:62 STA @VIRTUAL02
    case 0xC46014: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:63 LDA @LOCAL01
    case 0xC46016: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC46018: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4601A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4601B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4601D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:65 CLC
    case 0xC4601E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:66 ADC @VIRTUAL02
    case 0xC4601F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/get_direction_to.asm:67 TAX
    case 0xC46021: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_direction_to.asm:68 LDA f:DIRECTION_MATRIX,X
    case 0xC46022: cpu.execute_instruction<0xBF>(0xC45F96, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_direction_to.asm:69 END_C_FUNCTION
    case 0xC46026: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_direction_to.asm:69 END_C_FUNCTION
    case 0xC46027: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_distance_to_magic_truffle.asm (source_named).
bool execute_overworld_get_distance_to_magic_truffle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC490EE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC490F0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC490F1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC490F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC490F2.
    case 0xC490F4: cpu.execute_instruction<0xFF>(0x78A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC490F5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:10 LDA #OVERWORLD_SPRITE::UNKNOWN2
    case 0xC490F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000178, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:10 LDA #OVERWORLD_SPRITE::UNKNOWN2
    // Overlapping static entry reached from 0xC490F6.
    case 0xC490F8: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    case 0xC490F9: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    // Overlapping static entry reached from 0xC490F8.
    case 0xC490FA: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    // Overlapping static entry reached from 0xC490FA.
    case 0xC490FB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:12 STA @VIRTUAL04
    case 0xC490FD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    case 0xC490FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC490FF.
    case 0xC49101: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:14 BNE @UNKNOWN0
    case 0xC49102: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    case 0xC49104: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    // Overlapping static entry reached from 0xC49101.
    case 0xC49105: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    // Overlapping static entry reached from 0xC49104.
    case 0xC49106: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:16 JMP @UNKNOWN15
    case 0xC49107: cpu.execute_instruction<0x4C>(0x0091EC, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:18 LDA @VIRTUAL04
    case 0xC4910A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:19 ASL
    case 0xC4910C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:20 TAX
    case 0xC4910D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:21 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4910E: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:22 STA @LOCAL02
    case 0xC49111: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:23 LDY GAME_STATE+game_state::leader_x_coord
    case 0xC49113: cpu.execute_instruction<0xAC>(0x009877, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:24 TYA
    case 0xC49116: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:25 SEC
    case 0xC49117: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:26 SBC #64
    case 0xC49118: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000040, 2); else cpu.execute_instruction<0xE9>(0x000040, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:26 SBC #64
    // Overlapping static entry reached from 0xC49118.
    case 0xC4911A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:27 STA @VIRTUAL02
    case 0xC4911B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:28 LDA @LOCAL02
    case 0xC4911D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:29 CMP @VIRTUAL02
    case 0xC4911F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:30 BCC @UNKNOWN2
    case 0xC49121: cpu.execute_instruction<0x90>(0x000031, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:31 TYA
    case 0xC49123: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:32 CLC
    case 0xC49124: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:33 ADC #64
    case 0xC49125: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:33 ADC #64
    // Overlapping static entry reached from 0xC49125.
    case 0xC49127: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:34 STA @VIRTUAL02
    case 0xC49128: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:35 LDA @LOCAL02
    case 0xC4912A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:36 CMP @VIRTUAL02
    case 0xC4912C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:37 BGT @UNKNOWN2
    case 0xC4912E: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:37 BGT @UNKNOWN2
    case 0xC49130: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:38 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC49132: cpu.execute_instruction<0xBC>(0x000BCA, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC49135: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:40 STA @LOCAL02
    case 0xC49138: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:41 SEC
    case 0xC4913A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:42 SBC #64
    case 0xC4913B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000040, 2); else cpu.execute_instruction<0xE9>(0x000040, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:42 SBC #64
    // Overlapping static entry reached from 0xC4913B.
    case 0xC4913D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:43 STA @VIRTUAL02
    case 0xC4913E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:44 TYA
    case 0xC49140: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:45 CMP @VIRTUAL02
    case 0xC49141: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:46 BCC @UNKNOWN2
    case 0xC49143: cpu.execute_instruction<0x90>(0x00000F, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:47 LDA @LOCAL02
    case 0xC49145: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:48 CLC
    case 0xC49147: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:49 ADC #64
    case 0xC49148: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:49 ADC #64
    // Overlapping static entry reached from 0xC49148.
    case 0xC4914A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:50 STA @VIRTUAL02
    case 0xC4914B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:51 TYA
    case 0xC4914D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:52 CMP @VIRTUAL02
    case 0xC4914E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:53 BLTEQ @UNKNOWN3
    case 0xC49150: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:53 BLTEQ @UNKNOWN3
    case 0xC49152: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:55 LDA #1
    case 0xC49154: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:55 LDA #1
    // Overlapping static entry reached from 0xC49154.
    case 0xC49156: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:56 JMP @UNKNOWN15
    case 0xC49157: cpu.execute_instruction<0x4C>(0x0091EC, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:58 LDA @LOCAL02
    case 0xC4915A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:59 STA @VIRTUAL02
    case 0xC4915C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:60 TYA
    case 0xC4915E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:61 SEC
    case 0xC4915F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:62 SBC @VIRTUAL02
    case 0xC49160: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:63 STA @LOCAL02
    case 0xC49162: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:64 STA @VIRTUAL02
    case 0xC49164: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:65 LDA #0
    case 0xC49166: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:65 LDA #0
    // Overlapping static entry reached from 0xC49166.
    case 0xC49168: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:66 CLC
    case 0xC49169: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:67 SBC @VIRTUAL02
    case 0xC4916A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC4916C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC4916E: cpu.execute_instruction<0x10>(0x000010, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC49170: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC49172: cpu.execute_instruction<0x30>(0x00000C, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:69 LDA @LOCAL02
    case 0xC49174: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:70 EOR #$FFFF
    case 0xC49176: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:70 EOR #$FFFF
    // Overlapping static entry reached from 0xC49176.
    case 0xC49178: cpu.execute_instruction<0xFF>(0x02851A, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:71 INC
    case 0xC49179: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:72 STA @VIRTUAL02
    case 0xC4917A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:73 STA @LOCAL01
    case 0xC4917C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:74 BRA @UNKNOWN7
    case 0xC4917E: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:76 LDA @LOCAL02
    case 0xC49180: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:77 STA @VIRTUAL02
    case 0xC49182: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:78 STA @LOCAL01
    case 0xC49184: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:80 LDA @VIRTUAL04
    case 0xC49186: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:81 ASL
    case 0xC49188: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:82 TAX
    case 0xC49189: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:83 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4918A: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:84 SEC
    case 0xC4918D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:85 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC4918E: cpu.execute_instruction<0xED>(0x009877, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:86 STA @LOCAL02
    case 0xC49191: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:87 STA @VIRTUAL02
    case 0xC49193: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:88 LDA #0
    case 0xC49195: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:88 LDA #0
    // Overlapping static entry reached from 0xC49195.
    case 0xC49197: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:89 CLC
    case 0xC49198: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:90 SBC @VIRTUAL02
    case 0xC49199: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC4919B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC4919D: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC4919F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC491A1: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:92 LDA @LOCAL02
    case 0xC491A3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:93 EOR #$FFFF
    case 0xC491A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:93 EOR #$FFFF
    // Overlapping static entry reached from 0xC491A5.
    case 0xC491A7: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:94 INC
    case 0xC491A8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:95 BRA @UNKNOWN11
    case 0xC491A9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:97 LDA @LOCAL02
    case 0xC491AB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:99 LDX @LOCAL01
    case 0xC491AD: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:100 STX @VIRTUAL02
    case 0xC491AF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:101 CLC
    case 0xC491B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:102 ADC @VIRTUAL02
    case 0xC491B2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:103 STA @VIRTUAL02
    case 0xC491B4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:104 LDA #16
    case 0xC491B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:104 LDA #16
    // Overlapping static entry reached from 0xC491B6.
    case 0xC491B8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:105 CLC
    case 0xC491B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:106 SBC @VIRTUAL02
    case 0xC491BA: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC491BC: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC491BE: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC491C0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC491C2: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:108 LDA #10
    case 0xC491C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:108 LDA #10
    // Overlapping static entry reached from 0xC491C4.
    case 0xC491C6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:109 BRA @UNKNOWN15
    case 0xC491C7: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:111 LDA @VIRTUAL04
    case 0xC491C9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:112 ASL
    case 0xC491CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:113 TAX
    case 0xC491CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:114 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC491CD: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:115 STA @LOCAL00
    case 0xC491D0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:116 LDY ENTITY_ABS_X_TABLE,X
    case 0xC491D2: cpu.execute_instruction<0xBC>(0x000B8E, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:117 LDX GAME_STATE + game_state::leader_y_coord
    case 0xC491D5: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:118 LDA GAME_STATE + game_state::leader_x_coord
    case 0xC491D8: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:119 JSL UNKNOWN_C41EFF
    case 0xC491DB: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:120 LDY #$2000
    case 0xC491DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:120 LDY #$2000
    // Overlapping static entry reached from 0xC491DF.
    case 0xC491E1: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:121 CLC
    case 0xC491E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    case 0xC491E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    // Overlapping static entry reached from 0xC491E1.
    case 0xC491E4: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    // Overlapping static entry reached from 0xC491E3.
    case 0xC491E5: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC491E6: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC491E5.
    case 0xC491E7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC491E7.
    case 0xC491E8: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:124 INC
    case 0xC491EA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/get_distance_to_magic_truffle.asm:125 INC
    case 0xC491EB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:127 END_C_FUNCTION
    case 0xC491EC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:127 END_C_FUNCTION
    case 0xC491ED: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_off_bicycle.asm (source_named).
bool execute_overworld_get_off_bicycle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_off_bicycle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1BEC6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BEC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BEC9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BECA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BECA.
    case 0xC1BECC: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BECD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/get_off_bicycle.asm:7 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1BECE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/get_off_bicycle.asm:7 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1BECE.
    case 0xC1BED0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/get_off_bicycle.asm:7 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1BED1: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    // Overlapping static entry reached from 0xC1BED4.
    case 0xC1BED6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BED7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BED9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    // Overlapping static entry reached from 0xC1BED9.
    case 0xC1BEDB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BEDC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_off_bicycle.asm:9 JSR SET_WORKING_MEMORY
    case 0xC1BEDE: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x00C95E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    // Overlapping static entry reached from 0xC1BEE1.
    case 0xC1BEE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000085, 2); else cpu.execute_instruction<0xC9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEE4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    // Overlapping static entry reached from 0xC1BEE3.
    case 0xC1BEE5: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    // Overlapping static entry reached from 0xC1BEE6.
    case 0xC1BEE8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEE9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEEB: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/get_off_bicycle.asm:11 JSR CLOSE_FOCUS_WINDOW
    case 0xC1BEEF: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/overworld/get_off_bicycle.asm:12 JSL WINDOW_TICK
    case 0xC1BEF2: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/overworld/get_off_bicycle.asm:13 JSL UNKNOWN_C03CFD
    case 0xC1BEF6: cpu.execute_instruction<0x22>(0xC03CFD, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_off_bicycle.asm:14 END_C_FUNCTION
    case 0xC1BEFA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_off_bicycle.asm:14 END_C_FUNCTION
    case 0xC1BEFB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_on_bicycle.asm (source_named).
bool execute_overworld_get_on_bicycle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_on_bicycle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03C5E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03C60: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03C61: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03C62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC03C62.
    case 0xC03C64: cpu.execute_instruction<0xFF>(0xA3AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03C65: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/get_on_bicycle.asm:8 LDA GAME_STATE+game_state::party_count
    case 0xC03C66: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/overworld/get_on_bicycle.asm:8 LDA GAME_STATE+game_state::party_count
    // Overlapping static entry reached from 0xC03C64.
    case 0xC03C68: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_on_bicycle.asm:9 AND #$00FF
    case 0xC03C69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_on_bicycle.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC03C69.
    case 0xC03C6B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/get_on_bicycle.asm:10 CMP #1
    case 0xC03C6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/get_on_bicycle.asm:10 CMP #1
    // Overlapping static entry reached from 0xC03C6C.
    case 0xC03C6E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/get_on_bicycle.asm:11 BNEL @UNKNOWN3
    case 0xC03C6F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/get_on_bicycle.asm:11 BNEL @UNKNOWN3
    case 0xC03C71: cpu.execute_instruction<0x4C>(0x003CFB, 3); return true;
    // src/overworld/get_on_bicycle.asm:12 LDA GAME_STATE + game_state::unknown96
    case 0xC03C74: cpu.execute_instruction<0xAD>(0x00988B, 3); return true;
    // src/overworld/get_on_bicycle.asm:13 AND #$00FF
    case 0xC03C77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_on_bicycle.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC03C77.
    case 0xC03C79: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/get_on_bicycle.asm:14 CMP #1
    case 0xC03C7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/get_on_bicycle.asm:14 CMP #1
    // Overlapping static entry reached from 0xC03C7A.
    case 0xC03C7C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/get_on_bicycle.asm:15 BNEL @UNKNOWN3
    case 0xC03C7D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/get_on_bicycle.asm:15 BNEL @UNKNOWN3
    case 0xC03C7F: cpu.execute_instruction<0x4C>(0x003CFB, 3); return true;
    // src/overworld/get_on_bicycle.asm:16 LDA DISABLE_MUSIC_CHANGES
    case 0xC03C82: cpu.execute_instruction<0xAD>(0x005DD8, 3); return true;
    // src/overworld/get_on_bicycle.asm:17 BNE @UNKNOWN2
    case 0xC03C85: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/overworld/get_on_bicycle.asm:18 LDA #MUSIC::BICYCLE
    case 0xC03C87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x000052, 3); return true;
    // src/overworld/get_on_bicycle.asm:18 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC03C87.
    case 0xC03C89: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/get_on_bicycle.asm:19 JSL CHANGE_MUSIC
    case 0xC03C8A: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/overworld/get_on_bicycle.asm:21 LDA #24
    case 0xC03C8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/overworld/get_on_bicycle.asm:21 LDA #24
    // Overlapping static entry reached from 0xC03C8E.
    case 0xC03C90: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/get_on_bicycle.asm:22 JSL UNKNOWN_C02140
    case 0xC03C91: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/overworld/get_on_bicycle.asm:23 LDA #6
    case 0xC03C95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/overworld/get_on_bicycle.asm:23 LDA #6
    // Overlapping static entry reached from 0xC03C95.
    case 0xC03C97: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/get_on_bicycle.asm:24 STA GAME_STATE + game_state::unknown92
    case 0xC03C98: cpu.execute_instruction<0x8D>(0x009887, 3); return true;
    // src/overworld/get_on_bicycle.asm:25 LDA #WALKING_STYLE::BICYCLE
    case 0xC03C9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/get_on_bicycle.asm:25 LDA #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC03C9B.
    case 0xC03C9D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/get_on_bicycle.asm:26 STA GAME_STATE+game_state::walking_style
    case 0xC03C9E: cpu.execute_instruction<0x8D>(0x009883, 3); return true;
    // src/overworld/get_on_bicycle.asm:27 STZ PARTY_CHARACTERS+char_struct::position_index
    case 0xC03CA1: cpu.execute_instruction<0x9C>(0x009A0B, 3); return true;
    // src/overworld/get_on_bicycle.asm:28 STZ GAME_STATE + game_state::unknown88
    case 0xC03CA4: cpu.execute_instruction<0x9C>(0x00987D, 3); return true;
    // src/overworld/get_on_bicycle.asm:29 STZ NEW_ENTITY_VAR0
    case 0xC03CA7: cpu.execute_instruction<0x9C>(0x000A38, 3); return true;
    // src/overworld/get_on_bicycle.asm:30 STZ NEW_ENTITY_VAR1
    case 0xC03CAA: cpu.execute_instruction<0x9C>(0x000A3A, 3); return true;
    // src/overworld/get_on_bicycle.asm:31 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03CAD: cpu.execute_instruction<0xAD>(0x000BBE, 3); return true;
    // src/overworld/get_on_bicycle.asm:32 STA @LOCAL00
    case 0xC03CB0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_on_bicycle.asm:33 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03CB2: cpu.execute_instruction<0xAD>(0x000BFA, 3); return true;
    // src/overworld/get_on_bicycle.asm:34 STA @LOCAL01
    case 0xC03CB5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/get_on_bicycle.asm:35 LDY #24
    case 0xC03CB7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/overworld/get_on_bicycle.asm:35 LDY #24
    // Overlapping static entry reached from 0xC03CB7.
    case 0xC03CB9: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/get_on_bicycle.asm:36 LDX #EVENT_SCRIPT::EVENT_002
    case 0xC03CBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/get_on_bicycle.asm:36 LDX #EVENT_SCRIPT::EVENT_002
    // Overlapping static entry reached from 0xC03CBA.
    case 0xC03CBC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/get_on_bicycle.asm:37 LDA #OVERWORLD_SPRITE::NESS_BICYCLE
    case 0xC03CBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/overworld/get_on_bicycle.asm:37 LDA #OVERWORLD_SPRITE::NESS_BICYCLE
    // Overlapping static entry reached from 0xC03CBD.
    case 0xC03CBF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/get_on_bicycle.asm:38 JSL CREATE_ENTITY
    case 0xC03CC0: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/overworld/get_on_bicycle.asm:39 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    case 0xC03CC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E6, 2); else cpu.execute_instruction<0xA2>(0x0010E6, 3); return true;
    // src/overworld/get_on_bicycle.asm:39 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    // Overlapping static entry reached from 0xC03CC4.
    case 0xC03CC6: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/overworld/get_on_bicycle.asm:40 LDA __BSS_START__,X
    case 0xC03CC7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:40 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03CC6.
    case 0xC03CC8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/get_on_bicycle.asm:41 ORA #OBJECT_TICK_DISABLED
    case 0xC03CCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/overworld/get_on_bicycle.asm:41 ORA #OBJECT_TICK_DISABLED
    // Overlapping static entry reached from 0xC03CCA.
    case 0xC03CCC: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/get_on_bicycle.asm:42 STA __BSS_START__,X
    case 0xC03CCD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:43 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    case 0xC03CD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000032, 2); else cpu.execute_instruction<0xA2>(0x001032, 3); return true;
    // src/overworld/get_on_bicycle.asm:43 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    // Overlapping static entry reached from 0xC03CD0.
    case 0xC03CD2: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/overworld/get_on_bicycle.asm:44 LDA __BSS_START__,X
    case 0xC03CD3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:44 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03CD2.
    case 0xC03CD4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/get_on_bicycle.asm:45 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    case 0xC03CD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x003000, 3); return true;
    // src/overworld/get_on_bicycle.asm:45 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    // Overlapping static entry reached from 0xC03CD6.
    case 0xC03CD8: cpu.execute_instruction<0x30>(0x00009D, 2); return true;
    // src/overworld/get_on_bicycle.asm:46 STA __BSS_START__,X
    case 0xC03CD9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:46 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03CD8.
    case 0xC03CDA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/get_on_bicycle.asm:47 STZ ENTITY_ANIMATION_FRAME + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03CDC: cpu.execute_instruction<0x9C>(0x001122, 3); return true;
    // src/overworld/get_on_bicycle.asm:48 LDA GAME_STATE+game_state::leader_direction
    case 0xC03CDF: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/overworld/get_on_bicycle.asm:49 STA ENTITY_DIRECTIONS + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03CE2: cpu.execute_instruction<0x8D>(0x002B26, 3); return true;
    // src/overworld/get_on_bicycle.asm:50 LDA #0
    case 0xC03CE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/get_on_bicycle.asm:50 LDA #0
    // Overlapping static entry reached from 0xC03CE5.
    case 0xC03CE7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/get_on_bicycle.asm:51 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC03CE8: cpu.execute_instruction<0x22>(0xC4FD45, 4); return true;
    // src/overworld/get_on_bicycle.asm:52 LDA #1
    case 0xC03CEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/get_on_bicycle.asm:52 LDA #1
    // Overlapping static entry reached from 0xC03CEC.
    case 0xC03CEE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/get_on_bicycle.asm:53 STA GAME_STATE + game_state::unknown90
    case 0xC03CEF: cpu.execute_instruction<0x8D>(0x009885, 3); return true;
    // src/overworld/get_on_bicycle.asm:54 STA UNREAD_7E5DBA
    case 0xC03CF2: cpu.execute_instruction<0x8D>(0x005DBA, 3); return true;
    // src/overworld/get_on_bicycle.asm:55 LDA #2
    case 0xC03CF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/get_on_bicycle.asm:55 LDA #2
    // Overlapping static entry reached from 0xC03CF5.
    case 0xC03CF7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/get_on_bicycle.asm:56 STA INPUT_DISABLE_FRAME_COUNTER
    case 0xC03CF8: cpu.execute_instruction<0x8D>(0x005D74, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_on_bicycle.asm:58 END_C_FUNCTION
    case 0xC03CFB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_on_bicycle.asm:58 END_C_FUNCTION
    case 0xC03CFC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_opposite_direction_from_player_to_entity.asm (source_named).
bool execute_overworld_get_opposite_direction_from_player_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_opposite_direction_from_player_to_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C608: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:5 JSL GET_DIRECTION_FROM_PLAYER_TO_ENTITY
    case 0xC0C60A: cpu.execute_instruction<0x22>(0xC0C4F7, 4); return true;
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:6 ASL
    case 0xC0C60E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:7 TAX
    case 0xC0C60F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:8 LDA f:OPPOSITE_DIRECTIONS,X
    case 0xC0C610: cpu.execute_instruction<0xBF>(0xC0C4E7, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_opposite_direction_from_player_to_entity.asm:9 END_C_FUNCTION
    case 0xC0C614: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_position_of_party_member.asm (source_named).
bool execute_overworld_get_position_of_party_member_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_position_of_party_member.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46BE9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BEB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BEC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC46BEE.
    case 0xC46BF0: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BF1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BF2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:10 TAX
    case 0xC46BF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:11 LDY CURRENT_ENTITY_SLOT
    case 0xC46BF4: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/overworld/get_position_of_party_member.asm:12 STY @LOCAL02
    case 0xC46BF7: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/get_position_of_party_member.asm:13 CPX #<-2
    case 0xC46BF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FE, 2); else cpu.execute_instruction<0xE0>(0x0000FE, 3); return true;
    // src/overworld/get_position_of_party_member.asm:13 CPX #<-2
    // Overlapping static entry reached from 0xC46BF9.
    case 0xC46BFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/get_position_of_party_member.asm:14 BNE @UNKNOWN0
    case 0xC46BFC: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/overworld/get_position_of_party_member.asm:15 LDA GAME_STATE+game_state::party_count
    case 0xC46BFE: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/overworld/get_position_of_party_member.asm:16 AND #$00FF
    case 0xC46C01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_position_of_party_member.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC46C01.
    case 0xC46C03: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/get_position_of_party_member.asm:17 TAX
    case 0xC46C04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:18 STX @LOCAL01
    case 0xC46C05: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/get_position_of_party_member.asm:19 TXA
    case 0xC46C07: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:20 DEC
    case 0xC46C08: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:21 ASL
    case 0xC46C09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:28 TAX
    case 0xC46C0A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:29 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC46C0B: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/overworld/get_position_of_party_member.asm:31 STA @LOCAL00
    case 0xC46C0E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_position_of_party_member.asm:32 ASL
    case 0xC46C10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:33 TAX
    case 0xC46C11: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:34 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46C12: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/get_position_of_party_member.asm:35 BNE @UNKNOWN1
    case 0xC46C15: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/overworld/get_position_of_party_member.asm:36 LDX @LOCAL01
    case 0xC46C17: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/get_position_of_party_member.asm:37 TXA
    case 0xC46C19: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:38 DEC
    case 0xC46C1A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:39 DEC
    case 0xC46C1B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:40 ASL
    case 0xC46C1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:47 TAX
    case 0xC46C1D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:48 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC46C1E: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/overworld/get_position_of_party_member.asm:50 STA @LOCAL00
    case 0xC46C21: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_position_of_party_member.asm:51 BRA @UNKNOWN1
    case 0xC46C23: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/overworld/get_position_of_party_member.asm:53 TXA
    case 0xC46C25: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC46C26: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/get_position_of_party_member.asm:55 JSL UNKNOWN_C4608C
    case 0xC46C28: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/overworld/get_position_of_party_member.asm:56 STA @LOCAL00
    case 0xC46C2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_position_of_party_member.asm:58 LDY @LOCAL02
    case 0xC46C2E: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/get_position_of_party_member.asm:59 TYA
    case 0xC46C30: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:60 ASL
    case 0xC46C31: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:61 TAY
    case 0xC46C32: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:62 LDA @LOCAL00
    case 0xC46C33: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/get_position_of_party_member.asm:63 ASL
    case 0xC46C35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:64 TAX
    case 0xC46C36: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_position_of_party_member.asm:65 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46C37: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/get_position_of_party_member.asm:66 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC46C3A: cpu.execute_instruction<0x99>(0x000FC6, 3); return true;
    // src/overworld/get_position_of_party_member.asm:67 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46C3D: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/overworld/get_position_of_party_member.asm:68 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC46C40: cpu.execute_instruction<0x99>(0x001002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_position_of_party_member.asm:69 END_C_FUNCTION
    case 0xC46C43: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_position_of_party_member.asm:69 END_C_FUNCTION
    case 0xC46C44: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_screen_transition_sound_effect.asm (source_named).
bool execute_overworld_get_screen_transition_sound_effect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC068AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC068B4.
    case 0xC068B6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:10 STA @LOCAL00
    case 0xC068B9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC068B6.
    case 0xC068BA: cpu.execute_instruction<0x0E>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001400, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068BB.
    case 0xC068BD: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068BE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068BD.
    case 0xC068BF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068BF.
    case 0xC068C1: cpu.execute_instruction<0xD0>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068C0.
    case 0xC068C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:12 LDA @LOCAL00
    case 0xC068C5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068C7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068CA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:14 CLC
    case 0xC068CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:15 ADC @VIRTUAL06
    case 0xC068CF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:16 STA @VIRTUAL06
    case 0xC068D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    case 0xC068D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    // Overlapping static entry reached from 0xC068D3.
    case 0xC068D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:18 BNE @UNKNOWN0
    case 0xC068D6: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC068D8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:20 LDY #screen_transition_config::ending_sound_effect
    case 0xC068DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000B, 2); else cpu.execute_instruction<0xA0>(0x00000B, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:20 LDY #screen_transition_config::ending_sound_effect
    // Overlapping static entry reached from 0xC068DA.
    case 0xC068DC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:21 LDA [@VIRTUAL06],Y
    case 0xC068DD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC068DF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:23 AND #$00FF
    case 0xC068E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC068E1.
    case 0xC068E3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:24 BRA @UNKNOWN1
    case 0xC068E4: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC068E6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:27 LDY #screen_transition_config::start_sound_effect
    case 0xC068E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:27 LDY #screen_transition_config::start_sound_effect
    // Overlapping static entry reached from 0xC068E8.
    case 0xC068EA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:28 LDA [@VIRTUAL06],Y
    case 0xC068EB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC068ED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:30 AND #$00FF
    case 0xC068EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_screen_transition_sound_effect.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC068EF.
    case 0xC068F1: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:32 END_C_FUNCTION
    case 0xC068F2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:32 END_C_FUNCTION
    case 0xC068F3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/get_town_map_id.asm (source_named).
bool execute_overworld_get_town_map_id_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_town_map_id.asm:3 BEGIN_C_FUNCTION
    case 0xC4D274: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4D276: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4D277: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4D278: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4D279: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D279.
    case 0xC4D27B: cpu.execute_instruction<0xFF>(0xEB685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4D27C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4D27D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:8 XBA
    case 0xC4D27E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:9 AND #$00FF
    case 0xC4D27F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_town_map_id.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC4D27F.
    case 0xC4D281: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/overworld/get_town_map_id.asm:10 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4D282: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:10 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4D284: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/overworld/get_town_map_id.asm:10 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4D285: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/get_town_map_id.asm:11 STA @VIRTUAL02
    case 0xC4D287: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/get_town_map_id.asm:12 LDY #128
    case 0xC4D289: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x000080, 3); return true;
    // src/overworld/get_town_map_id.asm:12 LDY #128
    // Overlapping static entry reached from 0xC4D289.
    case 0xC4D28B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/get_town_map_id.asm:13 TXA
    case 0xC4D28C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:14 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4D28D: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // include/macros.asm:712 STA scratch
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D291: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:713 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D293: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:714 ADC scratch
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D294: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:715 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D296: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:716 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D297: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:717 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D298: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:718 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D299: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:719 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D29A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:16 CLC
    case 0xC4D29B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:17 ADC @VIRTUAL02
    case 0xC4D29C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/get_town_map_id.asm:18 TAX
    case 0xC4D29E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/get_town_map_id.asm:19 LDA f:MAP_DATA_PER_SECTOR_TOWN_MAP_DATA,X
    case 0xC4D29F: cpu.execute_instruction<0xBF>(0xEFA70F, 4); return true;
    // src/overworld/get_town_map_id.asm:20 AND #$00FF
    case 0xC4D2A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/get_town_map_id.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC4D2A3.
    case 0xC4D2A5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_town_map_id.asm:21 END_C_FUNCTION
    case 0xC4D2A6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/get_town_map_id.asm:21 END_C_FUNCTION
    case 0xC4D2A7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
