// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/text/ccs/set_party_direction.asm (source_named).
bool execute_text_ccs_set_party_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_party_direction.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC166ED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC166EF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC166F0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC166F1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC166F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC166F2.
    case 0xC166F4: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC166F5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_party_direction.asm:8 END_STACK_VARS
    case 0xC166F6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_party_direction.asm:9 TXA
    case 0xC166F7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_party_direction.asm:10 BEQ @ARG_IS_ZERO
    case 0xC166F8: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_party_direction.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC166FA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_party_direction.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC166FC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_party_direction.asm:12 BRA @ARG_IS_NONZERO
    case 0xC166FE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_party_direction.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC16700: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/set_party_direction.asm:16 LDA @VIRTUAL06
    case 0xC16703: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_party_direction.asm:17 DEC
    case 0xC16705: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/set_party_direction.asm:18 JSL UNKNOWN_C46397
    case 0xC16706: cpu.execute_instruction<0x22>(0xC440F3, 4); return true;
    // src/text/ccs/set_party_direction.asm:19 LDA #NULL
    case 0xC1670A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_party_direction.asm:19 LDA #NULL
    // Overlapping static entry reached from 0xC1670A.
    case 0xC1670C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_party_direction.asm:20 PLD
    case 0xC1670D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_party_direction.asm:21 RTS
    case 0xC1670E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_player_movement_lock.asm (source_named).
bool execute_text_ccs_set_player_movement_lock_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_player_movement_lock.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16E23: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/set_player_movement_lock.asm:4 TXA
    case 0xC16E25: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_player_movement_lock.asm:5 JSL UNKNOWN_C46594
    case 0xC16E26: cpu.execute_instruction<0x22>(0xC44302, 4); return true;
    // src/text/ccs/set_player_movement_lock.asm:6 LDA #NULL
    case 0xC16E2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_player_movement_lock.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC16E2A.
    case 0xC16E2C: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/set_player_movement_lock.asm:7 RTS
    case 0xC16E2D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_player_movement_lock_if_camera_refocused.asm (source_named).
bool execute_text_ccs_set_player_movement_lock_if_camera_refocused_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16EB4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:4 TXA
    case 0xC16EB6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:5 JSL UNKNOWN_C46631
    case 0xC16EB7: cpu.execute_instruction<0x22>(0xC443A3, 4); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:6 LDA #NULL
    case 0xC16EBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC16EBB.
    case 0xC16EBD: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:7 RTS
    case 0xC16EBE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_respawn_point.asm (source_named).
bool execute_text_ccs_set_respawn_point_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_respawn_point.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC172B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC172B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC172B9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC172BA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC172BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC172BB.
    case 0xC172BD: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC172BE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_respawn_point.asm:8 END_STACK_VARS
    case 0xC172BF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_respawn_point.asm:9 TXA
    case 0xC172C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_respawn_point.asm:10 BEQ @UNKNOWN0
    case 0xC172C1: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_respawn_point.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC172C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_respawn_point.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC172C5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_respawn_point.asm:12 BRA @UNKNOWN1
    case 0xC172C7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_respawn_point.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC172C9: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/set_respawn_point.asm:16 LDA @VIRTUAL06
    case 0xC172CC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_respawn_point.asm:17 JSL SET_TELEPORT_BOX_DESTINATION
    case 0xC172CE: cpu.execute_instruction<0x22>(0xC23018, 4); return true;
    // src/text/ccs/set_respawn_point.asm:17 JSL SET_TELEPORT_BOX_DESTINATION
    // Overlapping static entry reached from 0xC172AD.
    case 0xC172CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_respawn_point.asm:17 JSL SET_TELEPORT_BOX_DESTINATION
    // Overlapping static entry reached from 0xC172CF.
    case 0xC172D0: cpu.execute_instruction<0x30>(0x0000C2, 2); return true;
    // src/text/ccs/set_respawn_point.asm:18 LDA #NULL
    case 0xC172D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_respawn_point.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC172D2.
    case 0xC172D4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_respawn_point.asm:19 PLD
    case 0xC172D5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_respawn_point.asm:20 RTS
    case 0xC172D6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_secmem.asm (source_named).
bool execute_text_ccs_set_secmem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_secmem.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14A1E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC14A20: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC14A21: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC14A22: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC14A23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14A23.
    case 0xC14A25: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC14A26: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_secmem.asm:8 END_STACK_VARS
    case 0xC14A27: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_secmem.asm:9 CPX #$0000
    case 0xC14A28: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/set_secmem.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14A25.
    case 0xC14A29: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/set_secmem.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14A28.
    case 0xC14A2A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/set_secmem.asm:10 BNE @UNKNOWN0
    case 0xC14A2B: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/text/ccs/set_secmem.asm:11 JSR GET_ARGUMENT_MEMORY
    case 0xC14A2D: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/set_secmem.asm:12 LDA @VIRTUAL06
    case 0xC14A30: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_secmem.asm:13 AND #$00FF
    case 0xC14A32: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_secmem.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC14A32.
    case 0xC14A34: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/set_secmem.asm:14 TAX
    case 0xC14A35: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_secmem.asm:16 TXA
    case 0xC14A36: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_secmem.asm:17 JSR SET_SECONDARY_MEMORY
    case 0xC14A37: cpu.execute_instruction<0x20>(0x000646, 3); return true;
    // src/text/ccs/set_secmem.asm:18 LDA #NULL
    case 0xC14A3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_secmem.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC14A3A.
    case 0xC14A3C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_secmem.asm:19 PLD
    case 0xC14A3D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_secmem.asm:20 RTS
    case 0xC14A3E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_sprite_entity_movement.asm (source_named).
bool execute_text_ccs_set_sprite_entity_movement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:3 BEGIN_C_FUNCTION
    case 0xC171AE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC171B0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC171B1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC171B2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC171B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC17190.
    case 0xC171B4: cpu.execute_instruction<0xEE>(0x005BFF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC171B3.
    case 0xC171B5: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC171B6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC171B7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:11 TXA
    case 0xC171B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:12 STA @LOCAL01
    case 0xC171B9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:13 LDA #3
    case 0xC171BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:13 LDA #3
    // Overlapping static entry reached from 0xC171BB.
    case 0xC171BD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:14 CLC
    case 0xC171BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC171BF: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC171C2: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC171C4: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC171C6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC171C8: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:17 LDA @LOCAL01
    case 0xC171CA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC171CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC171CE: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC171D1: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC171D4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC171D6: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F2)
    case 0xC171D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x0071AE, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F2)
    // Overlapping static entry reached from 0xC171D9.
    case 0xC171DB: cpu.execute_instruction<0x71>(0x000080, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:24 BRA @UNKNOWN3
    case 0xC171DC: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:24 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC171DB.
    case 0xC171DD: cpu.execute_instruction<0x3E>(0x0010E2, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC171DE: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:27 LDY #8
    case 0xC171E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    case 0xC171E2: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC171E0.
    case 0xC171E3: cpu.execute_instruction<0x6F>(0xFF299A, 4); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:29 AND #$00FF
    case 0xC171E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC171E5.
    case 0xC171E7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:30 JSL ASL16_ENTRY2
    case 0xC171E8: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:31 STA @VIRTUAL02
    case 0xC171EC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC171EE: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:33 AND #$00FF
    case 0xC171F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC171F1.
    case 0xC171F3: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:34 ORA @VIRTUAL02
    case 0xC171F4: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:35 REP #PROC_FLAGS::INDEX8
    case 0xC171F6: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:36 TAY
    case 0xC171F8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:37 STY @LOCAL00
    case 0xC171F9: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:38 SEP #PROC_FLAGS::INDEX8
    case 0xC171FB: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:39 LDY #8
    case 0xC171FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:40 LDA @LOCAL01
    case 0xC171FF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:40 LDA @LOCAL01
    // Overlapping static entry reached from 0xC171FD.
    case 0xC17200: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:41 JSL ASL16_ENTRY2
    case 0xC17201: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:41 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC17200.
    case 0xC17202: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:42 STA @VIRTUAL02
    case 0xC17205: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:43 LDA CC_ARGUMENT_STORAGE+2
    case 0xC17207: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:44 AND #$00FF
    case 0xC1720A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1720A.
    case 0xC1720C: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:45 ORA @VIRTUAL02
    case 0xC1720D: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:46 REP #PROC_FLAGS::INDEX8
    case 0xC1720F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:47 TAX
    case 0xC17211: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:48 LDY @LOCAL00
    case 0xC17212: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:49 TYA
    case 0xC17214: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:50 JSL UNKNOWN_C461CC
    case 0xC17215: cpu.execute_instruction<0x22>(0xC43F2C, 4); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:51 LDA #NULL
    case 0xC17219: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_sprite_entity_movement.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC17219.
    case 0xC1721B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:53 END_C_FUNCTION
    case 0xC1721C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:53 END_C_FUNCTION
    case 0xC1721D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_tpt_direction.asm (source_named).
bool execute_text_ccs_set_tpt_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_tpt_direction.asm:3 BEGIN_C_FUNCTION
    case 0xC1670F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16711: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16712: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16713: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16714: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16714.
    case 0xC16716: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16717: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16718: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:11 STX @LOCAL01
    case 0xC16719: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16716.
    case 0xC1671A: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    case 0xC1671B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    // Overlapping static entry reached from 0xC1671A.
    case 0xC1671C: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    // Overlapping static entry reached from 0xC1671B.
    case 0xC1671D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:13 CLC
    case 0xC1671E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1671F: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16722: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16724: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16726: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16728: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:16 TXA
    case 0xC1672A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1672B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1672D: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16730: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16733: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16735: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:22 LDA #.LOWORD(CC_1F_16)
    case 0xC16738: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00670F, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:22 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC16738.
    case 0xC1673A: cpu.execute_instruction<0x67>(0x000080, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:23 BRA @UNKNOWN7
    case 0xC1673B: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1673A.
    case 0xC1673C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000E2, 2); else cpu.execute_instruction<0x49>(0x0020E2, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC1673D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:25 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1673C.
    case 0xC1673E: cpu.execute_instruction<0x20>(0x0008A9, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:26 LDA #8
    case 0xC1673F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC16741: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC1673F.
    case 0xC16742: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:28 TAY
    case 0xC16743: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC16744: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16746: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:31 AND #$00FF
    case 0xC16749: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16749.
    case 0xC1674B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:32 JSL ASL16_ENTRY2
    case 0xC1674C: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/set_tpt_direction.asm:33 STA @VIRTUAL02
    case 0xC16750: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:34 LDA CC_ARGUMENT_STORAGE
    case 0xC16752: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:35 AND #$00FF
    case 0xC16755: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC16755.
    case 0xC16757: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:36 ORA @VIRTUAL02
    case 0xC16758: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:37 BEQ @ARG_1_IS_ZERO
    case 0xC1675A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC1675C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_tpt_direction.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC1675E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:39 BRA @ARG_1_IS_NONZERO
    case 0xC16760: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:41 JSR GET_WORKING_MEMORY
    case 0xC16762: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:43 LDA @VIRTUAL06
    case 0xC16765: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:44 STA @LOCAL00
    case 0xC16767: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:45 REP #PROC_FLAGS::INDEX8
    case 0xC16769: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:46 LDX @LOCAL01
    case 0xC1676B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:47 BEQ @ARG_2_IS_ZERO
    case 0xC1676D: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:48 TXA
    case 0xC1676F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16770: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_tpt_direction.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16772: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:50 BRA @ARG_2_IS_NONZERO
    case 0xC16774: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:52 JSR GET_ARGUMENT_MEMORY
    case 0xC16776: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:54 LDA @VIRTUAL06
    case 0xC16779: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:55 TAX
    case 0xC1677B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:56 DEX
    case 0xC1677C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_direction.asm:57 LDA @LOCAL00
    case 0xC1677D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_direction.asm:58 JSL UNKNOWN_C462FF
    case 0xC1677F: cpu.execute_instruction<0x22>(0xC4405B, 4); return true;
    // src/text/ccs/set_tpt_direction.asm:59 LDA #NULL
    case 0xC16783: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_tpt_direction.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC16783.
    case 0xC16785: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:61 END_C_FUNCTION
    case 0xC16786: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_tpt_direction.asm:61 END_C_FUNCTION
    case 0xC16787: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_tpt_entity_delay.asm (source_named).
bool execute_text_ccs_set_tpt_entity_delay_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:3 BEGIN_C_FUNCTION
    case 0xC16E2E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E30: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E31: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E32: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16E33.
    case 0xC16E35: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E36: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E37: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:10 TXA
    case 0xC16E38: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:11 STA @LOCAL00
    case 0xC16E39: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E3B: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:13 BNE @UNKNOWN0
    case 0xC16E3E: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:14 LDA @LOCAL00
    case 0xC16E40: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16E42: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E44: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16E47: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16E4A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E4C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:20 LDA #.LOWORD(CC_1F_E6)
    case 0xC16E4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x006E2E, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:20 LDA #.LOWORD(CC_1F_E6)
    // Overlapping static entry reached from 0xC16E4F.
    case 0xC16E51: cpu.execute_instruction<0x6E>(0x001B80, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:21 BRA @UNKNOWN1
    case 0xC16E52: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16E54: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:24 LDY #8
    case 0xC16E56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:25 LDA @LOCAL00
    case 0xC16E58: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16E56.
    case 0xC16E59: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:26 JSL ASL16_ENTRY2
    case 0xC16E5A: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16E59.
    case 0xC16E5C: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:27 STA @VIRTUAL02
    case 0xC16E5E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16E60: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:29 AND #$00FF
    case 0xC16E63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16E63.
    case 0xC16E65: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:30 ORA @VIRTUAL02
    case 0xC16E66: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:31 JSL UNKNOWN_C4655E
    case 0xC16E68: cpu.execute_instruction<0x22>(0xC442CC, 4); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:32 LDA #NULL
    case 0xC16E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_tpt_entity_delay.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16E6C.
    case 0xC16E6E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:34 END_C_FUNCTION
    case 0xC16E6F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:34 END_C_FUNCTION
    case 0xC16E70: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_tpt_entity_movement.asm (source_named).
bool execute_text_ccs_set_tpt_entity_movement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:3 BEGIN_C_FUNCTION
    case 0xC1713E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC17140: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC17141: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC17142: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC17143: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC17143.
    case 0xC17145: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC17146: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:10 END_STACK_VARS
    case 0xC17147: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:11 TXA
    case 0xC17148: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:12 STA @LOCAL01
    case 0xC17149: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:13 LDA #3
    case 0xC1714B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:13 LDA #3
    // Overlapping static entry reached from 0xC180B8.
    case 0xC1714C: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:13 LDA #3
    // Overlapping static entry reached from 0xC1714B.
    case 0xC1714D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:14 CLC
    case 0xC1714E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1714F: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17152: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17154: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17156: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17158: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:17 LDA @LOCAL01
    case 0xC1715A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1715C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1715E: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC17161: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC17164: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17166: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F1)
    case 0xC17169: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003E, 2); else cpu.execute_instruction<0xA9>(0x00713E, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F1)
    // Overlapping static entry reached from 0xC17169.
    case 0xC1716B: cpu.execute_instruction<0x71>(0x000080, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:24 BRA @UNKNOWN3
    case 0xC1716C: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:24 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC1716B.
    case 0xC1716D: cpu.execute_instruction<0x3E>(0x0010E2, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC1716E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:27 LDY #8
    case 0xC17170: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    case 0xC17172: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC17170.
    case 0xC17173: cpu.execute_instruction<0x6F>(0xFF299A, 4); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:29 AND #$00FF
    case 0xC17175: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC17175.
    case 0xC17177: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:30 JSL ASL16_ENTRY2
    case 0xC17178: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:31 STA @VIRTUAL02
    case 0xC1717C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC1717E: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:33 AND #$00FF
    case 0xC17181: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC17181.
    case 0xC17183: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:34 ORA @VIRTUAL02
    case 0xC17184: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:35 REP #PROC_FLAGS::INDEX8
    case 0xC17186: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:36 TAY
    case 0xC17188: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:37 STY @LOCAL00
    case 0xC17189: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:38 SEP #PROC_FLAGS::INDEX8
    case 0xC1718B: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:39 LDY #8
    case 0xC1718D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:40 LDA @LOCAL01
    case 0xC1718F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:40 LDA @LOCAL01
    // Overlapping static entry reached from 0xC1718D.
    case 0xC17190: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:41 JSL ASL16_ENTRY2
    case 0xC17191: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:41 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC17190.
    case 0xC17192: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:42 STA @VIRTUAL02
    case 0xC17195: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:43 LDA CC_ARGUMENT_STORAGE+2
    case 0xC17197: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:44 AND #$00FF
    case 0xC1719A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1719A.
    case 0xC1719C: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:45 ORA @VIRTUAL02
    case 0xC1719D: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:46 REP #PROC_FLAGS::INDEX8
    case 0xC1719F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:47 TAX
    case 0xC171A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:48 LDY @LOCAL00
    case 0xC171A2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:49 TYA
    case 0xC171A4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:50 JSL UNKNOWN_C4617C
    case 0xC171A5: cpu.execute_instruction<0x22>(0xC43EDC, 4); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:51 LDA #NULL
    case 0xC171A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_tpt_entity_movement.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC171A9.
    case 0xC171AB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:53 END_C_FUNCTION
    case 0xC171AC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_tpt_entity_movement.asm:53 END_C_FUNCTION
    case 0xC171AD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/show_character_inventory.asm (source_named).
bool execute_text_ccs_show_character_inventory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/show_character_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC15758: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC1575A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC1575B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC1575C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC1575D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1575D.
    case 0xC1575F: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC15760: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC15761: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    case 0xC15762: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    // Overlapping static entry reached from 0xC1575F.
    case 0xC15763: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    // Overlapping static entry reached from 0xC15762.
    case 0xC15764: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/show_character_inventory.asm:21 CLC
    case 0xC15765: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:22 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15766: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC15769: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC1576B: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC1576D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC1576F: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/show_character_inventory.asm:24 TXA
    case 0xC15771: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC15772: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/show_character_inventory.asm:26 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15774: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/show_character_inventory.asm:27 STA CC_ARGUMENT_STORAGE,X
    case 0xC15777: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/show_character_inventory.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC1577A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/show_character_inventory.asm:29 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1577C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/show_character_inventory.asm:30 LDA #.LOWORD(CC_1A_05)
    case 0xC1577F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x005758, 3); return true;
    // src/text/ccs/show_character_inventory.asm:30 LDA #.LOWORD(CC_1A_05)
    // Overlapping static entry reached from 0xC1577F.
    case 0xC15781: cpu.execute_instruction<0x57>(0x000080, 2); return true;
    // src/text/ccs/show_character_inventory.asm:31 BRA @UNKNOWN6
    case 0xC15782: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/text/ccs/show_character_inventory.asm:31 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC15781.
    case 0xC15783: cpu.execute_instruction<0x1F>(0x9A6EAD, 4); return true;
    // src/text/ccs/show_character_inventory.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC15784: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/show_character_inventory.asm:34 AND #$00FF
    case 0xC15787: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/show_character_inventory.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC15787.
    case 0xC15789: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/show_character_inventory.asm:36 TAY
    case 0xC1578A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:37 STY @LOCAL00
    case 0xC1578B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/show_character_inventory.asm:38 CPX #0
    case 0xC1578D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/show_character_inventory.asm:38 CPX #0
    // Overlapping static entry reached from 0xC1578D.
    case 0xC1578F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/show_character_inventory.asm:75 BEQ @UNKNOWN4
    case 0xC15790: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/show_character_inventory.asm:79 TXA
    case 0xC15792: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:80 BRA @UNKNOWN5
    case 0xC15793: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/show_character_inventory.asm:82 JSR GET_ARGUMENT_MEMORY
    case 0xC15795: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/show_character_inventory.asm:83 LDA @VIRTUAL06
    case 0xC15798: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/show_character_inventory.asm:86 LDY @LOCAL00
    case 0xC1579A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/show_character_inventory.asm:87 TYX
    case 0xC1579C: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/show_character_inventory.asm:91 JSR INVENTORY_GET_ITEM_NAME
    case 0xC1579D: cpu.execute_instruction<0x20>(0x009930, 3); return true;
    // src/text/ccs/show_character_inventory.asm:92 LDA #NULL
    case 0xC157A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/show_character_inventory.asm:92 LDA #NULL
    // Overlapping static entry reached from 0xC157A0.
    case 0xC157A2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/show_character_inventory.asm:94 END_C_FUNCTION
    case 0xC157A3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/show_character_inventory.asm:94 END_C_FUNCTION
    case 0xC157A4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/stop_music.asm (source_named).
bool execute_text_ccs_stop_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/stop_music.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14BA0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/stop_music.asm:4 TXA
    case 0xC14BA2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/stop_music.asm:5 JSL REDIRECT_STOP_MUSIC
    case 0xC14BA3: cpu.execute_instruction<0x22>(0xC21571, 4); return true;
    // src/text/ccs/stop_music.asm:6 LDA #NULL
    case 0xC14BA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/stop_music.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC14BA7.
    case 0xC14BA9: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/stop_music.asm:7 RTS
    case 0xC14BAA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/switch_to_window.asm (source_named).
bool execute_text_ccs_switch_to_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/switch_to_window.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC147EE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/switch_to_window.asm:4 TXA
    case 0xC147F0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/switch_to_window.asm:5 JSR SET_WINDOW_FOCUS
    case 0xC147F1: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/text/ccs/switch_to_window.asm:6 LDA #NULL
    case 0xC147F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/switch_to_window.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC147F4.
    case 0xC147F6: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/switch_to_window.asm:7 RTS
    case 0xC147F7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/take_item_from_character.asm (source_named).
bool execute_text_ccs_take_item_from_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/take_item_from_character.asm:3 BEGIN_C_FUNCTION
    case 0xC15086: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC15088: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC15089: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC1508A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC1508B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1508B.
    case 0xC1508D: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC1508E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/take_item_from_character.asm:11 END_STACK_VARS
    case 0xC1508F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character.asm:12 LDA #1
    case 0xC15090: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/take_item_from_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1508D.
    case 0xC15091: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/take_item_from_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15090.
    case 0xC15092: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/take_item_from_character.asm:13 CLC
    case 0xC15093: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15094: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/take_item_from_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15097: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/take_item_from_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15099: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/take_item_from_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1509B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/take_item_from_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1509D: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/take_item_from_character.asm:16 TXA
    case 0xC1509F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC150A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/take_item_from_character.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC150A2: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/take_item_from_character.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC150A5: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/take_item_from_character.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC150A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/take_item_from_character.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC150AA: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/take_item_from_character.asm:22 LDA #.LOWORD(CC_1D_01)
    case 0xC150AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x005086, 3); return true;
    // src/text/ccs/take_item_from_character.asm:22 LDA #.LOWORD(CC_1D_01)
    // Overlapping static entry reached from 0xC150AD.
    case 0xC150AF: cpu.execute_instruction<0x50>(0x000080, 2); return true;
    // src/text/ccs/take_item_from_character.asm:23 BRA @UNKNOWN6
    case 0xC150B0: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/take_item_from_character.asm:23 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC150AF.
    case 0xC150B1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC150B2: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/take_item_from_character.asm:26 AND #$00FF
    case 0xC150B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/take_item_from_character.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC150B5.
    case 0xC150B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/take_item_from_character.asm:27 STA @LOCAL02
    case 0xC150B8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/take_item_from_character.asm:28 CPX #0
    case 0xC150BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/take_item_from_character.asm:28 CPX #0
    // Overlapping static entry reached from 0xC150BA.
    case 0xC150BC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/take_item_from_character.asm:29 BEQ @UNKNOWN3
    case 0xC150BD: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/take_item_from_character.asm:30 STX @LOCAL01
    case 0xC150BF: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character.asm:31 BRA @UNKNOWN4
    case 0xC150C1: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/take_item_from_character.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC150C3: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/take_item_from_character.asm:34 LDA @VIRTUAL06
    case 0xC150C6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/take_item_from_character.asm:35 TAX
    case 0xC150C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character.asm:36 STX @LOCAL01
    case 0xC150C9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character.asm:38 LDA @LOCAL02
    case 0xC150CB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/take_item_from_character.asm:39 BNE @UNKNOWN5
    case 0xC150CD: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/take_item_from_character.asm:40 JSR GET_WORKING_MEMORY
    case 0xC150CF: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/take_item_from_character.asm:41 LDA @VIRTUAL06
    case 0xC150D2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/take_item_from_character.asm:43 LDX @LOCAL01
    case 0xC150D4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character.asm:44 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC150D6: cpu.execute_instruction<0x22>(0xC18F56, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/take_item_from_character.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC150DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/take_item_from_character.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC150DC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/take_item_from_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150DE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/take_item_from_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150E0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/take_item_from_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150E2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/take_item_from_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150E4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/take_item_from_character.asm:47 JSR SET_WORKING_MEMORY
    case 0xC150E6: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/take_item_from_character.asm:48 LDA #NULL
    case 0xC150E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/take_item_from_character.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC150E9.
    case 0xC150EB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/take_item_from_character.asm:50 END_C_FUNCTION
    case 0xC150EC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/take_item_from_character.asm:50 END_C_FUNCTION
    case 0xC150ED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/take_item_from_character_2.asm (source_named).
bool execute_text_ccs_take_item_from_character_2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:3 BEGIN_C_FUNCTION
    case 0xC15956: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC15958: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC15959: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC1595A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC1595B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1595B.
    case 0xC1595D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC1595E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC1595F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:11 STX @LOCAL01
    case 0xC15960: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC1595D.
    case 0xC15961: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:12 LDA #1
    case 0xC15962: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15961.
    case 0xC15963: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15962.
    case 0xC15964: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:13 CLC
    case 0xC15965: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15966: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15969: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1596B: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1596D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1596F: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:16 TXA
    case 0xC15971: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15972: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15974: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15977: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1597A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1597C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:22 LDA #.LOWORD(CC_1D_0F)
    case 0xC1597F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000056, 2); else cpu.execute_instruction<0xA9>(0x005956, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:22 LDA #.LOWORD(CC_1D_0F)
    // Overlapping static entry reached from 0xC1597F.
    case 0xC15981: cpu.execute_instruction<0x59>(0x005280, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:23 BRA @UNKNOWN7
    case 0xC15982: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15984: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:26 AND #$00FF
    case 0xC15987: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15987.
    case 0xC15989: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:27 TAY
    case 0xC1598A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:28 BEQ @UNKNOWN3
    case 0xC1598B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:29 TYA
    case 0xC1598D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:30 BRA @UNKNOWN4
    case 0xC1598E: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:32 JSR GET_WORKING_MEMORY
    case 0xC15990: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:33 LDA @VIRTUAL06
    case 0xC15993: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:35 STA @VIRTUAL02
    case 0xC15995: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:36 LDX @LOCAL01
    case 0xC15997: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:37 BEQ @UNKNOWN5
    case 0xC15999: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:38 TXA
    case 0xC1599B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:39 BRA @UNKNOWN6
    case 0xC1599C: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:41 JSR GET_ARGUMENT_MEMORY
    case 0xC1599E: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:42 LDA @VIRTUAL06
    case 0xC159A1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:44 TAY
    case 0xC159A3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:45 STY @LOCAL01
    case 0xC159A4: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:46 TYX
    case 0xC159A6: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:47 LDA @VIRTUAL02
    case 0xC159A7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:48 JSL GET_CHARACTER_ITEM
    case 0xC159A9: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC159AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC159AF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:51 JSR SET_ARGUMENT_MEMORY
    case 0xC159B9: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:52 LDY @LOCAL01
    case 0xC159BC: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:53 TYX
    case 0xC159BE: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/take_item_from_character_2.asm:54 LDA @VIRTUAL02
    case 0xC159BF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:55 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC159C1: cpu.execute_instruction<0x20>(0x008CCE, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:56 STORE_INT1632 @VIRTUAL06
    case 0xC159C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:56 STORE_INT1632 @VIRTUAL06
    case 0xC159C6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/take_item_from_character_2.asm:58 JSR SET_WORKING_MEMORY
    case 0xC159D0: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:59 LDA #NULL
    case 0xC159D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/take_item_from_character_2.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC159D3.
    case 0xC159D5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:61 END_C_FUNCTION
    case 0xC159D6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:61 END_C_FUNCTION
    case 0xC159D7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/teleport_party_to_tpt_entity.asm (source_named).
bool execute_text_ccs_teleport_party_to_tpt_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16FE1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16FE6.
    case 0xC16FE8: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FEA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:10 TXA
    case 0xC16FEB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:11 STA @LOCAL00
    case 0xC16FEC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FEE: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:13 BNE @UNKNOWN0
    case 0xC16FF1: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:14 LDA @LOCAL00
    case 0xC16FF3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:14 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16FD0.
    case 0xC16FF4: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16FF5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FF7: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16FFA: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16FFD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FFF: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_EE)
    case 0xC17002: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x006FE1, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_EE)
    // Overlapping static entry reached from 0xC17002.
    case 0xC17004: cpu.execute_instruction<0x6F>(0xE21B80, 4); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:21 BRA @UNKNOWN1
    case 0xC17005: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC17007: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC17004.
    case 0xC17008: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:24 LDY #8
    case 0xC17009: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:24 LDY #8
    // Overlapping static entry reached from 0xC17008.
    case 0xC1700A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:25 LDA @LOCAL00
    case 0xC1700B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC17009.
    case 0xC1700C: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:26 JSL ASL16_ENTRY2
    case 0xC1700D: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1700C.
    case 0xC1700F: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:27 STA @VIRTUAL02
    case 0xC17011: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC17013: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:29 AND #$00FF
    case 0xC17016: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC17016.
    case 0xC17018: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:30 ORA @VIRTUAL02
    case 0xC17019: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:31 JSL UNKNOWN_C46698
    case 0xC1701B: cpu.execute_instruction<0x22>(0xC4440E, 4); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:32 LDA #NULL
    case 0xC1701F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/teleport_party_to_tpt_entity.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC1701F.
    case 0xC17021: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC17022: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC17023: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_atm_has_enough_money.asm (source_named).
bool execute_text_ccs_test_atm_has_enough_money_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:3 BEGIN_C_FUNCTION
    case 0xC160DB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC160DD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC160DE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC160DF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC160E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC160E0.
    case 0xC160E2: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC160E3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:10 END_STACK_VARS
    case 0xC160E4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:11 TXA
    case 0xC160E5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:12 STA @LOCAL01
    case 0xC160E6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:13 LDA #3
    case 0xC160E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:13 LDA #3
    // Overlapping static entry reached from 0xC160E8.
    case 0xC160EA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:14 CLC
    case 0xC160EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC160EC: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC160EF: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC160F1: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC160F3: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC160F5: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:17 LDA @LOCAL01
    case 0xC160F7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC160F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC160FB: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC160FE: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16101: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16103: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_17)
    case 0xC16106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DB, 2); else cpu.execute_instruction<0xA9>(0x0060DB, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_17)
    // Overlapping static entry reached from 0xC16106.
    case 0xC16108: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:24 JMP @UNKNOWN7
    case 0xC16109: cpu.execute_instruction<0x4C>(0x0061EE, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC1610C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:27 LDY #24
    case 0xC1610E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC16110: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1610E.
    case 0xC16111: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC16112: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC16111.
    case 0xC16113: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC16114: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC16113.
    case 0xC16115: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:29 JSL ASL32_ENTRY2
    case 0xC16116: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC1611A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC1611C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC1611D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC1611F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:31 LDY #16
    case 0xC16120: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC16122: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16120.
    case 0xC16123: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16124: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC16123.
    case 0xC16126: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16127: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16129: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1612B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1612D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1612F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:35 JSL ASL32_ENTRY2
    case 0xC16131: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC16135: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC16137: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC16138: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC1613A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:37 LDY #8
    case 0xC1613B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC1613D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1613B.
    case 0xC1613E: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1613F: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1613E.
    case 0xC16141: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16142: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16144: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16146: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16148: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC1614A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:41 JSL ASL32_ENTRY2
    case 0xC1614C: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16150: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16152: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16154: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16156: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC16158: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1615A: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1615D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1615F: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16161: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16163: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC16165: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16167: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16169: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1616B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1616D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1616F: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16171: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC16173: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC16174: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC16176: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC16177: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16179: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1617B: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1617D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1617F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16181: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16183: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC16185: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC16186: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC16188: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC16189: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1618B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1618D: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1618F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16191: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16193: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16195: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC16197: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC16197.
    case 0xC16199: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1619A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1619C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1619C.
    case 0xC1619E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1619F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC161A1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC161A3: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC161A5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC161A7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC161A9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:53 BNE @ARG_IS_NONZERO
    case 0xC161AB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC161AD: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:56 LDA #0
    case 0xC161B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:56 LDA #0
    // Overlapping static entry reached from 0xC161B0.
    case 0xC161B2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:57 STA @LOCAL01
    case 0xC161B3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC161B5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC161B7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC161B9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC161BB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC161BD: cpu.execute_instruction<0xAD>(0x009AE6, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC161C0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC161C2: cpu.execute_instruction<0xAD>(0x009AE8, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::bank_balance, @VIRTUAL06
    case 0xC161C5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:60 LDA @VIRTUAL06
    case 0xC161C7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:61 CMP @VIRTUAL0A
    case 0xC161C9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:62 LDA @VIRTUAL06+2
    case 0xC161CB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:63 SBC @VIRTUAL0A+2
    case 0xC161CD: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:64 BCS @UNKNOWN5
    case 0xC161CF: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:65 LDA #1
    case 0xC161D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:65 LDA #1
    // Overlapping static entry reached from 0xC161D1.
    case 0xC161D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:66 STA @LOCAL01
    case 0xC161D4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC161D6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC161D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC161DA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC161DC: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC161DE: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC161E0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC161E2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC161E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC161E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:70 JSR SET_WORKING_MEMORY
    case 0xC161E8: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:71 LDA #NULL
    case 0xC161EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_atm_has_enough_money.asm:71 LDA #NULL
    // Overlapping static entry reached from 0xC161EB.
    case 0xC161ED: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC161EE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_atm_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC161EF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_character_can_equip_item.asm (source_named).
bool execute_text_ccs_test_character_can_equip_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:3 BEGIN_C_FUNCTION
    case 0xC1535C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC1535E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC1535F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC15360: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC15361: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15361.
    case 0xC15363: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC15364: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:11 END_STACK_VARS
    case 0xC15365: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:12 LDA #1
    case 0xC15366: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15363.
    case 0xC15367: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15366.
    case 0xC15368: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:13 CLC
    case 0xC15369: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1536A: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1536D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1536F: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15371: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15373: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:16 TXA
    case 0xC15375: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15376: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15378: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC1537B: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1537E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15380: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:22 LDA #.LOWORD(CC_1F_81)
    case 0xC15383: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x00535C, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:22 LDA #.LOWORD(CC_1F_81)
    // Overlapping static entry reached from 0xC15383.
    case 0xC15385: cpu.execute_instruction<0x53>(0x000080, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:23 BRA @UNKNOWN6
    case 0xC15386: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:23 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC15385.
    case 0xC15387: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15388: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:26 AND #$00FF
    case 0xC1538B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1538B.
    case 0xC1538D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:27 STA @LOCAL02
    case 0xC1538E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:28 CPX #0
    case 0xC15390: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:28 CPX #0
    // Overlapping static entry reached from 0xC15390.
    case 0xC15392: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:29 BEQ @UNKNOWN3
    case 0xC15393: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:30 STX @LOCAL01
    case 0xC15395: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:31 BRA @UNKNOWN4
    case 0xC15397: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC15399: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:34 LDA @VIRTUAL06
    case 0xC1539C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:35 TAX
    case 0xC1539E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_can_equip_item.asm:36 STX @LOCAL01
    case 0xC1539F: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:38 LDA @LOCAL02
    case 0xC153A1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:39 BNE @UNKNOWN5
    case 0xC153A3: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:40 JSR GET_WORKING_MEMORY
    case 0xC153A5: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:41 LDA @VIRTUAL06
    case 0xC153A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:43 LDX @LOCAL01
    case 0xC153AA: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:44 JSL UNKNOWN_C3EE14
    case 0xC153AC: cpu.execute_instruction<0x22>(0xC3E9DA, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC153B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC153B2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC153B4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC153B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC153B8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC153BA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_character_can_equip_item.asm:47 JSR SET_WORKING_MEMORY
    case 0xC153BC: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:48 LDA #NULL
    case 0xC153BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_character_can_equip_item.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC153BF.
    case 0xC153C1: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:50 END_C_FUNCTION
    case 0xC153C2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_can_equip_item.asm:50 END_C_FUNCTION
    case 0xC153C3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_character_doesnt_have_item.asm (source_named).
bool execute_text_ccs_test_character_doesnt_have_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:3 BEGIN_C_FUNCTION
    case 0xC15124: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC15126: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC15127: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC15128: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC15129: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15129.
    case 0xC1512B: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC1512C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC1512D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    case 0xC1512E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1512B.
    case 0xC1512F: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1512E.
    case 0xC15130: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:13 CLC
    case 0xC15131: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15132: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15135: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15137: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15139: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1513B: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:16 TXA
    case 0xC1513D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1513E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15140: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15143: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15146: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15148: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:22 LDA #.LOWORD(CC_1D_04)
    case 0xC1514B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x005124, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:22 LDA #.LOWORD(CC_1D_04)
    // Overlapping static entry reached from 0xC1514B.
    case 0xC1514D: cpu.execute_instruction<0x51>(0x000080, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:23 BRA @UNKNOWN7
    case 0xC1514E: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1514D.
    case 0xC1514F: cpu.execute_instruction<0x41>(0x0000AD, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15150: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1514F.
    case 0xC15151: cpu.execute_instruction<0x6E>(0x00299A, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    case 0xC15153: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15151.
    case 0xC15154: cpu.execute_instruction<0xFF>(0x148500, 4); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15153.
    case 0xC15155: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:27 STA @LOCAL02
    case 0xC15156: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:28 CPX #0
    case 0xC15158: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:28 CPX #0
    // Overlapping static entry reached from 0xC15158.
    case 0xC1515A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:29 BEQ @UNKNOWN3
    case 0xC1515B: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:30 STX @LOCAL01
    case 0xC1515D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:31 BRA @UNKNOWN4
    case 0xC1515F: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC15161: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:34 LDA @VIRTUAL06
    case 0xC15164: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:35 TAX
    case 0xC15166: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:36 STX @LOCAL01
    case 0xC15167: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:38 LDA @LOCAL02
    case 0xC15169: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:39 BNE @UNKNOWN5
    case 0xC1516B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:40 JSR GET_WORKING_MEMORY
    case 0xC1516D: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:41 LDA @VIRTUAL06
    case 0xC15170: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:43 LDX @LOCAL01
    case 0xC15172: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:44 JSL UNKNOWN_C3E9F7
    case 0xC15174: cpu.execute_instruction<0x22>(0xC3E5B7, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15178: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC15178.
    case 0xC1517A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1517B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1517D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1517F: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15181: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15183: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15185: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15187: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15189: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:47 JSR SET_WORKING_MEMORY
    case 0xC1518B: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:48 LDA #NULL
    case 0xC1518E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_character_doesnt_have_item.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC1518E.
    case 0xC15190: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:50 END_C_FUNCTION
    case 0xC15191: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:50 END_C_FUNCTION
    case 0xC15192: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_character_has_item.asm (source_named).
bool execute_text_ccs_test_character_has_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_has_item.asm:3 BEGIN_C_FUNCTION
    case 0xC15193: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC15195: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC15196: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC15197: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC15198: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15198.
    case 0xC1519A: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC1519B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_has_item.asm:11 END_STACK_VARS
    case 0xC1519C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_character_has_item.asm:12 LDA #1
    case 0xC1519D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_character_has_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1519A.
    case 0xC1519E: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/test_character_has_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1519D.
    case 0xC1519F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_character_has_item.asm:13 CLC
    case 0xC151A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_character_has_item.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC151A1: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_has_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC151A4: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_has_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC151A6: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_has_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC151A8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_has_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC151AA: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/test_character_has_item.asm:16 TXA
    case 0xC151AC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_character_has_item.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC151AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_character_has_item.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC151AF: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/test_character_has_item.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC151B2: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/test_character_has_item.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC151B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_character_has_item.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC151B7: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/test_character_has_item.asm:22 LDA #.LOWORD(CC_1D_05)
    case 0xC151BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x005193, 3); return true;
    // src/text/ccs/test_character_has_item.asm:22 LDA #.LOWORD(CC_1D_05)
    // Overlapping static entry reached from 0xC151BA.
    case 0xC151BC: cpu.execute_instruction<0x51>(0x000080, 2); return true;
    // src/text/ccs/test_character_has_item.asm:23 BRA @UNKNOWN6
    case 0xC151BD: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/test_character_has_item.asm:23 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC151BC.
    case 0xC151BE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/test_character_has_item.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC151BF: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/test_character_has_item.asm:26 AND #$00FF
    case 0xC151C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_has_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC151C2.
    case 0xC151C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_character_has_item.asm:27 STA @LOCAL02
    case 0xC151C5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/test_character_has_item.asm:28 CPX #0
    case 0xC151C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_character_has_item.asm:28 CPX #0
    // Overlapping static entry reached from 0xC151C7.
    case 0xC151C9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_character_has_item.asm:29 BEQ @UNKNOWN3
    case 0xC151CA: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/test_character_has_item.asm:30 STX @LOCAL01
    case 0xC151CC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_has_item.asm:31 BRA @UNKNOWN4
    case 0xC151CE: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/test_character_has_item.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC151D0: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_character_has_item.asm:34 LDA @VIRTUAL06
    case 0xC151D3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_has_item.asm:35 TAX
    case 0xC151D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_has_item.asm:36 STX @LOCAL01
    case 0xC151D6: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_has_item.asm:38 LDA @LOCAL02
    case 0xC151D8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/test_character_has_item.asm:39 BNE @UNKNOWN5
    case 0xC151DA: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_has_item.asm:40 JSR GET_WORKING_MEMORY
    case 0xC151DC: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/test_character_has_item.asm:41 LDA @VIRTUAL06
    case 0xC151DF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_has_item.asm:43 LDX @LOCAL01
    case 0xC151E1: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_character_has_item.asm:44 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC151E3: cpu.execute_instruction<0x22>(0xC43479, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_character_has_item.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC151E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_character_has_item.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC151E9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_has_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC151EB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_has_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC151ED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_has_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC151EF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_has_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC151F1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_character_has_item.asm:47 JSR SET_WORKING_MEMORY
    case 0xC151F3: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_character_has_item.asm:48 LDA #NULL
    case 0xC151F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_character_has_item.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC151F6.
    case 0xC151F8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_has_item.asm:50 END_C_FUNCTION
    case 0xC151F9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_has_item.asm:50 END_C_FUNCTION
    case 0xC151FA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_character_status.asm (source_named).
bool execute_text_ccs_test_character_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_status.asm:3 BEGIN_C_FUNCTION
    case 0xC154C0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC154C2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC154C3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC154C4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC154C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC154C5.
    case 0xC154C7: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC154C8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_status.asm:12 END_STACK_VARS
    case 0xC154C9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_character_status.asm:13 STX @VIRTUAL02
    case 0xC154CA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/test_character_status.asm:13 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC154C7.
    case 0xC154CB: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/test_character_status.asm:14 LDA #2
    case 0xC154CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/test_character_status.asm:14 LDA #2
    // Overlapping static entry reached from 0xC154CC.
    case 0xC154CE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_character_status.asm:15 CLC
    case 0xC154CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_character_status.asm:16 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC154D0: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_status.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC154D3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_status.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC154D5: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_status.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC154D7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_status.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC154D9: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/test_character_status.asm:18 LDA @VIRTUAL02
    case 0xC154DB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/test_character_status.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC154DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_character_status.asm:20 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC154DF: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/test_character_status.asm:21 STA CC_ARGUMENT_STORAGE,X
    case 0xC154E2: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/test_character_status.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC154E5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_character_status.asm:23 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC154E7: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/test_character_status.asm:24 LDA #.LOWORD(CC_1D_0D)
    case 0xC154EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0054C0, 3); return true;
    // src/text/ccs/test_character_status.asm:24 LDA #.LOWORD(CC_1D_0D)
    // Overlapping static entry reached from 0xC154EA.
    case 0xC154EC: cpu.execute_instruction<0x54>(0x005680, 3); return true;
    // src/text/ccs/test_character_status.asm:25 BRA @UNKNOWN8
    case 0xC154ED: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/text/ccs/test_character_status.asm:27 LDA CC_ARGUMENT_STORAGE
    case 0xC154EF: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/test_character_status.asm:28 AND #$00FF
    case 0xC154F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_status.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC154F2.
    case 0xC154F4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_character_status.asm:29 STA @LOCAL03
    case 0xC154F5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/ccs/test_character_status.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC154F7: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/test_character_status.asm:31 AND #$00FF
    case 0xC154FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/test_character_status.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC154FA.
    case 0xC154FC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/test_character_status.asm:32 TAX
    case 0xC154FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_status.asm:33 LDY #0
    case 0xC154FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/test_character_status.asm:33 LDY #0
    // Overlapping static entry reached from 0xC154FE.
    case 0xC15500: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/test_character_status.asm:34 STY @LOCAL02
    case 0xC15501: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/test_character_status.asm:35 CPX #0
    case 0xC15503: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_character_status.asm:35 CPX #0
    // Overlapping static entry reached from 0xC15503.
    case 0xC15505: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_character_status.asm:36 BEQ @UNKNOWN3
    case 0xC15506: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/test_character_status.asm:37 STX @LOCAL01
    case 0xC15508: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_status.asm:38 BRA @UNKNOWN4
    case 0xC1550A: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/test_character_status.asm:40 JSR GET_ARGUMENT_MEMORY
    case 0xC1550C: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_character_status.asm:41 LDA @VIRTUAL06
    case 0xC1550F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_status.asm:42 TAX
    case 0xC15511: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/test_character_status.asm:43 STX @LOCAL01
    case 0xC15512: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_character_status.asm:45 LDA @LOCAL03
    case 0xC15514: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/ccs/test_character_status.asm:46 BNE @UNKNOWN5
    case 0xC15516: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_status.asm:47 JSR GET_WORKING_MEMORY
    case 0xC15518: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/test_character_status.asm:48 LDA @VIRTUAL06
    case 0xC1551B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_character_status.asm:50 LDX @LOCAL01
    case 0xC1551D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_character_status.asm:50 LDX @LOCAL01
    // Overlapping static entry reached from 0xC15574.
    case 0xC1551E: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/test_character_status.asm:51 JSL CHECK_STATUS_GROUP
    case 0xC1551F: cpu.execute_instruction<0x22>(0xC436AD, 4); return true;
    // src/text/ccs/test_character_status.asm:51 JSL CHECK_STATUS_GROUP
    // Overlapping static entry reached from 0xC1551E.
    case 0xC15520: cpu.execute_instruction<0xAD>(0x00C436, 3); return true;
    // src/text/ccs/test_character_status.asm:52 CMP @VIRTUAL02
    case 0xC15523: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/test_character_status.asm:53 BNE @UNKNOWN6
    case 0xC15525: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_character_status.asm:54 LDY #1
    case 0xC15527: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/test_character_status.asm:54 LDY #1
    // Overlapping static entry reached from 0xC15527.
    case 0xC15529: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/test_character_status.asm:55 STY @LOCAL02
    case 0xC1552A: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/test_character_status.asm:57 LDY @LOCAL02
    case 0xC1552C: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/test_character_status.asm:58 TYA
    case 0xC1552E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_character_status.asm:59 STORE_INT1632S @VIRTUAL06
    case 0xC1552F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_character_status.asm:59 STORE_INT1632S @VIRTUAL06
    case 0xC15531: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/test_character_status.asm:59 STORE_INT1632S @VIRTUAL06
    case 0xC15533: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/test_character_status.asm:59 STORE_INT1632S @VIRTUAL06
    case 0xC15535: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_status.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15537: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_status.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15539: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_status.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1553B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_status.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1553D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_character_status.asm:61 JSR SET_WORKING_MEMORY
    case 0xC1553F: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_character_status.asm:62 LDA #NULL
    case 0xC15542: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_character_status.asm:62 LDA #NULL
    // Overlapping static entry reached from 0xC15542.
    case 0xC15544: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_status.asm:64 END_C_FUNCTION
    case 0xC15545: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_status.asm:64 END_C_FUNCTION
    case 0xC15546: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_equality.asm (source_named).
bool execute_text_ccs_test_equality_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_equality.asm:3 BEGIN_C_FUNCTION
    case 0xC15547: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC15549: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC1554A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC1554B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC1554C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1554C.
    case 0xC1554E: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC1554F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC15550: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_equality.asm:11 STX @LOCAL01
    case 0xC15551: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_equality.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC1554E.
    case 0xC15552: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/text/ccs/test_equality.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15553: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/test_equality.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC15552.
    case 0xC15554: cpu.execute_instruction<0x7E>(0x00C99A, 3); return true;
    // src/text/ccs/test_equality.asm:13 CMP #4
    case 0xC15556: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/test_equality.asm:13 CMP #4
    // Overlapping static entry reached from 0xC15554.
    case 0xC15557: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/text/ccs/test_equality.asm:13 CMP #4
    // Overlapping static entry reached from 0xC15556.
    case 0xC15558: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/text/ccs/test_equality.asm:14 BCS @UNKNOWN0
    case 0xC15559: cpu.execute_instruction<0xB0>(0x000014, 2); return true;
    // src/text/ccs/test_equality.asm:15 TXA
    case 0xC1555B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_equality.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1555C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1555E: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/test_equality.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC15561: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/test_equality.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC15564: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15566: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/test_equality.asm:21 LDA #.LOWORD(CC_18_07)
    case 0xC15569: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x005547, 3); return true;
    // src/text/ccs/test_equality.asm:21 LDA #.LOWORD(CC_18_07)
    // Overlapping static entry reached from 0xC15569.
    case 0xC1556B: cpu.execute_instruction<0x55>(0x00004C, 2); return true;
    // src/text/ccs/test_equality.asm:22 JMP @UNKNOWN10
    case 0xC1556C: cpu.execute_instruction<0x4C>(0x00563C, 3); return true;
    // src/text/ccs/test_equality.asm:22 JMP @UNKNOWN10
    // Overlapping static entry reached from 0xC1556B.
    case 0xC1556D: cpu.execute_instruction<0x3C>(0x00E256, 3); return true;
    // src/text/ccs/test_equality.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC1556F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:24 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1556D.
    case 0xC15570: cpu.execute_instruction<0x20>(0x0008A9, 3); return true;
    // src/text/ccs/test_equality.asm:25 LDA #8
    case 0xC15571: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/test_equality.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15573: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/test_equality.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC15571.
    case 0xC15574: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/test_equality.asm:27 TAY
    case 0xC15575: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15576: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15579: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1557B: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1557D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1557F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_equality.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC15581: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:30 JSL ASL32_ENTRY2
    case 0xC15583: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // src/text/ccs/test_equality.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC15587: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC15589: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC1558C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC1558E: cpu.execute_instruction<0x64>(0x00000B, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC15590: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC15592: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/text/ccs/test_equality.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC15594: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15596: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15598: cpu.execute_instruction<0x05>(0x000006, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC1559A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC1559C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC1559E: cpu.execute_instruction<0x05>(0x000008, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155A0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_equality.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC155A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:36 LDA #16
    case 0xC155A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00A810, 3); return true;
    // src/text/ccs/test_equality.asm:37 TAY
    case 0xC155A6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155A7: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155AC: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155AE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155B0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_equality.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC155B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:40 JSL ASL32_ENTRY2
    case 0xC155B4: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155B8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155BA: cpu.execute_instruction<0x05>(0x000006, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155BC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155BE: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155C0: cpu.execute_instruction<0x05>(0x000008, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155C2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_equality.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC155C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:43 LDA #24
    case 0xC155C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x00A818, 3); return true;
    // src/text/ccs/test_equality.asm:44 TAY
    case 0xC155C8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155C9: cpu.execute_instruction<0xAD>(0x009A71, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155CE: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155D0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155D2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_equality.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC155D4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_equality.asm:47 JSL ASL32_ENTRY2
    case 0xC155D6: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155DA: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155DC: cpu.execute_instruction<0x05>(0x000006, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155DE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155E0: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155E2: cpu.execute_instruction<0x05>(0x000008, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155E4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_equality.asm:49 REP #PROC_FLAGS::INDEX8
    case 0xC155E6: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/test_equality.asm:50 LDX @LOCAL01
    case 0xC155E8: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_equality.asm:51 BNE @UNKNOWN1
    case 0xC155EA: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_equality.asm:52 JSR GET_WORKING_MEMORY
    case 0xC155EC: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/test_equality.asm:53 BRA @UNKNOWN3
    case 0xC155EF: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/test_equality.asm:55 CPX #1
    case 0xC155F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/text/ccs/test_equality.asm:55 CPX #1
    // Overlapping static entry reached from 0xC155F1.
    case 0xC155F3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/test_equality.asm:56 BNE @UNKNOWN2
    case 0xC155F4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_equality.asm:57 JSR GET_ARGUMENT_MEMORY
    case 0xC155F6: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_equality.asm:58 BRA @UNKNOWN3
    case 0xC155F9: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/text/ccs/test_equality.asm:60 JSR GET_SECONDARY_MEMORY
    case 0xC155FB: cpu.execute_instruction<0x20>(0x000603, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC155FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC15600: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/test_equality.asm:63 LDA @VIRTUAL06
    case 0xC15602: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_equality.asm:64 CMP @VIRTUAL0A
    case 0xC15604: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_equality.asm:65 LDA @VIRTUAL06+2
    case 0xC15606: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/test_equality.asm:66 SBC @VIRTUAL0A+2
    case 0xC15608: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/test_equality.asm:67 BCS @UNKNOWN4
    case 0xC1560A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/test_equality.asm:68 LDA #0
    case 0xC1560C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_equality.asm:68 LDA #0
    // Overlapping static entry reached from 0xC1560C.
    case 0xC1560E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/test_equality.asm:69 BRA @UNKNOWN8
    case 0xC1560F: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15611: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15613: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15615: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15617: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15619: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/text/ccs/test_equality.asm:72 BNE @UNKNOWN6
    case 0xC1561B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_equality.asm:73 LDX #1
    case 0xC1561D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/test_equality.asm:73 LDX #1
    // Overlapping static entry reached from 0xC1561D.
    case 0xC1561F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/test_equality.asm:74 BRA @UNKNOWN7
    case 0xC15620: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/test_equality.asm:76 LDX #2
    case 0xC15622: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/test_equality.asm:76 LDX #2
    // Overlapping static entry reached from 0xC15622.
    case 0xC15624: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/ccs/test_equality.asm:78 TXA
    case 0xC15625: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC15626: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC15628: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC1562A: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC1562C: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1562E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15630: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15632: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15634: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_equality.asm:82 JSR SET_WORKING_MEMORY
    case 0xC15636: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_equality.asm:83 LDA #NULL
    case 0xC15639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_equality.asm:83 LDA #NULL
    // Overlapping static entry reached from 0xC15639.
    case 0xC1563B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_equality.asm:85 END_C_FUNCTION
    case 0xC1563C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_equality.asm:85 END_C_FUNCTION
    case 0xC1563D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_has_enough_money.asm (source_named).
bool execute_text_ccs_test_has_enough_money_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_has_enough_money.asm:3 BEGIN_C_FUNCTION
    case 0xC15C74: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C76: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C77: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C78: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15C79.
    case 0xC15C7B: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C7C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C7D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:11 TXA
    case 0xC15C7E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:12 STA @LOCAL01
    case 0xC15C7F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:13 LDA #3
    case 0xC15C81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15C81.
    case 0xC15C83: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:14 CLC
    case 0xC15C84: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C85: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C88: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C8A: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C8C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C8E: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:17 LDA @LOCAL01
    case 0xC15C90: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15C92: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C94: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15C97: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15C9A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C9C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_14)
    case 0xC15C9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000074, 2); else cpu.execute_instruction<0xA9>(0x005C74, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_14)
    // Overlapping static entry reached from 0xC15C9F.
    case 0xC15CA1: cpu.execute_instruction<0x5C>(0x5D874C, 4); return true;
    // src/text/ccs/test_has_enough_money.asm:24 JMP @UNKNOWN7
    case 0xC15CA2: cpu.execute_instruction<0x4C>(0x005D87, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15CA5: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:27 LDY #24
    case 0xC15CA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15CA9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CA7.
    case 0xC15CAA: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15CAB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CAA.
    case 0xC15CAC: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15CAD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CAC.
    case 0xC15CAE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:29 JSL ASL32_ENTRY2
    case 0xC15CAF: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CB3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CB5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CB6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:31 LDY #16
    case 0xC15CB9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15CBB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15CB9.
    case 0xC15CBC: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CBD: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CBC.
    case 0xC15CBF: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CC0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CC2: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CC4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CC6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15CC8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:35 JSL ASL32_ENTRY2
    case 0xC15CCA: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CCE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CD0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CD1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CD3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/test_has_enough_money.asm:37 LDY #8
    case 0xC15CD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15CD6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15CD4.
    case 0xC15CD7: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CD8: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CD7.
    case 0xC15CDA: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CDB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CDD: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CDF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CE1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15CE3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:41 JSL ASL32_ENTRY2
    case 0xC15CE5: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CE9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CEB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CEF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC15CF1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CF3: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CF6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CF8: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CFA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CFC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15CFE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D00: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D02: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D04: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D06: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D08: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D0A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D0C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D0D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D0F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D10: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D12: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D14: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D16: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D18: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D1A: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D1C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D1E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D1F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D21: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D22: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D24: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D26: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D28: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D2A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D2C: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D2E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:51 LDA #0
    case 0xC15D30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:51 LDA #0
    // Overlapping static entry reached from 0xC15D30.
    case 0xC15D32: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:52 STA @LOCAL01
    case 0xC15D33: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15D35.
    case 0xC15D37: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D38: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15D3A.
    case 0xC15D3C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D3D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D3F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D41: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D43: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D45: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D47: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:55 BNE @ARG_IS_NONZERO
    case 0xC15D49: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:56 JSR GET_ARGUMENT_MEMORY
    case 0xC15D4B: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15D4E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15D50: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15D52: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15D54: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15D56: cpu.execute_instruction<0xAD>(0x009AE2, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15D59: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15D5B: cpu.execute_instruction<0xAD>(0x009AE4, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15D5E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:60 LDA @VIRTUAL06
    case 0xC15D60: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:61 CMP @VIRTUAL0A
    case 0xC15D62: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:62 LDA @VIRTUAL06+2
    case 0xC15D64: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:63 SBC @VIRTUAL0A+2
    case 0xC15D66: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:64 BCS @UNKNOWN5
    case 0xC15D68: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:65 LDA #1
    case 0xC15D6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:65 LDA #1
    // Overlapping static entry reached from 0xC15D6A.
    case 0xC15D6C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:66 STA @LOCAL01
    case 0xC15D6D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D6F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D73: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D75: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D77: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D7B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D7D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D7F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_has_enough_money.asm:70 JSR SET_WORKING_MEMORY
    case 0xC15D81: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:71 LDA #NULL
    case 0xC15D84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_has_enough_money.asm:71 LDA #NULL
    // Overlapping static entry reached from 0xC15D84.
    case 0xC15D86: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15D87: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15D88: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_inventory_full.asm (source_named).
bool execute_text_ccs_test_inventory_full_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_inventory_full.asm:3 BEGIN_C_FUNCTION
    case 0xC14CAC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC14CAE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC14CAF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC14CB0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC14CB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14CB1.
    case 0xC14CB3: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC14CB4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_inventory_full.asm:10 END_STACK_VARS
    case 0xC14CB5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_inventory_full.asm:11 STX @VIRTUAL02
    case 0xC14CB6: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/test_inventory_full.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14CB3.
    case 0xC14CB7: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/text/ccs/test_inventory_full.asm:12 LDX #0
    case 0xC14CB8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/test_inventory_full.asm:12 LDX #0
    // Overlapping static entry reached from 0xC14CB8.
    case 0xC14CBA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/test_inventory_full.asm:13 STX @LOCAL01
    case 0xC14CBB: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_inventory_full.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC14CBD: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_inventory_full.asm:15 LDA @VIRTUAL06
    case 0xC14CC0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_inventory_full.asm:16 JSR GET_ITEM_TYPE
    case 0xC14CC2: cpu.execute_instruction<0x20>(0x009EE3, 3); return true;
    // src/text/ccs/test_inventory_full.asm:17 CMP @VIRTUAL02
    case 0xC14CC5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/test_inventory_full.asm:18 BNE @UNKNOWN0
    case 0xC14CC7: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/test_inventory_full.asm:19 LDX #1
    case 0xC14CC9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/test_inventory_full.asm:19 LDX #1
    // Overlapping static entry reached from 0xC14CC9.
    case 0xC14CCB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/test_inventory_full.asm:20 STX @LOCAL01
    case 0xC14CCC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_inventory_full.asm:22 LDX @LOCAL01
    case 0xC14CCE: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_inventory_full.asm:23 TXA
    case 0xC14CD0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_inventory_full.asm:24 STORE_INT1632S @VIRTUAL06
    case 0xC14CD1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_inventory_full.asm:24 STORE_INT1632S @VIRTUAL06
    case 0xC14CD3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/test_inventory_full.asm:24 STORE_INT1632S @VIRTUAL06
    case 0xC14CD5: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/test_inventory_full.asm:24 STORE_INT1632S @VIRTUAL06
    case 0xC14CD7: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_inventory_full.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14CD9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_inventory_full.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14CDB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_inventory_full.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14CDD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_inventory_full.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14CDF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_inventory_full.asm:26 JSR SET_WORKING_MEMORY
    case 0xC14CE1: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_inventory_full.asm:27 LDA #NULL
    case 0xC14CE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_inventory_full.asm:27 LDA #NULL
    // Overlapping static entry reached from 0xC14CE4.
    case 0xC14CE6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_inventory_full.asm:28 END_C_FUNCTION
    case 0xC14CE7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_inventory_full.asm:28 END_C_FUNCTION
    case 0xC14CE8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_inventory_not_full.asm (source_named).
bool execute_text_ccs_test_inventory_not_full_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:3 BEGIN_C_FUNCTION
    case 0xC150EE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC150F0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC150F1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC150F2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC150F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC150F3.
    case 0xC150F5: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC150F6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:9 END_STACK_VARS
    case 0xC150F7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_inventory_not_full.asm:10 CPX #0
    case 0xC150F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_inventory_not_full.asm:10 CPX #0
    // Overlapping static entry reached from 0xC150F5.
    case 0xC150F9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:10 CPX #0
    // Overlapping static entry reached from 0xC150F8.
    case 0xC150FA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:11 BEQ @UNKNOWN0
    case 0xC150FB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:12 TXA
    case 0xC150FD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_inventory_not_full.asm:13 BRA @UNKNOWN1
    case 0xC150FE: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC15100: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_inventory_not_full.asm:16 LDA @VIRTUAL06
    case 0xC15103: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:18 JSL FIND_INVENTORY_SPACE2
    case 0xC15105: cpu.execute_instruction<0x22>(0xC43525, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15109: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC15109.
    case 0xC1510B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1510C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1510E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15110: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:19 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15112: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15114: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15116: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15118: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1511A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_inventory_not_full.asm:21 JSR SET_WORKING_MEMORY
    case 0xC1511C: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_inventory_not_full.asm:22 LDA #NULL
    case 0xC1511F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_inventory_not_full.asm:22 LDA #NULL
    // Overlapping static entry reached from 0xC1511F.
    case 0xC15121: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:23 END_C_FUNCTION
    case 0xC15122: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_inventory_not_full.asm:23 END_C_FUNCTION
    case 0xC15123: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_item_is_condiment.asm (source_named).
bool execute_text_ccs_test_item_is_condiment_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:3 BEGIN_C_FUNCTION
    case 0xC1721E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC17220: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC17221: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC17222: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC17223: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17200.
    case 0xC17224: cpu.execute_instruction<0xEE>(0x005BFF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17223.
    case 0xC17225: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC17226: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:9 END_STACK_VARS
    case 0xC17227: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_item_is_condiment.asm:10 TXA
    case 0xC17228: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_item_is_condiment.asm:11 BEQ @ARG_IS_ZERO
    case 0xC17229: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC1722B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC1722D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:13 BRA @ARG_IS_NONZERO
    case 0xC1722F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC17231: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_item_is_condiment.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC17234: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:18 LDA @VIRTUAL06
    case 0xC17236: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:19 JSL FIND_CONDIMENT
    case 0xC17238: cpu.execute_instruction<0x22>(0xC1D92E, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:20 STORE_INT1632 @VIRTUAL06
    case 0xC1723C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:20 STORE_INT1632 @VIRTUAL06
    case 0xC1723E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17240: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17242: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17244: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17246: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_item_is_condiment.asm:22 JSR SET_WORKING_MEMORY
    case 0xC17248: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_item_is_condiment.asm:24 LDA #NULL
    case 0xC1724B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_item_is_condiment.asm:24 LDA #NULL
    // Overlapping static entry reached from 0xC1724B.
    case 0xC1724D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:25 END_C_FUNCTION
    case 0xC1724E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_item_is_condiment.asm:25 END_C_FUNCTION
    case 0xC1724F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_item_is_drink.asm (source_named).
bool execute_text_ccs_test_item_is_drink_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_item_is_drink.asm:3 BEGIN_C_FUNCTION
    case 0xC163C2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC163C4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC163C5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC163C6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC163C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC163C7.
    case 0xC163C9: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC163CA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_item_is_drink.asm:9 END_STACK_VARS
    case 0xC163CB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_item_is_drink.asm:10 CPX #0
    case 0xC163CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/test_item_is_drink.asm:10 CPX #0
    // Overlapping static entry reached from 0xC163C9.
    case 0xC163CD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:10 CPX #0
    // Overlapping static entry reached from 0xC163CC.
    case 0xC163CE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:11 BEQ @ARG_IS_ZERO
    case 0xC163CF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:12 TXA
    case 0xC163D1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_item_is_drink.asm:13 BRA @ARG_IS_NONZERO
    case 0xC163D2: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC163D4: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/test_item_is_drink.asm:16 LDA @VIRTUAL06
    case 0xC163D7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:18 JSL GET_ITEM_SUBTYPE_2
    case 0xC163D9: cpu.execute_instruction<0x22>(0xC223D5, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_item_is_drink.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC163DD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_item_is_drink.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC163DF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_item_is_drink.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163E1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_item_is_drink.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163E3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_item_is_drink.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163E5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_item_is_drink.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC163E7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_item_is_drink.asm:21 JSR SET_WORKING_MEMORY
    case 0xC163E9: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_item_is_drink.asm:22 LDA #NULL
    case 0xC163EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_item_is_drink.asm:22 LDA #NULL
    // Overlapping static entry reached from 0xC163EC.
    case 0xC163EE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_item_is_drink.asm:23 END_C_FUNCTION
    case 0xC163EF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_item_is_drink.asm:23 END_C_FUNCTION
    case 0xC163F0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/test_party_enough_characters.asm (source_named).
bool execute_text_ccs_test_party_enough_characters_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:3 BEGIN_C_FUNCTION
    case 0xC163F1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC163F3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC163F4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC163F5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC163F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC163F6.
    case 0xC163F8: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC163F9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:10 END_STACK_VARS
    case 0xC163FA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/test_party_enough_characters.asm:11 TXA
    case 0xC163FB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/test_party_enough_characters.asm:12 LDX #0
    case 0xC163FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:12 LDX #0
    // Overlapping static entry reached from 0xC163FC.
    case 0xC163FE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:13 STX @LOCAL01
    case 0xC163FF: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:14 CMP #0
    case 0xC16401: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:14 CMP #0
    // Overlapping static entry reached from 0xC16401.
    case 0xC16403: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:15 BEQ @ARG_IS_ZERO
    case 0xC16404: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xC16406: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xC16408: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:17 BRA @ARG_IS_NONZERO
    case 0xC1640A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:19 JSR GET_ARGUMENT_MEMORY
    case 0xC1640C: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:21 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1640F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:21 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16411: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:21 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16413: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:21 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16415: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC16417: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC16419: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC1641C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC1641E: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC16420: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:23 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC16422: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC16424: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:25 LDA @VIRTUAL06
    case 0xC16426: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:26 CMP @VIRTUAL0A
    case 0xC16428: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:27 LDA @VIRTUAL06+2
    case 0xC1642A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:28 SBC @VIRTUAL0A+2
    case 0xC1642C: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:29 BCS @UNKNOWN2
    case 0xC1642E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:30 LDX #1
    case 0xC16430: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:30 LDX #1
    // Overlapping static entry reached from 0xC16430.
    case 0xC16432: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:31 STX @LOCAL01
    case 0xC16433: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:33 LDX @LOCAL01
    case 0xC16435: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:34 TXA
    case 0xC16437: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC16438: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC1643A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC1643C: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC1643E: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16440: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16442: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16444: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16446: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/test_party_enough_characters.asm:37 JSR SET_WORKING_MEMORY
    case 0xC16448: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:38 LDA #NULL
    case 0xC1644B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/test_party_enough_characters.asm:38 LDA #NULL
    // Overlapping static entry reached from 0xC1644B.
    case 0xC1644D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:39 END_C_FUNCTION
    case 0xC1644E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_party_enough_characters.asm:39 END_C_FUNCTION
    case 0xC1644F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/text_effects.asm (source_named).
bool execute_text_ccs_text_effects_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/text_effects.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1451B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/text_effects.asm:4 TXA
    case 0xC1451D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/text_effects.asm:5 JSR UNKNOWN_C10FEA
    case 0xC1451E: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/text/ccs/text_effects.asm:6 LDA #NULL
    case 0xC14521: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/text_effects.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC14521.
    case 0xC14523: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/text_effects.asm:7 RTS
    case 0xC14524: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/toggle_text_printing_sound.asm (source_named).
bool execute_text_ccs_toggle_text_printing_sound_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/toggle_text_printing_sound.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC174D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC174D6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC174D7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC174D8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC174D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC174D9.
    case 0xC174DB: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC174DC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:8 END_STACK_VARS
    case 0xC174DD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:9 TXA
    case 0xC174DE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:10 BEQ @UNKNOWN0
    case 0xC174DF: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC174E1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/toggle_text_printing_sound.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC174E3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:12 BRA @UNKNOWN1
    case 0xC174E5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC174E7: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:16 LDA @VIRTUAL06
    case 0xC174EA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:17 JSR SET_TEXT_SOUND_MODE
    case 0xC174EC: cpu.execute_instruction<0x20>(0x000044, 3); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:18 LDA #NULL
    case 0xC174EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC174EF.
    case 0xC174F1: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:19 PLD
    case 0xC174F2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/toggle_text_printing_sound.asm:20 RTS
    case 0xC174F3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_18.asm (source_named).
bool execute_text_ccs_tree_18_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_18.asm:3 BEGIN_C_FUNCTION
    case 0xC17B7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B7E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B7F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B80: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17B81.
    case 0xC17B83: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B84: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B85: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:10 TAY
    case 0xC17B86: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:11 STY @LOCAL00
    case 0xC17B87: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/tree_18.asm:12 TXA
    case 0xC17B89: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:13 BEQ @UNKNOWN0
    case 0xC17B8A: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/text/ccs/tree_18.asm:14 CMP #$01
    case 0xC17B8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_18.asm:14 CMP #$01
    // Overlapping static entry reached from 0xC17B8C.
    case 0xC17B8E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:15 BEQ @UNKNOWN1
    case 0xC17B8F: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/text/ccs/tree_18.asm:16 CMP #$02
    case 0xC17B91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_18.asm:16 CMP #$02
    // Overlapping static entry reached from 0xC17B91.
    case 0xC17B93: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:17 BEQ @UNKNOWN2
    case 0xC17B94: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/text/ccs/tree_18.asm:18 CMP #$03
    case 0xC17B96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_18.asm:18 CMP #$03
    // Overlapping static entry reached from 0xC17B96.
    case 0xC17B98: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:19 BEQ @UNKNOWN3
    case 0xC17B99: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/text/ccs/tree_18.asm:20 CMP #$04
    case 0xC17B9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_18.asm:20 CMP #$04
    // Overlapping static entry reached from 0xC17B9B.
    case 0xC17B9D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:21 BEQ @UNKNOWN4
    case 0xC17B9E: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/text/ccs/tree_18.asm:22 CMP #$05
    case 0xC17BA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_18.asm:22 CMP #$05
    // Overlapping static entry reached from 0xC17BA0.
    case 0xC17BA2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:23 BEQ @UNKNOWN5
    case 0xC17BA3: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:24 CMP #$06
    case 0xC17BA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_18.asm:24 CMP #$06
    // Overlapping static entry reached from 0xC17BA5.
    case 0xC17BA7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:25 BEQ @UNKNOWN6
    case 0xC17BA8: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:26 CMP #$07
    case 0xC17BAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_18.asm:26 CMP #$07
    // Overlapping static entry reached from 0xC17BAA.
    case 0xC17BAC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:27 BEQ @UNKNOWN7
    case 0xC17BAD: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:28 CMP #$08
    case 0xC17BAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_18.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC17BAF.
    case 0xC17BB1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:29 BEQ @UNKNOWN8
    case 0xC17BB2: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:30 CMP #$09
    case 0xC17BB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_18.asm:30 CMP #$09
    // Overlapping static entry reached from 0xC17BB4.
    case 0xC17BB6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:31 BEQ @UNKNOWN9
    case 0xC17BB7: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:32 CMP #$0A
    case 0xC17BB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_18.asm:32 CMP #$0A
    // Overlapping static entry reached from 0xC17BB9.
    case 0xC17BBB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:33 BEQ @UNKNOWN10
    case 0xC17BBC: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:34 CMP #$0D
    case 0xC17BBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/ccs/tree_18.asm:34 CMP #$0D
    // Overlapping static entry reached from 0xC17BBE.
    case 0xC17BC0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_18.asm:35 BEQ @UNKNOWN11
    case 0xC17BC1: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/text/ccs/tree_18.asm:36 BRA @UNKNOWN12
    case 0xC17BC3: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/text/ccs/tree_18.asm:38 JSR CLOSE_FOCUS_WINDOW
    case 0xC17BC5: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/text/ccs/tree_18.asm:39 BRA @UNKNOWN12
    case 0xC17BC8: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/text/ccs/tree_18.asm:41 LDA #.LOWORD(CC_18_01)
    case 0xC17BCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x0047E4, 3); return true;
    // src/text/ccs/tree_18.asm:41 LDA #.LOWORD(CC_18_01)
    // Overlapping static entry reached from 0xC17BCA.
    case 0xC17BCC: cpu.execute_instruction<0x47>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:42 BRA @UNKNOWN13
    case 0xC17BCD: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/text/ccs/tree_18.asm:42 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17BCC.
    case 0xC17BCE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:44 TYA
    case 0xC17BCF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:45 CLC
    case 0xC17BD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:46 ADC #6
    case 0xC17BD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/text/ccs/tree_18.asm:46 ADC #6
    // Overlapping static entry reached from 0xC17BD1.
    case 0xC17BD3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_18.asm:47 JSL UNKNOWN_C20A20
    case 0xC17BD4: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/text/ccs/tree_18.asm:48 LDA #1
    case 0xC17BD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/tree_18.asm:48 LDA #1
    // Overlapping static entry reached from 0xC17BD8.
    case 0xC17BDA: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/text/ccs/tree_18.asm:49 LDY @LOCAL00
    case 0xC17BDB: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/tree_18.asm:50 STA __BSS_START__+4,Y
    case 0xC17BDD: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/text/ccs/tree_18.asm:51 BRA @UNKNOWN12
    case 0xC17BE0: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/text/ccs/tree_18.asm:53 LDA #.LOWORD(CC_18_03)
    case 0xC17BE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x0047EE, 3); return true;
    // src/text/ccs/tree_18.asm:53 LDA #.LOWORD(CC_18_03)
    // Overlapping static entry reached from 0xC17BE2.
    case 0xC17BE4: cpu.execute_instruction<0x47>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:54 BRA @UNKNOWN13
    case 0xC17BE5: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/text/ccs/tree_18.asm:54 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17BE4.
    case 0xC17BE6: cpu.execute_instruction<0x32>(0x000020, 2); return true;
    // src/text/ccs/tree_18.asm:56 JSR UNKNOWN_C1008E
    case 0xC17BE7: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/text/ccs/tree_18.asm:56 JSR UNKNOWN_C1008E
    // Overlapping static entry reached from 0xC17BE6.
    case 0xC17BE8: cpu.execute_instruction<0xAF>(0x722002, 4); return true;
    // src/text/ccs/tree_18.asm:57 JSR HIDE_HPPP_WINDOWS
    case 0xC17BEA: cpu.execute_instruction<0x20>(0x000E72, 3); return true;
    // src/text/ccs/tree_18.asm:57 JSR HIDE_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC17BE8.
    case 0xC17BEC: cpu.execute_instruction<0x0E>(0x000222, 3); return true;
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    case 0xC17BED: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC17BEC.
    case 0xC17BEF: cpu.execute_instruction<0x35>(0x0000C1, 2); return true;
    // src/text/ccs/tree_18.asm:59 BRA @UNKNOWN12
    case 0xC17BF1: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    case 0xC17BF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x00492B, 3); return true;
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC17BF3.
    case 0xC17BF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x002180, 3); return true;
    // src/text/ccs/tree_18.asm:62 BRA @UNKNOWN13
    case 0xC17BF6: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/ccs/tree_18.asm:62 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17BF5.
    case 0xC17BF7: cpu.execute_instruction<0x21>(0x000020, 2); return true;
    // src/text/ccs/tree_18.asm:64 JSR UNKNOWN_C10FA3
    case 0xC17BF8: cpu.execute_instruction<0x20>(0x00155D, 3); return true;
    // src/text/ccs/tree_18.asm:64 JSR UNKNOWN_C10FA3
    // Overlapping static entry reached from 0xC17BF7.
    case 0xC17BF9: cpu.execute_instruction<0x5D>(0x008015, 3); return true;
    // src/text/ccs/tree_18.asm:65 BRA @UNKNOWN12
    case 0xC17BFB: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/text/ccs/tree_18.asm:65 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC17BF9.
    case 0xC17BFC: cpu.execute_instruction<0x19>(0x0047A9, 3); return true;
    // src/text/ccs/tree_18.asm:67 LDA #.LOWORD(CC_18_07)
    case 0xC17BFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x005547, 3); return true;
    // src/text/ccs/tree_18.asm:67 LDA #.LOWORD(CC_18_07)
    // Overlapping static entry reached from 0xC17BFD.
    case 0xC17BFF: cpu.execute_instruction<0x55>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:68 BRA @UNKNOWN13
    case 0xC17C00: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/ccs/tree_18.asm:68 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17BFF.
    case 0xC17C01: cpu.execute_instruction<0x17>(0x0000A9, 2); return true;
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    case 0xC17C02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x0057A5, 3); return true;
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    // Overlapping static entry reached from 0xC17C01.
    case 0xC17C03: cpu.execute_instruction<0xA5>(0x000057, 2); return true;
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    // Overlapping static entry reached from 0xC17C02.
    case 0xC17C04: cpu.execute_instruction<0x57>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:71 BRA @UNKNOWN13
    case 0xC17C05: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_18.asm:71 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17C04.
    case 0xC17C06: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    case 0xC17C07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0057CA, 3); return true;
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    // Overlapping static entry reached from 0xC17C06.
    case 0xC17C08: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    // Overlapping static entry reached from 0xC17C07.
    case 0xC17C09: cpu.execute_instruction<0x57>(0x000080, 2); return true;
    // src/text/ccs/tree_18.asm:74 BRA @UNKNOWN13
    case 0xC17C0A: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_18.asm:74 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17C09.
    case 0xC17C0B: cpu.execute_instruction<0x0D>(0x00FF20, 3); return true;
    // src/text/ccs/tree_18.asm:76 JSR UNKNOWN_C1AA18
    case 0xC17C0C: cpu.execute_instruction<0x20>(0x00A8FF, 3); return true;
    // src/text/ccs/tree_18.asm:76 JSR UNKNOWN_C1AA18
    // Overlapping static entry reached from 0xC17C0B.
    case 0xC17C0E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/tree_18.asm:77 BRA @UNKNOWN12
    case 0xC17C0F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/tree_18.asm:79 LDA #.LOWORD(CC_18_0D)
    case 0xC17C11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x005DC5, 3); return true;
    // src/text/ccs/tree_18.asm:79 LDA #.LOWORD(CC_18_0D)
    // Overlapping static entry reached from 0xC17C11.
    case 0xC17C13: cpu.execute_instruction<0x5D>(0x000380, 3); return true;
    // src/text/ccs/tree_18.asm:80 BRA @UNKNOWN13
    case 0xC17C14: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_18.asm:82 LDA #0
    case 0xC17C16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_18.asm:82 LDA #0
    // Overlapping static entry reached from 0xC17C16.
    case 0xC17C18: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_18.asm:84 END_C_FUNCTION
    case 0xC17C19: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_18.asm:84 END_C_FUNCTION
    case 0xC17C1A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_19.asm (source_named).
bool execute_text_ccs_tree_19_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_19.asm:3 BEGIN_C_FUNCTION
    case 0xC17C1B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C1D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C1E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C1F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17C20.
    case 0xC17C22: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C23: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C24: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:10 TXA
    case 0xC17C25: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:11 CMP #$02
    case 0xC17C26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_19.asm:11 CMP #$02
    // Overlapping static entry reached from 0xC17C26.
    case 0xC17C28: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:12 BEQL @UNKNOWN24
    case 0xC17C29: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:12 BEQL @UNKNOWN24
    case 0xC17C2B: cpu.execute_instruction<0x4C>(0x007CE9, 3); return true;
    // src/text/ccs/tree_19.asm:13 CMP #$04
    case 0xC17C2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_19.asm:13 CMP #$04
    // Overlapping static entry reached from 0xC17C2E.
    case 0xC17C30: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:14 BEQL @UNKNOWN25
    case 0xC17C31: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:14 BEQL @UNKNOWN25
    case 0xC17C33: cpu.execute_instruction<0x4C>(0x007CEF, 3); return true;
    // src/text/ccs/tree_19.asm:15 CMP #$05
    case 0xC17C36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_19.asm:15 CMP #$05
    // Overlapping static entry reached from 0xC17C36.
    case 0xC17C38: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:16 BEQL @UNKNOWN26
    case 0xC17C39: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:16 BEQL @UNKNOWN26
    case 0xC17C3B: cpu.execute_instruction<0x4C>(0x007CF5, 3); return true;
    // src/text/ccs/tree_19.asm:17 CMP #$10
    case 0xC17C3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/ccs/tree_19.asm:17 CMP #$10
    // Overlapping static entry reached from 0xC17C3E.
    case 0xC17C40: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:18 BEQL @UNKNOWN27
    case 0xC17C41: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:18 BEQL @UNKNOWN27
    case 0xC17C43: cpu.execute_instruction<0x4C>(0x007CFB, 3); return true;
    // src/text/ccs/tree_19.asm:19 CMP #$11
    case 0xC17C46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/ccs/tree_19.asm:19 CMP #$11
    // Overlapping static entry reached from 0xC17C46.
    case 0xC17C48: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:20 BEQL @UNKNOWN28
    case 0xC17C49: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:20 BEQL @UNKNOWN28
    case 0xC17C4B: cpu.execute_instruction<0x4C>(0x007D01, 3); return true;
    // src/text/ccs/tree_19.asm:21 CMP #$14
    case 0xC17C4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/ccs/tree_19.asm:21 CMP #$14
    // Overlapping static entry reached from 0xC17C4E.
    case 0xC17C50: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:22 BEQL @UNKNOWN29
    case 0xC17C51: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:22 BEQL @UNKNOWN29
    case 0xC17C53: cpu.execute_instruction<0x4C>(0x007D07, 3); return true;
    // src/text/ccs/tree_19.asm:23 CMP #$16
    case 0xC17C56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000016, 2); else cpu.execute_instruction<0xC9>(0x000016, 3); return true;
    // src/text/ccs/tree_19.asm:23 CMP #$16
    // Overlapping static entry reached from 0xC17C56.
    case 0xC17C58: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:24 BEQL @UNKNOWN30
    case 0xC17C59: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:24 BEQL @UNKNOWN30
    case 0xC17C5B: cpu.execute_instruction<0x4C>(0x007D30, 3); return true;
    // src/text/ccs/tree_19.asm:25 CMP #$18
    case 0xC17C5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/ccs/tree_19.asm:25 CMP #$18
    // Overlapping static entry reached from 0xC17C5E.
    case 0xC17C60: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:26 BEQL @UNKNOWN31
    case 0xC17C61: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:26 BEQL @UNKNOWN31
    case 0xC17C63: cpu.execute_instruction<0x4C>(0x007D36, 3); return true;
    // src/text/ccs/tree_19.asm:27 CMP #$19
    case 0xC17C66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/text/ccs/tree_19.asm:27 CMP #$19
    // Overlapping static entry reached from 0xC17C66.
    case 0xC17C68: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:28 BEQL @UNKNOWN32
    case 0xC17C69: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:28 BEQL @UNKNOWN32
    case 0xC17C6B: cpu.execute_instruction<0x4C>(0x007D3C, 3); return true;
    // src/text/ccs/tree_19.asm:29 CMP #$1A
    case 0xC17C6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001A, 2); else cpu.execute_instruction<0xC9>(0x00001A, 3); return true;
    // src/text/ccs/tree_19.asm:29 CMP #$1A
    // Overlapping static entry reached from 0xC17C6E.
    case 0xC17C70: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:30 BEQL @UNKNOWN33
    case 0xC17C71: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:30 BEQL @UNKNOWN33
    case 0xC17C73: cpu.execute_instruction<0x4C>(0x007D42, 3); return true;
    // src/text/ccs/tree_19.asm:31 CMP #$1B
    case 0xC17C76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001B, 2); else cpu.execute_instruction<0xC9>(0x00001B, 3); return true;
    // src/text/ccs/tree_19.asm:31 CMP #$1B
    // Overlapping static entry reached from 0xC17C76.
    case 0xC17C78: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:32 BEQL @UNKNOWN34
    case 0xC17C79: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:32 BEQL @UNKNOWN34
    case 0xC17C7B: cpu.execute_instruction<0x4C>(0x007D48, 3); return true;
    // src/text/ccs/tree_19.asm:33 CMP #$1C
    case 0xC17C7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001C, 2); else cpu.execute_instruction<0xC9>(0x00001C, 3); return true;
    // src/text/ccs/tree_19.asm:33 CMP #$1C
    // Overlapping static entry reached from 0xC17C7E.
    case 0xC17C80: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:34 BEQL @UNKNOWN35
    case 0xC17C81: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:34 BEQL @UNKNOWN35
    case 0xC17C83: cpu.execute_instruction<0x4C>(0x007D4E, 3); return true;
    // src/text/ccs/tree_19.asm:35 CMP #$1D
    case 0xC17C86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/text/ccs/tree_19.asm:35 CMP #$1D
    // Overlapping static entry reached from 0xC17C86.
    case 0xC17C88: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:36 BEQL @UNKNOWN36
    case 0xC17C89: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:36 BEQL @UNKNOWN36
    case 0xC17C8B: cpu.execute_instruction<0x4C>(0x007D53, 3); return true;
    // src/text/ccs/tree_19.asm:37 CMP #$1E
    case 0xC17C8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/text/ccs/tree_19.asm:37 CMP #$1E
    // Overlapping static entry reached from 0xC17C8E.
    case 0xC17C90: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:38 BEQL @UNKNOWN37
    case 0xC17C91: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:38 BEQL @UNKNOWN37
    case 0xC17C93: cpu.execute_instruction<0x4C>(0x007D58, 3); return true;
    // src/text/ccs/tree_19.asm:39 CMP #$1F
    case 0xC17C96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/text/ccs/tree_19.asm:39 CMP #$1F
    // Overlapping static entry reached from 0xC17C96.
    case 0xC17C98: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:40 BEQL @UNKNOWN38
    case 0xC17C99: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:40 BEQL @UNKNOWN38
    case 0xC17C9B: cpu.execute_instruction<0x4C>(0x007D68, 3); return true;
    // src/text/ccs/tree_19.asm:41 CMP #$20
    case 0xC17C9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/text/ccs/tree_19.asm:41 CMP #$20
    // Overlapping static entry reached from 0xC17C9E.
    case 0xC17CA0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:42 BEQL @UNKNOWN39
    case 0xC17CA1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:42 BEQL @UNKNOWN39
    case 0xC17CA3: cpu.execute_instruction<0x4C>(0x007D82, 3); return true;
    // src/text/ccs/tree_19.asm:43 CMP #$21
    case 0xC17CA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000021, 2); else cpu.execute_instruction<0xC9>(0x000021, 3); return true;
    // src/text/ccs/tree_19.asm:43 CMP #$21
    // Overlapping static entry reached from 0xC17CA6.
    case 0xC17CA8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:44 BEQL @UNKNOWN40
    case 0xC17CA9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:44 BEQL @UNKNOWN40
    case 0xC17CAB: cpu.execute_instruction<0x4C>(0x007D9E, 3); return true;
    // src/text/ccs/tree_19.asm:45 CMP #$22
    case 0xC17CAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/text/ccs/tree_19.asm:45 CMP #$22
    // Overlapping static entry reached from 0xC17CAE.
    case 0xC17CB0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:46 BEQL @UNKNOWN41
    case 0xC17CB1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:46 BEQL @UNKNOWN41
    case 0xC17CB3: cpu.execute_instruction<0x4C>(0x007DA3, 3); return true;
    // src/text/ccs/tree_19.asm:47 CMP #$23
    case 0xC17CB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000023, 3); return true;
    // src/text/ccs/tree_19.asm:47 CMP #$23
    // Overlapping static entry reached from 0xC17CB6.
    case 0xC17CB8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:48 BEQL @UNKNOWN42
    case 0xC17CB9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:48 BEQL @UNKNOWN42
    case 0xC17CBB: cpu.execute_instruction<0x4C>(0x007DA8, 3); return true;
    // src/text/ccs/tree_19.asm:49 CMP #$24
    case 0xC17CBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/text/ccs/tree_19.asm:49 CMP #$24
    // Overlapping static entry reached from 0xC17CBE.
    case 0xC17CC0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:50 BEQL @UNKNOWN43
    case 0xC17CC1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:50 BEQL @UNKNOWN43
    case 0xC17CC3: cpu.execute_instruction<0x4C>(0x007DAD, 3); return true;
    // src/text/ccs/tree_19.asm:51 CMP #$25
    case 0xC17CC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000025, 2); else cpu.execute_instruction<0xC9>(0x000025, 3); return true;
    // src/text/ccs/tree_19.asm:51 CMP #$25
    // Overlapping static entry reached from 0xC17CC6.
    case 0xC17CC8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:52 BEQL @UNKNOWN44
    case 0xC17CC9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:52 BEQL @UNKNOWN44
    case 0xC17CCB: cpu.execute_instruction<0x4C>(0x007DB2, 3); return true;
    // src/text/ccs/tree_19.asm:53 CMP #$26
    case 0xC17CCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000026, 2); else cpu.execute_instruction<0xC9>(0x000026, 3); return true;
    // src/text/ccs/tree_19.asm:53 CMP #$26
    // Overlapping static entry reached from 0xC17CCE.
    case 0xC17CD0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:54 BEQL @UNKNOWN45
    case 0xC17CD1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:54 BEQL @UNKNOWN45
    case 0xC17CD3: cpu.execute_instruction<0x4C>(0x007DB7, 3); return true;
    // src/text/ccs/tree_19.asm:55 CMP #$27
    case 0xC17CD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000027, 2); else cpu.execute_instruction<0xC9>(0x000027, 3); return true;
    // src/text/ccs/tree_19.asm:55 CMP #$27
    // Overlapping static entry reached from 0xC17CD6.
    case 0xC17CD8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:56 BEQL @UNKNOWN46
    case 0xC17CD9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:56 BEQL @UNKNOWN46
    case 0xC17CDB: cpu.execute_instruction<0x4C>(0x007DBC, 3); return true;
    // src/text/ccs/tree_19.asm:57 CMP #$28
    case 0xC17CDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000028, 3); return true;
    // src/text/ccs/tree_19.asm:57 CMP #$28
    // Overlapping static entry reached from 0xC17CDE.
    case 0xC17CE0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:58 BEQL @UNKNOWN47
    case 0xC17CE1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:58 BEQL @UNKNOWN47
    case 0xC17CE3: cpu.execute_instruction<0x4C>(0x007DC1, 3); return true;
    // src/text/ccs/tree_19.asm:59 JMP @UNKNOWN48
    case 0xC17CE6: cpu.execute_instruction<0x4C>(0x007DC6, 3); return true;
    // src/text/ccs/tree_19.asm:61 LDA #.LOWORD(CC_19_02)
    case 0xC17CE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // src/text/ccs/tree_19.asm:61 LDA #.LOWORD(CC_19_02)
    // Overlapping static entry reached from 0xC17CE9.
    case 0xC17CEB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:62 JMP @UNKNOWN49
    case 0xC17CEC: cpu.execute_instruction<0x4C>(0x007DC9, 3); return true;
    // src/text/ccs/tree_19.asm:64 JSR UNKNOWN_C11383
    case 0xC17CEF: cpu.execute_instruction<0x20>(0x0019AB, 3); return true;
    // src/text/ccs/tree_19.asm:65 JMP @UNKNOWN48
    case 0xC17CF2: cpu.execute_instruction<0x4C>(0x007DC6, 3); return true;
    // src/text/ccs/tree_19.asm:67 LDA #.LOWORD(CC_19_05)
    case 0xC17CF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x00544B, 3); return true;
    // src/text/ccs/tree_19.asm:67 LDA #.LOWORD(CC_19_05)
    // Overlapping static entry reached from 0xC17CF5.
    case 0xC17CF7: cpu.execute_instruction<0x54>(0x00C94C, 3); return true;
    // src/text/ccs/tree_19.asm:68 JMP @UNKNOWN49
    case 0xC17CF8: cpu.execute_instruction<0x4C>(0x007DC9, 3); return true;
    // src/text/ccs/tree_19.asm:68 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17CF7.
    case 0xC17CFA: cpu.execute_instruction<0x7D>(0x0023A9, 3); return true;
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    case 0xC17CFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x004B23, 3); return true;
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    // Overlapping static entry reached from 0xC17CFB.
    case 0xC17CFD: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:71 JMP @UNKNOWN49
    case 0xC17CFE: cpu.execute_instruction<0x4C>(0x007DC9, 3); return true;
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    case 0xC17D01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x004BCC, 3); return true;
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    // Overlapping static entry reached from 0xC17D01.
    case 0xC17D03: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:74 JMP @UNKNOWN49
    case 0xC17D04: cpu.execute_instruction<0x4C>(0x007DC9, 3); return true;
    // src/text/ccs/tree_19.asm:76 JSR GET_SECONDARY_MEMORY
    case 0xC17D07: cpu.execute_instruction<0x20>(0x000603, 3); return true;
    // src/text/ccs/tree_19.asm:78 DEC
    case 0xC17D0A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:79 CLC
    case 0xC17D0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:80 ADC #.LOWORD(GAME_STATE)
    case 0xC17D0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/ccs/tree_19.asm:80 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC17D0C.
    case 0xC17D0E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:81 TAX
    case 0xC17D0F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC17D10: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/tree_19.asm:83 LDA a:game_state::escargo_express_items,X
    case 0xC17D12: cpu.execute_instruction<0xBD>(0x000053, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17D15: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17D17: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17D19: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17D1B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_19.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC17D1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D1F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D21: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D23: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D25: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_19.asm:93 JSR SET_WORKING_MEMORY
    case 0xC17D27: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_19.asm:94 JSR INCREMENT_SECONDARY_MEMORY
    case 0xC17D2A: cpu.execute_instruction<0x20>(0x000631, 3); return true;
    // src/text/ccs/tree_19.asm:95 JMP @UNKNOWN48
    case 0xC17D2D: cpu.execute_instruction<0x4C>(0x007DC6, 3); return true;
    // src/text/ccs/tree_19.asm:97 LDA #.LOWORD(CC_19_16)
    case 0xC17D30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E3, 2); else cpu.execute_instruction<0xA9>(0x0053E3, 3); return true;
    // src/text/ccs/tree_19.asm:97 LDA #.LOWORD(CC_19_16)
    // Overlapping static entry reached from 0xC17D30.
    case 0xC17D32: cpu.execute_instruction<0x53>(0x00004C, 2); return true;
    // src/text/ccs/tree_19.asm:98 JMP @UNKNOWN49
    case 0xC17D33: cpu.execute_instruction<0x4C>(0x007DC9, 3); return true;
    // src/text/ccs/tree_19.asm:98 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17D32.
    case 0xC17D34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00007D, 2); else cpu.execute_instruction<0xC9>(0x00A97D, 3); return true;
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    case 0xC17D36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003E, 2); else cpu.execute_instruction<0xA9>(0x00563E, 3); return true;
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    // Overlapping static entry reached from 0xC17D34.
    case 0xC17D37: cpu.execute_instruction<0x3E>(0x004C56, 3); return true;
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    // Overlapping static entry reached from 0xC17D36.
    case 0xC17D38: cpu.execute_instruction<0x56>(0x00004C, 2); return true;
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    case 0xC17D39: cpu.execute_instruction<0x4C>(0x007DC9, 3); return true;
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17D38.
    case 0xC17D3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00007D, 2); else cpu.execute_instruction<0xC9>(0x00A97D, 3); return true;
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    case 0xC17D3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x005BFA, 3); return true;
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC17D3A.
    case 0xC17D3D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC17D3C.
    case 0xC17D3E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:104 JMP @UNKNOWN49
    case 0xC17D3F: cpu.execute_instruction<0x4C>(0x007DC9, 3); return true;
    // src/text/ccs/tree_19.asm:106 LDA #.LOWORD(CC_19_1A)
    case 0xC17D42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x005D89, 3); return true;
    // src/text/ccs/tree_19.asm:106 LDA #.LOWORD(CC_19_1A)
    // Overlapping static entry reached from 0xC17D42.
    case 0xC17D44: cpu.execute_instruction<0x5D>(0x00C94C, 3); return true;
    // src/text/ccs/tree_19.asm:107 JMP @UNKNOWN49
    case 0xC17D45: cpu.execute_instruction<0x4C>(0x007DC9, 3); return true;
    // src/text/ccs/tree_19.asm:107 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17D44.
    case 0xC17D47: cpu.execute_instruction<0x7D>(0x00B5A9, 3); return true;
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    case 0xC17D48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x005EB5, 3); return true;
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    // Overlapping static entry reached from 0xC17D48.
    case 0xC17D4A: cpu.execute_instruction<0x5E>(0x00C94C, 3); return true;
    // src/text/ccs/tree_19.asm:110 JMP @UNKNOWN49
    case 0xC17D4B: cpu.execute_instruction<0x4C>(0x007DC9, 3); return true;
    // src/text/ccs/tree_19.asm:110 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17D4A.
    case 0xC17D4D: cpu.execute_instruction<0x7D>(0x0076A9, 3); return true;
    // src/text/ccs/tree_19.asm:112 LDA #.LOWORD(CC_19_1C)
    case 0xC17D4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x006276, 3); return true;
    // src/text/ccs/tree_19.asm:112 LDA #.LOWORD(CC_19_1C)
    // Overlapping static entry reached from 0xC17D4E.
    case 0xC17D50: cpu.execute_instruction<0x62>(0x007680, 3); return true;
    // src/text/ccs/tree_19.asm:113 BRA @UNKNOWN49
    case 0xC17D51: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    case 0xC17D53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0062FF, 3); return true;
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    // Overlapping static entry reached from 0xC17D53.
    case 0xC17D55: cpu.execute_instruction<0x62>(0x007180, 3); return true;
    // src/text/ccs/tree_19.asm:116 BRA @UNKNOWN49
    case 0xC17D56: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/text/ccs/tree_19.asm:118 JSR UNKNOWN_C1AD26
    case 0xC17D58: cpu.execute_instruction<0x20>(0x00ABE2, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D5B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D5D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D5F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D61: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_19.asm:120 JSR SET_WORKING_MEMORY
    case 0xC17D63: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_19.asm:121 BRA @UNKNOWN48
    case 0xC17D66: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/text/ccs/tree_19.asm:123 JSR UNKNOWN_C1AD02
    case 0xC17D68: cpu.execute_instruction<0x20>(0x00ABBE, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17D6B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17D6D: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17D6F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17D71: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_19.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC17D73: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D75: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D77: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D79: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D7B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_19.asm:127 JSR SET_WORKING_MEMORY
    case 0xC17D7D: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_19.asm:128 BRA @UNKNOWN48
    case 0xC17D80: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/tree_19.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC17D82: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D84: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D87: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D89: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D8B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D8D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_19.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC17D8F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D91: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D93: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D95: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D97: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_19.asm:134 JSR SET_WORKING_MEMORY
    case 0xC17D99: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_19.asm:135 BRA @UNKNOWN48
    case 0xC17D9C: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/text/ccs/tree_19.asm:137 LDA #.LOWORD(CC_19_21)
    case 0xC17D9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0063C2, 3); return true;
    // src/text/ccs/tree_19.asm:137 LDA #.LOWORD(CC_19_21)
    // Overlapping static entry reached from 0xC17D9E.
    case 0xC17DA0: cpu.execute_instruction<0x63>(0x000080, 2); return true;
    // src/text/ccs/tree_19.asm:138 BRA @UNKNOWN49
    case 0xC17DA1: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/text/ccs/tree_19.asm:138 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17DA0.
    case 0xC17DA2: cpu.execute_instruction<0x26>(0x0000A9, 2); return true;
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    case 0xC17DA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x006B1F, 3); return true;
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC17DA2.
    case 0xC17DA4: cpu.execute_instruction<0x1F>(0x21806B, 4); return true;
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC17DA3.
    case 0xC17DA5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:141 BRA @UNKNOWN49
    case 0xC17DA6: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    case 0xC17DA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x006BC6, 3); return true;
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC17DA8.
    case 0xC17DAA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_19.asm:144 BRA @UNKNOWN49
    case 0xC17DAB: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/tree_19.asm:146 LDA #.LOWORD(CC_19_24)
    case 0xC17DAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x006CFA, 3); return true;
    // src/text/ccs/tree_19.asm:146 LDA #.LOWORD(CC_19_24)
    // Overlapping static entry reached from 0xC17DAD.
    case 0xC17DAF: cpu.execute_instruction<0x6C>(0x001780, 3); return true;
    // src/text/ccs/tree_19.asm:147 BRA @UNKNOWN49
    case 0xC17DB0: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/ccs/tree_19.asm:149 LDA #.LOWORD(CC_19_25)
    case 0xC17DB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00721E, 3); return true;
    // src/text/ccs/tree_19.asm:149 LDA #.LOWORD(CC_19_25)
    // Overlapping static entry reached from 0xC17DB2.
    case 0xC17DB4: cpu.execute_instruction<0x72>(0x000080, 2); return true;
    // src/text/ccs/tree_19.asm:150 BRA @UNKNOWN49
    case 0xC17DB5: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_19.asm:150 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17DB4.
    case 0xC17DB6: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    case 0xC17DB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B6, 2); else cpu.execute_instruction<0xA9>(0x0072B6, 3); return true;
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    // Overlapping static entry reached from 0xC17DB6.
    case 0xC17DB8: cpu.execute_instruction<0xB6>(0x000072, 2); return true;
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    // Overlapping static entry reached from 0xC17DB7.
    case 0xC17DB9: cpu.execute_instruction<0x72>(0x000080, 2); return true;
    // src/text/ccs/tree_19.asm:153 BRA @UNKNOWN49
    case 0xC17DBA: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_19.asm:153 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17DB9.
    case 0xC17DBB: cpu.execute_instruction<0x0D>(0x00EBA9, 3); return true;
    // src/text/ccs/tree_19.asm:155 LDA #.LOWORD(CC_19_27)
    case 0xC17DBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EB, 2); else cpu.execute_instruction<0xA9>(0x0079EB, 3); return true;
    // src/text/ccs/tree_19.asm:155 LDA #.LOWORD(CC_19_27)
    // Overlapping static entry reached from 0xC17DBC.
    case 0xC17DBE: cpu.execute_instruction<0x79>(0x000880, 3); return true;
    // src/text/ccs/tree_19.asm:156 BRA @UNKNOWN49
    case 0xC17DBF: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_19.asm:158 LDA #.LOWORD(CC_19_28)
    case 0xC17DC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x004C19, 3); return true;
    // src/text/ccs/tree_19.asm:158 LDA #.LOWORD(CC_19_28)
    // Overlapping static entry reached from 0xC17DC1.
    case 0xC17DC3: cpu.execute_instruction<0x4C>(0x000380, 3); return true;
    // src/text/ccs/tree_19.asm:159 BRA @UNKNOWN49
    case 0xC17DC4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_19.asm:161 LDA #0
    case 0xC17DC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_19.asm:161 LDA #0
    // Overlapping static entry reached from 0xC17DC6.
    case 0xC17DC8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_19.asm:163 END_C_FUNCTION
    case 0xC17DC9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_19.asm:163 END_C_FUNCTION
    case 0xC17DCA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1A.asm (source_named).
bool execute_text_ccs_tree_1a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1A.asm:3 BEGIN_C_FUNCTION
    case 0xC17DCB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DCD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DCE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DCF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17DD0.
    case 0xC17DD2: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DD3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DD4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1A.asm:10 TXA
    case 0xC17DD5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1A.asm:11 BEQ @UNKNOWN2
    case 0xC17DD6: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/text/ccs/tree_1A.asm:12 CMP #$01
    case 0xC17DD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1A.asm:12 CMP #$01
    // Overlapping static entry reached from 0xC17DD8.
    case 0xC17DDA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:13 BEQ @UNKNOWN3
    case 0xC17DDB: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/text/ccs/tree_1A.asm:14 CMP #$04
    case 0xC17DDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1A.asm:14 CMP #$04
    // Overlapping static entry reached from 0xC17DDD.
    case 0xC17DDF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:15 BEQ @UNKNOWN4
    case 0xC17DE0: cpu.execute_instruction<0xF0>(0x000038, 2); return true;
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    case 0xC17DE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    // Overlapping static entry reached from 0xC17E38.
    case 0xC17DE3: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    // Overlapping static entry reached from 0xC17DE2.
    case 0xC17DE4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:17 BEQ @UNKNOWN5
    case 0xC17DE5: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/text/ccs/tree_1A.asm:18 CMP #$06
    case 0xC17DE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1A.asm:18 CMP #$06
    // Overlapping static entry reached from 0xC17DE7.
    case 0xC17DE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:19 BEQ @UNKNOWN6
    case 0xC17DEA: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/text/ccs/tree_1A.asm:20 CMP #$07
    case 0xC17DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1A.asm:20 CMP #$07
    // Overlapping static entry reached from 0xC17DEC.
    case 0xC17DEE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:21 BEQ @UNKNOWN7
    case 0xC17DEF: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/text/ccs/tree_1A.asm:22 CMP #$08
    case 0xC17DF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_1A.asm:22 CMP #$08
    // Overlapping static entry reached from 0xC17DF1.
    case 0xC17DF3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:23 BEQ @UNKNOWN8
    case 0xC17DF4: cpu.execute_instruction<0xF0>(0x00005C, 2); return true;
    // src/text/ccs/tree_1A.asm:24 CMP #$09
    case 0xC17DF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_1A.asm:24 CMP #$09
    // Overlapping static entry reached from 0xC17DF6.
    case 0xC17DF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1A.asm:25 BEQ @UNKNOWN9
    case 0xC17DF9: cpu.execute_instruction<0xF0>(0x00006E, 2); return true;
    // src/text/ccs/tree_1A.asm:26 CMP #$0A
    case 0xC17DFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_1A.asm:26 CMP #$0A
    // Overlapping static entry reached from 0xC17DFB.
    case 0xC17DFD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1A.asm:27 BEQL @UNKNOWN10
    case 0xC17DFE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1A.asm:27 BEQL @UNKNOWN10
    case 0xC17E00: cpu.execute_instruction<0x4C>(0x007E80, 3); return true;
    // src/text/ccs/tree_1A.asm:28 CMP #$0B
    case 0xC17E03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/ccs/tree_1A.asm:28 CMP #$0B
    // Overlapping static entry reached from 0xC17E03.
    case 0xC17E05: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1A.asm:29 BEQL @UNKNOWN11
    case 0xC17E06: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1A.asm:29 BEQL @UNKNOWN11
    case 0xC17E08: cpu.execute_instruction<0x4C>(0x007E94, 3); return true;
    // src/text/ccs/tree_1A.asm:30 JMP @UNKNOWN12
    case 0xC17E0B: cpu.execute_instruction<0x4C>(0x007EA6, 3); return true;
    // src/text/ccs/tree_1A.asm:32 LDA #.LOWORD(CC_1A_00)
    case 0xC17E0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x004A3F, 3); return true;
    // src/text/ccs/tree_1A.asm:32 LDA #.LOWORD(CC_1A_00)
    // Overlapping static entry reached from 0xC17E0E.
    case 0xC17E10: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_1A.asm:33 JMP @UNKNOWN13
    case 0xC17E11: cpu.execute_instruction<0x4C>(0x007EA9, 3); return true;
    // src/text/ccs/tree_1A.asm:35 LDA #.LOWORD(CC_1A_01)
    case 0xC17E14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x004A81, 3); return true;
    // src/text/ccs/tree_1A.asm:35 LDA #.LOWORD(CC_1A_01)
    // Overlapping static entry reached from 0xC17E14.
    case 0xC17E16: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_1A.asm:36 JMP @UNKNOWN13
    case 0xC17E17: cpu.execute_instruction<0x4C>(0x007EA9, 3); return true;
    // src/text/ccs/tree_1A.asm:38 LDA #0
    case 0xC17E1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1A.asm:38 LDA #0
    // Overlapping static entry reached from 0xC17E1A.
    case 0xC17E1C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1A.asm:39 JSR SELECTION_MENU
    case 0xC17E1D: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC17E20: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC17E22: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E24: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E26: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E28: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E2A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:42 JSR SET_WORKING_MEMORY
    case 0xC17E2C: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1A.asm:43 JSR UNKNOWN_C11383
    case 0xC17E2F: cpu.execute_instruction<0x20>(0x0019AB, 3); return true;
    // src/text/ccs/tree_1A.asm:44 BRA @UNKNOWN12
    case 0xC17E32: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // src/text/ccs/tree_1A.asm:46 LDA #.LOWORD(CC_1A_05)
    case 0xC17E34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x005758, 3); return true;
    // src/text/ccs/tree_1A.asm:46 LDA #.LOWORD(CC_1A_05)
    // Overlapping static entry reached from 0xC17E34.
    case 0xC17E36: cpu.execute_instruction<0x57>(0x000080, 2); return true;
    // src/text/ccs/tree_1A.asm:47 BRA @UNKNOWN13
    case 0xC17E37: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/text/ccs/tree_1A.asm:47 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17E36.
    case 0xC17E38: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    case 0xC17E39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x0052B5, 3); return true;
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    // Overlapping static entry reached from 0xC17E38.
    case 0xC17E3A: cpu.execute_instruction<0xB5>(0x000052, 2); return true;
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    // Overlapping static entry reached from 0xC17E39.
    case 0xC17E3B: cpu.execute_instruction<0x52>(0x000080, 2); return true;
    // src/text/ccs/tree_1A.asm:50 BRA @UNKNOWN13
    case 0xC17E3C: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/text/ccs/tree_1A.asm:50 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17E3B.
    case 0xC17E3D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/tree_1A.asm:52 JSR UNKNOWN_C19A43
    case 0xC17E3E: cpu.execute_instruction<0x20>(0x009A88, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC17E41: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC17E43: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E45: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E47: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E49: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E4B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:55 JSR SET_WORKING_MEMORY
    case 0xC17E4D: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1A.asm:56 BRA @UNKNOWN12
    case 0xC17E50: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/text/ccs/tree_1A.asm:58 LDA #0
    case 0xC17E52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1A.asm:58 LDA #0
    // Overlapping static entry reached from 0xC17E52.
    case 0xC17E54: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1A.asm:59 JSR SELECTION_MENU
    case 0xC17E55: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:60 STORE_INT1632 @VIRTUAL06
    case 0xC17E58: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:60 STORE_INT1632 @VIRTUAL06
    case 0xC17E5A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E5C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E5E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E60: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E62: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:62 JSR SET_WORKING_MEMORY
    case 0xC17E64: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1A.asm:63 BRA @UNKNOWN12
    case 0xC17E67: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/text/ccs/tree_1A.asm:65 LDA #1
    case 0xC17E69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/tree_1A.asm:65 LDA #1
    // Overlapping static entry reached from 0xC17E69.
    case 0xC17E6B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1A.asm:66 JSR SELECTION_MENU
    case 0xC17E6C: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:67 STORE_INT1632 @VIRTUAL06
    case 0xC17E6F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:67 STORE_INT1632 @VIRTUAL06
    case 0xC17E71: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E73: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E75: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E77: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E79: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:69 JSR SET_WORKING_MEMORY
    case 0xC17E7B: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1A.asm:70 BRA @UNKNOWN12
    case 0xC17E7E: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/text/ccs/tree_1A.asm:72 JSR UNKNOWN_C1AC00
    case 0xC17E80: cpu.execute_instruction<0x20>(0x00AACB, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC17E83: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC17E85: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E87: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E89: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E8B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E8D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:75 JSR SET_WORKING_MEMORY
    case 0xC17E8F: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1A.asm:76 BRA @UNKNOWN12
    case 0xC17E92: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_1A.asm:78 JSR UNKNOWN_C1AAFA
    case 0xC17E94: cpu.execute_instruction<0x20>(0x00A9D0, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:79 STORE_INT1632 @VIRTUAL06
    case 0xC17E97: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:79 STORE_INT1632 @VIRTUAL06
    case 0xC17E99: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E9B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E9D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E9F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EA1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1A.asm:81 JSR SET_WORKING_MEMORY
    case 0xC17EA3: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1A.asm:83 LDA #NULL
    case 0xC17EA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1A.asm:83 LDA #NULL
    // Overlapping static entry reached from 0xC17EA6.
    case 0xC17EA8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1A.asm:85 END_C_FUNCTION
    case 0xC17EA9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1A.asm:85 END_C_FUNCTION
    case 0xC17EAA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1B.asm (source_named).
bool execute_text_ccs_tree_1b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1B.asm:3 BEGIN_C_FUNCTION
    case 0xC17EAB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EAD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EAE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EAF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17EB0.
    case 0xC17EB2: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EB3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EB4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:12 TAY
    case 0xC17EB5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:13 STY @LOCAL02
    case 0xC17EB6: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/ccs/tree_1B.asm:14 TXA
    case 0xC17EB8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:15 BEQ @UNKNOWN3
    case 0xC17EB9: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/text/ccs/tree_1B.asm:16 CMP #$01
    case 0xC17EBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1B.asm:16 CMP #$01
    // Overlapping static entry reached from 0xC17EBB.
    case 0xC17EBD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1B.asm:17 BEQ @UNKNOWN4
    case 0xC17EBE: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/text/ccs/tree_1B.asm:18 CMP #$02
    case 0xC17EC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1B.asm:18 CMP #$02
    // Overlapping static entry reached from 0xC17EC0.
    case 0xC17EC2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1B.asm:19 BEQ @UNKNOWN5
    case 0xC17EC3: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/text/ccs/tree_1B.asm:20 CMP #$03
    case 0xC17EC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1B.asm:20 CMP #$03
    // Overlapping static entry reached from 0xC17EC5.
    case 0xC17EC7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1B.asm:21 BEQ @UNKNOWN8
    case 0xC17EC8: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // src/text/ccs/tree_1B.asm:22 CMP #$04
    case 0xC17ECA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1B.asm:22 CMP #$04
    // Overlapping static entry reached from 0xC17ECA.
    case 0xC17ECC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:23 BEQL @UNKNOWN11
    case 0xC17ECD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:23 BEQL @UNKNOWN11
    case 0xC17ECF: cpu.execute_instruction<0x4C>(0x007F6D, 3); return true;
    // src/text/ccs/tree_1B.asm:24 CMP #$05
    case 0xC17ED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1B.asm:24 CMP #$05
    // Overlapping static entry reached from 0xC17ED2.
    case 0xC17ED4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:25 BEQL @UNKNOWN12
    case 0xC17ED5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:25 BEQL @UNKNOWN12
    case 0xC17ED7: cpu.execute_instruction<0x4C>(0x007FA3, 3); return true;
    // src/text/ccs/tree_1B.asm:26 CMP #$06
    case 0xC17EDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1B.asm:26 CMP #$06
    // Overlapping static entry reached from 0xC17EDA.
    case 0xC17EDC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:27 BEQL @UNKNOWN13
    case 0xC17EDD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:27 BEQL @UNKNOWN13
    case 0xC17EDF: cpu.execute_instruction<0x4C>(0x007FC7, 3); return true;
    // src/text/ccs/tree_1B.asm:28 JMP @UNKNOWN14
    case 0xC17EE2: cpu.execute_instruction<0x4C>(0x007FFA, 3); return true;
    // src/text/ccs/tree_1B.asm:30 JSR TRANSFER_ACTIVE_MEM_STORAGE
    case 0xC17EE5: cpu.execute_instruction<0x20>(0x000527, 3); return true;
    // src/text/ccs/tree_1B.asm:31 JMP @UNKNOWN14
    case 0xC17EE8: cpu.execute_instruction<0x4C>(0x007FFA, 3); return true;
    // src/text/ccs/tree_1B.asm:33 JSR TRANSFER_STORAGE_MEM_ACTIVE
    case 0xC17EEB: cpu.execute_instruction<0x20>(0x000583, 3); return true;
    // src/text/ccs/tree_1B.asm:34 JMP @UNKNOWN14
    case 0xC17EEE: cpu.execute_instruction<0x4C>(0x007FFA, 3); return true;
    // src/text/ccs/tree_1B.asm:36 JSR GET_WORKING_MEMORY
    case 0xC17EF1: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17EF4.
    case 0xC17EF6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17EF7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17EF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17EF9.
    case 0xC17EFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17EFC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17EFE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F00: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F02: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F04: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F06: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/tree_1B.asm:39 BNE @UNKNOWN7
    case 0xC17F08: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:40 LDA #.LOWORD(CC_0A)
    case 0xC17F0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x004525, 3); return true;
    // src/text/ccs/tree_1B.asm:40 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC17F0A.
    case 0xC17F0C: cpu.execute_instruction<0x45>(0x00004C, 2); return true;
    // src/text/ccs/tree_1B.asm:41 JMP @UNKNOWN15
    case 0xC17F0D: cpu.execute_instruction<0x4C>(0x007FFF, 3); return true;
    // src/text/ccs/tree_1B.asm:41 JMP @UNKNOWN15
    // Overlapping static entry reached from 0xC17F0C.
    case 0xC17F0E: cpu.execute_instruction<0xFF>(0x16A47F, 4); return true;
    // src/text/ccs/tree_1B.asm:43 LDY @LOCAL02
    case 0xC17F10: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F12: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F15: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F17: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F1A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/tree_1B.asm:45 LDA #4
    case 0xC17F1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/tree_1B.asm:45 LDA #4
    // Overlapping static entry reached from 0xC17F1C.
    case 0xC17F1E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/tree_1B.asm:46 CLC
    case 0xC17F1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:47 ADC @VIRTUAL06
    case 0xC17F20: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:48 STA @VIRTUAL06
    case 0xC17F22: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:49 STA __BSS_START__,Y
    case 0xC17F24: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/tree_1B.asm:50 LDA @VIRTUAL06+2
    case 0xC17F27: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/tree_1B.asm:51 STA __BSS_START__+2,Y
    case 0xC17F29: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/tree_1B.asm:52 JMP @UNKNOWN14
    case 0xC17F2C: cpu.execute_instruction<0x4C>(0x007FFA, 3); return true;
    // src/text/ccs/tree_1B.asm:54 JSR GET_WORKING_MEMORY
    case 0xC17F2F: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17F32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17F32.
    case 0xC17F34: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17F35: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17F37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17F37.
    case 0xC17F39: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17F3A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F3C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F3E: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F40: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F42: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F44: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/tree_1B.asm:57 BEQ @UNKNOWN10
    case 0xC17F46: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:58 LDA #.LOWORD(CC_0A)
    case 0xC17F48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x004525, 3); return true;
    // src/text/ccs/tree_1B.asm:58 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC17F48.
    case 0xC17F4A: cpu.execute_instruction<0x45>(0x00004C, 2); return true;
    // src/text/ccs/tree_1B.asm:59 JMP @UNKNOWN15
    case 0xC17F4B: cpu.execute_instruction<0x4C>(0x007FFF, 3); return true;
    // src/text/ccs/tree_1B.asm:59 JMP @UNKNOWN15
    // Overlapping static entry reached from 0xC17F4A.
    case 0xC17F4C: cpu.execute_instruction<0xFF>(0x16A47F, 4); return true;
    // src/text/ccs/tree_1B.asm:61 LDY @LOCAL02
    case 0xC17F4E: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F50: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F55: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F58: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/tree_1B.asm:63 LDA #4
    case 0xC17F5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/tree_1B.asm:63 LDA #4
    // Overlapping static entry reached from 0xC17F5A.
    case 0xC17F5C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/tree_1B.asm:64 CLC
    case 0xC17F5D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/tree_1B.asm:65 ADC @VIRTUAL06
    case 0xC17F5E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:66 STA @VIRTUAL06
    case 0xC17F60: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/tree_1B.asm:67 STA __BSS_START__,Y
    case 0xC17F62: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/tree_1B.asm:68 LDA @VIRTUAL06+2
    case 0xC17F65: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/tree_1B.asm:69 STA __BSS_START__+2,Y
    case 0xC17F67: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/tree_1B.asm:70 JMP @UNKNOWN14
    case 0xC17F6A: cpu.execute_instruction<0x4C>(0x007FFA, 3); return true;
    // src/text/ccs/tree_1B.asm:72 JSR GET_WORKING_MEMORY
    case 0xC17F6D: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17F70: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17F72: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17F74: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17F76: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/tree_1B.asm:74 JSR GET_ARGUMENT_MEMORY
    case 0xC17F78: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17F7B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17F7D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17F7F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17F81: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:77 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17F83: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:77 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17F85: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:77 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17F87: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:77 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17F89: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1B.asm:82 JSR SET_WORKING_MEMORY
    case 0xC17F8B: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17F8E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17F90: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17F92: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17F94: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17F96: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17F98: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17F9A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17F9C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1B.asm:85 JSR SET_ARGUMENT_MEMORY
    case 0xC17F9E: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/tree_1B.asm:86 BRA @UNKNOWN14
    case 0xC17FA1: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/text/ccs/tree_1B.asm:88 JSR GET_WORKING_MEMORY
    case 0xC17FA3: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17FA6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17FA8: cpu.execute_instruction<0x8D>(0x009A80, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17FAB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17FAD: cpu.execute_instruction<0x8D>(0x009A82, 3); return true;
    // src/text/ccs/tree_1B.asm:90 JSR GET_ARGUMENT_MEMORY
    case 0xC17FB0: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17FB3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17FB5: cpu.execute_instruction<0x8D>(0x009A84, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17FB8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17FBA: cpu.execute_instruction<0x8D>(0x009A86, 3); return true;
    // src/text/ccs/tree_1B.asm:92 JSR GET_SECONDARY_MEMORY
    case 0xC17FBD: cpu.execute_instruction<0x20>(0x000603, 3); return true;
    // src/text/ccs/tree_1B.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC17FC0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/tree_1B.asm:94 STA TEXT_LOOP_REGISTER_BACKUP
    case 0xC17FC2: cpu.execute_instruction<0x8D>(0x009A88, 3); return true;
    // src/text/ccs/tree_1B.asm:95 BRA @UNKNOWN14
    case 0xC17FC5: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FC7: cpu.execute_instruction<0xAD>(0x009A80, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FCA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FCC: cpu.execute_instruction<0xAD>(0x009A82, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FCF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FD1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FD3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FD5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FD7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1B.asm:100 JSR SET_WORKING_MEMORY
    case 0xC17FD9: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FDC: cpu.execute_instruction<0xAD>(0x009A84, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FDF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FE1: cpu.execute_instruction<0xAD>(0x009A86, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FE4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FE6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FE8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FEA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FEC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1B.asm:103 JSR SET_ARGUMENT_MEMORY
    case 0xC17FEE: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/tree_1B.asm:104 LDA TEXT_LOOP_REGISTER_BACKUP
    case 0xC17FF1: cpu.execute_instruction<0xAD>(0x009A88, 3); return true;
    // src/text/ccs/tree_1B.asm:105 AND #$00FF
    case 0xC17FF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/tree_1B.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC17FF4.
    case 0xC17FF6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1B.asm:106 JSR SET_SECONDARY_MEMORY
    case 0xC17FF7: cpu.execute_instruction<0x20>(0x000646, 3); return true;
    // src/text/ccs/tree_1B.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC17FFA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/tree_1B.asm:109 LDA #NULL
    case 0xC17FFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1B.asm:109 LDA #NULL
    // Overlapping static entry reached from 0xC17FFC.
    case 0xC17FFE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1B.asm:111 END_C_FUNCTION
    case 0xC17FFF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1B.asm:111 END_C_FUNCTION
    case 0xC18000: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1C.asm (source_named).
bool execute_text_ccs_tree_1c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1C.asm:3 BEGIN_C_FUNCTION
    case 0xC18001: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18003: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18004: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18005: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18006: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC18006.
    case 0xC18008: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18009: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC1800A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:10 TXA
    case 0xC1800B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:11 BEQL @UNKNOWN21
    case 0xC1800C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:11 BEQL @UNKNOWN21
    case 0xC1800E: cpu.execute_instruction<0x4C>(0x0080A4, 3); return true;
    // src/text/ccs/tree_1C.asm:12 CMP #$01
    case 0xC18011: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1C.asm:12 CMP #$01
    // Overlapping static entry reached from 0xC18011.
    case 0xC18013: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:13 BEQL @UNKNOWN22
    case 0xC18014: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:13 BEQL @UNKNOWN22
    case 0xC18016: cpu.execute_instruction<0x4C>(0x0080AA, 3); return true;
    // src/text/ccs/tree_1C.asm:14 CMP #$02
    case 0xC18019: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1C.asm:14 CMP #$02
    // Overlapping static entry reached from 0xC18019.
    case 0xC1801B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:15 BEQL @UNKNOWN23
    case 0xC1801C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:15 BEQL @UNKNOWN23
    case 0xC1801E: cpu.execute_instruction<0x4C>(0x0080B0, 3); return true;
    // src/text/ccs/tree_1C.asm:16 CMP #$03
    case 0xC18021: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1C.asm:16 CMP #$03
    // Overlapping static entry reached from 0xC18021.
    case 0xC18023: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:17 BEQL @UNKNOWN24
    case 0xC18024: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:17 BEQL @UNKNOWN24
    case 0xC18026: cpu.execute_instruction<0x4C>(0x0080B6, 3); return true;
    // src/text/ccs/tree_1C.asm:18 CMP #$04
    case 0xC18029: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1C.asm:18 CMP #$04
    // Overlapping static entry reached from 0xC18029.
    case 0xC1802B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:19 BEQL @UNKNOWN25
    case 0xC1802C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:19 BEQL @UNKNOWN25
    case 0xC1802E: cpu.execute_instruction<0x4C>(0x0080BC, 3); return true;
    // src/text/ccs/tree_1C.asm:20 CMP #$05
    case 0xC18031: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1C.asm:20 CMP #$05
    // Overlapping static entry reached from 0xC18031.
    case 0xC18033: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:21 BEQL @UNKNOWN26
    case 0xC18034: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:21 BEQL @UNKNOWN26
    case 0xC18036: cpu.execute_instruction<0x4C>(0x0080C2, 3); return true;
    // src/text/ccs/tree_1C.asm:22 CMP #@VIRTUAL06
    case 0xC18039: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1C.asm:22 CMP #@VIRTUAL06
    // Overlapping static entry reached from 0xC18039.
    case 0xC1803B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:23 BEQL @UNKNOWN27
    case 0xC1803C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:23 BEQL @UNKNOWN27
    case 0xC1803E: cpu.execute_instruction<0x4C>(0x0080C8, 3); return true;
    // src/text/ccs/tree_1C.asm:24 CMP #$07
    case 0xC18041: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1C.asm:24 CMP #$07
    // Overlapping static entry reached from 0xC18041.
    case 0xC18043: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:25 BEQL @UNKNOWN28
    case 0xC18044: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:25 BEQL @UNKNOWN28
    case 0xC18046: cpu.execute_instruction<0x4C>(0x0080CE, 3); return true;
    // src/text/ccs/tree_1C.asm:26 CMP #$08
    case 0xC18049: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_1C.asm:26 CMP #$08
    // Overlapping static entry reached from 0xC18049.
    case 0xC1804B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:27 BEQL @UNKNOWN29
    case 0xC1804C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:27 BEQL @UNKNOWN29
    case 0xC1804E: cpu.execute_instruction<0x4C>(0x0080D4, 3); return true;
    // src/text/ccs/tree_1C.asm:28 CMP #$09
    case 0xC18051: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_1C.asm:28 CMP #$09
    // Overlapping static entry reached from 0xC18051.
    case 0xC18053: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:29 BEQL @UNKNOWN30
    case 0xC18054: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:29 BEQL @UNKNOWN30
    case 0xC18056: cpu.execute_instruction<0x4C>(0x0080DA, 3); return true;
    // src/text/ccs/tree_1C.asm:30 CMP #$0A
    case 0xC18059: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_1C.asm:30 CMP #$0A
    // Overlapping static entry reached from 0xC18059.
    case 0xC1805B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:31 BEQL @UNKNOWN31
    case 0xC1805C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:31 BEQL @UNKNOWN31
    case 0xC1805E: cpu.execute_instruction<0x4C>(0x0080E0, 3); return true;
    // src/text/ccs/tree_1C.asm:32 CMP #$0B
    case 0xC18061: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/ccs/tree_1C.asm:32 CMP #$0B
    // Overlapping static entry reached from 0xC18061.
    case 0xC18063: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:33 BEQL @UNKNOWN32
    case 0xC18064: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:33 BEQL @UNKNOWN32
    case 0xC18066: cpu.execute_instruction<0x4C>(0x0080E6, 3); return true;
    // src/text/ccs/tree_1C.asm:34 CMP #$0C
    case 0xC18069: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/ccs/tree_1C.asm:34 CMP #$0C
    // Overlapping static entry reached from 0xC18069.
    case 0xC1806B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:35 BEQL @UNKNOWN33
    case 0xC1806C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:35 BEQL @UNKNOWN33
    case 0xC1806E: cpu.execute_instruction<0x4C>(0x0080EC, 3); return true;
    // src/text/ccs/tree_1C.asm:42 CMP #$0D
    case 0xC18071: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/ccs/tree_1C.asm:42 CMP #$0D
    // Overlapping static entry reached from 0xC18071.
    case 0xC18073: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:43 BEQL @UNKNOWN36
    case 0xC18074: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:43 BEQL @UNKNOWN36
    case 0xC18076: cpu.execute_instruction<0x4C>(0x0080F2, 3); return true;
    // src/text/ccs/tree_1C.asm:44 CMP #$0E
    case 0xC18079: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/text/ccs/tree_1C.asm:44 CMP #$0E
    // Overlapping static entry reached from 0xC18079.
    case 0xC1807B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:45 BEQL @UNKNOWN37
    case 0xC1807C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:45 BEQL @UNKNOWN37
    case 0xC1807E: cpu.execute_instruction<0x4C>(0x008111, 3); return true;
    // src/text/ccs/tree_1C.asm:46 CMP #$0F
    case 0xC18081: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/text/ccs/tree_1C.asm:46 CMP #$0F
    // Overlapping static entry reached from 0xC18081.
    case 0xC18083: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:47 BEQL @UNKNOWN38
    case 0xC18084: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:47 BEQL @UNKNOWN38
    case 0xC18086: cpu.execute_instruction<0x4C>(0x008130, 3); return true;
    // src/text/ccs/tree_1C.asm:48 CMP #$11
    case 0xC18089: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/ccs/tree_1C.asm:48 CMP #$11
    // Overlapping static entry reached from 0xC18089.
    case 0xC1808B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:49 BEQL @UNKNOWN39
    case 0xC1808C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:49 BEQL @UNKNOWN39
    case 0xC1808E: cpu.execute_instruction<0x4C>(0x008140, 3); return true;
    // src/text/ccs/tree_1C.asm:50 CMP #$12
    case 0xC18091: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/text/ccs/tree_1C.asm:50 CMP #$12
    // Overlapping static entry reached from 0xC18091.
    case 0xC18093: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:51 BEQL @UNKNOWN40
    case 0xC18094: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:51 BEQL @UNKNOWN40
    case 0xC18096: cpu.execute_instruction<0x4C>(0x008164, 3); return true;
    // src/text/ccs/tree_1C.asm:52 CMP #$13
    case 0xC18099: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/ccs/tree_1C.asm:52 CMP #$13
    // Overlapping static entry reached from 0xC18099.
    case 0xC1809B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:53 BEQL @UNKNOWN41
    case 0xC1809C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:53 BEQL @UNKNOWN41
    case 0xC1809E: cpu.execute_instruction<0x4C>(0x008169, 3); return true;
    // src/text/ccs/tree_1C.asm:54 JMP @UNKNOWN42
    case 0xC180A1: cpu.execute_instruction<0x4C>(0x00816E, 3); return true;
    // src/text/ccs/tree_1C.asm:56 LDA #.LOWORD(CC_1C_00)
    case 0xC180A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00451B, 3); return true;
    // src/text/ccs/tree_1C.asm:56 LDA #.LOWORD(CC_1C_00)
    // Overlapping static entry reached from 0xC180A4.
    case 0xC180A6: cpu.execute_instruction<0x45>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:57 JMP @UNKNOWN43
    case 0xC180A7: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:57 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180A6.
    case 0xC180A8: cpu.execute_instruction<0x71>(0x000081, 2); return true;
    // src/text/ccs/tree_1C.asm:59 LDA #.LOWORD(CC_1C_01)
    case 0xC180AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F2, 2); else cpu.execute_instruction<0xA9>(0x0044F2, 3); return true;
    // src/text/ccs/tree_1C.asm:59 LDA #.LOWORD(CC_1C_01)
    // Overlapping static entry reached from 0xC180AA.
    case 0xC180AC: cpu.execute_instruction<0x44>(0x00714C, 3); return true;
    // src/text/ccs/tree_1C.asm:60 JMP @UNKNOWN43
    case 0xC180AD: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:60 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180AC.
    case 0xC180AF: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    case 0xC180B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0053C4, 3); return true;
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    // Overlapping static entry reached from 0xC180AF.
    case 0xC180B1: cpu.execute_instruction<0xC4>(0x000053, 2); return true;
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    // Overlapping static entry reached from 0xC180B0.
    case 0xC180B2: cpu.execute_instruction<0x53>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:63 JMP @UNKNOWN43
    case 0xC180B3: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:63 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180B2.
    case 0xC180B4: cpu.execute_instruction<0x71>(0x000081, 2); return true;
    // src/text/ccs/tree_1C.asm:65 LDA #.LOWORD(CC_1C_03)
    case 0xC180B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x004C8D, 3); return true;
    // src/text/ccs/tree_1C.asm:65 LDA #.LOWORD(CC_1C_03)
    // Overlapping static entry reached from 0xC180B6.
    case 0xC180B8: cpu.execute_instruction<0x4C>(0x00714C, 3); return true;
    // src/text/ccs/tree_1C.asm:66 JMP @UNKNOWN43
    case 0xC180B9: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:68 JSR SHOW_HPPP_WINDOWS
    case 0xC180BC: cpu.execute_instruction<0x20>(0x000E5A, 3); return true;
    // src/text/ccs/tree_1C.asm:69 JMP @UNKNOWN42
    case 0xC180BF: cpu.execute_instruction<0x4C>(0x00816E, 3); return true;
    // src/text/ccs/tree_1C.asm:71 LDA #.LOWORD(CC_1C_05)
    case 0xC180C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x004AC3, 3); return true;
    // src/text/ccs/tree_1C.asm:71 LDA #.LOWORD(CC_1C_05)
    // Overlapping static entry reached from 0xC180C2.
    case 0xC180C4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:72 JMP @UNKNOWN43
    case 0xC180C5: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:74 LDA #.LOWORD(CC_1C_06)
    case 0xC180C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x004AE2, 3); return true;
    // src/text/ccs/tree_1C.asm:74 LDA #.LOWORD(CC_1C_06)
    // Overlapping static entry reached from 0xC180C8.
    case 0xC180CA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:75 JMP @UNKNOWN43
    case 0xC180CB: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:77 LDA #.LOWORD(CC_1C_07)
    case 0xC180CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0049CE, 3); return true;
    // src/text/ccs/tree_1C.asm:77 LDA #.LOWORD(CC_1C_07)
    // Overlapping static entry reached from 0xC180CE.
    case 0xC180D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00004C, 2); else cpu.execute_instruction<0x49>(0x00714C, 3); return true;
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    case 0xC180D1: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180D0.
    case 0xC180D2: cpu.execute_instruction<0x71>(0x000081, 2); return true;
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180D0.
    case 0xC180D3: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    case 0xC180D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DA, 2); else cpu.execute_instruction<0xA9>(0x0047DA, 3); return true;
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    // Overlapping static entry reached from 0xC180D3.
    case 0xC180D5: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    // Overlapping static entry reached from 0xC180D4.
    case 0xC180D6: cpu.execute_instruction<0x47>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:81 JMP @UNKNOWN43
    case 0xC180D7: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:81 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180D6.
    case 0xC180D8: cpu.execute_instruction<0x71>(0x000081, 2); return true;
    // src/text/ccs/tree_1C.asm:83 LDA #.LOWORD(CC_1C_09)
    case 0xC180DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x004511, 3); return true;
    // src/text/ccs/tree_1C.asm:83 LDA #.LOWORD(CC_1C_09)
    // Overlapping static entry reached from 0xC180DA.
    case 0xC180DC: cpu.execute_instruction<0x45>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:84 JMP @UNKNOWN43
    case 0xC180DD: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:84 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180DC.
    case 0xC180DE: cpu.execute_instruction<0x71>(0x000081, 2); return true;
    // src/text/ccs/tree_1C.asm:86 LDA #.LOWORD(CC_1C_0A)
    case 0xC180E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000069, 2); else cpu.execute_instruction<0xA9>(0x005669, 3); return true;
    // src/text/ccs/tree_1C.asm:86 LDA #.LOWORD(CC_1C_0A)
    // Overlapping static entry reached from 0xC180E0.
    case 0xC180E2: cpu.execute_instruction<0x56>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:87 JMP @UNKNOWN43
    case 0xC180E3: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:87 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180E2.
    case 0xC180E4: cpu.execute_instruction<0x71>(0x000081, 2); return true;
    // src/text/ccs/tree_1C.asm:89 LDA #.LOWORD(CC_1C_0B)
    case 0xC180E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0057EF, 3); return true;
    // src/text/ccs/tree_1C.asm:89 LDA #.LOWORD(CC_1C_0B)
    // Overlapping static entry reached from 0xC180E6.
    case 0xC180E8: cpu.execute_instruction<0x57>(0x00004C, 2); return true;
    // src/text/ccs/tree_1C.asm:90 JMP @UNKNOWN43
    case 0xC180E9: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:90 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180E8.
    case 0xC180EA: cpu.execute_instruction<0x71>(0x000081, 2); return true;
    // src/text/ccs/tree_1C.asm:92 LDA #.LOWORD(CC_1C_0C)
    case 0xC180EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x005E26, 3); return true;
    // src/text/ccs/tree_1C.asm:92 LDA #.LOWORD(CC_1C_0C)
    // Overlapping static entry reached from 0xC180EC.
    case 0xC180EE: cpu.execute_instruction<0x5E>(0x00714C, 3); return true;
    // src/text/ccs/tree_1C.asm:93 JMP @UNKNOWN43
    case 0xC180EF: cpu.execute_instruction<0x4C>(0x008171, 3); return true;
    // src/text/ccs/tree_1C.asm:93 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180EE.
    case 0xC180F1: cpu.execute_instruction<0x81>(0x000020, 2); return true;
    // src/text/ccs/tree_1C.asm:115 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC180F2: cpu.execute_instruction<0x20>(0x00AB5D, 3); return true;
    // src/text/ccs/tree_1C.asm:115 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    // Overlapping static entry reached from 0xC180F1.
    case 0xC180F3: cpu.execute_instruction<0x5D>(0x0085AB, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180F5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC180F3.
    case 0xC180F6: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180F7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180FA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180FB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180FD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_1C.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC180FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18101: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18103: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18105: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18107: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1C.asm:119 LDA #80
    case 0xC18109: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/text/ccs/tree_1C.asm:119 LDA #80
    // Overlapping static entry reached from 0xC18109.
    case 0xC1810B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1C.asm:121 JSR PRINT_STRING
    case 0xC1810C: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/ccs/tree_1C.asm:125 BRA @UNKNOWN42
    case 0xC1810F: cpu.execute_instruction<0x80>(0x00005D, 2); return true;
    // src/text/ccs/tree_1C.asm:131 JSR RETURN_BATTLE_TARGET_ADDRESS
    case 0xC18111: cpu.execute_instruction<0x20>(0x00ABAE, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC18114: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC18116: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC18117: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC18119: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1811A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1811C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/tree_1C.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC1811E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18120: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18122: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18124: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18126: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1C.asm:135 LDA #80
    case 0xC18128: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/text/ccs/tree_1C.asm:135 LDA #80
    // Overlapping static entry reached from 0xC18128.
    case 0xC1812A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1C.asm:137 JSR PRINT_STRING
    case 0xC1812B: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/ccs/tree_1C.asm:141 BRA @UNKNOWN42
    case 0xC1812E: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/text/ccs/tree_1C.asm:143 JSR UNKNOWN_C1AD26
    case 0xC18130: cpu.execute_instruction<0x20>(0x00ABE2, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18133: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18135: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18137: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18139: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1C.asm:145 JSR PRINT_NUMBER
    case 0xC1813B: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/text/ccs/tree_1C.asm:146 BRA @UNKNOWN42
    case 0xC1813E: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/text/ccs/tree_1C.asm:149 JSL UPDATE_PARTY
    case 0xC18140: cpu.execute_instruction<0x22>(0xC036C7, 4); return true;
    // src/text/ccs/tree_1C.asm:150 JSL UNKNOWN_C2277C
    case 0xC18144: cpu.execute_instruction<0x22>(0xC22642, 4); return true;
    // src/text/ccs/tree_1C.asm:151 JSR UNKNOWN_C1931B
    case 0xC18148: cpu.execute_instruction<0x20>(0x00940D, 3); return true;
    // src/text/ccs/tree_1C.asm:152 JSL UNKNOWN_C2272F
    case 0xC1814B: cpu.execute_instruction<0x22>(0xC225EE, 4); return true;
    // src/text/ccs/tree_1C.asm:154 CMP #1
    case 0xC1814F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1C.asm:154 CMP #1
    // Overlapping static entry reached from 0xC1814F.
    case 0xC18151: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/tree_1C.asm:155 BLTEQ @UNKNOWN42
    case 0xC18152: cpu.execute_instruction<0x90>(0x00001A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/tree_1C.asm:155 BLTEQ @UNKNOWN42
    case 0xC18154: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/text/ccs/tree_1C.asm:156 LDA #$0066
    case 0xC18156: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000066, 2); else cpu.execute_instruction<0xA9>(0x000066, 3); return true;
    // src/text/ccs/tree_1C.asm:156 LDA #$0066
    // Overlapping static entry reached from 0xC18156.
    case 0xC18158: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1C.asm:157 JSR PRINT_LETTER
    case 0xC18159: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/ccs/tree_1C.asm:158 LDA #$0076
    case 0xC1815C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x000076, 3); return true;
    // src/text/ccs/tree_1C.asm:158 LDA #$0076
    // Overlapping static entry reached from 0xC1815C.
    case 0xC1815E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/tree_1C.asm:159 JSR PRINT_LETTER
    case 0xC1815F: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/ccs/tree_1C.asm:161 BRA @UNKNOWN42
    case 0xC18162: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/text/ccs/tree_1C.asm:167 LDA #.LOWORD(CC_1C_12)
    case 0xC18164: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x006450, 3); return true;
    // src/text/ccs/tree_1C.asm:167 LDA #.LOWORD(CC_1C_12)
    // Overlapping static entry reached from 0xC18164.
    case 0xC18166: cpu.execute_instruction<0x64>(0x000080, 2); return true;
    // src/text/ccs/tree_1C.asm:168 BRA @UNKNOWN43
    case 0xC18167: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_1C.asm:168 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC18166.
    case 0xC18168: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/tree_1C.asm:170 LDA #.LOWORD(CC_1C_13)
    case 0xC18169: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x007640, 3); return true;
    // src/text/ccs/tree_1C.asm:170 LDA #.LOWORD(CC_1C_13)
    // Overlapping static entry reached from 0xC18169.
    case 0xC1816B: cpu.execute_instruction<0x76>(0x000080, 2); return true;
    // src/text/ccs/tree_1C.asm:171 BRA @UNKNOWN43
    case 0xC1816C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_1C.asm:171 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC1816B.
    case 0xC1816D: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    case 0xC1816E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    // Overlapping static entry reached from 0xC1816D.
    case 0xC1816F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    // Overlapping static entry reached from 0xC1816E.
    case 0xC18170: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1C.asm:175 END_C_FUNCTION
    case 0xC18171: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1C.asm:175 END_C_FUNCTION
    case 0xC18172: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1D.asm (source_named).
bool execute_text_ccs_tree_1d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1D.asm:3 BEGIN_C_FUNCTION
    case 0xC18173: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC18175: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC18176: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC18177: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC18178: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC18178.
    case 0xC1817A: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC1817B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC1817C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:12 TXA
    case 0xC1817D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:13 BEQL @UNKNOWN30
    case 0xC1817E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:13 BEQL @UNKNOWN30
    case 0xC18180: cpu.execute_instruction<0x4C>(0x00826E, 3); return true;
    // src/text/ccs/tree_1D.asm:14 CMP #$01
    case 0xC18183: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1D.asm:14 CMP #$01
    // Overlapping static entry reached from 0xC18183.
    case 0xC18185: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:15 BEQL @UNKNOWN31
    case 0xC18186: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:15 BEQL @UNKNOWN31
    case 0xC18188: cpu.execute_instruction<0x4C>(0x008274, 3); return true;
    // src/text/ccs/tree_1D.asm:16 CMP #$02
    case 0xC1818B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1D.asm:16 CMP #$02
    // Overlapping static entry reached from 0xC1818B.
    case 0xC1818D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:17 BEQL @UNKNOWN32
    case 0xC1818E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:17 BEQL @UNKNOWN32
    case 0xC18190: cpu.execute_instruction<0x4C>(0x00827A, 3); return true;
    // src/text/ccs/tree_1D.asm:18 CMP #$03
    case 0xC18193: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1D.asm:18 CMP #$03
    // Overlapping static entry reached from 0xC18193.
    case 0xC18195: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:19 BEQL @UNKNOWN33
    case 0xC18196: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:19 BEQL @UNKNOWN33
    case 0xC18198: cpu.execute_instruction<0x4C>(0x008280, 3); return true;
    // src/text/ccs/tree_1D.asm:20 CMP #$04
    case 0xC1819B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1D.asm:20 CMP #$04
    // Overlapping static entry reached from 0xC1819B.
    case 0xC1819D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:21 BEQL @UNKNOWN34
    case 0xC1819E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:21 BEQL @UNKNOWN34
    case 0xC181A0: cpu.execute_instruction<0x4C>(0x008286, 3); return true;
    // src/text/ccs/tree_1D.asm:22 CMP #$05
    case 0xC181A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1D.asm:22 CMP #$05
    // Overlapping static entry reached from 0xC181A3.
    case 0xC181A5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:23 BEQL @UNKNOWN35
    case 0xC181A6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:23 BEQL @UNKNOWN35
    case 0xC181A8: cpu.execute_instruction<0x4C>(0x00828C, 3); return true;
    // src/text/ccs/tree_1D.asm:24 CMP #$06
    case 0xC181AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1D.asm:24 CMP #$06
    // Overlapping static entry reached from 0xC181AB.
    case 0xC181AD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:25 BEQL @UNKNOWN36
    case 0xC181AE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:25 BEQL @UNKNOWN36
    case 0xC181B0: cpu.execute_instruction<0x4C>(0x008292, 3); return true;
    // src/text/ccs/tree_1D.asm:26 CMP #$07
    case 0xC181B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1D.asm:26 CMP #$07
    // Overlapping static entry reached from 0xC181B3.
    case 0xC181B5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:27 BEQL @UNKNOWN37
    case 0xC181B6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:27 BEQL @UNKNOWN37
    case 0xC181B8: cpu.execute_instruction<0x4C>(0x008298, 3); return true;
    // src/text/ccs/tree_1D.asm:28 CMP #$08
    case 0xC181BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_1D.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC181BB.
    case 0xC181BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:29 BEQL @UNKNOWN38
    case 0xC181BE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:29 BEQL @UNKNOWN38
    case 0xC181C0: cpu.execute_instruction<0x4C>(0x00829E, 3); return true;
    // src/text/ccs/tree_1D.asm:30 CMP #$09
    case 0xC181C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_1D.asm:30 CMP #$09
    // Overlapping static entry reached from 0xC181C3.
    case 0xC181C5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:31 BEQL @UNKNOWN39
    case 0xC181C6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:31 BEQL @UNKNOWN39
    case 0xC181C8: cpu.execute_instruction<0x4C>(0x0082A4, 3); return true;
    // src/text/ccs/tree_1D.asm:32 CMP #$0A
    case 0xC181CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_1D.asm:32 CMP #$0A
    // Overlapping static entry reached from 0xC181CB.
    case 0xC181CD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:33 BEQL @UNKNOWN40
    case 0xC181CE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:33 BEQL @UNKNOWN40
    case 0xC181D0: cpu.execute_instruction<0x4C>(0x0082AA, 3); return true;
    // src/text/ccs/tree_1D.asm:34 CMP #$0B
    case 0xC181D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/ccs/tree_1D.asm:34 CMP #$0B
    // Overlapping static entry reached from 0xC181D3.
    case 0xC181D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:35 BEQL @UNKNOWN41
    case 0xC181D6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:35 BEQL @UNKNOWN41
    case 0xC181D8: cpu.execute_instruction<0x4C>(0x0082B0, 3); return true;
    // src/text/ccs/tree_1D.asm:36 CMP #$0C
    case 0xC181DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/ccs/tree_1D.asm:36 CMP #$0C
    // Overlapping static entry reached from 0xC181DB.
    case 0xC181DD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:37 BEQL @UNKNOWN42
    case 0xC181DE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:37 BEQL @UNKNOWN42
    case 0xC181E0: cpu.execute_instruction<0x4C>(0x0082B6, 3); return true;
    // src/text/ccs/tree_1D.asm:38 CMP #$0D
    case 0xC181E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/ccs/tree_1D.asm:38 CMP #$0D
    // Overlapping static entry reached from 0xC181E3.
    case 0xC181E5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:39 BEQL @UNKNOWN43
    case 0xC181E6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:39 BEQL @UNKNOWN43
    case 0xC181E8: cpu.execute_instruction<0x4C>(0x0082BC, 3); return true;
    // src/text/ccs/tree_1D.asm:40 CMP #$0E
    case 0xC181EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/text/ccs/tree_1D.asm:40 CMP #$0E
    // Overlapping static entry reached from 0xC181EB.
    case 0xC181ED: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:41 BEQL @UNKNOWN44
    case 0xC181EE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:41 BEQL @UNKNOWN44
    case 0xC181F0: cpu.execute_instruction<0x4C>(0x0082C2, 3); return true;
    // src/text/ccs/tree_1D.asm:42 CMP #$0F
    case 0xC181F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/text/ccs/tree_1D.asm:42 CMP #$0F
    // Overlapping static entry reached from 0xC181F3.
    case 0xC181F5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:43 BEQL @UNKNOWN45
    case 0xC181F6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:43 BEQL @UNKNOWN45
    case 0xC181F8: cpu.execute_instruction<0x4C>(0x0082C8, 3); return true;
    // src/text/ccs/tree_1D.asm:44 CMP #$10
    case 0xC181FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/ccs/tree_1D.asm:44 CMP #$10
    // Overlapping static entry reached from 0xC181FB.
    case 0xC181FD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:45 BEQL @UNKNOWN46
    case 0xC181FE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:45 BEQL @UNKNOWN46
    case 0xC18200: cpu.execute_instruction<0x4C>(0x0082CE, 3); return true;
    // src/text/ccs/tree_1D.asm:46 CMP #$11
    case 0xC18203: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/ccs/tree_1D.asm:46 CMP #$11
    // Overlapping static entry reached from 0xC18203.
    case 0xC18205: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:47 BEQL @UNKNOWN47
    case 0xC18206: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:47 BEQL @UNKNOWN47
    case 0xC18208: cpu.execute_instruction<0x4C>(0x0082D4, 3); return true;
    // src/text/ccs/tree_1D.asm:48 CMP #$12
    case 0xC1820B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/text/ccs/tree_1D.asm:48 CMP #$12
    // Overlapping static entry reached from 0xC1820B.
    case 0xC1820D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:49 BEQL @UNKNOWN48
    case 0xC1820E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:49 BEQL @UNKNOWN48
    case 0xC18210: cpu.execute_instruction<0x4C>(0x0082DA, 3); return true;
    // src/text/ccs/tree_1D.asm:50 CMP #$13
    case 0xC18213: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/ccs/tree_1D.asm:50 CMP #$13
    // Overlapping static entry reached from 0xC18213.
    case 0xC18215: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:51 BEQL @UNKNOWN49
    case 0xC18216: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:51 BEQL @UNKNOWN49
    case 0xC18218: cpu.execute_instruction<0x4C>(0x0082E0, 3); return true;
    // src/text/ccs/tree_1D.asm:52 CMP #$14
    case 0xC1821B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/ccs/tree_1D.asm:52 CMP #$14
    // Overlapping static entry reached from 0xC1821B.
    case 0xC1821D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:53 BEQL @UNKNOWN50
    case 0xC1821E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:53 BEQL @UNKNOWN50
    case 0xC18220: cpu.execute_instruction<0x4C>(0x0082E6, 3); return true;
    // src/text/ccs/tree_1D.asm:54 CMP #$15
    case 0xC18223: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000015, 2); else cpu.execute_instruction<0xC9>(0x000015, 3); return true;
    // src/text/ccs/tree_1D.asm:54 CMP #$15
    // Overlapping static entry reached from 0xC18223.
    case 0xC18225: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:55 BEQL @UNKNOWN51
    case 0xC18226: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:55 BEQL @UNKNOWN51
    case 0xC18228: cpu.execute_instruction<0x4C>(0x0082EC, 3); return true;
    // src/text/ccs/tree_1D.asm:56 CMP #$17
    case 0xC1822B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/text/ccs/tree_1D.asm:56 CMP #$17
    // Overlapping static entry reached from 0xC1822B.
    case 0xC1822D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:57 BEQL @UNKNOWN52
    case 0xC1822E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:57 BEQL @UNKNOWN52
    case 0xC18230: cpu.execute_instruction<0x4C>(0x0082F2, 3); return true;
    // src/text/ccs/tree_1D.asm:58 CMP #$18
    case 0xC18233: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/ccs/tree_1D.asm:58 CMP #$18
    // Overlapping static entry reached from 0xC18233.
    case 0xC18235: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:59 BEQL @UNKNOWN53
    case 0xC18236: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:59 BEQL @UNKNOWN53
    case 0xC18238: cpu.execute_instruction<0x4C>(0x0082F8, 3); return true;
    // src/text/ccs/tree_1D.asm:60 CMP #$19
    case 0xC1823B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/text/ccs/tree_1D.asm:60 CMP #$19
    // Overlapping static entry reached from 0xC1823B.
    case 0xC1823D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:61 BEQL @UNKNOWN54
    case 0xC1823E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:61 BEQL @UNKNOWN54
    case 0xC18240: cpu.execute_instruction<0x4C>(0x0082FE, 3); return true;
    // src/text/ccs/tree_1D.asm:62 CMP #$20
    case 0xC18243: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/text/ccs/tree_1D.asm:62 CMP #$20
    // Overlapping static entry reached from 0xC18243.
    case 0xC18245: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:63 BEQL @UNKNOWN55
    case 0xC18246: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:63 BEQL @UNKNOWN55
    case 0xC18248: cpu.execute_instruction<0x4C>(0x008304, 3); return true;
    // src/text/ccs/tree_1D.asm:64 CMP #$21
    case 0xC1824B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000021, 2); else cpu.execute_instruction<0xC9>(0x000021, 3); return true;
    // src/text/ccs/tree_1D.asm:64 CMP #$21
    // Overlapping static entry reached from 0xC1824B.
    case 0xC1824D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:65 BEQL @UNKNOWN58
    case 0xC1824E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:65 BEQL @UNKNOWN58
    case 0xC18250: cpu.execute_instruction<0x4C>(0x008339, 3); return true;
    // src/text/ccs/tree_1D.asm:66 CMP #$22
    case 0xC18253: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/text/ccs/tree_1D.asm:66 CMP #$22
    // Overlapping static entry reached from 0xC18253.
    case 0xC18255: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:67 BEQL @UNKNOWN59
    case 0xC18256: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:67 BEQL @UNKNOWN59
    case 0xC18258: cpu.execute_instruction<0x4C>(0x00833E, 3); return true;
    // src/text/ccs/tree_1D.asm:68 CMP #$23
    case 0xC1825B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000023, 3); return true;
    // src/text/ccs/tree_1D.asm:68 CMP #$23
    // Overlapping static entry reached from 0xC1825B.
    case 0xC1825D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:69 BEQL @UNKNOWN62
    case 0xC1825E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:69 BEQL @UNKNOWN62
    case 0xC18260: cpu.execute_instruction<0x4C>(0x008372, 3); return true;
    // src/text/ccs/tree_1D.asm:70 CMP #$24
    case 0xC18263: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/text/ccs/tree_1D.asm:70 CMP #$24
    // Overlapping static entry reached from 0xC18263.
    case 0xC18265: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:71 BEQL @UNKNOWN63
    case 0xC18266: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:71 BEQL @UNKNOWN63
    case 0xC18268: cpu.execute_instruction<0x4C>(0x008377, 3); return true;
    // src/text/ccs/tree_1D.asm:72 JMP @UNKNOWN64
    case 0xC1826B: cpu.execute_instruction<0x4C>(0x00837C, 3); return true;
    // src/text/ccs/tree_1D.asm:74 LDA #.LOWORD(CC_1D_00)
    case 0xC1826E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00501E, 3); return true;
    // src/text/ccs/tree_1D.asm:74 LDA #.LOWORD(CC_1D_00)
    // Overlapping static entry reached from 0xC1826E.
    case 0xC18270: cpu.execute_instruction<0x50>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:75 JMP @UNKNOWN65
    case 0xC18271: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:75 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18270.
    case 0xC18272: cpu.execute_instruction<0x7F>(0x86A983, 4); return true;
    // src/text/ccs/tree_1D.asm:77 LDA #.LOWORD(CC_1D_01)
    case 0xC18274: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x005086, 3); return true;
    // src/text/ccs/tree_1D.asm:77 LDA #.LOWORD(CC_1D_01)
    // Overlapping static entry reached from 0xC18274.
    case 0xC18276: cpu.execute_instruction<0x50>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:78 JMP @UNKNOWN65
    case 0xC18277: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:78 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18276.
    case 0xC18278: cpu.execute_instruction<0x7F>(0xACA983, 4); return true;
    // src/text/ccs/tree_1D.asm:80 LDA #.LOWORD(CC_1D_02)
    case 0xC1827A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x004CAC, 3); return true;
    // src/text/ccs/tree_1D.asm:80 LDA #.LOWORD(CC_1D_02)
    // Overlapping static entry reached from 0xC1827A.
    case 0xC1827C: cpu.execute_instruction<0x4C>(0x007F4C, 3); return true;
    // src/text/ccs/tree_1D.asm:81 JMP @UNKNOWN65
    case 0xC1827D: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:83 LDA #.LOWORD(CC_1D_03)
    case 0xC18280: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x0050EE, 3); return true;
    // src/text/ccs/tree_1D.asm:83 LDA #.LOWORD(CC_1D_03)
    // Overlapping static entry reached from 0xC18280.
    case 0xC18282: cpu.execute_instruction<0x50>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:84 JMP @UNKNOWN65
    case 0xC18283: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:84 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18282.
    case 0xC18284: cpu.execute_instruction<0x7F>(0x24A983, 4); return true;
    // src/text/ccs/tree_1D.asm:86 LDA #.LOWORD(CC_1D_04)
    case 0xC18286: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x005124, 3); return true;
    // src/text/ccs/tree_1D.asm:86 LDA #.LOWORD(CC_1D_04)
    // Overlapping static entry reached from 0xC18286.
    case 0xC18288: cpu.execute_instruction<0x51>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:87 JMP @UNKNOWN65
    case 0xC18289: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:87 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18288.
    case 0xC1828A: cpu.execute_instruction<0x7F>(0x93A983, 4); return true;
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    case 0xC1828C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x005193, 3); return true;
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    // Overlapping static entry reached from 0xC1828C.
    case 0xC1828E: cpu.execute_instruction<0x51>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:90 JMP @UNKNOWN65
    case 0xC1828F: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:90 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1828E.
    case 0xC18290: cpu.execute_instruction<0x7F>(0x04A983, 4); return true;
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    case 0xC18292: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x005F04, 3); return true;
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    // Overlapping static entry reached from 0xC18292.
    case 0xC18294: cpu.execute_instruction<0x5F>(0x837F4C, 4); return true;
    // src/text/ccs/tree_1D.asm:93 JMP @UNKNOWN65
    case 0xC18295: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:95 LDA #.LOWORD(CC_1D_07)
    case 0xC18298: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EA, 2); else cpu.execute_instruction<0xA9>(0x005FEA, 3); return true;
    // src/text/ccs/tree_1D.asm:95 LDA #.LOWORD(CC_1D_07)
    // Overlapping static entry reached from 0xC18298.
    case 0xC1829A: cpu.execute_instruction<0x5F>(0x837F4C, 4); return true;
    // src/text/ccs/tree_1D.asm:96 JMP @UNKNOWN65
    case 0xC1829B: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    case 0xC1829E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x004CE9, 3); return true;
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    // Overlapping static entry reached from 0xC1829E.
    case 0xC182A0: cpu.execute_instruction<0x4C>(0x007F4C, 3); return true;
    // src/text/ccs/tree_1D.asm:99 JMP @UNKNOWN65
    case 0xC182A1: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    case 0xC182A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x004D4A, 3); return true;
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC182A4.
    case 0xC182A6: cpu.execute_instruction<0x4D>(0x007F4C, 3); return true;
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    case 0xC182A7: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182A6.
    case 0xC182A9: cpu.execute_instruction<0x83>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    case 0xC182AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E3, 2); else cpu.execute_instruction<0xA9>(0x0052E3, 3); return true;
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    // Overlapping static entry reached from 0xC182A9.
    case 0xC182AB: cpu.execute_instruction<0xE3>(0x000052, 2); return true;
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    // Overlapping static entry reached from 0xC182AA.
    case 0xC182AC: cpu.execute_instruction<0x52>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:105 JMP @UNKNOWN65
    case 0xC182AD: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:105 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182AC.
    case 0xC182AE: cpu.execute_instruction<0x7F>(0x1FA983, 4); return true;
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    case 0xC182B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00531F, 3); return true;
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    // Overlapping static entry reached from 0xC182B0.
    case 0xC182B2: cpu.execute_instruction<0x53>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:108 JMP @UNKNOWN65
    case 0xC182B3: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:108 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182B2.
    case 0xC182B4: cpu.execute_instruction<0x7F>(0xD7A983, 4); return true;
    // src/text/ccs/tree_1D.asm:110 LDA #.LOWORD(CC_1D_0C)
    case 0xC182B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0072D7, 3); return true;
    // src/text/ccs/tree_1D.asm:110 LDA #.LOWORD(CC_1D_0C)
    // Overlapping static entry reached from 0xC182B6.
    case 0xC182B8: cpu.execute_instruction<0x72>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:111 JMP @UNKNOWN65
    case 0xC182B9: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:111 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182B8.
    case 0xC182BA: cpu.execute_instruction<0x7F>(0xC0A983, 4); return true;
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    case 0xC182BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0054C0, 3); return true;
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    // Overlapping static entry reached from 0xC182BC.
    case 0xC182BE: cpu.execute_instruction<0x54>(0x007F4C, 3); return true;
    // src/text/ccs/tree_1D.asm:114 JMP @UNKNOWN65
    case 0xC182BF: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:114 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182BE.
    case 0xC182C1: cpu.execute_instruction<0x83>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    case 0xC182C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x0058D4, 3); return true;
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC182C1.
    case 0xC182C3: cpu.execute_instruction<0xD4>(0x000058, 2); return true;
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC182C2.
    case 0xC182C4: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:117 JMP @UNKNOWN65
    case 0xC182C5: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    case 0xC182C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000056, 2); else cpu.execute_instruction<0xA9>(0x005956, 3); return true;
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    // Overlapping static entry reached from 0xC182C8.
    case 0xC182CA: cpu.execute_instruction<0x59>(0x007F4C, 3); return true;
    // src/text/ccs/tree_1D.asm:120 JMP @UNKNOWN65
    case 0xC182CB: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:120 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182CA.
    case 0xC182CD: cpu.execute_instruction<0x83>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    case 0xC182CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0059D8, 3); return true;
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC182CD.
    case 0xC182CF: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC182CE.
    case 0xC182D0: cpu.execute_instruction<0x59>(0x007F4C, 3); return true;
    // src/text/ccs/tree_1D.asm:123 JMP @UNKNOWN65
    case 0xC182D1: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:123 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182D0.
    case 0xC182D3: cpu.execute_instruction<0x83>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    case 0xC182D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000048, 2); else cpu.execute_instruction<0xA9>(0x005A48, 3); return true;
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC182D3.
    case 0xC182D5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC182D4.
    case 0xC182D6: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:126 JMP @UNKNOWN65
    case 0xC182D7: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    case 0xC182DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x005B20, 3); return true;
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    // Overlapping static entry reached from 0xC182DA.
    case 0xC182DC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:129 JMP @UNKNOWN65
    case 0xC182DD: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:131 LDA #.LOWORD(CC_1D_13)
    case 0xC182E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x005B79, 3); return true;
    // src/text/ccs/tree_1D.asm:131 LDA #.LOWORD(CC_1D_13)
    // Overlapping static entry reached from 0xC182E0.
    case 0xC182E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:132 JMP @UNKNOWN65
    case 0xC182E3: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:134 LDA #.LOWORD(CC_1D_14)
    case 0xC182E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000074, 2); else cpu.execute_instruction<0xA9>(0x005C74, 3); return true;
    // src/text/ccs/tree_1D.asm:134 LDA #.LOWORD(CC_1D_14)
    // Overlapping static entry reached from 0xC182E6.
    case 0xC182E8: cpu.execute_instruction<0x5C>(0x837F4C, 4); return true;
    // src/text/ccs/tree_1D.asm:135 JMP @UNKNOWN65
    case 0xC182E9: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    case 0xC182EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x005E49, 3); return true;
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    // Overlapping static entry reached from 0xC182EC.
    case 0xC182EE: cpu.execute_instruction<0x5E>(0x007F4C, 3); return true;
    // src/text/ccs/tree_1D.asm:138 JMP @UNKNOWN65
    case 0xC182EF: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:138 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182EE.
    case 0xC182F1: cpu.execute_instruction<0x83>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    case 0xC182F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DB, 2); else cpu.execute_instruction<0xA9>(0x0060DB, 3); return true;
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    // Overlapping static entry reached from 0xC182F1.
    case 0xC182F3: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    // Overlapping static entry reached from 0xC182F2.
    case 0xC182F4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:141 JMP @UNKNOWN65
    case 0xC182F5: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    case 0xC182F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x0063A3, 3); return true;
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    // Overlapping static entry reached from 0xC182F8.
    case 0xC182FA: cpu.execute_instruction<0x63>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:144 JMP @UNKNOWN65
    case 0xC182FB: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:144 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182FA.
    case 0xC182FC: cpu.execute_instruction<0x7F>(0xF1A983, 4); return true;
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    case 0xC182FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F1, 2); else cpu.execute_instruction<0xA9>(0x0063F1, 3); return true;
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    // Overlapping static entry reached from 0xC182FE.
    case 0xC18300: cpu.execute_instruction<0x63>(0x00004C, 2); return true;
    // src/text/ccs/tree_1D.asm:147 JMP @UNKNOWN65
    case 0xC18301: cpu.execute_instruction<0x4C>(0x00837F, 3); return true;
    // src/text/ccs/tree_1D.asm:147 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18300.
    case 0xC18302: cpu.execute_instruction<0x7F>(0x00A083, 4); return true;
    // src/text/ccs/tree_1D.asm:149 LDY #0
    case 0xC18304: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/tree_1D.asm:149 LDY #0
    // Overlapping static entry reached from 0xC18304.
    case 0xC18306: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1D.asm:150 STY @LOCAL02
    case 0xC18307: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:151 JSR RETURN_BATTLE_TARGET_ADDRESS
    case 0xC18309: cpu.execute_instruction<0x20>(0x00ABAE, 3); return true;
    // src/text/ccs/tree_1D.asm:152 STA @LOCAL01
    case 0xC1830C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/tree_1D.asm:153 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC1830E: cpu.execute_instruction<0x20>(0x00AB5D, 3); return true;
    // src/text/ccs/tree_1D.asm:154 TAX
    case 0xC18311: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/tree_1D.asm:155 LDA @LOCAL01
    case 0xC18312: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/tree_1D.asm:156 JSR UNKNOWN_C14070
    case 0xC18314: cpu.execute_instruction<0x20>(0x0044B2, 3); return true;
    // src/text/ccs/tree_1D.asm:157 CMP #0
    case 0xC18317: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/tree_1D.asm:157 CMP #0
    // Overlapping static entry reached from 0xC18317.
    case 0xC18319: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/tree_1D.asm:158 BNE @UNKNOWN56
    case 0xC1831A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/tree_1D.asm:159 LDY #1
    case 0xC1831C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/tree_1D.asm:159 LDY #1
    // Overlapping static entry reached from 0xC1831C.
    case 0xC1831E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1D.asm:160 STY @LOCAL02
    case 0xC1831F: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:162 LDY @LOCAL02
    case 0xC18321: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:163 TYA
    case 0xC18323: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC18324: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC18326: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC18328: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC1832A: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1832C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1832E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18330: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18332: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1D.asm:166 JSR SET_WORKING_MEMORY
    case 0xC18334: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1D.asm:167 BRA @UNKNOWN64
    case 0xC18337: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/text/ccs/tree_1D.asm:169 LDA #.LOWORD(CC_1D_21)
    case 0xC18339: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006F, 2); else cpu.execute_instruction<0xA9>(0x00646F, 3); return true;
    // src/text/ccs/tree_1D.asm:169 LDA #.LOWORD(CC_1D_21)
    // Overlapping static entry reached from 0xC18339.
    case 0xC1833B: cpu.execute_instruction<0x64>(0x000080, 2); return true;
    // src/text/ccs/tree_1D.asm:170 BRA @UNKNOWN65
    case 0xC1833C: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/text/ccs/tree_1D.asm:170 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC1833B.
    case 0xC1833D: cpu.execute_instruction<0x41>(0x0000A0, 2); return true;
    // src/text/ccs/tree_1D.asm:172 LDY #0
    case 0xC1833E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/tree_1D.asm:172 LDY #0
    // Overlapping static entry reached from 0xC1833D.
    case 0xC1833F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1D.asm:172 LDY #0
    // Overlapping static entry reached from 0xC1833E.
    case 0xC18340: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1D.asm:173 STY @LOCAL02
    case 0xC18341: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:174 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC18343: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/text/ccs/tree_1D.asm:175 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC18346: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/text/ccs/tree_1D.asm:176 JSL LOAD_SECTOR_ATTRS
    case 0xC18349: cpu.execute_instruction<0x22>(0xC00AB3, 4); return true;
    // src/text/ccs/tree_1D.asm:177 AND #$0007
    case 0xC1834D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/text/ccs/tree_1D.asm:177 AND #$0007
    // Overlapping static entry reached from 0xC1834D.
    case 0xC1834F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/ccs/tree_1D.asm:178 CMP #2
    case 0xC18350: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1D.asm:178 CMP #2
    // Overlapping static entry reached from 0xC18350.
    case 0xC18352: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/tree_1D.asm:179 BNE @UNKNOWN60
    case 0xC18353: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/tree_1D.asm:180 LDY #1
    case 0xC18355: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/tree_1D.asm:180 LDY #1
    // Overlapping static entry reached from 0xC18355.
    case 0xC18357: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1D.asm:181 STY @LOCAL02
    case 0xC18358: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:183 LDY @LOCAL02
    case 0xC1835A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/tree_1D.asm:184 TYA
    case 0xC1835C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC1835D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC1835F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC18361: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC18363: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18365: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18367: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18369: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1836B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1D.asm:187 JSR SET_WORKING_MEMORY
    case 0xC1836D: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1D.asm:188 BRA @UNKNOWN64
    case 0xC18370: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/text/ccs/tree_1D.asm:190 LDA #.LOWORD(CC_1D_23)
    case 0xC18372: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000088, 2); else cpu.execute_instruction<0xA9>(0x007988, 3); return true;
    // src/text/ccs/tree_1D.asm:190 LDA #.LOWORD(CC_1D_23)
    // Overlapping static entry reached from 0xC18372.
    case 0xC18374: cpu.execute_instruction<0x79>(0x000880, 3); return true;
    // src/text/ccs/tree_1D.asm:191 BRA @UNKNOWN65
    case 0xC18375: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_1D.asm:193 LDA #.LOWORD(CC_1D_24)
    case 0xC18377: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x0074F4, 3); return true;
    // src/text/ccs/tree_1D.asm:193 LDA #.LOWORD(CC_1D_24)
    // Overlapping static entry reached from 0xC18377.
    case 0xC18379: cpu.execute_instruction<0x74>(0x000080, 2); return true;
    // src/text/ccs/tree_1D.asm:194 BRA @UNKNOWN65
    case 0xC1837A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_1D.asm:194 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC18379.
    case 0xC1837B: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    case 0xC1837C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    // Overlapping static entry reached from 0xC1837B.
    case 0xC1837D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    // Overlapping static entry reached from 0xC1837C.
    case 0xC1837E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1D.asm:198 END_C_FUNCTION
    case 0xC1837F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1D.asm:198 END_C_FUNCTION
    case 0xC18380: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1E.asm (source_named).
bool execute_text_ccs_tree_1e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/tree_1E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC18381: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/tree_1E.asm:4 TXA
    case 0xC18383: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:5 BEQ @UNKNOWN0
    case 0xC18384: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:6 CMP #$0001
    case 0xC18386: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1E.asm:6 CMP #$0001
    // Overlapping static entry reached from 0xC18386.
    case 0xC18388: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:7 BEQ @UNKNOWN1
    case 0xC18389: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:8 CMP #$0002
    case 0xC1838B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1E.asm:8 CMP #$0002
    // Overlapping static entry reached from 0xC1838B.
    case 0xC1838D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:9 BEQ @UNKNOWN2
    case 0xC1838E: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:10 CMP #$0003
    case 0xC18390: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1E.asm:10 CMP #$0003
    // Overlapping static entry reached from 0xC18390.
    case 0xC18392: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:11 BEQ @UNKNOWN3
    case 0xC18393: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:12 CMP #$0004
    case 0xC18395: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1E.asm:12 CMP #$0004
    // Overlapping static entry reached from 0xC18395.
    case 0xC18397: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:13 BEQ @UNKNOWN4
    case 0xC18398: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:14 CMP #$0005
    case 0xC1839A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1E.asm:14 CMP #$0005
    // Overlapping static entry reached from 0xC1839A.
    case 0xC1839C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:15 BEQ @UNKNOWN5
    case 0xC1839D: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:16 CMP #$0006
    case 0xC1839F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1E.asm:16 CMP #$0006
    // Overlapping static entry reached from 0xC1839F.
    case 0xC183A1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:17 BEQ @UNKNOWN6
    case 0xC183A2: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:18 CMP #$0007
    case 0xC183A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1E.asm:18 CMP #$0007
    // Overlapping static entry reached from 0xC183A4.
    case 0xC183A6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:19 BEQ @UNKNOWN7
    case 0xC183A7: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:20 CMP #$0008
    case 0xC183A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/tree_1E.asm:20 CMP #$0008
    // Overlapping static entry reached from 0xC183A9.
    case 0xC183AB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:21 BEQ @UNKNOWN8
    case 0xC183AC: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:22 CMP #$0009
    case 0xC183AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/ccs/tree_1E.asm:22 CMP #$0009
    // Overlapping static entry reached from 0xC183AE.
    case 0xC183B0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:23 BEQ @UNKNOWN9
    case 0xC183B1: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:24 CMP #$000A
    case 0xC183B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/ccs/tree_1E.asm:24 CMP #$000A
    // Overlapping static entry reached from 0xC183B3.
    case 0xC183B5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:25 BEQ @UNKNOWN10
    case 0xC183B6: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:26 CMP #$000B
    case 0xC183B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/ccs/tree_1E.asm:26 CMP #$000B
    // Overlapping static entry reached from 0xC183B8.
    case 0xC183BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:27 BEQ @UNKNOWN11
    case 0xC183BB: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:28 CMP #$000C
    case 0xC183BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/ccs/tree_1E.asm:28 CMP #$000C
    // Overlapping static entry reached from 0xC183BD.
    case 0xC183BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:29 BEQ @UNKNOWN12
    case 0xC183C0: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:30 CMP #$000D
    case 0xC183C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/ccs/tree_1E.asm:30 CMP #$000D
    // Overlapping static entry reached from 0xC183C2.
    case 0xC183C4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:31 BEQ @UNKNOWN13
    case 0xC183C5: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:32 CMP #$000E
    case 0xC183C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/text/ccs/tree_1E.asm:32 CMP #$000E
    // Overlapping static entry reached from 0xC183C7.
    case 0xC183C9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/tree_1E.asm:33 BEQ @UNKNOWN14
    case 0xC183CA: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/ccs/tree_1E.asm:34 BRA @UNKNOWN15
    case 0xC183CC: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/text/ccs/tree_1E.asm:36 LDA #.LOWORD(CC_1E_00)
    case 0xC183CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B6, 2); else cpu.execute_instruction<0xA9>(0x004DB6, 3); return true;
    // src/text/ccs/tree_1E.asm:36 LDA #.LOWORD(CC_1E_00)
    // Overlapping static entry reached from 0xC183CE.
    case 0xC183D0: cpu.execute_instruction<0x4D>(0x004980, 3); return true;
    // src/text/ccs/tree_1E.asm:37 BRA @UNKNOWN16
    case 0xC183D1: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    case 0xC183D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x004E03, 3); return true;
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    // Overlapping static entry reached from 0xC183D3.
    case 0xC183D5: cpu.execute_instruction<0x4E>(0x004480, 3); return true;
    // src/text/ccs/tree_1E.asm:40 BRA @UNKNOWN16
    case 0xC183D6: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/tree_1E.asm:42 LDA #.LOWORD(CC_1E_02)
    case 0xC183D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x004E50, 3); return true;
    // src/text/ccs/tree_1E.asm:42 LDA #.LOWORD(CC_1E_02)
    // Overlapping static entry reached from 0xC183D8.
    case 0xC183DA: cpu.execute_instruction<0x4E>(0x003F80, 3); return true;
    // src/text/ccs/tree_1E.asm:43 BRA @UNKNOWN16
    case 0xC183DB: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/text/ccs/tree_1E.asm:45 LDA #.LOWORD(CC_1E_03)
    case 0xC183DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x004E9D, 3); return true;
    // src/text/ccs/tree_1E.asm:45 LDA #.LOWORD(CC_1E_03)
    // Overlapping static entry reached from 0xC183DD.
    case 0xC183DF: cpu.execute_instruction<0x4E>(0x003A80, 3); return true;
    // src/text/ccs/tree_1E.asm:46 BRA @UNKNOWN16
    case 0xC183E0: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/tree_1E.asm:48 LDA #.LOWORD(CC_1E_04)
    case 0xC183E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EA, 2); else cpu.execute_instruction<0xA9>(0x004EEA, 3); return true;
    // src/text/ccs/tree_1E.asm:48 LDA #.LOWORD(CC_1E_04)
    // Overlapping static entry reached from 0xC183E2.
    case 0xC183E4: cpu.execute_instruction<0x4E>(0x003580, 3); return true;
    // src/text/ccs/tree_1E.asm:49 BRA @UNKNOWN16
    case 0xC183E5: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/text/ccs/tree_1E.asm:51 LDA #.LOWORD(CC_1E_05)
    case 0xC183E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x004F37, 3); return true;
    // src/text/ccs/tree_1E.asm:51 LDA #.LOWORD(CC_1E_05)
    // Overlapping static entry reached from 0xC183E7.
    case 0xC183E9: cpu.execute_instruction<0x4F>(0xA93080, 4); return true;
    // src/text/ccs/tree_1E.asm:52 BRA @UNKNOWN16
    case 0xC183EA: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    case 0xC183EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x004F84, 3); return true;
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    // Overlapping static entry reached from 0xC183E9.
    case 0xC183ED: cpu.execute_instruction<0x84>(0x00004F, 2); return true;
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    // Overlapping static entry reached from 0xC183EC.
    case 0xC183EE: cpu.execute_instruction<0x4F>(0xA92B80, 4); return true;
    // src/text/ccs/tree_1E.asm:55 BRA @UNKNOWN16
    case 0xC183EF: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    case 0xC183F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x004FD1, 3); return true;
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    // Overlapping static entry reached from 0xC183EE.
    case 0xC183F2: cpu.execute_instruction<0xD1>(0x00004F, 2); return true;
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    // Overlapping static entry reached from 0xC183F1.
    case 0xC183F3: cpu.execute_instruction<0x4F>(0xA92680, 4); return true;
    // src/text/ccs/tree_1E.asm:58 BRA @UNKNOWN16
    case 0xC183F4: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    case 0xC183F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x006C80, 3); return true;
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC183F3.
    case 0xC183F7: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC183F6.
    case 0xC183F8: cpu.execute_instruction<0x6C>(0x002180, 3); return true;
    // src/text/ccs/tree_1E.asm:61 BRA @UNKNOWN16
    case 0xC183F9: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/ccs/tree_1E.asm:63 LDA #.LOWORD(CC_1E_09)
    case 0xC183FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x0076CB, 3); return true;
    // src/text/ccs/tree_1E.asm:63 LDA #.LOWORD(CC_1E_09)
    // Overlapping static entry reached from 0xC183FB.
    case 0xC183FD: cpu.execute_instruction<0x76>(0x000080, 2); return true;
    // src/text/ccs/tree_1E.asm:64 BRA @UNKNOWN16
    case 0xC183FE: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/tree_1E.asm:64 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC183FD.
    case 0xC183FF: cpu.execute_instruction<0x1C>(0x00A3A9, 3); return true;
    // src/text/ccs/tree_1E.asm:66 LDA #.LOWORD(CC_1E_0A)
    case 0xC18400: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x0077A3, 3); return true;
    // src/text/ccs/tree_1E.asm:66 LDA #.LOWORD(CC_1E_0A)
    // Overlapping static entry reached from 0xC18400.
    case 0xC18402: cpu.execute_instruction<0x77>(0x000080, 2); return true;
    // src/text/ccs/tree_1E.asm:67 BRA @UNKNOWN16
    case 0xC18403: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/ccs/tree_1E.asm:67 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC18402.
    case 0xC18404: cpu.execute_instruction<0x17>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    case 0xC18405: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x007804, 3); return true;
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC18404.
    case 0xC18406: cpu.execute_instruction<0x04>(0x000078, 2); return true;
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC18405.
    case 0xC18407: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:70 BRA @UNKNOWN16
    case 0xC18408: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    case 0xC1840A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000065, 2); else cpu.execute_instruction<0xA9>(0x007865, 3); return true;
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    // Overlapping static entry reached from 0xC1840A.
    case 0xC1840C: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:73 BRA @UNKNOWN16
    case 0xC1840D: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_1E.asm:75 LDA #.LOWORD(CC_1E_0D)
    case 0xC1840F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x0078C6, 3); return true;
    // src/text/ccs/tree_1E.asm:75 LDA #.LOWORD(CC_1E_0D)
    // Overlapping static entry reached from 0xC1840F.
    case 0xC18411: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/text/ccs/tree_1E.asm:76 BRA @UNKNOWN16
    case 0xC18412: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_1E.asm:78 LDA #.LOWORD(CC_1E_0E)
    case 0xC18414: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x007927, 3); return true;
    // src/text/ccs/tree_1E.asm:78 LDA #.LOWORD(CC_1E_0E)
    // Overlapping static entry reached from 0xC18414.
    case 0xC18416: cpu.execute_instruction<0x79>(0x000380, 3); return true;
    // src/text/ccs/tree_1E.asm:79 BRA @UNKNOWN16
    case 0xC18417: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    case 0xC18419: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    // Overlapping static entry reached from 0xC18419.
    case 0xC1841B: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/tree_1E.asm:83 RTS
    case 0xC1841C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/tree_1F.asm (source_named).
bool execute_text_ccs_tree_1f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1F.asm:3 BEGIN_C_FUNCTION
    case 0xC1841D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC1841F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18420: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18421: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18422: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC18422.
    case 0xC18424: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18425: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18426: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:11 TXA
    case 0xC18427: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:12 BEQL @UNKNOWN74
    case 0xC18428: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:12 BEQL @UNKNOWN74
    case 0xC1842A: cpu.execute_instruction<0x4C>(0x008678, 3); return true;
    // src/text/ccs/tree_1F.asm:13 CMP #$01
    case 0xC1842D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:13 CMP #$01
    // Overlapping static entry reached from 0xC1842D.
    case 0xC1842F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:14 BEQL @UNKNOWN75
    case 0xC18430: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:14 BEQL @UNKNOWN75
    case 0xC18432: cpu.execute_instruction<0x4C>(0x00867E, 3); return true;
    // src/text/ccs/tree_1F.asm:15 CMP #$02
    case 0xC18435: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/tree_1F.asm:15 CMP #$02
    // Overlapping static entry reached from 0xC18435.
    case 0xC18437: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:16 BEQL @UNKNOWN76
    case 0xC18438: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:16 BEQL @UNKNOWN76
    case 0xC1843A: cpu.execute_instruction<0x4C>(0x008684, 3); return true;
    // src/text/ccs/tree_1F.asm:17 CMP #$03
    case 0xC1843D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/tree_1F.asm:17 CMP #$03
    // Overlapping static entry reached from 0xC1843D.
    case 0xC1843F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:18 BEQL @UNKNOWN77
    case 0xC18440: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:18 BEQL @UNKNOWN77
    case 0xC18442: cpu.execute_instruction<0x4C>(0x00868A, 3); return true;
    // src/text/ccs/tree_1F.asm:19 CMP #$04
    case 0xC18445: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/tree_1F.asm:19 CMP #$04
    // Overlapping static entry reached from 0xC18445.
    case 0xC18447: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:20 BEQL @UNKNOWN78
    case 0xC18448: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:20 BEQL @UNKNOWN78
    case 0xC1844A: cpu.execute_instruction<0x4C>(0x008698, 3); return true;
    // src/text/ccs/tree_1F.asm:21 CMP #$05
    case 0xC1844D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/ccs/tree_1F.asm:21 CMP #$05
    // Overlapping static entry reached from 0xC1844D.
    case 0xC1844F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:22 BEQL @UNKNOWN79
    case 0xC18450: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:22 BEQL @UNKNOWN79
    case 0xC18452: cpu.execute_instruction<0x4C>(0x00869E, 3); return true;
    // src/text/ccs/tree_1F.asm:23 CMP #$06
    case 0xC18455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/ccs/tree_1F.asm:23 CMP #$06
    // Overlapping static entry reached from 0xC18455.
    case 0xC18457: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:24 BEQL @UNKNOWN80
    case 0xC18458: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:24 BEQL @UNKNOWN80
    case 0xC1845A: cpu.execute_instruction<0x4C>(0x0086A8, 3); return true;
    // src/text/ccs/tree_1F.asm:25 CMP #$07
    case 0xC1845D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/ccs/tree_1F.asm:25 CMP #$07
    // Overlapping static entry reached from 0xC1845D.
    case 0xC1845F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:26 BEQL @UNKNOWN81
    case 0xC18460: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:26 BEQL @UNKNOWN81
    case 0xC18462: cpu.execute_instruction<0x4C>(0x0086B2, 3); return true;
    // src/text/ccs/tree_1F.asm:27 CMP #$11
    case 0xC18465: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/ccs/tree_1F.asm:27 CMP #$11
    // Overlapping static entry reached from 0xC18465.
    case 0xC18467: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:28 BEQL @UNKNOWN82
    case 0xC18468: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:28 BEQL @UNKNOWN82
    case 0xC1846A: cpu.execute_instruction<0x4C>(0x0086B8, 3); return true;
    // src/text/ccs/tree_1F.asm:29 CMP #$12
    case 0xC1846D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/text/ccs/tree_1F.asm:29 CMP #$12
    // Overlapping static entry reached from 0xC1846D.
    case 0xC1846F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:30 BEQL @UNKNOWN83
    case 0xC18470: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:30 BEQL @UNKNOWN83
    case 0xC18472: cpu.execute_instruction<0x4C>(0x0086BE, 3); return true;
    // src/text/ccs/tree_1F.asm:31 CMP #$13
    case 0xC18475: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/ccs/tree_1F.asm:31 CMP #$13
    // Overlapping static entry reached from 0xC18475.
    case 0xC18477: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:32 BEQL @UNKNOWN84
    case 0xC18478: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:32 BEQL @UNKNOWN84
    case 0xC1847A: cpu.execute_instruction<0x4C>(0x0086C4, 3); return true;
    // src/text/ccs/tree_1F.asm:33 CMP #$14
    case 0xC1847D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/ccs/tree_1F.asm:33 CMP #$14
    // Overlapping static entry reached from 0xC1847D.
    case 0xC1847F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:34 BEQL @UNKNOWN85
    case 0xC18480: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:34 BEQL @UNKNOWN85
    case 0xC18482: cpu.execute_instruction<0x4C>(0x0086CA, 3); return true;
    // src/text/ccs/tree_1F.asm:35 CMP #$15
    case 0xC18485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000015, 2); else cpu.execute_instruction<0xC9>(0x000015, 3); return true;
    // src/text/ccs/tree_1F.asm:35 CMP #$15
    // Overlapping static entry reached from 0xC18485.
    case 0xC18487: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:36 BEQL @UNKNOWN86
    case 0xC18488: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:36 BEQL @UNKNOWN86
    case 0xC1848A: cpu.execute_instruction<0x4C>(0x0086D0, 3); return true;
    // src/text/ccs/tree_1F.asm:37 CMP #$16
    case 0xC1848D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000016, 2); else cpu.execute_instruction<0xC9>(0x000016, 3); return true;
    // src/text/ccs/tree_1F.asm:37 CMP #$16
    // Overlapping static entry reached from 0xC1848D.
    case 0xC1848F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:38 BEQL @UNKNOWN87
    case 0xC18490: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:38 BEQL @UNKNOWN87
    case 0xC18492: cpu.execute_instruction<0x4C>(0x0086D6, 3); return true;
    // src/text/ccs/tree_1F.asm:39 CMP #$17
    case 0xC18495: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/text/ccs/tree_1F.asm:39 CMP #$17
    // Overlapping static entry reached from 0xC18495.
    case 0xC18497: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:40 BEQL @UNKNOWN88
    case 0xC18498: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:40 BEQL @UNKNOWN88
    case 0xC1849A: cpu.execute_instruction<0x4C>(0x0086DC, 3); return true;
    // src/text/ccs/tree_1F.asm:41 CMP #$18
    case 0xC1849D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/ccs/tree_1F.asm:41 CMP #$18
    // Overlapping static entry reached from 0xC1849D.
    case 0xC1849F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:42 BEQL @UNKNOWN89
    case 0xC184A0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:42 BEQL @UNKNOWN89
    case 0xC184A2: cpu.execute_instruction<0x4C>(0x0086E2, 3); return true;
    // src/text/ccs/tree_1F.asm:43 CMP #$19
    case 0xC184A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/text/ccs/tree_1F.asm:43 CMP #$19
    // Overlapping static entry reached from 0xC184A5.
    case 0xC184A7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:44 BEQL @UNKNOWN90
    case 0xC184A8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:44 BEQL @UNKNOWN90
    case 0xC184AA: cpu.execute_instruction<0x4C>(0x0086E8, 3); return true;
    // src/text/ccs/tree_1F.asm:45 CMP #$1A
    case 0xC184AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001A, 2); else cpu.execute_instruction<0xC9>(0x00001A, 3); return true;
    // src/text/ccs/tree_1F.asm:45 CMP #$1A
    // Overlapping static entry reached from 0xC184AD.
    case 0xC184AF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:46 BEQL @UNKNOWN91
    case 0xC184B0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:46 BEQL @UNKNOWN91
    case 0xC184B2: cpu.execute_instruction<0x4C>(0x0086EE, 3); return true;
    // src/text/ccs/tree_1F.asm:47 CMP #$1B
    case 0xC184B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001B, 2); else cpu.execute_instruction<0xC9>(0x00001B, 3); return true;
    // src/text/ccs/tree_1F.asm:47 CMP #$1B
    // Overlapping static entry reached from 0xC184B5.
    case 0xC184B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:48 BEQL @UNKNOWN92
    case 0xC184B8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:48 BEQL @UNKNOWN92
    case 0xC184BA: cpu.execute_instruction<0x4C>(0x0086F4, 3); return true;
    // src/text/ccs/tree_1F.asm:49 CMP #$1C
    case 0xC184BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001C, 2); else cpu.execute_instruction<0xC9>(0x00001C, 3); return true;
    // src/text/ccs/tree_1F.asm:49 CMP #$1C
    // Overlapping static entry reached from 0xC184BD.
    case 0xC184BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:50 BEQL @UNKNOWN93
    case 0xC184C0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:50 BEQL @UNKNOWN93
    case 0xC184C2: cpu.execute_instruction<0x4C>(0x0086FA, 3); return true;
    // src/text/ccs/tree_1F.asm:51 CMP #$1D
    case 0xC184C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/text/ccs/tree_1F.asm:51 CMP #$1D
    // Overlapping static entry reached from 0xC184C5.
    case 0xC184C7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:52 BEQL @UNKNOWN94
    case 0xC184C8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:52 BEQL @UNKNOWN94
    case 0xC184CA: cpu.execute_instruction<0x4C>(0x008700, 3); return true;
    // src/text/ccs/tree_1F.asm:53 CMP #$1E
    case 0xC184CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/text/ccs/tree_1F.asm:53 CMP #$1E
    // Overlapping static entry reached from 0xC184CD.
    case 0xC184CF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:54 BEQL @UNKNOWN95
    case 0xC184D0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:54 BEQL @UNKNOWN95
    case 0xC184D2: cpu.execute_instruction<0x4C>(0x008706, 3); return true;
    // src/text/ccs/tree_1F.asm:55 CMP #$1F
    case 0xC184D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/text/ccs/tree_1F.asm:55 CMP #$1F
    // Overlapping static entry reached from 0xC184D5.
    case 0xC184D7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:56 BEQL @UNKNOWN96
    case 0xC184D8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:56 BEQL @UNKNOWN96
    case 0xC184DA: cpu.execute_instruction<0x4C>(0x00870C, 3); return true;
    // src/text/ccs/tree_1F.asm:57 CMP #$20
    case 0xC184DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/text/ccs/tree_1F.asm:57 CMP #$20
    // Overlapping static entry reached from 0xC184DD.
    case 0xC184DF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:58 BEQL @UNKNOWN97
    case 0xC184E0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:58 BEQL @UNKNOWN97
    case 0xC184E2: cpu.execute_instruction<0x4C>(0x008712, 3); return true;
    // src/text/ccs/tree_1F.asm:59 CMP #$21
    case 0xC184E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000021, 2); else cpu.execute_instruction<0xC9>(0x000021, 3); return true;
    // src/text/ccs/tree_1F.asm:59 CMP #$21
    // Overlapping static entry reached from 0xC184E5.
    case 0xC184E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:60 BEQL @UNKNOWN98
    case 0xC184E8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:60 BEQL @UNKNOWN98
    case 0xC184EA: cpu.execute_instruction<0x4C>(0x008718, 3); return true;
    // src/text/ccs/tree_1F.asm:61 CMP #$23
    case 0xC184ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000023, 3); return true;
    // src/text/ccs/tree_1F.asm:61 CMP #$23
    // Overlapping static entry reached from 0xC184ED.
    case 0xC184EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:62 BEQL @UNKNOWN99
    case 0xC184F0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:62 BEQL @UNKNOWN99
    case 0xC184F2: cpu.execute_instruction<0x4C>(0x00871E, 3); return true;
    // src/text/ccs/tree_1F.asm:63 CMP #$30
    case 0xC184F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/text/ccs/tree_1F.asm:63 CMP #$30
    // Overlapping static entry reached from 0xC184F5.
    case 0xC184F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:64 BEQL @UNKNOWN100
    case 0xC184F8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:64 BEQL @UNKNOWN100
    case 0xC184FA: cpu.execute_instruction<0x4C>(0x008724, 3); return true;
    // src/text/ccs/tree_1F.asm:65 CMP #$31
    case 0xC184FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000031, 2); else cpu.execute_instruction<0xC9>(0x000031, 3); return true;
    // src/text/ccs/tree_1F.asm:65 CMP #$31
    // Overlapping static entry reached from 0xC184FD.
    case 0xC184FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:66 BEQL @UNKNOWN100
    case 0xC18500: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:66 BEQL @UNKNOWN100
    case 0xC18502: cpu.execute_instruction<0x4C>(0x008724, 3); return true;
    // src/text/ccs/tree_1F.asm:67 CMP #$40
    case 0xC18505: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/text/ccs/tree_1F.asm:67 CMP #$40
    // Overlapping static entry reached from 0xC18505.
    case 0xC18507: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:68 BEQL @UNKNOWN101
    case 0xC18508: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:68 BEQL @UNKNOWN101
    case 0xC1850A: cpu.execute_instruction<0x4C>(0x00872A, 3); return true;
    // src/text/ccs/tree_1F.asm:69 CMP #$41
    case 0xC1850D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000041, 2); else cpu.execute_instruction<0xC9>(0x000041, 3); return true;
    // src/text/ccs/tree_1F.asm:69 CMP #$41
    // Overlapping static entry reached from 0xC1850D.
    case 0xC1850F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:70 BEQL @UNKNOWN102
    case 0xC18510: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:70 BEQL @UNKNOWN102
    case 0xC18512: cpu.execute_instruction<0x4C>(0x008730, 3); return true;
    // src/text/ccs/tree_1F.asm:71 CMP #$50
    case 0xC18515: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000050, 2); else cpu.execute_instruction<0xC9>(0x000050, 3); return true;
    // src/text/ccs/tree_1F.asm:71 CMP #$50
    // Overlapping static entry reached from 0xC18515.
    case 0xC18517: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:72 BEQL @UNKNOWN103
    case 0xC18518: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:72 BEQL @UNKNOWN103
    case 0xC1851A: cpu.execute_instruction<0x4C>(0x008736, 3); return true;
    // src/text/ccs/tree_1F.asm:73 CMP #$51
    case 0xC1851D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000051, 2); else cpu.execute_instruction<0xC9>(0x000051, 3); return true;
    // src/text/ccs/tree_1F.asm:73 CMP #$51
    // Overlapping static entry reached from 0xC1851D.
    case 0xC1851F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:74 BEQL @UNKNOWN104
    case 0xC18520: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:74 BEQL @UNKNOWN104
    case 0xC18522: cpu.execute_instruction<0x4C>(0x00873C, 3); return true;
    // src/text/ccs/tree_1F.asm:75 CMP #$52
    case 0xC18525: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000052, 2); else cpu.execute_instruction<0xC9>(0x000052, 3); return true;
    // src/text/ccs/tree_1F.asm:75 CMP #$52
    // Overlapping static entry reached from 0xC18525.
    case 0xC18527: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:76 BEQL @UNKNOWN105
    case 0xC18528: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:76 BEQL @UNKNOWN105
    case 0xC1852A: cpu.execute_instruction<0x4C>(0x008742, 3); return true;
    // src/text/ccs/tree_1F.asm:77 CMP #$60
    case 0xC1852D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x000060, 3); return true;
    // src/text/ccs/tree_1F.asm:77 CMP #$60
    // Overlapping static entry reached from 0xC1852D.
    case 0xC1852F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:78 BEQL @UNKNOWN106
    case 0xC18530: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:78 BEQL @UNKNOWN106
    case 0xC18532: cpu.execute_instruction<0x4C>(0x008748, 3); return true;
    // src/text/ccs/tree_1F.asm:79 CMP #$61
    case 0xC18535: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000061, 2); else cpu.execute_instruction<0xC9>(0x000061, 3); return true;
    // src/text/ccs/tree_1F.asm:79 CMP #$61
    // Overlapping static entry reached from 0xC18535.
    case 0xC18537: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:80 BEQL @UNKNOWN107
    case 0xC18538: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:80 BEQL @UNKNOWN107
    case 0xC1853A: cpu.execute_instruction<0x4C>(0x00874E, 3); return true;
    // src/text/ccs/tree_1F.asm:81 CMP #$62
    case 0xC1853D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000062, 2); else cpu.execute_instruction<0xC9>(0x000062, 3); return true;
    // src/text/ccs/tree_1F.asm:81 CMP #$62
    // Overlapping static entry reached from 0xC1853D.
    case 0xC1853F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:82 BEQL @UNKNOWN108
    case 0xC18540: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:82 BEQL @UNKNOWN108
    case 0xC18542: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/ccs/tree_1F.asm:83 CMP #$63
    case 0xC18545: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000063, 2); else cpu.execute_instruction<0xC9>(0x000063, 3); return true;
    // src/text/ccs/tree_1F.asm:83 CMP #$63
    // Overlapping static entry reached from 0xC18545.
    case 0xC18547: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:84 BEQL @UNKNOWN109
    case 0xC18548: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:84 BEQL @UNKNOWN109
    case 0xC1854A: cpu.execute_instruction<0x4C>(0x00875A, 3); return true;
    // src/text/ccs/tree_1F.asm:85 CMP #$64
    case 0xC1854D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000064, 2); else cpu.execute_instruction<0xC9>(0x000064, 3); return true;
    // src/text/ccs/tree_1F.asm:85 CMP #$64
    // Overlapping static entry reached from 0xC1854D.
    case 0xC1854F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:86 BEQL @UNKNOWN110
    case 0xC18550: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:86 BEQL @UNKNOWN110
    case 0xC18552: cpu.execute_instruction<0x4C>(0x008760, 3); return true;
    // src/text/ccs/tree_1F.asm:87 CMP #$65
    case 0xC18555: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000065, 2); else cpu.execute_instruction<0xC9>(0x000065, 3); return true;
    // src/text/ccs/tree_1F.asm:87 CMP #$65
    // Overlapping static entry reached from 0xC18555.
    case 0xC18557: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:88 BEQL @UNKNOWN111
    case 0xC18558: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:88 BEQL @UNKNOWN111
    case 0xC1855A: cpu.execute_instruction<0x4C>(0x008767, 3); return true;
    // src/text/ccs/tree_1F.asm:89 CMP #$66
    case 0xC1855D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000066, 2); else cpu.execute_instruction<0xC9>(0x000066, 3); return true;
    // src/text/ccs/tree_1F.asm:89 CMP #$66
    // Overlapping static entry reached from 0xC1855D.
    case 0xC1855F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:90 BEQL @UNKNOWN112
    case 0xC18560: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:90 BEQL @UNKNOWN112
    case 0xC18562: cpu.execute_instruction<0x4C>(0x00876E, 3); return true;
    // src/text/ccs/tree_1F.asm:91 CMP #$67
    case 0xC18565: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000067, 2); else cpu.execute_instruction<0xC9>(0x000067, 3); return true;
    // src/text/ccs/tree_1F.asm:91 CMP #$67
    // Overlapping static entry reached from 0xC18565.
    case 0xC18567: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:92 BEQL @UNKNOWN113
    case 0xC18568: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:92 BEQL @UNKNOWN113
    case 0xC1856A: cpu.execute_instruction<0x4C>(0x008774, 3); return true;
    // src/text/ccs/tree_1F.asm:93 CMP #$68
    case 0xC1856D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000068, 2); else cpu.execute_instruction<0xC9>(0x000068, 3); return true;
    // src/text/ccs/tree_1F.asm:93 CMP #$68
    // Overlapping static entry reached from 0xC1856D.
    case 0xC1856F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:94 BEQL @UNKNOWN114
    case 0xC18570: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:94 BEQL @UNKNOWN114
    case 0xC18572: cpu.execute_instruction<0x4C>(0x00877A, 3); return true;
    // src/text/ccs/tree_1F.asm:95 CMP #$69
    case 0xC18575: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000069, 2); else cpu.execute_instruction<0xC9>(0x000069, 3); return true;
    // src/text/ccs/tree_1F.asm:95 CMP #$69
    // Overlapping static entry reached from 0xC18575.
    case 0xC18577: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:96 BEQL @UNKNOWN115
    case 0xC18578: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:96 BEQL @UNKNOWN115
    case 0xC1857A: cpu.execute_instruction<0x4C>(0x008789, 3); return true;
    // src/text/ccs/tree_1F.asm:97 CMP #$71
    case 0xC1857D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000071, 2); else cpu.execute_instruction<0xC9>(0x000071, 3); return true;
    // src/text/ccs/tree_1F.asm:97 CMP #$71
    // Overlapping static entry reached from 0xC1857D.
    case 0xC1857F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:98 BEQL @UNKNOWN118
    case 0xC18580: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:98 BEQL @UNKNOWN118
    case 0xC18582: cpu.execute_instruction<0x4C>(0x0087E4, 3); return true;
    // src/text/ccs/tree_1F.asm:99 CMP #$81
    case 0xC18585: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000081, 2); else cpu.execute_instruction<0xC9>(0x000081, 3); return true;
    // src/text/ccs/tree_1F.asm:99 CMP #$81
    // Overlapping static entry reached from 0xC18585.
    case 0xC18587: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:100 BEQL @UNKNOWN119
    case 0xC18588: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:100 BEQL @UNKNOWN119
    case 0xC1858A: cpu.execute_instruction<0x4C>(0x0087EA, 3); return true;
    // src/text/ccs/tree_1F.asm:101 CMP #$83
    case 0xC1858D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000083, 2); else cpu.execute_instruction<0xC9>(0x000083, 3); return true;
    // src/text/ccs/tree_1F.asm:101 CMP #$83
    // Overlapping static entry reached from 0xC1858D.
    case 0xC1858F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:102 BEQL @UNKNOWN120
    case 0xC18590: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:102 BEQL @UNKNOWN120
    case 0xC18592: cpu.execute_instruction<0x4C>(0x0087F0, 3); return true;
    // src/text/ccs/tree_1F.asm:103 CMP #$90
    case 0xC18595: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000090, 2); else cpu.execute_instruction<0xC9>(0x000090, 3); return true;
    // src/text/ccs/tree_1F.asm:103 CMP #$90
    // Overlapping static entry reached from 0xC18595.
    case 0xC18597: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:104 BEQL @UNKNOWN121
    case 0xC18598: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:104 BEQL @UNKNOWN121
    case 0xC1859A: cpu.execute_instruction<0x4C>(0x0087F6, 3); return true;
    // src/text/ccs/tree_1F.asm:105 CMP #$A0
    case 0xC1859D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A0, 2); else cpu.execute_instruction<0xC9>(0x0000A0, 3); return true;
    // src/text/ccs/tree_1F.asm:105 CMP #$A0
    // Overlapping static entry reached from 0xC1859D.
    case 0xC1859F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:106 BEQL @UNKNOWN122
    case 0xC185A0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:106 BEQL @UNKNOWN122
    case 0xC185A2: cpu.execute_instruction<0x4C>(0x00880B, 3); return true;
    // src/text/ccs/tree_1F.asm:107 CMP #$A1
    case 0xC185A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A1, 2); else cpu.execute_instruction<0xC9>(0x0000A1, 3); return true;
    // src/text/ccs/tree_1F.asm:107 CMP #$A1
    // Overlapping static entry reached from 0xC185A5.
    case 0xC185A7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:108 BEQL @UNKNOWN123
    case 0xC185A8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:108 BEQL @UNKNOWN123
    case 0xC185AA: cpu.execute_instruction<0x4C>(0x008815, 3); return true;
    // src/text/ccs/tree_1F.asm:109 CMP #$A2
    case 0xC185AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A2, 2); else cpu.execute_instruction<0xC9>(0x0000A2, 3); return true;
    // src/text/ccs/tree_1F.asm:109 CMP #$A2
    // Overlapping static entry reached from 0xC185AD.
    case 0xC185AF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:110 BEQL @UNKNOWN124
    case 0xC185B0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:110 BEQL @UNKNOWN124
    case 0xC185B2: cpu.execute_instruction<0x4C>(0x00881F, 3); return true;
    // src/text/ccs/tree_1F.asm:111 CMP #$B0
    case 0xC185B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000B0, 2); else cpu.execute_instruction<0xC9>(0x0000B0, 3); return true;
    // src/text/ccs/tree_1F.asm:111 CMP #$B0
    // Overlapping static entry reached from 0xC185B5.
    case 0xC185B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:112 BEQL @UNKNOWN126
    case 0xC185B8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:112 BEQL @UNKNOWN126
    case 0xC185BA: cpu.execute_instruction<0x4C>(0x00883C, 3); return true;
    // src/text/ccs/tree_1F.asm:113 CMP #$C0
    case 0xC185BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/text/ccs/tree_1F.asm:113 CMP #$C0
    // Overlapping static entry reached from 0xC185BD.
    case 0xC185BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:114 BEQL @UNKNOWN127
    case 0xC185C0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:114 BEQL @UNKNOWN127
    case 0xC185C2: cpu.execute_instruction<0x4C>(0x008843, 3); return true;
    // src/text/ccs/tree_1F.asm:115 CMP #$D0
    case 0xC185C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D0, 2); else cpu.execute_instruction<0xC9>(0x0000D0, 3); return true;
    // src/text/ccs/tree_1F.asm:115 CMP #$D0
    // Overlapping static entry reached from 0xC185C5.
    case 0xC185C7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:116 BEQL @UNKNOWN128
    case 0xC185C8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:116 BEQL @UNKNOWN128
    case 0xC185CA: cpu.execute_instruction<0x4C>(0x008849, 3); return true;
    // src/text/ccs/tree_1F.asm:117 CMP #$D1
    case 0xC185CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D1, 2); else cpu.execute_instruction<0xC9>(0x0000D1, 3); return true;
    // src/text/ccs/tree_1F.asm:117 CMP #$D1
    // Overlapping static entry reached from 0xC185CD.
    case 0xC185CF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:118 BEQL @UNKNOWN129
    case 0xC185D0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:118 BEQL @UNKNOWN129
    case 0xC185D2: cpu.execute_instruction<0x4C>(0x00884F, 3); return true;
    // src/text/ccs/tree_1F.asm:119 CMP #$D2
    case 0xC185D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D2, 2); else cpu.execute_instruction<0xC9>(0x0000D2, 3); return true;
    // src/text/ccs/tree_1F.asm:119 CMP #$D2
    // Overlapping static entry reached from 0xC185D5.
    case 0xC185D7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:120 BEQL @UNKNOWN130
    case 0xC185D8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:120 BEQL @UNKNOWN130
    case 0xC185DA: cpu.execute_instruction<0x4C>(0x008864, 3); return true;
    // src/text/ccs/tree_1F.asm:121 CMP #$D3
    case 0xC185DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D3, 2); else cpu.execute_instruction<0xC9>(0x0000D3, 3); return true;
    // src/text/ccs/tree_1F.asm:121 CMP #$D3
    // Overlapping static entry reached from 0xC185DD.
    case 0xC185DF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:122 BEQL @UNKNOWN131
    case 0xC185E0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:122 BEQL @UNKNOWN131
    case 0xC185E2: cpu.execute_instruction<0x4C>(0x008869, 3); return true;
    // src/text/ccs/tree_1F.asm:123 CMP #$E1
    case 0xC185E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/text/ccs/tree_1F.asm:123 CMP #$E1
    // Overlapping static entry reached from 0xC185E5.
    case 0xC185E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:124 BEQL @UNKNOWN132
    case 0xC185E8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:124 BEQL @UNKNOWN132
    case 0xC185EA: cpu.execute_instruction<0x4C>(0x00886E, 3); return true;
    // src/text/ccs/tree_1F.asm:125 CMP #$E4
    case 0xC185ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E4, 2); else cpu.execute_instruction<0xC9>(0x0000E4, 3); return true;
    // src/text/ccs/tree_1F.asm:125 CMP #$E4
    // Overlapping static entry reached from 0xC185ED.
    case 0xC185EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:126 BEQL @UNKNOWN133
    case 0xC185F0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:126 BEQL @UNKNOWN133
    case 0xC185F2: cpu.execute_instruction<0x4C>(0x008873, 3); return true;
    // src/text/ccs/tree_1F.asm:127 CMP #$E5
    case 0xC185F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E5, 2); else cpu.execute_instruction<0xC9>(0x0000E5, 3); return true;
    // src/text/ccs/tree_1F.asm:127 CMP #$E5
    // Overlapping static entry reached from 0xC185F5.
    case 0xC185F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:128 BEQL @UNKNOWN134
    case 0xC185F8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:128 BEQL @UNKNOWN134
    case 0xC185FA: cpu.execute_instruction<0x4C>(0x008878, 3); return true;
    // src/text/ccs/tree_1F.asm:129 CMP #$E6
    case 0xC185FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E6, 2); else cpu.execute_instruction<0xC9>(0x0000E6, 3); return true;
    // src/text/ccs/tree_1F.asm:129 CMP #$E6
    // Overlapping static entry reached from 0xC185FD.
    case 0xC185FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:130 BEQL @UNKNOWN135
    case 0xC18600: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:130 BEQL @UNKNOWN135
    case 0xC18602: cpu.execute_instruction<0x4C>(0x00887D, 3); return true;
    // src/text/ccs/tree_1F.asm:131 CMP #$E7
    case 0xC18605: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E7, 2); else cpu.execute_instruction<0xC9>(0x0000E7, 3); return true;
    // src/text/ccs/tree_1F.asm:131 CMP #$E7
    // Overlapping static entry reached from 0xC18605.
    case 0xC18607: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:132 BEQL @UNKNOWN136
    case 0xC18608: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:132 BEQL @UNKNOWN136
    case 0xC1860A: cpu.execute_instruction<0x4C>(0x008882, 3); return true;
    // src/text/ccs/tree_1F.asm:133 CMP #$E8
    case 0xC1860D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E8, 2); else cpu.execute_instruction<0xC9>(0x0000E8, 3); return true;
    // src/text/ccs/tree_1F.asm:133 CMP #$E8
    // Overlapping static entry reached from 0xC1860D.
    case 0xC1860F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:134 BEQL @UNKNOWN137
    case 0xC18610: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:134 BEQL @UNKNOWN137
    case 0xC18612: cpu.execute_instruction<0x4C>(0x008887, 3); return true;
    // src/text/ccs/tree_1F.asm:135 CMP #$E9
    case 0xC18615: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E9, 2); else cpu.execute_instruction<0xC9>(0x0000E9, 3); return true;
    // src/text/ccs/tree_1F.asm:135 CMP #$E9
    // Overlapping static entry reached from 0xC18615.
    case 0xC18617: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:136 BEQL @UNKNOWN138
    case 0xC18618: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:136 BEQL @UNKNOWN138
    case 0xC1861A: cpu.execute_instruction<0x4C>(0x00888C, 3); return true;
    // src/text/ccs/tree_1F.asm:137 CMP #$EA
    case 0xC1861D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EA, 2); else cpu.execute_instruction<0xC9>(0x0000EA, 3); return true;
    // src/text/ccs/tree_1F.asm:137 CMP #$EA
    // Overlapping static entry reached from 0xC1861D.
    case 0xC1861F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:138 BEQL @UNKNOWN139
    case 0xC18620: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:138 BEQL @UNKNOWN139
    case 0xC18622: cpu.execute_instruction<0x4C>(0x008891, 3); return true;
    // src/text/ccs/tree_1F.asm:139 CMP #$EB
    case 0xC18625: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EB, 2); else cpu.execute_instruction<0xC9>(0x0000EB, 3); return true;
    // src/text/ccs/tree_1F.asm:139 CMP #$EB
    // Overlapping static entry reached from 0xC18625.
    case 0xC18627: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:140 BEQL @UNKNOWN140
    case 0xC18628: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:140 BEQL @UNKNOWN140
    case 0xC1862A: cpu.execute_instruction<0x4C>(0x008896, 3); return true;
    // src/text/ccs/tree_1F.asm:141 CMP #$EC
    case 0xC1862D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EC, 2); else cpu.execute_instruction<0xC9>(0x0000EC, 3); return true;
    // src/text/ccs/tree_1F.asm:141 CMP #$EC
    // Overlapping static entry reached from 0xC1862D.
    case 0xC1862F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:142 BEQL @UNKNOWN141
    case 0xC18630: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:142 BEQL @UNKNOWN141
    case 0xC18632: cpu.execute_instruction<0x4C>(0x00889B, 3); return true;
    // src/text/ccs/tree_1F.asm:143 CMP #$ED
    case 0xC18635: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000ED, 2); else cpu.execute_instruction<0xC9>(0x0000ED, 3); return true;
    // src/text/ccs/tree_1F.asm:143 CMP #$ED
    // Overlapping static entry reached from 0xC18635.
    case 0xC18637: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:144 BEQL @UNKNOWN142
    case 0xC18638: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:144 BEQL @UNKNOWN142
    case 0xC1863A: cpu.execute_instruction<0x4C>(0x0088A0, 3); return true;
    // src/text/ccs/tree_1F.asm:145 CMP #$EE
    case 0xC1863D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EE, 2); else cpu.execute_instruction<0xC9>(0x0000EE, 3); return true;
    // src/text/ccs/tree_1F.asm:145 CMP #$EE
    // Overlapping static entry reached from 0xC1863D.
    case 0xC1863F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:146 BEQL @UNKNOWN143
    case 0xC18640: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:146 BEQL @UNKNOWN143
    case 0xC18642: cpu.execute_instruction<0x4C>(0x0088A6, 3); return true;
    // src/text/ccs/tree_1F.asm:147 CMP #$EF
    case 0xC18645: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000EF, 2); else cpu.execute_instruction<0xC9>(0x0000EF, 3); return true;
    // src/text/ccs/tree_1F.asm:147 CMP #$EF
    // Overlapping static entry reached from 0xC18645.
    case 0xC18647: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:148 BEQL @UNKNOWN144
    case 0xC18648: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:148 BEQL @UNKNOWN144
    case 0xC1864A: cpu.execute_instruction<0x4C>(0x0088AB, 3); return true;
    // src/text/ccs/tree_1F.asm:149 CMP #$F0
    case 0xC1864D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F0, 2); else cpu.execute_instruction<0xC9>(0x0000F0, 3); return true;
    // src/text/ccs/tree_1F.asm:149 CMP #$F0
    // Overlapping static entry reached from 0xC1864D.
    case 0xC1864F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:150 BEQL @UNKNOWN145
    case 0xC18650: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:150 BEQL @UNKNOWN145
    case 0xC18652: cpu.execute_instruction<0x4C>(0x0088B0, 3); return true;
    // src/text/ccs/tree_1F.asm:151 CMP #$F1
    case 0xC18655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F1, 2); else cpu.execute_instruction<0xC9>(0x0000F1, 3); return true;
    // src/text/ccs/tree_1F.asm:151 CMP #$F1
    // Overlapping static entry reached from 0xC18655.
    case 0xC18657: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:152 BEQL @UNKNOWN146
    case 0xC18658: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:152 BEQL @UNKNOWN146
    case 0xC1865A: cpu.execute_instruction<0x4C>(0x0088B6, 3); return true;
    // src/text/ccs/tree_1F.asm:153 CMP #$F2
    case 0xC1865D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F2, 2); else cpu.execute_instruction<0xC9>(0x0000F2, 3); return true;
    // src/text/ccs/tree_1F.asm:153 CMP #$F2
    // Overlapping static entry reached from 0xC1865D.
    case 0xC1865F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:154 BEQL @UNKNOWN147
    case 0xC18660: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:154 BEQL @UNKNOWN147
    case 0xC18662: cpu.execute_instruction<0x4C>(0x0088BB, 3); return true;
    // src/text/ccs/tree_1F.asm:155 CMP #$F3
    case 0xC18665: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F3, 2); else cpu.execute_instruction<0xC9>(0x0000F3, 3); return true;
    // src/text/ccs/tree_1F.asm:155 CMP #$F3
    // Overlapping static entry reached from 0xC18665.
    case 0xC18667: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:156 BEQL @UNKNOWN148
    case 0xC18668: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:156 BEQL @UNKNOWN148
    case 0xC1866A: cpu.execute_instruction<0x4C>(0x0088C0, 3); return true;
    // src/text/ccs/tree_1F.asm:157 CMP #$F4
    case 0xC1866D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F4, 2); else cpu.execute_instruction<0xC9>(0x0000F4, 3); return true;
    // src/text/ccs/tree_1F.asm:157 CMP #$F4
    // Overlapping static entry reached from 0xC1866D.
    case 0xC1866F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:158 BEQL @UNKNOWN149
    case 0xC18670: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:158 BEQL @UNKNOWN149
    case 0xC18672: cpu.execute_instruction<0x4C>(0x0088C5, 3); return true;
    // src/text/ccs/tree_1F.asm:159 JMP @UNKNOWN150
    case 0xC18675: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:161 LDA #.LOWORD(CC_1F_00)
    case 0xC18678: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x004B51, 3); return true;
    // src/text/ccs/tree_1F.asm:161 LDA #.LOWORD(CC_1F_00)
    // Overlapping static entry reached from 0xC18678.
    case 0xC1867A: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:162 JMP @UNKNOWN151
    case 0xC1867B: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:164 LDA #.LOWORD(CC_1F_01)
    case 0xC1867E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x004BA0, 3); return true;
    // src/text/ccs/tree_1F.asm:164 LDA #.LOWORD(CC_1F_01)
    // Overlapping static entry reached from 0xC1867E.
    case 0xC18680: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:165 JMP @UNKNOWN151
    case 0xC18681: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:167 LDA #.LOWORD(CC_1F_02)
    case 0xC18684: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x004BAB, 3); return true;
    // src/text/ccs/tree_1F.asm:167 LDA #.LOWORD(CC_1F_02)
    // Overlapping static entry reached from 0xC18684.
    case 0xC18686: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:168 JMP @UNKNOWN151
    case 0xC18687: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:170 JSL UNKNOWN_C069F7
    case 0xC1868A: cpu.execute_instruction<0x22>(0xC06C25, 4); return true;
    // src/text/ccs/tree_1F.asm:171 LDX #0
    case 0xC1868E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:171 LDX #0
    // Overlapping static entry reached from 0xC1868E.
    case 0xC18690: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:172 JSL UNKNOWN_C216AD
    case 0xC18691: cpu.execute_instruction<0x22>(0xC21555, 4); return true;
    // src/text/ccs/tree_1F.asm:173 JMP @UNKNOWN150
    case 0xC18695: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:175 LDA #.LOWORD(CC_1F_04)
    case 0xC18698: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x0074D4, 3); return true;
    // src/text/ccs/tree_1F.asm:175 LDA #.LOWORD(CC_1F_04)
    // Overlapping static entry reached from 0xC18698.
    case 0xC1869A: cpu.execute_instruction<0x74>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:176 JMP @UNKNOWN151
    case 0xC1869B: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:176 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1869A.
    case 0xC1869C: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:178 LDA #0
    case 0xC1869E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:178 LDA #0
    // Overlapping static entry reached from 0xC1869C.
    case 0xC1869F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1F.asm:178 LDA #0
    // Overlapping static entry reached from 0xC1869E.
    case 0xC186A0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:179 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC186A1: cpu.execute_instruction<0x22>(0xC4D0E4, 4); return true;
    // src/text/ccs/tree_1F.asm:180 JMP @UNKNOWN150
    case 0xC186A5: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:182 LDA #1
    case 0xC186A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:182 LDA #1
    // Overlapping static entry reached from 0xC186A8.
    case 0xC186AA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:183 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC186AB: cpu.execute_instruction<0x22>(0xC4D0E4, 4); return true;
    // src/text/ccs/tree_1F.asm:184 JMP @UNKNOWN150
    case 0xC186AF: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:186 LDA #.LOWORD(CC_1F_07)
    case 0xC186B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x00769F, 3); return true;
    // src/text/ccs/tree_1F.asm:186 LDA #.LOWORD(CC_1F_07)
    // Overlapping static entry reached from 0xC186B2.
    case 0xC186B4: cpu.execute_instruction<0x76>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:187 JMP @UNKNOWN151
    case 0xC186B5: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:187 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186B4.
    case 0xC186B6: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    case 0xC186B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0061F0, 3); return true;
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    // Overlapping static entry reached from 0xC186B6.
    case 0xC186B9: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    // Overlapping static entry reached from 0xC186B8.
    case 0xC186BA: cpu.execute_instruction<0x61>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:190 JMP @UNKNOWN151
    case 0xC186BB: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:190 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186BA.
    case 0xC186BC: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    case 0xC186BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x006210, 3); return true;
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    // Overlapping static entry reached from 0xC186BC.
    case 0xC186BF: cpu.execute_instruction<0x10>(0x000062, 2); return true;
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    // Overlapping static entry reached from 0xC186BE.
    case 0xC186C0: cpu.execute_instruction<0x62>(0x00CD4C, 3); return true;
    // src/text/ccs/tree_1F.asm:193 JMP @UNKNOWN151
    case 0xC186C1: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:193 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186C0.
    case 0xC186C3: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:195 LDA #.LOWORD(CC_1F_13)
    case 0xC186C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00667C, 3); return true;
    // src/text/ccs/tree_1F.asm:195 LDA #.LOWORD(CC_1F_13)
    // Overlapping static entry reached from 0xC186C4.
    case 0xC186C6: cpu.execute_instruction<0x66>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:196 JMP @UNKNOWN151
    case 0xC186C7: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:196 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186C6.
    case 0xC186C8: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    case 0xC186CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x0066ED, 3); return true;
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    // Overlapping static entry reached from 0xC186C8.
    case 0xC186CB: cpu.execute_instruction<0xED>(0x004C66, 3); return true;
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    // Overlapping static entry reached from 0xC186CA.
    case 0xC186CC: cpu.execute_instruction<0x66>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:199 JMP @UNKNOWN151
    case 0xC186CD: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:199 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186CC.
    case 0xC186CE: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    case 0xC186D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0069C3, 3); return true;
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC186CE.
    case 0xC186D1: cpu.execute_instruction<0xC3>(0x000069, 2); return true;
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC186D0.
    case 0xC186D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004C, 2); else cpu.execute_instruction<0x69>(0x00CD4C, 3); return true;
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    case 0xC186D3: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186D2.
    case 0xC186D4: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186D2.
    case 0xC186D5: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    case 0xC186D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00670F, 3); return true;
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC186D4.
    case 0xC186D7: cpu.execute_instruction<0x0F>(0xCD4C67, 4); return true;
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC186D6.
    case 0xC186D8: cpu.execute_instruction<0x67>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    case 0xC186D9: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186D8.
    case 0xC186DA: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186D7.
    case 0xC186DB: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    case 0xC186DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000088, 2); else cpu.execute_instruction<0xA9>(0x006788, 3); return true;
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC186DA.
    case 0xC186DD: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC186DC.
    case 0xC186DE: cpu.execute_instruction<0x67>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:208 JMP @UNKNOWN151
    case 0xC186DF: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:208 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186DE.
    case 0xC186E0: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    case 0xC186E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x006801, 3); return true;
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    // Overlapping static entry reached from 0xC186E0.
    case 0xC186E3: cpu.execute_instruction<0x01>(0x000068, 2); return true;
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    // Overlapping static entry reached from 0xC186E2.
    case 0xC186E4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:211 JMP @UNKNOWN151
    case 0xC186E5: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:213 LDA #.LOWORD(CC_1F_19)
    case 0xC186E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x006829, 3); return true;
    // src/text/ccs/tree_1F.asm:213 LDA #.LOWORD(CC_1F_19)
    // Overlapping static entry reached from 0xC186E8.
    case 0xC186EA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:214 JMP @UNKNOWN151
    case 0xC186EB: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:216 LDA #.LOWORD(CC_1F_1A)
    case 0xC186EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x006851, 3); return true;
    // src/text/ccs/tree_1F.asm:216 LDA #.LOWORD(CC_1F_1A)
    // Overlapping static entry reached from 0xC186EE.
    case 0xC186F0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:217 JMP @UNKNOWN151
    case 0xC186F1: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:219 LDA #.LOWORD(CC_1F_1B)
    case 0xC186F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x0068A9, 3); return true;
    // src/text/ccs/tree_1F.asm:219 LDA #.LOWORD(CC_1F_1B)
    // Overlapping static entry reached from 0xC186F4.
    case 0xC186F6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:220 JMP @UNKNOWN151
    case 0xC186F7: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:222 LDA #.LOWORD(CC_1F_1C)
    case 0xC186FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EC, 2); else cpu.execute_instruction<0xA9>(0x0068EC, 3); return true;
    // src/text/ccs/tree_1F.asm:222 LDA #.LOWORD(CC_1F_1C)
    // Overlapping static entry reached from 0xC186FA.
    case 0xC186FC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:223 JMP @UNKNOWN151
    case 0xC186FD: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:225 LDA #.LOWORD(CC_1F_1D)
    case 0xC18700: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x00695C, 3); return true;
    // src/text/ccs/tree_1F.asm:225 LDA #.LOWORD(CC_1F_1D)
    // Overlapping static entry reached from 0xC18700.
    case 0xC18702: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004C, 2); else cpu.execute_instruction<0x69>(0x00CD4C, 3); return true;
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    case 0xC18703: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18702.
    case 0xC18704: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18702.
    case 0xC18705: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    case 0xC18706: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000055, 2); else cpu.execute_instruction<0xA9>(0x006A55, 3); return true;
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    // Overlapping static entry reached from 0xC18704.
    case 0xC18707: cpu.execute_instruction<0x55>(0x00006A, 2); return true;
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    // Overlapping static entry reached from 0xC18706.
    case 0xC18708: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:229 JMP @UNKNOWN151
    case 0xC18709: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:231 LDA #.LOWORD(CC_1F_1F)
    case 0xC1870C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BA, 2); else cpu.execute_instruction<0xA9>(0x006ABA, 3); return true;
    // src/text/ccs/tree_1F.asm:231 LDA #.LOWORD(CC_1F_1F)
    // Overlapping static entry reached from 0xC1870C.
    case 0xC1870E: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:232 JMP @UNKNOWN151
    case 0xC1870F: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:234 LDA #.LOWORD(CC_1F_20)
    case 0xC18712: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x0051FB, 3); return true;
    // src/text/ccs/tree_1F.asm:234 LDA #.LOWORD(CC_1F_20)
    // Overlapping static entry reached from 0xC18712.
    case 0xC18714: cpu.execute_instruction<0x51>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:235 JMP @UNKNOWN151
    case 0xC18715: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:235 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18714.
    case 0xC18716: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    case 0xC18718: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008C, 2); else cpu.execute_instruction<0xA9>(0x00528C, 3); return true;
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    // Overlapping static entry reached from 0xC18716.
    case 0xC18719: cpu.execute_instruction<0x8C>(0x004C52, 3); return true;
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    // Overlapping static entry reached from 0xC18718.
    case 0xC1871A: cpu.execute_instruction<0x52>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    case 0xC1871B: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1871A.
    case 0xC1871C: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    case 0xC1871E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x007250, 3); return true;
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC1871C.
    case 0xC1871F: cpu.execute_instruction<0x50>(0x000072, 2); return true;
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC1871E.
    case 0xC18720: cpu.execute_instruction<0x72>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:241 JMP @UNKNOWN151
    case 0xC18721: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:241 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18720.
    case 0xC18722: cpu.execute_instruction<0xCD>(0x002088, 3); return true;
    // src/text/ccs/tree_1F.asm:241 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186BF.
    case 0xC18723: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:243 JSR CHANGE_CURRENT_WINDOW_FONT
    case 0xC18724: cpu.execute_instruction<0x20>(0x001566, 3); return true;
    // src/text/ccs/tree_1F.asm:243 JSR CHANGE_CURRENT_WINDOW_FONT
    // Overlapping static entry reached from 0xC18722.
    case 0xC18725: cpu.execute_instruction<0x66>(0x000015, 2); return true;
    // src/text/ccs/tree_1F.asm:244 JMP @UNKNOWN150
    case 0xC18727: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:246 LDA #.LOWORD(CC_1F_40)
    case 0xC1872A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00753C, 3); return true;
    // src/text/ccs/tree_1F.asm:246 LDA #.LOWORD(CC_1F_40)
    // Overlapping static entry reached from 0xC1872A.
    case 0xC1872C: cpu.execute_instruction<0x75>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:247 JMP @UNKNOWN151
    case 0xC1872D: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:247 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1872C.
    case 0xC1872E: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    case 0xC18730: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005A, 2); else cpu.execute_instruction<0xA9>(0x00755A, 3); return true;
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    // Overlapping static entry reached from 0xC1872E.
    case 0xC18731: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    // Overlapping static entry reached from 0xC18730.
    case 0xC18732: cpu.execute_instruction<0x75>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:250 JMP @UNKNOWN151
    case 0xC18733: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:250 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18732.
    case 0xC18734: cpu.execute_instruction<0xCD>(0x002088, 3); return true;
    // src/text/ccs/tree_1F.asm:252 JSR LOCK_INPUT
    case 0xC18736: cpu.execute_instruction<0x20>(0x0002CD, 3); return true;
    // src/text/ccs/tree_1F.asm:252 JSR LOCK_INPUT
    // Overlapping static entry reached from 0xC18734.
    case 0xC18737: cpu.execute_instruction<0xCD>(0x004C02, 3); return true;
    // src/text/ccs/tree_1F.asm:253 JMP @UNKNOWN150
    case 0xC18739: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:253 JMP @UNKNOWN150
    // Overlapping static entry reached from 0xC18737.
    case 0xC1873A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:253 JMP @UNKNOWN150
    // Overlapping static entry reached from 0xC1873A.
    case 0xC1873B: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:255 JSR UNLOCK_INPUT
    case 0xC1873C: cpu.execute_instruction<0x20>(0x0002D6, 3); return true;
    // src/text/ccs/tree_1F.asm:256 JMP @UNKNOWN150
    case 0xC1873F: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:258 LDA #.LOWORD(CC_1F_52)
    case 0xC18742: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x0048C5, 3); return true;
    // src/text/ccs/tree_1F.asm:258 LDA #.LOWORD(CC_1F_52)
    // Overlapping static entry reached from 0xC18742.
    case 0xC18744: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:259 JMP @UNKNOWN151
    case 0xC18745: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    case 0xC18748: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00574E, 3); return true;
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    // Overlapping static entry reached from 0xC18748.
    case 0xC1874A: cpu.execute_instruction<0x57>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:262 JMP @UNKNOWN151
    case 0xC1874B: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:262 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1874A.
    case 0xC1874C: cpu.execute_instruction<0xCD>(0x002088, 3); return true;
    // src/text/ccs/tree_1F.asm:264 JSR UNKNOWN_C102D0
    case 0xC1874E: cpu.execute_instruction<0x20>(0x0004D4, 3); return true;
    // src/text/ccs/tree_1F.asm:264 JSR UNKNOWN_C102D0
    // Overlapping static entry reached from 0xC1874C.
    case 0xC1874F: cpu.execute_instruction<0xD4>(0x000004, 2); return true;
    // src/text/ccs/tree_1F.asm:265 JMP @UNKNOWN150
    case 0xC18751: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    case 0xC18754: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x006C76, 3); return true;
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    // Overlapping static entry reached from 0xC18754.
    case 0xC18756: cpu.execute_instruction<0x6C>(0x00CD4C, 3); return true;
    // src/text/ccs/tree_1F.asm:268 JMP @UNKNOWN151
    case 0xC18757: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    case 0xC1875A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000067, 2); else cpu.execute_instruction<0xA9>(0x007067, 3); return true;
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    // Overlapping static entry reached from 0xC1875A.
    case 0xC1875C: cpu.execute_instruction<0x70>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:271 JMP @UNKNOWN151
    case 0xC1875D: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:271 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1875C.
    case 0xC1875E: cpu.execute_instruction<0xCD>(0x002288, 3); return true;
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    case 0xC18760: cpu.execute_instruction<0x22>(0xC22F2D, 4); return true;
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    // Overlapping static entry reached from 0xC1875E.
    case 0xC18761: cpu.execute_instruction<0x2D>(0x00C22F, 3); return true;
    // src/text/ccs/tree_1F.asm:274 JMP @UNKNOWN150
    case 0xC18764: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:276 JSL UNKNOWN_C2307B
    case 0xC18767: cpu.execute_instruction<0x22>(0xC22FA0, 4); return true;
    // src/text/ccs/tree_1F.asm:277 JMP @UNKNOWN150
    case 0xC1876B: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:279 LDA #.LOWORD(CC_1F_66)
    case 0xC1876E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009C, 2); else cpu.execute_instruction<0xA9>(0x00739C, 3); return true;
    // src/text/ccs/tree_1F.asm:279 LDA #.LOWORD(CC_1F_66)
    // Overlapping static entry reached from 0xC1876E.
    case 0xC18770: cpu.execute_instruction<0x73>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:280 JMP @UNKNOWN151
    case 0xC18771: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:280 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18770.
    case 0xC18772: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    case 0xC18774: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x0074B3, 3); return true;
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    // Overlapping static entry reached from 0xC18772.
    case 0xC18775: cpu.execute_instruction<0xB3>(0x000074, 2); return true;
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    // Overlapping static entry reached from 0xC18774.
    case 0xC18776: cpu.execute_instruction<0x74>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:283 JMP @UNKNOWN151
    case 0xC18777: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:283 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18776.
    case 0xC18778: cpu.execute_instruction<0xCD>(0x00AD88, 3); return true;
    // src/text/ccs/tree_1F.asm:285 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1877A: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/text/ccs/tree_1F.asm:285 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC18778.
    case 0xC1877B: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:285 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC1877B.
    case 0xC1877C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:286 STA GAME_STATE+game_state::exit_mouse_x_coord
    case 0xC1877D: cpu.execute_instruction<0x8D>(0x009B63, 3); return true;
    // src/text/ccs/tree_1F.asm:287 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC18780: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/text/ccs/tree_1F.asm:288 STA GAME_STATE+game_state::exit_mouse_y_coord
    case 0xC18783: cpu.execute_instruction<0x8D>(0x009B65, 3); return true;
    // src/text/ccs/tree_1F.asm:289 JMP @UNKNOWN150
    case 0xC18786: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:291 LDY #1
    case 0xC18789: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:291 LDY #1
    // Overlapping static entry reached from 0xC18789.
    case 0xC1878B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/ccs/tree_1F.asm:292 STY @LOCAL01
    case 0xC1878C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/tree_1F.asm:293 BRA @UNKNOWN117
    case 0xC1878E: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_1F.asm:295 LDX #0
    case 0xC18790: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:295 LDX #0
    // Overlapping static entry reached from 0xC18790.
    case 0xC18792: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/text/ccs/tree_1F.asm:296 TYA
    case 0xC18793: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:297 JSL SET_EVENT_FLAG
    case 0xC18794: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/text/ccs/tree_1F.asm:298 LDY @LOCAL01
    case 0xC18798: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/tree_1F.asm:299 INY
    case 0xC1879A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:300 STY @LOCAL01
    case 0xC1879B: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/tree_1F.asm:302 CPY #10
    case 0xC1879D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/text/ccs/tree_1F.asm:302 CPY #10
    // Overlapping static entry reached from 0xC1879D.
    case 0xC1879F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/tree_1F.asm:303 BLTEQ @UNKNOWN116
    case 0xC187A0: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/tree_1F.asm:303 BLTEQ @UNKNOWN116
    case 0xC187A2: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // src/text/ccs/tree_1F.asm:304 LDX #1
    case 0xC187A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:304 LDX #1
    // Overlapping static entry reached from 0xC187A4.
    case 0xC187A6: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/ccs/tree_1F.asm:305 TXA
    case 0xC187A7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:306 JSL FADE_OUT
    case 0xC187A8: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/text/ccs/tree_1F.asm:306 JSL FADE_OUT
    // Overlapping static entry reached from 0xC1875C.
    case 0xC187AA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:306 JSL FADE_OUT
    // Overlapping static entry reached from 0xC187AA.
    case 0xC187AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0073A9, 3); return true;
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    case 0xC187AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x000073, 3); return true;
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    // Overlapping static entry reached from 0xC187AB.
    case 0xC187AD: cpu.execute_instruction<0x73>(0x000000, 2); return true;
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    // Overlapping static entry reached from 0xC187AC.
    case 0xC187AE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:308 JSL PLAY_SOUND
    case 0xC187AF: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/ccs/tree_1F.asm:309 LDA GAME_STATE+game_state::exit_mouse_x_coord
    case 0xC187B3: cpu.execute_instruction<0xAD>(0x009B63, 3); return true;
    // src/text/ccs/tree_1F.asm:310 STA @VIRTUAL04
    case 0xC187B6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/tree_1F.asm:311 LDA GAME_STATE+game_state::exit_mouse_y_coord
    case 0xC187B8: cpu.execute_instruction<0xAD>(0x009B65, 3); return true;
    // src/text/ccs/tree_1F.asm:312 STA @VIRTUAL02
    case 0xC187BB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/tree_1F.asm:313 LDX @VIRTUAL02
    case 0xC187BD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/tree_1F.asm:314 LDA @VIRTUAL04
    case 0xC187BF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/tree_1F.asm:315 JSL LOAD_MAP_AT_POSITION
    case 0xC187C1: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/text/ccs/tree_1F.asm:316 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC187C5: cpu.execute_instruction<0x9C>(0x002C8E, 3); return true;
    // src/text/ccs/tree_1F.asm:317 LDY #4
    case 0xC187C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/text/ccs/tree_1F.asm:317 LDY #4
    // Overlapping static entry reached from 0xC187C8.
    case 0xC187CA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/tree_1F.asm:318 LDX @VIRTUAL02
    case 0xC187CB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/tree_1F.asm:319 LDA @VIRTUAL04
    case 0xC187CD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/tree_1F.asm:320 JSL UNKNOWN_C03FA9
    case 0xC187CF: cpu.execute_instruction<0x22>(0xC04230, 4); return true;
    // src/text/ccs/tree_1F.asm:321 LDX #1
    case 0xC187D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:321 LDX #1
    // Overlapping static entry reached from 0xC187D3.
    case 0xC187D5: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/ccs/tree_1F.asm:322 TXA
    case 0xC187D6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:323 JSL FADE_IN
    case 0xC187D7: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/text/ccs/tree_1F.asm:324 LDA #.LOWORD(-1)
    case 0xC187DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/ccs/tree_1F.asm:324 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC187DB.
    case 0xC187DD: cpu.execute_instruction<0xFF>(0x614A8D, 4); return true;
    // src/text/ccs/tree_1F.asm:325 STA STAIRS_DIRECTION
    case 0xC187DE: cpu.execute_instruction<0x8D>(0x00614A, 3); return true;
    // src/text/ccs/tree_1F.asm:326 JMP @UNKNOWN150
    case 0xC187E1: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:328 LDA #.LOWORD(CC_1F_71)
    case 0xC187E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x005ED7, 3); return true;
    // src/text/ccs/tree_1F.asm:328 LDA #.LOWORD(CC_1F_71)
    // Overlapping static entry reached from 0xC187E4.
    case 0xC187E6: cpu.execute_instruction<0x5E>(0x00CD4C, 3); return true;
    // src/text/ccs/tree_1F.asm:329 JMP @UNKNOWN151
    case 0xC187E7: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:329 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC187E6.
    case 0xC187E9: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:331 LDA #.LOWORD(CC_1F_81)
    case 0xC187EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x00535C, 3); return true;
    // src/text/ccs/tree_1F.asm:331 LDA #.LOWORD(CC_1F_81)
    // Overlapping static entry reached from 0xC187EA.
    case 0xC187EC: cpu.execute_instruction<0x53>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:332 JMP @UNKNOWN151
    case 0xC187ED: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:332 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC187EC.
    case 0xC187EE: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    case 0xC187F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x005AB8, 3); return true;
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC187EE.
    case 0xC187F1: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC187F0.
    case 0xC187F2: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:335 JMP @UNKNOWN151
    case 0xC187F3: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:337 JSR UNKNOWN_C19441
    case 0xC187F6: cpu.execute_instruction<0x20>(0x0094EE, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:338 STORE_INT1632 @VIRTUAL06
    case 0xC187F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:338 STORE_INT1632 @VIRTUAL06
    case 0xC187FB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC187FD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC187FF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18801: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18803: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1F.asm:340 JSR SET_WORKING_MEMORY
    case 0xC18805: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1F.asm:341 JMP @UNKNOWN150
    case 0xC18808: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:343 LDA #1
    case 0xC1880B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/tree_1F.asm:343 LDA #1
    // Overlapping static entry reached from 0xC1880B.
    case 0xC1880D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:344 JSL UNKNOWN_C226C5
    case 0xC1880E: cpu.execute_instruction<0x22>(0xC22580, 4); return true;
    // src/text/ccs/tree_1F.asm:345 JMP @UNKNOWN150
    case 0xC18812: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:347 LDA #0
    case 0xC18815: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:347 LDA #0
    // Overlapping static entry reached from 0xC18815.
    case 0xC18817: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:348 JSL UNKNOWN_C226C5
    case 0xC18818: cpu.execute_instruction<0x22>(0xC22580, 4); return true;
    // src/text/ccs/tree_1F.asm:349 JMP @UNKNOWN150
    case 0xC1881C: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:351 JSL UNKNOWN_C226E6
    case 0xC1881F: cpu.execute_instruction<0x22>(0xC225A1, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC18823: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC18823.
    case 0xC18825: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC18826: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC18828: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1882A: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1882C: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1882E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC188AD.
    case 0xC1882F: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18830: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1882F.
    case 0xC18831: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18832: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18834: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1F.asm:354 JSR SET_WORKING_MEMORY
    case 0xC18836: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1F.asm:355 JMP @UNKNOWN150
    case 0xC18839: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:357 JSL SAVE_CURRENT_GAME
    case 0xC1883C: cpu.execute_instruction<0x22>(0xC22951, 4); return true;
    // src/text/ccs/tree_1F.asm:358 JMP @UNKNOWN150
    case 0xC18840: cpu.execute_instruction<0x4C>(0x0088CA, 3); return true;
    // src/text/ccs/tree_1F.asm:360 LDA #.LOWORD(CC_1F_C0)
    case 0xC18843: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000087, 2); else cpu.execute_instruction<0xA9>(0x006587, 3); return true;
    // src/text/ccs/tree_1F.asm:360 LDA #.LOWORD(CC_1F_C0)
    // Overlapping static entry reached from 0xC18843.
    case 0xC18845: cpu.execute_instruction<0x65>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:361 JMP @UNKNOWN151
    case 0xC18846: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:361 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18845.
    case 0xC18847: cpu.execute_instruction<0xCD>(0x00A988, 3); return true;
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    case 0xC18849: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x006626, 3); return true;
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    // Overlapping static entry reached from 0xC18847.
    case 0xC1884A: cpu.execute_instruction<0x26>(0x000066, 2); return true;
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    // Overlapping static entry reached from 0xC18849.
    case 0xC1884B: cpu.execute_instruction<0x66>(0x00004C, 2); return true;
    // src/text/ccs/tree_1F.asm:364 JMP @UNKNOWN151
    case 0xC1884C: cpu.execute_instruction<0x4C>(0x0088CD, 3); return true;
    // src/text/ccs/tree_1F.asm:364 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1884B.
    case 0xC1884D: cpu.execute_instruction<0xCD>(0x002288, 3); return true;
    // src/text/ccs/tree_1F.asm:366 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    case 0xC1884F: cpu.execute_instruction<0x22>(0xC46738, 4); return true;
    // src/text/ccs/tree_1F.asm:366 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    // Overlapping static entry reached from 0xC1884D.
    case 0xC18850: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:366 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    // Overlapping static entry reached from 0xC18850.
    case 0xC18851: cpu.execute_instruction<0x67>(0x0000C4, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:367 STORE_INT1632 @VIRTUAL06
    case 0xC18853: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:367 STORE_INT1632 @VIRTUAL06
    case 0xC18855: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18857: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18859: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1885B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1885D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/tree_1F.asm:369 JSR SET_WORKING_MEMORY
    case 0xC1885F: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/tree_1F.asm:370 BRA @UNKNOWN150
    case 0xC18862: cpu.execute_instruction<0x80>(0x000066, 2); return true;
    // src/text/ccs/tree_1F.asm:372 LDA #.LOWORD(CC_1F_D2)
    case 0xC18864: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x007584, 3); return true;
    // src/text/ccs/tree_1F.asm:372 LDA #.LOWORD(CC_1F_D2)
    // Overlapping static entry reached from 0xC18864.
    case 0xC18866: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:373 BRA @UNKNOWN151
    case 0xC18867: cpu.execute_instruction<0x80>(0x000064, 2); return true;
    // src/text/ccs/tree_1F.asm:373 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18866.
    case 0xC18868: cpu.execute_instruction<0x64>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    case 0xC18869: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0076C0, 3); return true;
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    // Overlapping static entry reached from 0xC18868.
    case 0xC1886A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000076, 2); else cpu.execute_instruction<0xC0>(0x008076, 3); return true;
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    // Overlapping static entry reached from 0xC18869.
    case 0xC1886B: cpu.execute_instruction<0x76>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:376 BRA @UNKNOWN151
    case 0xC1886C: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/text/ccs/tree_1F.asm:376 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC1886B.
    case 0xC1886D: cpu.execute_instruction<0x5F>(0x697DA9, 4); return true;
    // src/text/ccs/tree_1F.asm:378 LDA #.LOWORD(CC_1F_E1)
    case 0xC1886E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00697D, 3); return true;
    // src/text/ccs/tree_1F.asm:378 LDA #.LOWORD(CC_1F_E1)
    // Overlapping static entry reached from 0xC1886E.
    case 0xC18870: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x005A80, 3); return true;
    // src/text/ccs/tree_1F.asm:379 BRA @UNKNOWN151
    case 0xC18871: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/text/ccs/tree_1F.asm:379 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18870.
    case 0xC18872: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:381 LDA #.LOWORD(CC_1F_E4)
    case 0xC18873: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AA, 2); else cpu.execute_instruction<0xA9>(0x006DAA, 3); return true;
    // src/text/ccs/tree_1F.asm:381 LDA #.LOWORD(CC_1F_E4)
    // Overlapping static entry reached from 0xC18873.
    case 0xC18875: cpu.execute_instruction<0x6D>(0x005580, 3); return true;
    // src/text/ccs/tree_1F.asm:382 BRA @UNKNOWN151
    case 0xC18876: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/text/ccs/tree_1F.asm:384 LDA #.LOWORD(CC_1F_E5)
    case 0xC18878: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x006E23, 3); return true;
    // src/text/ccs/tree_1F.asm:384 LDA #.LOWORD(CC_1F_E5)
    // Overlapping static entry reached from 0xC18878.
    case 0xC1887A: cpu.execute_instruction<0x6E>(0x005080, 3); return true;
    // src/text/ccs/tree_1F.asm:385 BRA @UNKNOWN151
    case 0xC1887B: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/text/ccs/tree_1F.asm:387 LDA #.LOWORD(CC_1F_E6)
    case 0xC1887D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x006E2E, 3); return true;
    // src/text/ccs/tree_1F.asm:387 LDA #.LOWORD(CC_1F_E6)
    // Overlapping static entry reached from 0xC1887D.
    case 0xC1887F: cpu.execute_instruction<0x6E>(0x004B80, 3); return true;
    // src/text/ccs/tree_1F.asm:388 BRA @UNKNOWN151
    case 0xC18880: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/text/ccs/tree_1F.asm:390 LDA #.LOWORD(CC_1F_E7)
    case 0xC18882: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000071, 2); else cpu.execute_instruction<0xA9>(0x006E71, 3); return true;
    // src/text/ccs/tree_1F.asm:390 LDA #.LOWORD(CC_1F_E7)
    // Overlapping static entry reached from 0xC18882.
    case 0xC18884: cpu.execute_instruction<0x6E>(0x004680, 3); return true;
    // src/text/ccs/tree_1F.asm:391 BRA @UNKNOWN151
    case 0xC18885: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/text/ccs/tree_1F.asm:393 LDA #.LOWORD(CC_1F_E8)
    case 0xC18887: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B4, 2); else cpu.execute_instruction<0xA9>(0x006EB4, 3); return true;
    // src/text/ccs/tree_1F.asm:393 LDA #.LOWORD(CC_1F_E8)
    // Overlapping static entry reached from 0xC18887.
    case 0xC18889: cpu.execute_instruction<0x6E>(0x004180, 3); return true;
    // src/text/ccs/tree_1F.asm:394 BRA @UNKNOWN151
    case 0xC1888A: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/text/ccs/tree_1F.asm:396 LDA #.LOWORD(CC_1F_E9)
    case 0xC1888C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x006EBF, 3); return true;
    // src/text/ccs/tree_1F.asm:396 LDA #.LOWORD(CC_1F_E9)
    // Overlapping static entry reached from 0xC1888C.
    case 0xC1888E: cpu.execute_instruction<0x6E>(0x003C80, 3); return true;
    // src/text/ccs/tree_1F.asm:397 BRA @UNKNOWN151
    case 0xC1888F: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/text/ccs/tree_1F.asm:399 LDA #.LOWORD(CC_1F_EA)
    case 0xC18891: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x006F02, 3); return true;
    // src/text/ccs/tree_1F.asm:399 LDA #.LOWORD(CC_1F_EA)
    // Overlapping static entry reached from 0xC18891.
    case 0xC18893: cpu.execute_instruction<0x6F>(0xA93780, 4); return true;
    // src/text/ccs/tree_1F.asm:400 BRA @UNKNOWN151
    case 0xC18894: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    case 0xC18896: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000045, 2); else cpu.execute_instruction<0xA9>(0x006F45, 3); return true;
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC18893.
    case 0xC18897: cpu.execute_instruction<0x45>(0x00006F, 2); return true;
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC18896.
    case 0xC18898: cpu.execute_instruction<0x6F>(0xA93280, 4); return true;
    // src/text/ccs/tree_1F.asm:403 BRA @UNKNOWN151
    case 0xC18899: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    case 0xC1889B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x006F93, 3); return true;
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    // Overlapping static entry reached from 0xC18898.
    case 0xC1889C: cpu.execute_instruction<0x93>(0x00006F, 2); return true;
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    // Overlapping static entry reached from 0xC1889B.
    case 0xC1889D: cpu.execute_instruction<0x6F>(0x222D80, 4); return true;
    // src/text/ccs/tree_1F.asm:406 BRA @UNKNOWN151
    case 0xC1889E: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/text/ccs/tree_1F.asm:408 JSL UNKNOWN_C466B8
    case 0xC188A0: cpu.execute_instruction<0x22>(0xC4442E, 4); return true;
    // src/text/ccs/tree_1F.asm:408 JSL UNKNOWN_C466B8
    // Overlapping static entry reached from 0xC1889D.
    case 0xC188A1: cpu.execute_instruction<0x2E>(0x00C444, 3); return true;
    // src/text/ccs/tree_1F.asm:409 BRA @UNKNOWN150
    case 0xC188A4: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/text/ccs/tree_1F.asm:411 LDA #.LOWORD(CC_1F_EE)
    case 0xC188A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x006FE1, 3); return true;
    // src/text/ccs/tree_1F.asm:411 LDA #.LOWORD(CC_1F_EE)
    // Overlapping static entry reached from 0xC188A6.
    case 0xC188A8: cpu.execute_instruction<0x6F>(0xA92280, 4); return true;
    // src/text/ccs/tree_1F.asm:412 BRA @UNKNOWN151
    case 0xC188A9: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    case 0xC188AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x007024, 3); return true;
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    // Overlapping static entry reached from 0xC188A8.
    case 0xC188AC: cpu.execute_instruction<0x24>(0x000070, 2); return true;
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    // Overlapping static entry reached from 0xC188AB.
    case 0xC188AD: cpu.execute_instruction<0x70>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:415 BRA @UNKNOWN151
    case 0xC188AE: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/text/ccs/tree_1F.asm:415 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188AD.
    case 0xC188AF: cpu.execute_instruction<0x1D>(0x00C522, 3); return true;
    // src/text/ccs/tree_1F.asm:417 JSL GET_ON_BICYCLE
    case 0xC188B0: cpu.execute_instruction<0x22>(0xC03EC5, 4); return true;
    // src/text/ccs/tree_1F.asm:417 JSL GET_ON_BICYCLE
    // Overlapping static entry reached from 0xC188AF.
    case 0xC188B2: cpu.execute_instruction<0x3E>(0x0080C0, 3); return true;
    // src/text/ccs/tree_1F.asm:418 BRA @UNKNOWN150
    case 0xC188B4: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/text/ccs/tree_1F.asm:418 BRA @UNKNOWN150
    // Overlapping static entry reached from 0xC188B2.
    case 0xC188B5: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    case 0xC188B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003E, 2); else cpu.execute_instruction<0xA9>(0x00713E, 3); return true;
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    // Overlapping static entry reached from 0xC188B5.
    case 0xC188B7: cpu.execute_instruction<0x3E>(0x008071, 3); return true;
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    // Overlapping static entry reached from 0xC188B6.
    case 0xC188B8: cpu.execute_instruction<0x71>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:421 BRA @UNKNOWN151
    case 0xC188B9: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/tree_1F.asm:421 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188B8.
    case 0xC188BA: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    case 0xC188BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x0071AE, 3); return true;
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    // Overlapping static entry reached from 0xC188BA.
    case 0xC188BC: cpu.execute_instruction<0xAE>(0x008071, 3); return true;
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    // Overlapping static entry reached from 0xC188BB.
    case 0xC188BD: cpu.execute_instruction<0x71>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:424 BRA @UNKNOWN151
    case 0xC188BE: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/ccs/tree_1F.asm:424 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188BD.
    case 0xC188BF: cpu.execute_instruction<0x0D>(0x00A5A9, 3); return true;
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    case 0xC188C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x0075A5, 3); return true;
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    // Overlapping static entry reached from 0xC188C0.
    case 0xC188C2: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:427 BRA @UNKNOWN151
    case 0xC188C3: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/tree_1F.asm:427 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188C2.
    case 0xC188C4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/tree_1F.asm:429 LDA #.LOWORD(CC_1F_F4)
    case 0xC188C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0075FD, 3); return true;
    // src/text/ccs/tree_1F.asm:429 LDA #.LOWORD(CC_1F_F4)
    // Overlapping static entry reached from 0xC188C5.
    case 0xC188C7: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/tree_1F.asm:430 BRA @UNKNOWN151
    case 0xC188C8: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/tree_1F.asm:430 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188C7.
    case 0xC188C9: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    case 0xC188CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    // Overlapping static entry reached from 0xC188C9.
    case 0xC188CB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    // Overlapping static entry reached from 0xC188CA.
    case 0xC188CC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1F.asm:434 END_C_FUNCTION
    case 0xC188CD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1F.asm:434 END_C_FUNCTION
    case 0xC188CE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_battle.asm (source_named).
bool execute_text_ccs_trigger_battle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/trigger_battle.asm:3 BEGIN_C_FUNCTION
    case 0xC17250: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC17252: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC17253: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC17254: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC17255: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC17255.
    case 0xC17257: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC17258: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC17259: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_battle.asm:11 TXA
    case 0xC1725A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_battle.asm:12 STA @LOCAL01
    case 0xC1725B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/trigger_battle.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1725D: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/trigger_battle.asm:14 BNE @UNKNOWN0
    case 0xC17260: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/trigger_battle.asm:15 LDA @LOCAL01
    case 0xC17262: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/trigger_battle.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC17264: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_battle.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17266: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/trigger_battle.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC17269: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/trigger_battle.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1726C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/trigger_battle.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1726E: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/trigger_battle.asm:21 LDA #.LOWORD(CC_1F_23)
    case 0xC17271: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x007250, 3); return true;
    // src/text/ccs/trigger_battle.asm:21 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC17271.
    case 0xC17273: cpu.execute_instruction<0x72>(0x000080, 2); return true;
    // src/text/ccs/trigger_battle.asm:22 BRA @UNKNOWN4
    case 0xC17274: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/text/ccs/trigger_battle.asm:22 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC17273.
    case 0xC17275: cpu.execute_instruction<0x3E>(0x0010E2, 3); return true;
    // src/text/ccs/trigger_battle.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC17276: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/trigger_battle.asm:25 LDY #8
    case 0xC17278: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/trigger_battle.asm:26 LDA @LOCAL01
    case 0xC1727A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/trigger_battle.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC17278.
    case 0xC1727B: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/trigger_battle.asm:27 JSL ASL16_ENTRY2
    case 0xC1727C: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/trigger_battle.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1727B.
    case 0xC1727D: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/text/ccs/trigger_battle.asm:28 STA @VIRTUAL02
    case 0xC17280: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/trigger_battle.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC17282: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/trigger_battle.asm:30 AND #$00FF
    case 0xC17285: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/trigger_battle.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC17285.
    case 0xC17287: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/trigger_battle.asm:31 ORA @VIRTUAL02
    case 0xC17288: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/trigger_battle.asm:32 BEQ @UNKNOWN1
    case 0xC1728A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/trigger_battle.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC1728C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC1728E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/trigger_battle.asm:34 BRA @UNKNOWN2
    case 0xC17290: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/trigger_battle.asm:36 JSR GET_ARGUMENT_MEMORY
    case 0xC17292: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/trigger_battle.asm:36 JSR GET_ARGUMENT_MEMORY
    // Overlapping static entry reached from 0xC172D0.
    case 0xC17294: cpu.execute_instruction<0x05>(0x0000A5, 2); return true;
    // src/text/ccs/trigger_battle.asm:38 LDA @VIRTUAL06
    case 0xC17295: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/trigger_battle.asm:38 LDA @VIRTUAL06
    // Overlapping static entry reached from 0xC17294.
    case 0xC17296: cpu.execute_instruction<0x06>(0x000022, 2); return true;
    // src/text/ccs/trigger_battle.asm:39 JSL INIT_BATTLE_SCRIPTED
    case 0xC17297: cpu.execute_instruction<0x22>(0xC22E5D, 4); return true;
    // src/text/ccs/trigger_battle.asm:39 JSL INIT_BATTLE_SCRIPTED
    // Overlapping static entry reached from 0xC17296.
    case 0xC17298: cpu.execute_instruction<0x5D>(0x00C22E, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1729B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC1729B.
    case 0xC1729D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1729E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC172A0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC172A2: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC172A4: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC172A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC172A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC172AA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC172AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC17421.
    case 0xC172AD: cpu.execute_instruction<0x10>(0x000020, 2); return true;
    // src/text/ccs/trigger_battle.asm:42 JSR SET_WORKING_MEMORY
    case 0xC172AE: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/trigger_battle.asm:42 JSR SET_WORKING_MEMORY
    // Overlapping static entry reached from 0xC172AD.
    case 0xC172AF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/ccs/trigger_battle.asm:43 LDA #NULL
    case 0xC172B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_battle.asm:43 LDA #NULL
    // Overlapping static entry reached from 0xC172B1.
    case 0xC172B3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/trigger_battle.asm:45 END_C_FUNCTION
    case 0xC172B4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/trigger_battle.asm:45 END_C_FUNCTION
    case 0xC172B5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_photographer_event.asm (source_named).
bool execute_text_ccs_trigger_photographer_event_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/trigger_photographer_event.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC17584: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC17586: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC17587: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC17588: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC17589: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC17589.
    case 0xC1758B: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC1758C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:8 END_STACK_VARS
    case 0xC1758D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_photographer_event.asm:9 TXA
    case 0xC1758E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_photographer_event.asm:10 BEQ @UNKNOWN0
    case 0xC1758F: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17591: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/trigger_photographer_event.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17593: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/trigger_photographer_event.asm:12 BRA @UNKNOWN1
    case 0xC17595: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/trigger_photographer_event.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC17597: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/trigger_photographer_event.asm:16 LDA @VIRTUAL06
    case 0xC1759A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/trigger_photographer_event.asm:17 JSL UNKNOWN_C466C1
    case 0xC1759C: cpu.execute_instruction<0x22>(0xC44437, 4); return true;
    // src/text/ccs/trigger_photographer_event.asm:18 LDA #NULL
    case 0xC175A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_photographer_event.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC175A0.
    case 0xC175A2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/trigger_photographer_event.asm:19 PLD
    case 0xC175A3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/trigger_photographer_event.asm:20 RTS
    case 0xC175A4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_psi_teleport.asm (source_named).
bool execute_text_ccs_trigger_psi_teleport_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:3 BEGIN_C_FUNCTION
    case 0xC151FB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC151FD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC151FE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC151FF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC15200: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC15200.
    case 0xC15202: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC15203: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC15204: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_psi_teleport.asm:13 TXA
    case 0xC15205: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_psi_teleport.asm:14 STA @LOCAL03
    case 0xC15206: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:15 LDA #1
    case 0xC15208: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:15 LDA #1
    // Overlapping static entry reached from 0xC15208.
    case 0xC1520A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:16 CLC
    case 0xC1520B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/trigger_psi_teleport.asm:17 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1520C: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC1520F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC15211: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC15213: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC15215: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:19 LDA @LOCAL03
    case 0xC15217: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC15219: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:21 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1521B: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:22 STA CC_ARGUMENT_STORAGE,X
    case 0xC1521E: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC15221: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:24 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15223: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:25 LDA #.LOWORD(CC_1F_20)
    case 0xC15226: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x0051FB, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:25 LDA #.LOWORD(CC_1F_20)
    // Overlapping static entry reached from 0xC15226.
    case 0xC15228: cpu.execute_instruction<0x51>(0x000080, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:26 BRA @UNKNOWN7
    case 0xC15229: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:26 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC15228.
    case 0xC1522A: cpu.execute_instruction<0x5F>(0xAD20E2, 4); return true;
    // src/text/ccs/trigger_psi_teleport.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC1522B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC1522D: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:29 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1522A.
    case 0xC1522E: cpu.execute_instruction<0x6E>(0x00859A, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:30 STA @VIRTUAL00
    case 0xC15230: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:30 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1522E.
    case 0xC15231: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC15232: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:32 LDA @LOCAL03
    case 0xC15234: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:33 BEQ @UNKNOWN3
    case 0xC15236: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC15238: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC1523A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1523C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1523E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC15240: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC15242: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:36 BRA @UNKNOWN4
    case 0xC15244: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:38 JSR GET_ARGUMENT_MEMORY
    case 0xC15246: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC15249: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1524B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1524D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1524F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:41 LDA @VIRTUAL00
    case 0xC15251: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:42 AND #$00FF
    case 0xC15253: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC15253.
    case 0xC15255: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:43 BEQ @UNKNOWN5
    case 0xC15256: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC15258: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:45 LDA @VIRTUAL00
    case 0xC1525A: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:46 STA @LOCAL01
    case 0xC1525C: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:47 BRA @UNKNOWN6
    case 0xC1525E: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:49 JSR GET_WORKING_MEMORY
    case 0xC15260: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15263: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15265: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15267: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15269: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC1526B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:52 LDA @VIRTUAL0A
    case 0xC1526D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:53 STA @LOCAL01
    case 0xC1526F: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC15271: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC15273: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC15275: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC15277: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC15279: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC1527B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:58 LDA @VIRTUAL06
    case 0xC1527D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:59 STA @LOCAL00
    case 0xC1527F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:60 LDA @LOCAL01
    case 0xC15281: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/text/ccs/trigger_psi_teleport.asm:61 JSL SET_TELEPORT_STATE
    case 0xC15283: cpu.execute_instruction<0x22>(0xC0DD1B, 4); return true;
    // src/text/ccs/trigger_psi_teleport.asm:63 LDA #NULL
    case 0xC15287: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_psi_teleport.asm:63 LDA #NULL
    // Overlapping static entry reached from 0xC15287.
    case 0xC15289: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:65 END_C_FUNCTION
    case 0xC1528A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:65 END_C_FUNCTION
    case 0xC1528B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_special_event.asm (source_named).
bool execute_text_ccs_trigger_special_event_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/trigger_special_event.asm:3 BEGIN_C_FUNCTION
    case 0xC1755A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC1755C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC1755D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC1755E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC1755F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1755F.
    case 0xC17561: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC17562: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_special_event.asm:9 END_STACK_VARS
    case 0xC17563: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_special_event.asm:10 TXA
    case 0xC17564: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_special_event.asm:11 JSL UNKNOWN_C1BEFC
    case 0xC17565: cpu.execute_instruction<0x22>(0xC1BD62, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17569: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC17569.
    case 0xC1756B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1756C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1756E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17570: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/trigger_special_event.asm:12 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17572: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_special_event.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17574: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_special_event.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17576: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_special_event.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17578: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_special_event.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1757A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/trigger_special_event.asm:14 JSR SET_WORKING_MEMORY
    case 0xC1757C: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/trigger_special_event.asm:15 LDA #NULL
    case 0xC1757F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_special_event.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC1757F.
    case 0xC17581: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/trigger_special_event.asm:16 END_C_FUNCTION
    case 0xC17582: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/trigger_special_event.asm:16 END_C_FUNCTION
    case 0xC17583: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_teleport.asm (source_named).
bool execute_text_ccs_trigger_teleport_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/trigger_teleport.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1528C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC1528E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC1528F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC15290: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC15291: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC15291.
    case 0xC15293: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC15294: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_teleport.asm:8 END_STACK_VARS
    case 0xC15295: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/trigger_teleport.asm:9 CPX #$0000
    case 0xC15296: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/trigger_teleport.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15293.
    case 0xC15297: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/trigger_teleport.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15296.
    case 0xC15298: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/trigger_teleport.asm:10 BEQ @UNKNOWN0
    case 0xC15299: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/trigger_teleport.asm:11 TXA
    case 0xC1529B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_teleport.asm:12 BRA @UNKNOWN1
    case 0xC1529C: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/trigger_teleport.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC1529E: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/trigger_teleport.asm:15 LDA @VIRTUAL06
    case 0xC152A1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/trigger_teleport.asm:17 JSR TELEPORT
    case 0xC152A3: cpu.execute_instruction<0x20>(0x00BB11, 3); return true;
    // src/text/ccs/trigger_teleport.asm:18 LDA #NULL
    case 0xC152A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_teleport.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC152A6.
    case 0xC152A8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/trigger_teleport.asm:19 PLD
    case 0xC152A9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/trigger_teleport.asm:20 RTS
    case 0xC152AA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/trigger_timed_event.asm (source_named).
bool execute_text_ccs_trigger_timed_event_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/trigger_timed_event.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC176C0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/trigger_timed_event.asm:4 TXA
    case 0xC176C2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/trigger_timed_event.asm:5 JSL GET_DELIVERY_SPRITE_AND_PLACEHOLDER
    case 0xC176C3: cpu.execute_instruction<0x22>(0xC4C93D, 4); return true;
    // src/text/ccs/trigger_timed_event.asm:6 LDA #NULL
    case 0xC176C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/trigger_timed_event.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC176C7.
    case 0xC176C9: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/trigger_timed_event.asm:7 RTS
    case 0xC176CA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/try_fixing_items.asm (source_named).
bool execute_text_ccs_try_fixing_items_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/try_fixing_items.asm:3 BEGIN_C_FUNCTION
    case 0xC16626: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC16628: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC16629: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC1662A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC1662B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1662B.
    case 0xC1662D: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC1662E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/try_fixing_items.asm:10 END_STACK_VARS
    case 0xC1662F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/try_fixing_items.asm:11 CPX #0
    case 0xC16630: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/try_fixing_items.asm:11 CPX #0
    // Overlapping static entry reached from 0xC1662D.
    case 0xC16631: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/try_fixing_items.asm:11 CPX #0
    // Overlapping static entry reached from 0xC16630.
    case 0xC16632: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/try_fixing_items.asm:12 BEQ @ARG_IS_ZERO
    case 0xC16633: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/try_fixing_items.asm:13 TXA
    case 0xC16635: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/try_fixing_items.asm:14 BRA @ARG_IS_NONZERO
    case 0xC16636: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/try_fixing_items.asm:16 JSR GET_ARGUMENT_MEMORY
    case 0xC16638: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/try_fixing_items.asm:17 LDA @VIRTUAL06
    case 0xC1663B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/try_fixing_items.asm:19 JSL UNKNOWN_C3F1EC
    case 0xC1663D: cpu.execute_instruction<0x22>(0xC3ECFD, 4); return true;
    // src/text/ccs/try_fixing_items.asm:20 TAX
    case 0xC16641: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/try_fixing_items.asm:21 STX @LOCAL01
    case 0xC16642: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/try_fixing_items.asm:22 BEQ @UNKNOWN2
    case 0xC16644: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/text/ccs/try_fixing_items.asm:23 TXA
    case 0xC16646: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/try_fixing_items.asm:24 JSR UNKNOWN_C1D038
    case 0xC16647: cpu.execute_instruction<0x20>(0x00CE20, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC1664A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC1664C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/try_fixing_items.asm:26 BRA @UNKNOWN3
    case 0xC1664E: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC16650: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC16650.
    case 0xC16652: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC16653: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC16655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC16655.
    case 0xC16657: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:28 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC16658: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/try_fixing_items.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1665A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1665C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1665E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16660: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/try_fixing_items.asm:31 JSR SET_WORKING_MEMORY
    case 0xC16662: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/try_fixing_items.asm:32 LDX @LOCAL01
    case 0xC16665: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/try_fixing_items.asm:33 TXA
    case 0xC16667: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC16668: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC1666A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/try_fixing_items.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1666C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/try_fixing_items.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1666E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16670: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/try_fixing_items.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16672: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/try_fixing_items.asm:36 JSR SET_ARGUMENT_MEMORY
    case 0xC16674: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/try_fixing_items.asm:37 LDA #NULL
    case 0xC16677: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/try_fixing_items.asm:37 LDA #NULL
    // Overlapping static entry reached from 0xC16677.
    case 0xC16679: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/try_fixing_items.asm:38 END_C_FUNCTION
    case 0xC1667A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/try_fixing_items.asm:38 END_C_FUNCTION
    case 0xC1667B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_18_08.asm (source_named).
bool execute_text_ccs_unknown_18_08_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_18_08.asm:3 BEGIN_C_FUNCTION
    case 0xC157A5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC157A7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC157A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC157A9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC157AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC157AA.
    case 0xC157AC: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC157AD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_18_08.asm:9 END_STACK_VARS
    case 0xC157AE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_08.asm:10 TXA
    case 0xC157AF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_08.asm:11 LDX #0
    case 0xC157B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/unknown_18_08.asm:11 LDX #0
    // Overlapping static entry reached from 0xC157B0.
    case 0xC157B2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/unknown_18_08.asm:12 JSR UNKNOWN_C19A11
    case 0xC157B3: cpu.execute_instruction<0x20>(0x009A56, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_18_08.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC157B6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_18_08.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC157B8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_18_08.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157BA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_18_08.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_18_08.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_18_08.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_18_08.asm:15 JSR SET_WORKING_MEMORY
    case 0xC157C2: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_18_08.asm:16 LDA #NULL
    case 0xC157C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_18_08.asm:16 LDA #NULL
    // Overlapping static entry reached from 0xC157C5.
    case 0xC157C7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_18_08.asm:17 END_C_FUNCTION
    case 0xC157C8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_18_08.asm:17 END_C_FUNCTION
    case 0xC157C9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_18_09.asm (source_named).
bool execute_text_ccs_unknown_18_09_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_18_09.asm:3 BEGIN_C_FUNCTION
    case 0xC157CA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC157CC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC157CD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC157CE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC157CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC157CF.
    case 0xC157D1: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC157D2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_18_09.asm:9 END_STACK_VARS
    case 0xC157D3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_09.asm:10 TXA
    case 0xC157D4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_09.asm:11 LDX #1
    case 0xC157D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/unknown_18_09.asm:11 LDX #1
    // Overlapping static entry reached from 0xC157D5.
    case 0xC157D7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/unknown_18_09.asm:12 JSR UNKNOWN_C19A11
    case 0xC157D8: cpu.execute_instruction<0x20>(0x009A56, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_18_09.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC157DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_18_09.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC157DD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_18_09.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157DF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_18_09.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157E1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_18_09.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157E3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_18_09.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC157E5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_18_09.asm:15 JSR SET_WORKING_MEMORY
    case 0xC157E7: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_18_09.asm:16 LDA #NULL
    case 0xC157EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_18_09.asm:16 LDA #NULL
    // Overlapping static entry reached from 0xC157EA.
    case 0xC157EC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_18_09.asm:17 END_C_FUNCTION
    case 0xC157ED: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_18_09.asm:17 END_C_FUNCTION
    case 0xC157EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_18_0D.asm (source_named).
bool execute_text_ccs_unknown_18_0d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_18_0D.asm:3 BEGIN_C_FUNCTION
    case 0xC15DC5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15DC7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15DC8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15DC9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15DCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15DCA.
    case 0xC15DCC: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15DCD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_18_0D.asm:9 END_STACK_VARS
    case 0xC15DCE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:10 TXY
    case 0xC15DCF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:11 STY @LOCAL00
    case 0xC15DD0: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:12 LDA #1
    case 0xC15DD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15DD2.
    case 0xC15DD4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:13 CLC
    case 0xC15DD5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15DD6: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_18_0D.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15DD9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_18_0D.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15DDB: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_18_0D.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15DDD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_18_0D.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15DDF: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:16 TYA
    case 0xC15DE1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15DE2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15DE4: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15DE7: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15DEA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15DEC: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:22 LDA #.LOWORD(CC_18_0D)
    case 0xC15DEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x005DC5, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:22 LDA #.LOWORD(CC_18_0D)
    // Overlapping static entry reached from 0xC15DEF.
    case 0xC15DF1: cpu.execute_instruction<0x5D>(0x003080, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:23 BRA @UNKNOWN8
    case 0xC15DF2: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15DF4: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:26 AND #$00FF
    case 0xC15DF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15DF7.
    case 0xC15DF9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:27 TAX
    case 0xC15DFA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:28 BEQ @ARG_IS_ZERO
    case 0xC15DFB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:29 TXA
    case 0xC15DFD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:30 BRA @ARG_IS_NONZERO
    case 0xC15DFE: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:32 JSR GET_WORKING_MEMORY
    case 0xC15E00: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:33 LDA @VIRTUAL06
    case 0xC15E03: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:35 TAX
    case 0xC15E05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:36 LDY @LOCAL00
    case 0xC15E06: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:37 TYA
    case 0xC15E08: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:38 CMP #1
    case 0xC15E09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:38 CMP #1
    // Overlapping static entry reached from 0xC15E09.
    case 0xC15E0B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:39 BEQ @UNKNOWN5
    case 0xC15E0C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:40 CMP #2
    case 0xC15E0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:40 CMP #2
    // Overlapping static entry reached from 0xC15E0E.
    case 0xC15E10: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:41 BEQ @UNKNOWN6
    case 0xC15E11: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:42 BRA @UNKNOWN7
    case 0xC15E13: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:44 TXA
    case 0xC15E15: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:45 JSL UNKNOWN_C1952F
    case 0xC15E16: cpu.execute_instruction<0x22>(0xC195D1, 4); return true;
    // src/text/ccs/unknown_18_0D.asm:46 BRA @UNKNOWN7
    case 0xC15E1A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:48 TXA
    case 0xC15E1C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:49 JSL NULL_C3EF23
    case 0xC15E1D: cpu.execute_instruction<0x22>(0xC3EAEA, 4); return true;
    // src/text/ccs/unknown_18_0D.asm:49 JSL NULL_C3EF23
    // Overlapping static entry reached from 0xC15E74.
    case 0xC15E1E: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:49 JSL NULL_C3EF23
    // Overlapping static entry reached from 0xC15E1E.
    case 0xC15E1F: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/text/ccs/unknown_18_0D.asm:49 JSL NULL_C3EF23
    // Overlapping static entry reached from 0xC15E1F.
    case 0xC15E20: cpu.execute_instruction<0xC3>(0x0000A9, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:51 LDA #NULL
    case 0xC15E21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_18_0D.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC15E20.
    case 0xC15E22: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/unknown_18_0D.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC15E21.
    case 0xC15E23: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_18_0D.asm:53 END_C_FUNCTION
    case 0xC15E24: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_18_0D.asm:53 END_C_FUNCTION
    case 0xC15E25: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_1A.asm (source_named).
bool execute_text_ccs_unknown_19_1a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1A.asm:3 BEGIN_C_FUNCTION
    case 0xC15D89: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15D8B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15D8C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15D8D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15D8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15D8E.
    case 0xC15D90: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15D91: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1A.asm:9 END_STACK_VARS
    case 0xC15D92: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:10 CPX #0
    case 0xC15D93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1A.asm:10 CPX #0
    // Overlapping static entry reached from 0xC15D90.
    case 0xC15D94: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:10 CPX #0
    // Overlapping static entry reached from 0xC15D93.
    case 0xC15D95: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:11 BEQ @UNKNOWN0
    case 0xC15D96: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:12 TXA
    case 0xC15D98: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:13 BRA @UNKNOWN1
    case 0xC15D99: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC15D9B: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/unknown_19_1A.asm:16 LDA @VIRTUAL06
    case 0xC15D9E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:19 DEC
    case 0xC15DA0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:20 CLC
    case 0xC15DA1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:21 ADC #.LOWORD(GAME_STATE)
    case 0xC15DA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/ccs/unknown_19_1A.asm:21 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC15DA2.
    case 0xC15DA4: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:22 TAX
    case 0xC15DA5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1A.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC15DA6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:24 LDA a:game_state::escargo_express_items,X
    case 0xC15DA8: cpu.execute_instruction<0xBD>(0x000053, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1A.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC15DAB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1A.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC15DAD: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1A.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC15DAF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1A.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC15DB1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC15DB3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1A.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15DB5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1A.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15DB7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1A.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15DB9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1A.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15DBB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1A.asm:34 JSR SET_WORKING_MEMORY
    case 0xC15DBD: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_19_1A.asm:35 LDA #NULL
    case 0xC15DC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1A.asm:35 LDA #NULL
    // Overlapping static entry reached from 0xC15DC0.
    case 0xC15DC2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1A.asm:36 END_C_FUNCTION
    case 0xC15DC3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1A.asm:36 END_C_FUNCTION
    case 0xC15DC4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_1B.asm (source_named).
bool execute_text_ccs_unknown_19_1b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1B.asm:3 BEGIN_C_FUNCTION
    case 0xC15EB5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15EB7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15EB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15EB9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15EBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15EBA.
    case 0xC15EBC: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15EBD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1B.asm:9 END_STACK_VARS
    case 0xC15EBE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1B.asm:10 TXA
    case 0xC15EBF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1B.asm:11 JSR UNKNOWN_C12BD5
    case 0xC15EC0: cpu.execute_instruction<0x20>(0x0032DB, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_19_1B.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC15EC3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1B.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC15EC5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1B.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EC7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1B.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EC9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1B.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15ECB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1B.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15ECD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1B.asm:14 JSR SET_WORKING_MEMORY
    case 0xC15ECF: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_19_1B.asm:15 LDA #NULL
    case 0xC15ED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1B.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC15ED2.
    case 0xC15ED4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1B.asm:16 END_C_FUNCTION
    case 0xC15ED5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1B.asm:16 END_C_FUNCTION
    case 0xC15ED6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_1C.asm (source_named).
bool execute_text_ccs_unknown_19_1c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1C.asm:3 BEGIN_C_FUNCTION
    case 0xC16276: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC16278: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC16279: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC1627A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC1627B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1627B.
    case 0xC1627D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC1627E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC1627F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:11 STX @LOCAL01
    case 0xC16280: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC1627D.
    case 0xC16281: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:12 LDA #1
    case 0xC16282: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16281.
    case 0xC16283: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16282.
    case 0xC16284: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:13 CLC
    case 0xC16285: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16286: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16289: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1628B: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1628D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1628F: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:16 TXA
    case 0xC16291: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16292: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16294: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16297: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1629A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1629C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:22 LDA #.LOWORD(CC_19_1C)
    case 0xC1629F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x006276, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:22 LDA #.LOWORD(CC_19_1C)
    // Overlapping static entry reached from 0xC1629F.
    case 0xC162A1: cpu.execute_instruction<0x62>(0x005980, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:23 BRA @UNKNOWN9
    case 0xC162A2: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC162A4: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:26 AND #$00FF
    case 0xC162A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC162A7.
    case 0xC162A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC162AA: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC162AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC162AE: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC162B1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC162B3: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC162B5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC162B7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:30 BRA @ARG_1_IS_NONZERO
    case 0xC162B9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:32 JSR GET_WORKING_MEMORY
    case 0xC162BB: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC162BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:35 LDA @VIRTUAL06
    case 0xC162C0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:36 STA @VIRTUAL04
    case 0xC162C2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:37 LDX @LOCAL01
    case 0xC162C4: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:38 BEQ @ARG_2_IS_ZERO
    case 0xC162C6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:39 TXA
    case 0xC162C8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:40 BRA @ARG_2_IS_NONZERO
    case 0xC162C9: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC162CB: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:43 LDA @VIRTUAL06
    case 0xC162CE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:45 TAY
    case 0xC162D0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:46 STY @LOCAL00
    case 0xC162D1: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:47 LDA @VIRTUAL04
    case 0xC162D3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:48 CMP #$00FF
    case 0xC162D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:48 CMP #$00FF
    // Overlapping static entry reached from 0xC162D5.
    case 0xC162D7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:49 BNE @UNKNOWN7
    case 0xC162D8: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:50 TYA
    case 0xC162DA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:51 JSR UNKNOWN_C191B0
    case 0xC162DB: cpu.execute_instruction<0x20>(0x00928B, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:52 STA @VIRTUAL02
    case 0xC162DE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:53 BRA @UNKNOWN8
    case 0xC162E0: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:55 TYX
    case 0xC162E2: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:56 LDA @VIRTUAL04
    case 0xC162E3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:57 JSL GET_CHARACTER_ITEM
    case 0xC162E5: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/text/ccs/unknown_19_1C.asm:58 STA @VIRTUAL02
    case 0xC162E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:59 LDY @LOCAL00
    case 0xC162EB: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:60 TYX
    case 0xC162ED: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1C.asm:61 LDA @VIRTUAL04
    case 0xC162EE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:62 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC162F0: cpu.execute_instruction<0x20>(0x008CCE, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:64 LDX @VIRTUAL02
    case 0xC162F3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:65 LDA @VIRTUAL04
    case 0xC162F5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/ccs/unknown_19_1C.asm:66 JSR UNKNOWN_C15FB1
    case 0xC162F7: cpu.execute_instruction<0x20>(0x006230, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:67 LDA #NULL
    case 0xC162FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1C.asm:67 LDA #NULL
    // Overlapping static entry reached from 0xC162FA.
    case 0xC162FC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1C.asm:69 END_C_FUNCTION
    case 0xC162FD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1C.asm:69 END_C_FUNCTION
    case 0xC162FE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_1D.asm (source_named).
bool execute_text_ccs_unknown_19_1d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1D.asm:3 BEGIN_C_FUNCTION
    case 0xC162FF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16301: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16302: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16303: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16304: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC16304.
    case 0xC16306: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16307: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16308: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:12 STX @VIRTUAL02
    case 0xC16309: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC16306.
    case 0xC1630A: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:13 LDA #1
    case 0xC1630B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:13 LDA #1
    // Overlapping static entry reached from 0xC1630B.
    case 0xC1630D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:14 CLC
    case 0xC1630E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1630F: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16312: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16314: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16316: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16318: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:17 LDA @VIRTUAL02
    case 0xC1631A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1631C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1631E: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16321: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16324: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16326: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:23 LDA #.LOWORD(CC_19_1D)
    case 0xC16329: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0062FF, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:23 LDA #.LOWORD(CC_19_1D)
    // Overlapping static entry reached from 0xC16329.
    case 0xC1632B: cpu.execute_instruction<0x62>(0x007380, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:24 BRA @UNKNOWN6
    case 0xC1632C: cpu.execute_instruction<0x80>(0x000073, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1632E: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:27 AND #$00FF
    case 0xC16331: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC16331.
    case 0xC16333: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:28 TAX
    case 0xC16334: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:29 BEQ @ARG_IS_ZERO
    case 0xC16335: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:30 TXA
    case 0xC16337: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:31 BRA @ARG_IS_NONZERO
    case 0xC16338: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:33 JSR GET_WORKING_MEMORY
    case 0xC1633A: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:34 LDA @VIRTUAL06
    case 0xC1633D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:36 DEC
    case 0xC1633F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:37 CLC
    case 0xC16340: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:38 ADC #.LOWORD(GAME_STATE)
    case 0xC16341: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:38 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC16341.
    case 0xC16343: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:39 STA @LOCAL02
    case 0xC16344: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:40 CLC
    case 0xC16346: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:41 ADC #game_state::unknownB8
    case 0xC16347: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0000B6, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:41 ADC #game_state::unknownB8
    // Overlapping static entry reached from 0xC16347.
    case 0xC16349: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:42 TAY
    case 0xC1634A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:43 STY @LOCAL01
    case 0xC1634B: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC1634D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:45 LDA __BSS_START__,Y
    case 0xC1634F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC16352: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC16354: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC16356: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC16358: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC1635A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1635C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1635E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16360: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16362: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:49 JSR SET_WORKING_MEMORY
    case 0xC16364: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:50 LDA @LOCAL02
    case 0xC16367: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:51 CLC
    case 0xC16369: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:52 ADC #game_state::unknownB6
    case 0xC1636A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B3, 2); else cpu.execute_instruction<0x69>(0x0000B3, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:52 ADC #game_state::unknownB6
    // Overlapping static entry reached from 0xC1636A.
    case 0xC1636C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:53 TAX
    case 0xC1636D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_1D.asm:54 STX @LOCAL02
    case 0xC1636E: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC16370: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:56 LDA __BSS_START__,X
    case 0xC16372: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC16375: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC16377: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC16379: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC1637B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1637D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1637F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16381: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16383: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16385: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:60 JSR SET_ARGUMENT_MEMORY
    case 0xC16387: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:61 LDA @VIRTUAL02
    case 0xC1638A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:62 BEQ @UNKNOWN5
    case 0xC1638C: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC1638E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:64 LDA #0
    case 0xC16390: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A600, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:65 LDX @LOCAL02
    case 0xC16392: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:65 LDX @LOCAL02
    // Overlapping static entry reached from 0xC16390.
    case 0xC16393: cpu.execute_instruction<0x14>(0x00009D, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:66 STA __BSS_START__,X
    case 0xC16394: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:66 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC16393.
    case 0xC16395: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:67 LDY @LOCAL01
    case 0xC16397: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:68 STA __BSS_START__,Y
    case 0xC16399: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC1639C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_19_1D.asm:71 LDA #NULL
    case 0xC1639E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_1D.asm:71 LDA #NULL
    // Overlapping static entry reached from 0xC1639E.
    case 0xC163A0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1D.asm:73 END_C_FUNCTION
    case 0xC163A1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1D.asm:73 END_C_FUNCTION
    case 0xC163A2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_19_27.asm (source_named).
bool execute_text_ccs_unknown_19_27_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_27.asm:3 BEGIN_C_FUNCTION
    case 0xC179EB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC179ED: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC179EE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC179EF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC179F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC179F0.
    case 0xC179F2: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC179F3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_27.asm:9 END_STACK_VARS
    case 0xC179F4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_27.asm:10 TXA
    case 0xC179F5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_19_27.asm:11 BEQ @ARG_IS_ZERO
    case 0xC179F6: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_19_27.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC179F8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_27.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC179FA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/unknown_19_27.asm:13 BRA @ARG_IS_NONZERO
    case 0xC179FC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_19_27.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC179FE: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/unknown_19_27.asm:17 LDA @VIRTUAL06
    case 0xC17A01: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_19_27.asm:18 JSL UNKNOWN_C3EE7A
    case 0xC17A03: cpu.execute_instruction<0x22>(0xC3EA41, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_27.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17A07: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_27.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17A09: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_27.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17A0B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_27.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17A0D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_19_27.asm:20 JSR SET_WORKING_MEMORY
    case 0xC17A0F: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_19_27.asm:21 LDA #NULL
    case 0xC17A12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_19_27.asm:21 LDA #NULL
    // Overlapping static entry reached from 0xC17A12.
    case 0xC17A14: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_27.asm:22 END_C_FUNCTION
    case 0xC17A15: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_27.asm:22 END_C_FUNCTION
    case 0xC17A16: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1C_09.asm (source_named).
bool execute_text_ccs_unknown_1c_09_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/unknown_1C_09.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14511: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/unknown_1C_09.asm:4 TXA
    case 0xC14513: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1C_09.asm:5 JSR UNKNOWN_C10EB4
    case 0xC14514: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/text/ccs/unknown_1C_09.asm:6 LDA #NULL
    case 0xC14517: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1C_09.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC14517.
    case 0xC14519: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/unknown_1C_09.asm:7 RTS
    case 0xC1451A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_0C.asm (source_named).
bool execute_text_ccs_unknown_1d_0c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:3 BEGIN_C_FUNCTION
    case 0xC172D7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172D9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172DA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172DB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC172DC.
    case 0xC172DE: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172DF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172E0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:12 TXY
    case 0xC172E1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:13 STY @LOCAL02
    case 0xC172E2: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:14 LDA #1
    case 0xC172E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:14 LDA #1
    // Overlapping static entry reached from 0xC172E4.
    case 0xC172E6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:15 CLC
    case 0xC172E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:16 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172E8: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC172EB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC172ED: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC172EF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC172F1: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:18 TYA
    case 0xC172F3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC172F4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:20 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172F6: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:21 STA CC_ARGUMENT_STORAGE,X
    case 0xC172F9: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC172FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:23 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172FE: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:24 LDA #.LOWORD(CC_1D_0C)
    case 0xC17301: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0072D7, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:24 LDA #.LOWORD(CC_1D_0C)
    // Overlapping static entry reached from 0xC17301.
    case 0xC17303: cpu.execute_instruction<0x72>(0x00004C, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:25 JMP @UNKNOWN12
    case 0xC17304: cpu.execute_instruction<0x4C>(0x00739A, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:25 JMP @UNKNOWN12
    // Overlapping static entry reached from 0xC17303.
    case 0xC17305: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:25 JMP @UNKNOWN12
    // Overlapping static entry reached from 0xC17305.
    case 0xC17306: cpu.execute_instruction<0x73>(0x0000AD, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:27 LDA CC_ARGUMENT_STORAGE
    case 0xC17307: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:27 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC17306.
    case 0xC17308: cpu.execute_instruction<0x6E>(0x00299A, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:28 AND #$00FF
    case 0xC1730A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC17308.
    case 0xC1730B: cpu.execute_instruction<0xFF>(0xF0AA00, 4); return true;
    // src/text/ccs/unknown_1D_0C.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1730A.
    case 0xC1730C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:29 TAX
    case 0xC1730D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:30 BEQ @UNKNOWN3
    case 0xC1730E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:30 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC1730B.
    case 0xC1730F: cpu.execute_instruction<0x03>(0x00008A, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:31 TXA
    case 0xC17310: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:32 BRA @UNKNOWN4
    case 0xC17311: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:34 JSR GET_WORKING_MEMORY
    case 0xC17313: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:35 LDA @VIRTUAL06
    case 0xC17316: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:37 STA @VIRTUAL02
    case 0xC17318: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:38 LDY @LOCAL02
    case 0xC1731A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:39 BEQ @UNKNOWN5
    case 0xC1731C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:40 TYA
    case 0xC1731E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:41 BRA @UNKNOWN6
    case 0xC1731F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:43 JSR GET_ARGUMENT_MEMORY
    case 0xC17321: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:44 LDA @VIRTUAL06
    case 0xC17324: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:46 TAY
    case 0xC17326: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:47 STY @LOCAL01
    case 0xC17327: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:48 JSR UNKNOWN_C190F1
    case 0xC17329: cpu.execute_instruction<0x20>(0x0091AF, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:49 CMP #0
    case 0xC1732C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:49 CMP #0
    // Overlapping static entry reached from 0xC1732C.
    case 0xC1732E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:50 BEQ @UNKNOWN7
    case 0xC1732F: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:51 LDX #2
    case 0xC17331: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:51 LDX #2
    // Overlapping static entry reached from 0xC17331.
    case 0xC17333: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:52 STX @LOCAL02
    case 0xC17334: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:53 BRA @UNKNOWN8
    case 0xC17336: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:55 LDX #0
    case 0xC17338: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:55 LDX #0
    // Overlapping static entry reached from 0xC17338.
    case 0xC1733A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:56 STX @LOCAL02
    case 0xC1733B: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:58 LDY @LOCAL01
    case 0xC1733D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:59 TYA
    case 0xC1733F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:60 DEC
    case 0xC17340: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:61 PHA
    case 0xC17341: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:62 LDA @VIRTUAL02
    case 0xC17342: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:63 DEC
    case 0xC17344: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC17345: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC17345.
    case 0xC17347: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:65 JSL MULT168
    case 0xC17348: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/ccs/unknown_1D_0C.asm:66 CLC
    case 0xC1734C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1734D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1734D.
    case 0xC1734F: cpu.execute_instruction<0x9C>(0x00847A, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:68 PLY
    case 0xC17350: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:69 STY @VIRTUAL02
    case 0xC17351: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:69 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1734F.
    case 0xC17352: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:70 CLC
    case 0xC17353: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:71 ADC @VIRTUAL02
    case 0xC17354: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:72 TAX
    case 0xC17356: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:73 LDA __BSS_START__,X
    case 0xC17357: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:74 AND #$00FF
    case 0xC1735A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC1735A.
    case 0xC1735C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1735D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1735F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17360: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17362: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17363: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17364: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:76 CLC
    case 0xC17365: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:77 ADC #item::flags
    case 0xC17366: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:77 ADC #item::flags
    // Overlapping static entry reached from 0xC17366.
    case 0xC17368: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:78 TAX
    case 0xC17369: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_0C.asm:79 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1736A: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/text/ccs/unknown_1D_0C.asm:80 AND #$00FF
    case 0xC1736E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC1736E.
    case 0xC17370: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:81 AND #ITEM_FLAGS::UNKNOWN
    case 0xC17371: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:81 AND #ITEM_FLAGS::UNKNOWN
    // Overlapping static entry reached from 0xC17371.
    case 0xC17373: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:82 BEQ @UNKNOWN9
    case 0xC17374: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:83 LDA #1
    case 0xC17376: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:83 LDA #1
    // Overlapping static entry reached from 0xC17376.
    case 0xC17378: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:84 BRA @UNKNOWN10
    case 0xC17379: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:86 LDA #0
    case 0xC1737B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:86 LDA #0
    // Overlapping static entry reached from 0xC1737B.
    case 0xC1737D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:88 LDX @LOCAL02
    case 0xC1737E: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:89 STX @VIRTUAL02
    case 0xC17380: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:90 ORA @VIRTUAL02
    case 0xC17382: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC17384: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC17386: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC17388: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC1738A: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1738C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1738E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17390: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17392: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_0C.asm:93 JSR SET_WORKING_MEMORY
    case 0xC17394: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:94 LDA #NULL
    case 0xC17397: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_0C.asm:94 LDA #NULL
    // Overlapping static entry reached from 0xC17397.
    case 0xC17399: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:96 END_C_FUNCTION
    case 0xC1739A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:96 END_C_FUNCTION
    case 0xC1739B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_10.asm (source_named).
bool execute_text_ccs_unknown_1d_10_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_10.asm:3 BEGIN_C_FUNCTION
    case 0xC159D8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC159DA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC159DB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC159DC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC159DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC159DD.
    case 0xC159DF: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC159E0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_10.asm:10 END_STACK_VARS
    case 0xC159E1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:11 TXY
    case 0xC159E2: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:12 STY @LOCAL01
    case 0xC159E3: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:13 LDA #1
    case 0xC159E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:13 LDA #1
    // Overlapping static entry reached from 0xC159E5.
    case 0xC159E7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:14 CLC
    case 0xC159E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC159E9: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_10.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC159EC: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_10.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC159EE: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_10.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC159F0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_10.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC159F2: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:17 TYA
    case 0xC159F4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC159F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC159F7: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC159FA: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC159FD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC159FF: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:23 LDA #.LOWORD(CC_1D_10)
    case 0xC15A02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0059D8, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:23 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC15A02.
    case 0xC15A04: cpu.execute_instruction<0x59>(0x003F80, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:24 BRA @UNKNOWN8
    case 0xC15A05: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15A07: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:27 AND #$00FF
    case 0xC15A0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15A0A.
    case 0xC15A0C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:28 TAX
    case 0xC15A0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:29 BEQ @UNKNOWN3
    case 0xC15A0E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:30 TXA
    case 0xC15A10: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:31 BRA @UNKNOWN4
    case 0xC15A11: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15A13: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:34 LDA @VIRTUAL06
    case 0xC15A16: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:36 STA @VIRTUAL02
    case 0xC15A18: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:37 LDY @LOCAL01
    case 0xC15A1A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:38 BEQ @UNKNOWN5
    case 0xC15A1C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:39 TYA
    case 0xC15A1E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:40 BRA @UNKNOWN6
    case 0xC15A1F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC15A21: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:43 LDA @VIRTUAL06
    case 0xC15A24: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:45 TAX
    case 0xC15A26: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_10.asm:46 LDA @VIRTUAL02
    case 0xC15A27: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:47 JSL CHECK_ITEM_EQUIPPED
    case 0xC15A29: cpu.execute_instruction<0x22>(0xC3E560, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15A2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC15A2D.
    case 0xC15A2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15A30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15A32: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15A34: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/unknown_1D_10.asm:48 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15A36: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_10.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15A38: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_10.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15A3A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_10.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15A3C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_10.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15A3E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_10.asm:50 JSR SET_WORKING_MEMORY
    case 0xC15A40: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:51 LDA #NULL
    case 0xC15A43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_10.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC15A43.
    case 0xC15A45: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_10.asm:53 END_C_FUNCTION
    case 0xC15A46: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_10.asm:53 END_C_FUNCTION
    case 0xC15A47: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_11.asm (source_named).
bool execute_text_ccs_unknown_1d_11_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_11.asm:3 BEGIN_C_FUNCTION
    case 0xC15A48: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC15A4A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC15A4B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC15A4C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC15A4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15A4D.
    case 0xC15A4F: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC15A50: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_11.asm:10 END_STACK_VARS
    case 0xC15A51: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:11 TXY
    case 0xC15A52: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:12 STY @LOCAL01
    case 0xC15A53: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:13 LDA #1
    case 0xC15A55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15A55.
    case 0xC15A57: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:14 CLC
    case 0xC15A58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15A59: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_11.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A5C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_11.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A5E: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_11.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A60: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_11.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A62: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:17 TYA
    case 0xC15A64: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15A65: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15A67: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15A6A: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15A6D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15A6F: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:23 LDA #.LOWORD(CC_1D_11)
    case 0xC15A72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000048, 2); else cpu.execute_instruction<0xA9>(0x005A48, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:23 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC15A72.
    case 0xC15A74: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:24 BRA @UNKNOWN7
    case 0xC15A75: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15A77: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:27 AND #$00FF
    case 0xC15A7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15A7A.
    case 0xC15A7C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:28 TAX
    case 0xC15A7D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:29 BEQ @UNKNOWN3
    case 0xC15A7E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:30 TXA
    case 0xC15A80: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:31 BRA @UNKNOWN4
    case 0xC15A81: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15A83: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:34 LDA @VIRTUAL06
    case 0xC15A86: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:36 STA @VIRTUAL02
    case 0xC15A88: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:37 LDY @LOCAL01
    case 0xC15A8A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:38 BEQ @UNKNOWN5
    case 0xC15A8C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:39 TYA
    case 0xC15A8E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:40 BRA @UNKNOWN6
    case 0xC15A8F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC15A91: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:43 LDA @VIRTUAL06
    case 0xC15A94: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:45 TAX
    case 0xC15A96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:46 LDA @VIRTUAL02
    case 0xC15A97: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:47 JSL GET_CHARACTER_ITEM
    case 0xC15A99: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/text/ccs/unknown_1D_11.asm:48 TAX
    case 0xC15A9D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_11.asm:49 LDA @VIRTUAL02
    case 0xC15A9E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:50 JSL UNKNOWN_C3EE14
    case 0xC15AA0: cpu.execute_instruction<0x22>(0xC3E9DA, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_11.asm:51 STORE_INT1632 @VIRTUAL06
    case 0xC15AA4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_11.asm:51 STORE_INT1632 @VIRTUAL06
    case 0xC15AA6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_11.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15AA8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_11.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15AAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_11.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15AAC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_11.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15AAE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_11.asm:53 JSR SET_WORKING_MEMORY
    case 0xC15AB0: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:54 LDA #NULL
    case 0xC15AB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_11.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC15AB3.
    case 0xC15AB5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_11.asm:56 END_C_FUNCTION
    case 0xC15AB6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_11.asm:56 END_C_FUNCTION
    case 0xC15AB7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_12.asm (source_named).
bool execute_text_ccs_unknown_1d_12_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_12.asm:3 BEGIN_C_FUNCTION
    case 0xC15B20: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC15B22: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC15B23: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC15B24: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC15B25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15B25.
    case 0xC15B27: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC15B28: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_12.asm:9 END_STACK_VARS
    case 0xC15B29: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:10 TXY
    case 0xC15B2A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:11 STY @LOCAL00
    case 0xC15B2B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:12 LDA #1
    case 0xC15B2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15B2D.
    case 0xC15B2F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:13 CLC
    case 0xC15B30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B31: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_12.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15B34: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_12.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15B36: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_12.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15B38: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_12.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15B3A: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:16 TYA
    case 0xC15B3C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15B3D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B3F: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15B42: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15B45: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B47: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:22 LDA #.LOWORD(CC_1D_12)
    case 0xC15B4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x005B20, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:22 LDA #.LOWORD(CC_1D_12)
    // Overlapping static entry reached from 0xC15B4A.
    case 0xC15B4C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:23 BRA @UNKNOWN7
    case 0xC15B4D: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15B4F: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:26 AND #$00FF
    case 0xC15B52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15B52.
    case 0xC15B54: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:27 TAX
    case 0xC15B55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:28 BEQ @UNKNOWN3
    case 0xC15B56: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:29 TXA
    case 0xC15B58: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:30 BRA @UNKNOWN4
    case 0xC15B59: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:32 JSR GET_WORKING_MEMORY
    case 0xC15B5B: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:33 LDA @VIRTUAL06
    case 0xC15B5E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:35 STA @VIRTUAL02
    case 0xC15B60: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:36 LDY @LOCAL00
    case 0xC15B62: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:37 BEQ @UNKNOWN5
    case 0xC15B64: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:38 TYA
    case 0xC15B66: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:39 BRA @UNKNOWN6
    case 0xC15B67: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:41 JSR GET_ARGUMENT_MEMORY
    case 0xC15B69: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:42 LDA @VIRTUAL06
    case 0xC15B6C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:44 TAX
    case 0xC15B6E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_12.asm:45 LDA @VIRTUAL02
    case 0xC15B6F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/unknown_1D_12.asm:46 JSR ESCARGO_EXPRESS_MOVE
    case 0xC15B71: cpu.execute_instruction<0x20>(0x00925E, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:47 LDA #NULL
    case 0xC15B74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_12.asm:47 LDA #NULL
    // Overlapping static entry reached from 0xC15B74.
    case 0xC15B76: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_12.asm:49 END_C_FUNCTION
    case 0xC15B77: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_12.asm:49 END_C_FUNCTION
    case 0xC15B78: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_13.asm (source_named).
bool execute_text_ccs_unknown_1d_13_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_13.asm:3 BEGIN_C_FUNCTION
    case 0xC15B79: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B7B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B7C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B7D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC15B7E.
    case 0xC15B80: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B81: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B82: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:13 LDA #1
    case 0xC15B83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15B80.
    case 0xC15B84: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15B83.
    case 0xC15B85: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:14 CLC
    case 0xC15B86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B87: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15B8A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15B8C: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15B8E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15B90: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:17 TXA
    case 0xC15B92: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15B93: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B95: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15B98: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15B9B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B9D: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:23 LDA #.LOWORD(CC_1D_13)
    case 0xC15BA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x005B79, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:23 LDA #.LOWORD(CC_1D_13)
    // Overlapping static entry reached from 0xC15BA0.
    case 0xC15BA2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:24 BRA @UNKNOWN6
    case 0xC15BA3: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15BA5: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:27 AND #$00FF
    case 0xC15BA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15BA8.
    case 0xC15BAA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:28 STA @LOCAL03
    case 0xC15BAB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:29 CPX #0
    case 0xC15BAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:29 CPX #0
    // Overlapping static entry reached from 0xC15BAD.
    case 0xC15BAF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:30 BEQ @UNKNOWN3
    case 0xC15BB0: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:31 STX @LOCAL02
    case 0xC15BB2: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:32 BRA @UNKNOWN4
    case 0xC15BB4: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:34 JSR GET_ARGUMENT_MEMORY
    case 0xC15BB6: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:35 LDA @VIRTUAL06
    case 0xC15BB9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:36 TAX
    case 0xC15BBB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:37 STX @LOCAL02
    case 0xC15BBC: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:39 LDA @LOCAL03
    case 0xC15BBE: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:40 BNE @UNKNOWN5
    case 0xC15BC0: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:41 JSR GET_WORKING_MEMORY
    case 0xC15BC2: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:42 LDA @VIRTUAL06
    case 0xC15BC5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:44 LDX @LOCAL02
    case 0xC15BC7: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:45 JSR UNKNOWN_C191F8
    case 0xC15BC9: cpu.execute_instruction<0x20>(0x0092EB, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:46 TAX
    case 0xC15BCC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:47 STX @LOCAL01
    case 0xC15BCD: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:48 TXA
    case 0xC15BCF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_13.asm:49 JSL UNKNOWN_C22351
    case 0xC15BD0: cpu.execute_instruction<0x22>(0xC221EF, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC15BD4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC15BD6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BD8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BDA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BDC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BDE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:52 JSR SET_ARGUMENT_MEMORY
    case 0xC15BE0: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:53 LDX @LOCAL01
    case 0xC15BE3: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:54 TXA
    case 0xC15BE5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC15BE6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC15BE8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BEA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BEC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BEE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BF0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_13.asm:57 JSR SET_WORKING_MEMORY
    case 0xC15BF2: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:58 LDA #NULL
    case 0xC15BF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_13.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC15BF5.
    case 0xC15BF7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_13.asm:60 END_C_FUNCTION
    case 0xC15BF8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_13.asm:60 END_C_FUNCTION
    case 0xC15BF9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_23.asm (source_named).
bool execute_text_ccs_unknown_1d_23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_23.asm:3 BEGIN_C_FUNCTION
    case 0xC17988: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1798A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1798B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1798C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1798D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1798D.
    case 0xC1798F: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC17990: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC17991: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_23.asm:10 TXA
    case 0xC17992: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_23.asm:11 BEQ @UNKNOWN0
    case 0xC17993: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_23.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC17995: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC17997: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:13 BRA @UNKNOWN1
    case 0xC17999: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC1799B: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:17 LDA @VIRTUAL06
    case 0xC1799E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_23.asm:19 CLC
    case 0xC179A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_23.asm:20 ADC #item::type
    case 0xC179A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:20 ADC #item::type
    // Overlapping static entry reached from 0xC179A9.
    case 0xC179AB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:21 TAX
    case 0xC179AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_23.asm:22 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC179AD: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/text/ccs/unknown_1D_23.asm:23 AND #$00FF
    case 0xC179B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC179B1.
    case 0xC179B3: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:24 AND #$000C
    case 0xC179B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:24 AND #$000C
    // Overlapping static entry reached from 0xC179B4.
    case 0xC179B6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:25 BEQ @UNKNOWN2
    case 0xC179B7: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:26 CMP #$04
    case 0xC179B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:26 CMP #$04
    // Overlapping static entry reached from 0xC179B9.
    case 0xC179BB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:27 BEQ @UNKNOWN3
    case 0xC179BC: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:28 CMP #$08
    case 0xC179BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC179BE.
    case 0xC179C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:29 BEQ @UNKNOWN3
    case 0xC179C1: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:30 CMP #$0C
    case 0xC179C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:30 CMP #$0C
    // Overlapping static entry reached from 0xC179C3.
    case 0xC179C5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:31 BEQ @UNKNOWN3
    case 0xC179C6: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:32 BRA @UNKNOWN4
    case 0xC179C8: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:34 LDA #1
    case 0xC179CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:34 LDA #1
    // Overlapping static entry reached from 0xC179CA.
    case 0xC179CC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:35 BRA @UNKNOWN5
    case 0xC179CD: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:37 LDA #2
    case 0xC179CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:37 LDA #2
    // Overlapping static entry reached from 0xC179CF.
    case 0xC179D1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:38 BRA @UNKNOWN5
    case 0xC179D2: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:40 LDA #0
    case 0xC179D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:40 LDA #0
    // Overlapping static entry reached from 0xC179D4.
    case 0xC179D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_23.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC179D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC179D9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC179DB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC179DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC179DF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC179E1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_23.asm:44 JSR SET_WORKING_MEMORY
    case 0xC179E3: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:45 LDA #NULL
    case 0xC179E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_23.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC179E6.
    case 0xC179E8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_23.asm:46 END_C_FUNCTION
    case 0xC179E9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_23.asm:46 END_C_FUNCTION
    case 0xC179EA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1D_24.asm (source_named).
bool execute_text_ccs_unknown_1d_24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_24.asm:3 BEGIN_C_FUNCTION
    case 0xC174F4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC174F6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC174F7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC174F8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC174F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC174F9.
    case 0xC174FB: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC174FC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_24.asm:11 END_STACK_VARS
    case 0xC174FD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_24.asm:12 STX @LOCAL02
    case 0xC174FE: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC174FB.
    case 0xC174FF: cpu.execute_instruction<0x14>(0x0000A0, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC17500: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006A, 2); else cpu.execute_instruction<0xA0>(0x009B6A, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC174FF.
    case 0xC17501: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_24.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC17500.
    case 0xC17502: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1D_24.asm:14 STY @LOCAL01
    case 0xC17503: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/unknown_1D_24.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17505: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/unknown_1D_24.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17508: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/unknown_1D_24.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1750A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1750D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_24.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1750F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_24.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17511: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17513: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17515: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:17 JSR SET_WORKING_MEMORY
    case 0xC17517: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:18 LDX @LOCAL02
    case 0xC1751A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:19 CPX #2
    case 0xC1751C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:19 CPX #2
    // Overlapping static entry reached from 0xC1751C.
    case 0xC1751E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:20 BNE @UNKNOWN0
    case 0xC1751F: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC17521: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC17521.
    case 0xC17523: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC17524: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC17526: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC17526.
    case 0xC17528: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC17529: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/unknown_1D_24.asm:22 LDY @LOCAL01
    case 0xC1752B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/ccs/unknown_1D_24.asm:23 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1752D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/ccs/unknown_1D_24.asm:23 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1752F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_24.asm:23 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC17532: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/ccs/unknown_1D_24.asm:23 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC17534: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:25 LDA #NULL
    case 0xC17537: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1D_24.asm:25 LDA #NULL
    // Overlapping static entry reached from 0xC17537.
    case 0xC17539: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_24.asm:26 END_C_FUNCTION
    case 0xC1753A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_24.asm:26 END_C_FUNCTION
    case 0xC1753B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_40.asm (source_named).
bool execute_text_ccs_unknown_1f_40_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/unknown_1F_40.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1753C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:4 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1753E: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:5 BNE @UNKNOWN0
    case 0xC17541: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:6 TXA
    case 0xC17543: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_40.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC17544: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:8 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17546: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:9 STA CC_ARGUMENT_STORAGE,X
    case 0xC17549: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC1754C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:11 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1754E: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:12 LDA #.LOWORD(CC_1F_40)
    case 0xC17551: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00753C, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:12 LDA #.LOWORD(CC_1F_40)
    // Overlapping static entry reached from 0xC17551.
    case 0xC17553: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:13 BRA @UNKNOWN1
    case 0xC17554: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:13 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC17553.
    case 0xC17555: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    case 0xC17556: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC17555.
    case 0xC17557: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC17556.
    case 0xC17558: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/unknown_1F_40.asm:17 RTS
    case 0xC17559: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_60.asm (source_named).
bool execute_text_ccs_unknown_1f_60_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/unknown_1F_60.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1574E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/unknown_1F_60.asm:4 TXA
    case 0xC15750: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_60.asm:5 JSR UNKNOWN_C100FE
    case 0xC15751: cpu.execute_instruction<0x20>(0x000303, 3); return true;
    // src/text/ccs/unknown_1F_60.asm:6 LDA #NULL
    case 0xC15754: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_60.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC15754.
    case 0xC15756: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/unknown_1F_60.asm:7 RTS
    case 0xC15757: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_E7.asm (source_named).
bool execute_text_ccs_unknown_1f_e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:3 BEGIN_C_FUNCTION
    case 0xC16E71: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16E73: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16E74: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16E75: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16E76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16E76.
    case 0xC16E78: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16E79: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:9 END_STACK_VARS
    case 0xC16E7A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E7.asm:10 TXA
    case 0xC16E7B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E7.asm:11 STA @LOCAL00
    case 0xC16E7C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E7E: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:13 BNE @UNKNOWN0
    case 0xC16E81: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:14 LDA @LOCAL00
    case 0xC16E83: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16E85: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E87: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16E8A: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16E8D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E8F: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:20 LDA #.LOWORD(CC_1F_E7)
    case 0xC16E92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000071, 2); else cpu.execute_instruction<0xA9>(0x006E71, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:20 LDA #.LOWORD(CC_1F_E7)
    // Overlapping static entry reached from 0xC16E92.
    case 0xC16E94: cpu.execute_instruction<0x6E>(0x001B80, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:21 BRA @UNKNOWN1
    case 0xC16E95: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16E97: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:24 LDY #8
    case 0xC16E99: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:25 LDA @LOCAL00
    case 0xC16E9B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16E99.
    case 0xC16E9C: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:26 JSL ASL16_ENTRY2
    case 0xC16E9D: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/unknown_1F_E7.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16E9C.
    case 0xC16E9F: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:27 STA @VIRTUAL02
    case 0xC16EA1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16EA3: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:29 AND #$00FF
    case 0xC16EA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16EA6.
    case 0xC16EA8: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:30 ORA @VIRTUAL02
    case 0xC16EA9: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_E7.asm:31 JSL UNKNOWN_C46579
    case 0xC16EAB: cpu.execute_instruction<0x22>(0xC442E7, 4); return true;
    // src/text/ccs/unknown_1F_E7.asm:32 LDA #NULL
    case 0xC16EAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_E7.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16EAF.
    case 0xC16EB1: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:34 END_C_FUNCTION
    case 0xC16EB2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1F_E7.asm:34 END_C_FUNCTION
    case 0xC16EB3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_E9.asm (source_named).
bool execute_text_ccs_unknown_1f_e9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:3 BEGIN_C_FUNCTION
    case 0xC16EBF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16EC1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16EC2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16EC3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16EC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16EC4.
    case 0xC16EC6: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16EC7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:9 END_STACK_VARS
    case 0xC16EC8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E9.asm:10 TXA
    case 0xC16EC9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E9.asm:11 STA @LOCAL00
    case 0xC16ECA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:11 STA @LOCAL00
    // Overlapping static entry reached from 0xC16F29.
    case 0xC16ECB: cpu.execute_instruction<0x0E>(0x007EAD, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16ECC: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC16ECB.
    case 0xC16ECE: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_E9.asm:13 BNE @UNKNOWN0
    case 0xC16ECF: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:14 LDA @LOCAL00
    case 0xC16ED1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16ED3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16ED5: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16ED8: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16EDB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16EDD: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:20 LDA #.LOWORD(CC_1F_E9)
    case 0xC16EE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x006EBF, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:20 LDA #.LOWORD(CC_1F_E9)
    // Overlapping static entry reached from 0xC16EE0.
    case 0xC16EE2: cpu.execute_instruction<0x6E>(0x001B80, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:21 BRA @UNKNOWN1
    case 0xC16EE3: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16EE5: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:24 LDY #8
    case 0xC16EE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:25 LDA @LOCAL00
    case 0xC16EE9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16EE7.
    case 0xC16EEA: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:26 JSL ASL16_ENTRY2
    case 0xC16EEB: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/unknown_1F_E9.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16EEA.
    case 0xC16EED: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:27 STA @VIRTUAL02
    case 0xC16EEF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16EF1: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:29 AND #$00FF
    case 0xC16EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16EF4.
    case 0xC16EF6: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:30 ORA @VIRTUAL02
    case 0xC16EF7: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:31 JSL UNKNOWN_C465FB
    case 0xC16EF9: cpu.execute_instruction<0x22>(0xC4436D, 4); return true;
    // src/text/ccs/unknown_1F_E9.asm:31 JSL UNKNOWN_C465FB
    // Overlapping static entry reached from 0xC16F50.
    case 0xC16EFB: cpu.execute_instruction<0x43>(0x0000C4, 2); return true;
    // src/text/ccs/unknown_1F_E9.asm:32 LDA #NULL
    case 0xC16EFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_E9.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16EFD.
    case 0xC16EFF: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:34 END_C_FUNCTION
    case 0xC16F00: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1F_E9.asm:34 END_C_FUNCTION
    case 0xC16F01: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_EA.asm (source_named).
bool execute_text_ccs_unknown_1f_ea_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:3 BEGIN_C_FUNCTION
    case 0xC16F02: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16F04: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16F05: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16F06: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16F07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16F07.
    case 0xC16F09: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16F0A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16F0B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EA.asm:10 TXA
    case 0xC16F0C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EA.asm:11 STA @LOCAL00
    case 0xC16F0D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F0F: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:13 BNE @UNKNOWN0
    case 0xC16F12: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:14 LDA @LOCAL00
    case 0xC16F14: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16F16: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F18: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16F1B: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16F1E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F20: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:20 LDA #.LOWORD(CC_1F_EA)
    case 0xC16F23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x006F02, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:20 LDA #.LOWORD(CC_1F_EA)
    // Overlapping static entry reached from 0xC16F23.
    case 0xC16F25: cpu.execute_instruction<0x6F>(0xE21B80, 4); return true;
    // src/text/ccs/unknown_1F_EA.asm:21 BRA @UNKNOWN1
    case 0xC16F26: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16F28: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:23 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16F25.
    case 0xC16F29: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:24 LDY #8
    case 0xC16F2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:24 LDY #8
    // Overlapping static entry reached from 0xC16F29.
    case 0xC16F2B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EA.asm:25 LDA @LOCAL00
    case 0xC16F2C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16F2A.
    case 0xC16F2D: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:26 JSL ASL16_ENTRY2
    case 0xC16F2E: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/unknown_1F_EA.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16F2D.
    case 0xC16F30: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:27 STA @VIRTUAL02
    case 0xC16F32: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16F34: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:29 AND #$00FF
    case 0xC16F37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16F37.
    case 0xC16F39: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:30 ORA @VIRTUAL02
    case 0xC16F3A: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_EA.asm:31 JSL UNKNOWN_C46616
    case 0xC16F3C: cpu.execute_instruction<0x22>(0xC44388, 4); return true;
    // src/text/ccs/unknown_1F_EA.asm:32 LDA #NULL
    case 0xC16F40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_EA.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16F40.
    case 0xC16F42: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:34 END_C_FUNCTION
    case 0xC16F43: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:34 END_C_FUNCTION
    case 0xC16F44: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/unknown_1F_EF.asm (source_named).
bool execute_text_ccs_unknown_1f_ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:3 BEGIN_C_FUNCTION
    case 0xC17024: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC17026: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC17027: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC17028: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC17029: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17029.
    case 0xC1702B: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC1702C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:9 END_STACK_VARS
    case 0xC1702D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EF.asm:10 TXA
    case 0xC1702E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EF.asm:11 STA @LOCAL00
    case 0xC1702F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17031: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:13 BNE @UNKNOWN0
    case 0xC17034: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:14 LDA @LOCAL00
    case 0xC17036: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC17038: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1703A: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC17099.
    case 0xC1703B: cpu.execute_instruction<0x7E>(0x009D9A, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC1703D: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:17 STA CC_ARGUMENT_STORAGE,X
    // Overlapping static entry reached from 0xC1703B.
    case 0xC1703E: cpu.execute_instruction<0x6E>(0x00C29A, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC17040: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:18 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1703E.
    case 0xC17041: cpu.execute_instruction<0x20>(0x007EEE, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17042: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC17041.
    case 0xC17044: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EF.asm:20 LDA #.LOWORD(CC_1F_EF)
    case 0xC17045: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x007024, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:20 LDA #.LOWORD(CC_1F_EF)
    // Overlapping static entry reached from 0xC17045.
    case 0xC17047: cpu.execute_instruction<0x70>(0x000080, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:21 BRA @UNKNOWN1
    case 0xC17048: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC17047.
    case 0xC17049: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/ccs/unknown_1F_EF.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC1704A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:24 LDY #8
    case 0xC1704C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:25 LDA @LOCAL00
    case 0xC1704E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC1704C.
    case 0xC1704F: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:26 JSL ASL16_ENTRY2
    case 0xC17050: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/unknown_1F_EF.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1704F.
    case 0xC17052: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:27 STA @VIRTUAL02
    case 0xC17054: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC17056: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:29 AND #$00FF
    case 0xC17059: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC17059.
    case 0xC1705B: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:30 ORA @VIRTUAL02
    case 0xC1705C: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/unknown_1F_EF.asm:31 JSL UNKNOWN_C466A8
    case 0xC1705E: cpu.execute_instruction<0x22>(0xC4441E, 4); return true;
    // src/text/ccs/unknown_1F_EF.asm:32 LDA #NULL
    case 0xC17062: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/unknown_1F_EF.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC17062.
    case 0xC17064: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:34 END_C_FUNCTION
    case 0xC17065: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1F_EF.asm:34 END_C_FUNCTION
    case 0xC17066: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/wallet_decrease.asm (source_named).
bool execute_text_ccs_wallet_decrease_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/wallet_decrease.asm:3 BEGIN_C_FUNCTION
    case 0xC14D4A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D4C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D4D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D4E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14D4F.
    case 0xC14D51: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D52: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D53: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/wallet_decrease.asm:11 TXA
    case 0xC14D54: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/wallet_decrease.asm:12 STA @LOCAL01
    case 0xC14D55: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/wallet_decrease.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D57: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/wallet_decrease.asm:14 BNE @UNKNOWN0
    case 0xC14D5A: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/wallet_decrease.asm:15 LDA @LOCAL01
    case 0xC14D5C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/wallet_decrease.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC14D5E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/wallet_decrease.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D60: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/wallet_decrease.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14D63: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/wallet_decrease.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC14D66: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/wallet_decrease.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D68: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/wallet_decrease.asm:21 LDA #.LOWORD(CC_1D_09)
    case 0xC14D6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x004D4A, 3); return true;
    // src/text/ccs/wallet_decrease.asm:21 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC14D6B.
    case 0xC14D6D: cpu.execute_instruction<0x4D>(0x004480, 3); return true;
    // src/text/ccs/wallet_decrease.asm:22 BRA @UNKNOWN4
    case 0xC14D6E: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/wallet_decrease.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC14D70: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/wallet_decrease.asm:25 LDY #8
    case 0xC14D72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/wallet_decrease.asm:26 LDA @LOCAL01
    case 0xC14D74: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/wallet_decrease.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC14D72.
    case 0xC14D75: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/wallet_decrease.asm:27 JSL ASL16_ENTRY2
    case 0xC14D76: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/wallet_decrease.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC14D75.
    case 0xC14D77: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/text/ccs/wallet_decrease.asm:28 STA @VIRTUAL02
    case 0xC14D7A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/wallet_decrease.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC14D7C: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/wallet_decrease.asm:30 AND #$00FF
    case 0xC14D7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/wallet_decrease.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC14D7F.
    case 0xC14D81: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/wallet_decrease.asm:31 ORA @VIRTUAL02
    case 0xC14D82: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/wallet_decrease.asm:32 BEQ @UNKNOWN1
    case 0xC14D84: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14D86: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14D88: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/wallet_decrease.asm:34 BRA @UNKNOWN2
    case 0xC14D8A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/wallet_decrease.asm:36 JSR GET_ARGUMENT_MEMORY
    case 0xC14D8C: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D8F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D91: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D93: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D95: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/wallet_decrease.asm:39 JSL DECREASE_WALLET_BALANCE
    case 0xC14D97: cpu.execute_instruction<0x22>(0xC22111, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC14D9B.
    case 0xC14D9D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D9E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14DA0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14DA2: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14DA4: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DA6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DA8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DAA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DAC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/wallet_decrease.asm:42 JSR SET_WORKING_MEMORY
    case 0xC14DAE: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/wallet_decrease.asm:43 LDA #NULL
    case 0xC14DB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/wallet_decrease.asm:43 LDA #NULL
    // Overlapping static entry reached from 0xC14DB1.
    case 0xC14DB3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/wallet_decrease.asm:45 END_C_FUNCTION
    case 0xC14DB4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/wallet_decrease.asm:45 END_C_FUNCTION
    case 0xC14DB5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/wallet_increase.asm (source_named).
bool execute_text_ccs_wallet_increase_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/wallet_increase.asm:3 BEGIN_C_FUNCTION
    case 0xC14CE9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC14CEB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC14CEC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC14CED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC14CEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14CEE.
    case 0xC14CF0: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC14CF1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC14CF2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/wallet_increase.asm:11 TXA
    case 0xC14CF3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/wallet_increase.asm:12 STA @LOCAL01
    case 0xC14CF4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/wallet_increase.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14CF6: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/wallet_increase.asm:14 BNE @UNKNOWN0
    case 0xC14CF9: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/wallet_increase.asm:15 LDA @LOCAL01
    case 0xC14CFB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/wallet_increase.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC14CFD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/wallet_increase.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14CFF: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/wallet_increase.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14D02: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/wallet_increase.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC14D05: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/wallet_increase.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D07: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/wallet_increase.asm:21 LDA #.LOWORD(CC_1D_08)
    case 0xC14D0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x004CE9, 3); return true;
    // src/text/ccs/wallet_increase.asm:21 LDA #.LOWORD(CC_1D_08)
    // Overlapping static entry reached from 0xC14D0A.
    case 0xC14D0C: cpu.execute_instruction<0x4C>(0x003980, 3); return true;
    // src/text/ccs/wallet_increase.asm:22 BRA @UNKNOWN3
    case 0xC14D0D: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/text/ccs/wallet_increase.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC14D0F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/wallet_increase.asm:25 LDY #8
    case 0xC14D11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/wallet_increase.asm:26 LDA @LOCAL01
    case 0xC14D13: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/wallet_increase.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC14D11.
    case 0xC14D14: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/wallet_increase.asm:27 JSL ASL16_ENTRY2
    case 0xC14D15: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/wallet_increase.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC14D14.
    case 0xC14D16: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/text/ccs/wallet_increase.asm:28 STA @VIRTUAL02
    case 0xC14D19: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/wallet_increase.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC14D1B: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/wallet_increase.asm:30 AND #$00FF
    case 0xC14D1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/wallet_increase.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC14D1E.
    case 0xC14D20: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/wallet_increase.asm:31 ORA @VIRTUAL02
    case 0xC14D21: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/wallet_increase.asm:32 BEQ @UNKNOWN1
    case 0xC14D23: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/wallet_increase.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14D25: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/wallet_increase.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14D27: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/wallet_increase.asm:34 BRA @UNKNOWN2
    case 0xC14D29: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/wallet_increase.asm:36 JSR GET_ARGUMENT_MEMORY
    case 0xC14D2B: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_increase.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D2E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_increase.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D30: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_increase.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D32: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_increase.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D34: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/wallet_increase.asm:39 JSL INCREASE_WALLET_BALANCE
    case 0xC14D36: cpu.execute_instruction<0x22>(0xC220B3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_increase.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D3A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_increase.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D3C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_increase.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D3E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_increase.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D40: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/wallet_increase.asm:41 JSR SET_WORKING_MEMORY
    case 0xC14D42: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/wallet_increase.asm:42 LDA #NULL
    case 0xC14D45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/wallet_increase.asm:42 LDA #NULL
    // Overlapping static entry reached from 0xC14D45.
    case 0xC14D47: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/wallet_increase.asm:44 END_C_FUNCTION
    case 0xC14D48: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/wallet_increase.asm:44 END_C_FUNCTION
    case 0xC14D49: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/change_current_window_font.asm (source_named).
bool execute_text_change_current_window_font_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/change_current_window_font.asm:3 BEGIN_C_FUNCTION
    case 0xC11566: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC11568: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC11569: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC1156A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC1156B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1156B.
    case 0xC1156D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC1156E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC1156F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/change_current_window_font.asm:8 STA @LOCAL00
    case 0xC11570: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC1156D.
    case 0xC11571: cpu.execute_instruction<0x0E>(0x0096AD, 3); return true;
    // src/text/change_current_window_font.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xC11572: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/change_current_window_font.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11571.
    case 0xC11574: cpu.execute_instruction<0x8C>(0x00FFC9, 3); return true;
    // src/text/change_current_window_font.asm:10 CMP #$FFFF
    case 0xC11575: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/change_current_window_font.asm:10 CMP #$FFFF
    // Overlapping static entry reached from 0xC11575.
    case 0xC11577: cpu.execute_instruction<0xFF>(0xA528F0, 4); return true;
    // src/text/change_current_window_font.asm:11 BEQ @RETURN
    case 0xC11578: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/text/change_current_window_font.asm:12 LDA @LOCAL00
    case 0xC1157A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:12 LDA @LOCAL00
    // Overlapping static entry reached from 0xC11577.
    case 0xC1157B: cpu.execute_instruction<0x0E>(0x0030C9, 3); return true;
    // src/text/change_current_window_font.asm:13 CMP #WINDOW::UNKNOWN30
    case 0xC1157C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/text/change_current_window_font.asm:13 CMP #WINDOW::UNKNOWN30
    // Overlapping static entry reached from 0xC1157C.
    case 0xC1157E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/change_current_window_font.asm:14 BNE @LOAD_MR_SATURN_FONT_ID
    case 0xC1157F: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/text/change_current_window_font.asm:15 LDA #0
    case 0xC11581: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/change_current_window_font.asm:15 LDA #0
    // Overlapping static entry reached from 0xC11581.
    case 0xC11583: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/change_current_window_font.asm:16 STA @LOCAL00
    case 0xC11584: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:17 BRA @SKIP_MR_SATURN_FONT_ID
    case 0xC11586: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/change_current_window_font.asm:19 LDA #1
    case 0xC11588: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/change_current_window_font.asm:19 LDA #1
    // Overlapping static entry reached from 0xC11588.
    case 0xC1158A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/change_current_window_font.asm:20 STA @LOCAL00
    case 0xC1158B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:22 LDA CURRENT_FOCUS_WINDOW
    case 0xC1158D: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/change_current_window_font.asm:23 ASL
    case 0xC11590: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/change_current_window_font.asm:24 TAX
    case 0xC11591: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/change_current_window_font.asm:25 LDA OPEN_WINDOW_TABLE,X
    case 0xC11592: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/change_current_window_font.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC11595: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/change_current_window_font.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11595.
    case 0xC11597: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/change_current_window_font.asm:27 JSL MULT168
    case 0xC11598: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/change_current_window_font.asm:28 TAX
    case 0xC1159C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/change_current_window_font.asm:29 LDA @LOCAL00
    case 0xC1159D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:30 STA WINDOW_STATS+window_stats::font,X
    case 0xC1159F: cpu.execute_instruction<0x9D>(0x0089D7, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/change_current_window_font.asm:32 END_C_FUNCTION
    case 0xC115A2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/change_current_window_font.asm:32 END_C_FUNCTION
    case 0xC115A3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
