// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/audio/change_music.asm (source_named).
bool execute_audio_change_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/audio/change_music.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4FBBD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4FBBF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4FBC0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4FBC1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4FBC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4FBC2.
    case 0xC4FBC4: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4FBC5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4FBC6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/audio/change_music.asm:10 TAX
    case 0xC4FBC7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:11 STX @LOCAL02
    case 0xC4FBC8: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/audio/change_music.asm:12 CPX CURRENT_MUSIC_TRACK
    case 0xC4FBCA: cpu.execute_instruction<0xEC>(0x00B53B, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/audio/change_music.asm:13 BEQL @RETURN
    case 0xC4FBCD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/audio/change_music.asm:13 BEQL @RETURN
    case 0xC4FBCF: cpu.execute_instruction<0x4C>(0x00FD16, 3); return true;
    // src/audio/change_music.asm:14 LDA DISABLED_TRANSITIONS
    case 0xC4FBD2: cpu.execute_instruction<0xAD>(0x00B4B6, 3); return true;
    // src/audio/change_music.asm:15 BNE @UNKNOWN1
    case 0xC4FBD5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/audio/change_music.asm:16 JSL PLAY_SOUND_UNKNOWN0
    case 0xC4FBD7: cpu.execute_instruction<0x22>(0xC0AC01, 4); return true;
    // src/audio/change_music.asm:18 LDX @LOCAL02
    case 0xC4FBDB: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/audio/change_music.asm:20 CPX #MUSIC::SOUNDSTONE_RECORDING_GIANT_STEP
    case 0xC4FBDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A0, 2); else cpu.execute_instruction<0xE0>(0x0000A0, 3); return true;
    // src/audio/change_music.asm:20 CPX #MUSIC::SOUNDSTONE_RECORDING_GIANT_STEP
    // Overlapping static entry reached from 0xC4FBDD.
    case 0xC4FBDF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/audio/change_music.asm:21 BCC @STOP_MUSIC
    case 0xC4FBE0: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/audio/change_music.asm:22 CPX #MUSIC::SOUNDSTONE_RECORDING_FIRE_SPRING
    case 0xC4FBE2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A7, 2); else cpu.execute_instruction<0xE0>(0x0000A7, 3); return true;
    // src/audio/change_music.asm:22 CPX #MUSIC::SOUNDSTONE_RECORDING_FIRE_SPRING
    // Overlapping static entry reached from 0xC4FBE2.
    case 0xC4FBE4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/audio/change_music.asm:23 BLTEQ @DONT_STOP_MUSIC
    case 0xC4FBE5: cpu.execute_instruction<0x90>(0x00000D, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/audio/change_music.asm:23 BLTEQ @DONT_STOP_MUSIC
    case 0xC4FBE7: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/audio/change_music.asm:25 LDA #$0001
    case 0xC4FBE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/audio/change_music.asm:25 LDA #$0001
    // Overlapping static entry reached from 0xC4FBE9.
    case 0xC4FBEB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/audio/change_music.asm:26 JSL UNKNOWN_C0AC0C
    case 0xC4FBEC: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/audio/change_music.asm:27 JSL STOP_MUSIC
    case 0xC4FBF0: cpu.execute_instruction<0x22>(0xC0ABC6, 4); return true;
    // src/audio/change_music.asm:29 LDX @LOCAL02
    case 0xC4FBF4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/audio/change_music.asm:30 STX CURRENT_MUSIC_TRACK
    case 0xC4FBF6: cpu.execute_instruction<0x8E>(0x00B53B, 3); return true;
    // src/audio/change_music.asm:31 TXY
    case 0xC4FBF9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/audio/change_music.asm:32 DEY
    case 0xC4FBFA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/audio/change_music.asm:33 STY @LOCAL01
    case 0xC4FBFB: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/audio/change_music.asm:34 TYA
    case 0xC4FBFD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4FBFE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4FC00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4FC01: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:36 TAX
    case 0xC4FC03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:37 LDA f:MUSIC_DATASET_TABLE,X ;pack_table_entry::primary_sample_pack
    case 0xC4FC04: cpu.execute_instruction<0xBF>(0xC4F70A, 4); return true;
    // src/audio/change_music.asm:38 AND #$00FF
    case 0xC4FC08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC4FC08.
    case 0xC4FC0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/audio/change_music.asm:39 STA @LOCAL00
    case 0xC4FC0B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/audio/change_music.asm:40 CMP CURRENT_PRIMARY_SAMPLE_PACK
    case 0xC4FC0D: cpu.execute_instruction<0xCD>(0x00B53D, 3); return true;
    // src/audio/change_music.asm:41 BEQ @SKIP_DATA_LOAD_1
    case 0xC4FC10: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/audio/change_music.asm:42 CMP #$00FF
    case 0xC4FC12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:42 CMP #$00FF
    // Overlapping static entry reached from 0xC4FC12.
    case 0xC4FC14: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/audio/change_music.asm:43 BEQ @SKIP_DATA_LOAD_1
    case 0xC4FC15: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/audio/change_music.asm:44 STA CURRENT_PRIMARY_SAMPLE_PACK
    case 0xC4FC17: cpu.execute_instruction<0x8D>(0x00B53D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FC1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x00F947, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4FC1A.
    case 0xC4FC1C: cpu.execute_instruction<0xF9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FC1D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FC1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4FC1F.
    case 0xC4FC21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FC22: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/audio/change_music.asm:46 LDA @LOCAL00
    case 0xC4FC24: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FC26: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FC28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FC29: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:48 STA @VIRTUAL02
    case 0xC4FC2B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/audio/change_music.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FC2D: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/audio/change_music.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FC2F: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/audio/change_music.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FC31: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/audio/change_music.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FC33: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/audio/change_music.asm:50 CLC
    case 0xC4FC35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:51 ADC @VIRTUAL0A
    case 0xC4FC36: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/audio/change_music.asm:52 STA @VIRTUAL0A
    case 0xC4FC38: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/audio/change_music.asm:53 LDA [@VIRTUAL0A] ;music_pack_pointer::bank
    case 0xC4FC3A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/audio/change_music.asm:54 AND #$00FF
    case 0xC4FC3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC4FC3C.
    case 0xC4FC3E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/audio/change_music.asm:55 JSR GET_AUDIO_BANK
    case 0xC4FC3F: cpu.execute_instruction<0x20>(0x00FB42, 3); return true;
    // src/audio/change_music.asm:56 TAX
    case 0xC4FC42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:57 LDA @VIRTUAL02
    case 0xC4FC43: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/audio/change_music.asm:58 INC
    case 0xC4FC45: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/change_music.asm:59 CLC
    case 0xC4FC46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:60 ADC @VIRTUAL06
    case 0xC4FC47: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/audio/change_music.asm:61 STA @VIRTUAL06
    case 0xC4FC49: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/audio/change_music.asm:62 LDA [@VIRTUAL06] ;music_pack_pointer::addr
    case 0xC4FC4B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/audio/change_music.asm:63 AND SEQUENCE_PACK_MASK
    case 0xC4FC4D: cpu.execute_instruction<0x2D>(0x00B547, 3); return true;
    // src/audio/change_music.asm:64 JSL LOAD_SPC700_DATA
    case 0xC4FC50: cpu.execute_instruction<0x22>(0xC0AB06, 4); return true;
    // src/audio/change_music.asm:66 LDY @LOCAL01
    case 0xC4FC54: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/audio/change_music.asm:67 TYA
    case 0xC4FC56: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4FC57: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4FC59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4FC5A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:69 TAX
    case 0xC4FC5C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:70 INX
    case 0xC4FC5D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/audio/change_music.asm:71 LDA f:MUSIC_DATASET_TABLE,X ;pack_table_entry::secondary_sample_pack
    case 0xC4FC5E: cpu.execute_instruction<0xBF>(0xC4F70A, 4); return true;
    // src/audio/change_music.asm:72 AND #$00FF
    case 0xC4FC62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC4FC62.
    case 0xC4FC64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/audio/change_music.asm:73 STA @LOCAL00
    case 0xC4FC65: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/audio/change_music.asm:74 CMP CURRENT_SECONDARY_SAMPLE_PACK
    case 0xC4FC67: cpu.execute_instruction<0xCD>(0x00B53F, 3); return true;
    // src/audio/change_music.asm:75 BEQ @SKIP_DATA_LOAD_2
    case 0xC4FC6A: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/audio/change_music.asm:76 CMP #$00FF
    case 0xC4FC6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:76 CMP #$00FF
    // Overlapping static entry reached from 0xC4FC6C.
    case 0xC4FC6E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/audio/change_music.asm:77 BEQ @SKIP_DATA_LOAD_2
    case 0xC4FC6F: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/audio/change_music.asm:78 CMP UNKNOWN_7EB543
    case 0xC4FC71: cpu.execute_instruction<0xCD>(0x00B543, 3); return true;
    // src/audio/change_music.asm:79 BEQ @SKIP_DATA_LOAD_2
    case 0xC4FC74: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/audio/change_music.asm:80 STA CURRENT_SECONDARY_SAMPLE_PACK
    case 0xC4FC76: cpu.execute_instruction<0x8D>(0x00B53F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FC79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x00F947, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4FC79.
    case 0xC4FC7B: cpu.execute_instruction<0xF9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FC7C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FC7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4FC7E.
    case 0xC4FC80: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FC81: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/audio/change_music.asm:82 LDA @LOCAL00
    case 0xC4FC83: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:83 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FC85: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:83 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FC87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:83 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FC88: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:84 STA @VIRTUAL02
    case 0xC4FC8A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/audio/change_music.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FC8C: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/audio/change_music.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FC8E: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/audio/change_music.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FC90: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/audio/change_music.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FC92: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/audio/change_music.asm:86 CLC
    case 0xC4FC94: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:87 ADC @VIRTUAL0A
    case 0xC4FC95: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/audio/change_music.asm:88 STA @VIRTUAL0A
    case 0xC4FC97: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/audio/change_music.asm:89 LDA [@VIRTUAL0A] ;music_pack_pointer::bank
    case 0xC4FC99: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/audio/change_music.asm:90 AND #$00FF
    case 0xC4FC9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC4FC9B.
    case 0xC4FC9D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/audio/change_music.asm:91 JSR GET_AUDIO_BANK
    case 0xC4FC9E: cpu.execute_instruction<0x20>(0x00FB42, 3); return true;
    // src/audio/change_music.asm:92 TAX
    case 0xC4FCA1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:93 LDA @VIRTUAL02
    case 0xC4FCA2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/audio/change_music.asm:94 INC
    case 0xC4FCA4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/change_music.asm:95 CLC
    case 0xC4FCA5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:96 ADC @VIRTUAL06
    case 0xC4FCA6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/audio/change_music.asm:97 STA @VIRTUAL06
    case 0xC4FCA8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/audio/change_music.asm:98 LDA [@VIRTUAL06] ;music_pack_pointer::addr
    case 0xC4FCAA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/audio/change_music.asm:99 AND SEQUENCE_PACK_MASK
    case 0xC4FCAC: cpu.execute_instruction<0x2D>(0x00B547, 3); return true;
    // src/audio/change_music.asm:100 JSL LOAD_SPC700_DATA
    case 0xC4FCAF: cpu.execute_instruction<0x22>(0xC0AB06, 4); return true;
    // src/audio/change_music.asm:102 LDY @LOCAL01
    case 0xC4FCB3: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/audio/change_music.asm:103 TYA
    case 0xC4FCB5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4FCB6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4FCB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4FCB9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:105 TAX
    case 0xC4FCBB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:106 INX
    case 0xC4FCBC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/audio/change_music.asm:107 INX
    case 0xC4FCBD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/audio/change_music.asm:108 LDA f:MUSIC_DATASET_TABLE,X ;pack_table_entry::sequence_pack
    case 0xC4FCBE: cpu.execute_instruction<0xBF>(0xC4F70A, 4); return true;
    // src/audio/change_music.asm:109 AND #$00FF
    case 0xC4FCC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:109 AND #$00FF
    // Overlapping static entry reached from 0xC4FCC2.
    case 0xC4FCC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/audio/change_music.asm:110 STA @LOCAL00
    case 0xC4FCC5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/audio/change_music.asm:111 CMP CURRENT_SEQUENCE_PACK
    case 0xC4FCC7: cpu.execute_instruction<0xCD>(0x00B541, 3); return true;
    // src/audio/change_music.asm:112 BEQ @SKIP_DATA_LOAD_3
    case 0xC4FCCA: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/audio/change_music.asm:113 CMP #$00FF
    case 0xC4FCCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:113 CMP #$00FF
    // Overlapping static entry reached from 0xC4FCCC.
    case 0xC4FCCE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/audio/change_music.asm:114 BEQ @SKIP_DATA_LOAD_3
    case 0xC4FCCF: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/audio/change_music.asm:115 STA CURRENT_SEQUENCE_PACK
    case 0xC4FCD1: cpu.execute_instruction<0x8D>(0x00B541, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FCD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x00F947, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4FCD4.
    case 0xC4FCD6: cpu.execute_instruction<0xF9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FCD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FCD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4FCD9.
    case 0xC4FCDB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FCDC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/audio/change_music.asm:117 LDA @LOCAL00
    case 0xC4FCDE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:118 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FCE0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:118 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FCE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:118 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FCE3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:119 STA @VIRTUAL02
    case 0xC4FCE5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/audio/change_music.asm:120 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FCE7: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/audio/change_music.asm:120 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FCE9: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/audio/change_music.asm:120 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FCEB: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/audio/change_music.asm:120 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FCED: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/audio/change_music.asm:121 CLC
    case 0xC4FCEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:122 ADC @VIRTUAL0A
    case 0xC4FCF0: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/audio/change_music.asm:123 STA @VIRTUAL0A
    case 0xC4FCF2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/audio/change_music.asm:124 LDA [@VIRTUAL0A] ;music_pack_pointer::bank
    case 0xC4FCF4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/audio/change_music.asm:125 AND #$00FF
    case 0xC4FCF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC4FCF6.
    case 0xC4FCF8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/audio/change_music.asm:126 JSR GET_AUDIO_BANK
    case 0xC4FCF9: cpu.execute_instruction<0x20>(0x00FB42, 3); return true;
    // src/audio/change_music.asm:127 TAX
    case 0xC4FCFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:128 LDA @VIRTUAL02
    case 0xC4FCFD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/audio/change_music.asm:129 INC
    case 0xC4FCFF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/change_music.asm:130 CLC
    case 0xC4FD00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:131 ADC @VIRTUAL06
    case 0xC4FD01: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/audio/change_music.asm:132 STA @VIRTUAL06
    case 0xC4FD03: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/audio/change_music.asm:133 LDA [@VIRTUAL06] ;music_pack_pointer::addr
    case 0xC4FD05: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/audio/change_music.asm:134 AND SEQUENCE_PACK_MASK
    case 0xC4FD07: cpu.execute_instruction<0x2D>(0x00B547, 3); return true;
    // src/audio/change_music.asm:135 JSL LOAD_SPC700_DATA
    case 0xC4FD0A: cpu.execute_instruction<0x22>(0xC0AB06, 4); return true;
    // src/audio/change_music.asm:137 LDY @LOCAL01
    case 0xC4FD0E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/audio/change_music.asm:138 TYA
    case 0xC4FD10: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/audio/change_music.asm:139 INC
    case 0xC4FD11: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/change_music.asm:140 JSL UNKNOWN_C0ABBD
    case 0xC4FD12: cpu.execute_instruction<0x22>(0xC0ABBD, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/audio/change_music.asm:142 END_C_FUNCTION
    case 0xC4FD16: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/audio/change_music.asm:142 END_C_FUNCTION
    case 0xC4FD17: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/get_audio_bank.asm (source_named).
bool execute_audio_get_audio_bank_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/audio/get_audio_bank.asm:3 BEGIN_C_FUNCTION
    case 0xC4FB42: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4FB44: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4FB45: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4FB46: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4FB47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4FB47.
    case 0xC4FB49: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4FB4A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4FB4B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/audio/get_audio_bank.asm:8 STA @LOCAL00
    case 0xC4FB4C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/audio/get_audio_bank.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC4FB49.
    case 0xC4FB4D: cpu.execute_instruction<0x0E>(0x00FFA9, 3); return true;
    // src/audio/get_audio_bank.asm:9 LDA #.LOWORD(-1)
    case 0xC4FB4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/audio/get_audio_bank.asm:9 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4FB4E.
    case 0xC4FB50: cpu.execute_instruction<0xFF>(0xB5478D, 4); return true;
    // src/audio/get_audio_bank.asm:10 STA SEQUENCE_PACK_MASK
    case 0xC4FB51: cpu.execute_instruction<0x8D>(0x00B547, 3); return true;
    // src/audio/get_audio_bank.asm:11 LDA @LOCAL00
    case 0xC4FB54: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/audio/get_audio_bank.asm:16 END_C_FUNCTION
    case 0xC4FB56: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/audio/get_audio_bank.asm:16 END_C_FUNCTION
    case 0xC4FB57: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/initialize_music_subsystem.asm (source_named).
bool execute_audio_initialize_music_subsystem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/audio/initialize_music_subsystem.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4FB58: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    case 0xC4FB5A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    case 0xC4FB5B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    case 0xC4FB5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4FB5C.
    case 0xC4FB5E: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    case 0xC4FB5F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:8 LDA #$FFFF
    case 0xC4FB60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/audio/initialize_music_subsystem.asm:8 LDA #$FFFF
    // Overlapping static entry reached from 0xC4FB60.
    case 0xC4FB62: cpu.execute_instruction<0xFF>(0xB5418D, 4); return true;
    // src/audio/initialize_music_subsystem.asm:9 STA CURRENT_SEQUENCE_PACK
    case 0xC4FB63: cpu.execute_instruction<0x8D>(0x00B541, 3); return true;
    // src/audio/initialize_music_subsystem.asm:10 STA CURRENT_PRIMARY_SAMPLE_PACK
    case 0xC4FB66: cpu.execute_instruction<0x8D>(0x00B53D, 3); return true;
    // src/audio/initialize_music_subsystem.asm:11 LDA f:MUSIC_DATASET_TABLE + (0 * .SIZEOF(pack_table_entry)) + pack_table_entry::sequence_pack
    case 0xC4FB69: cpu.execute_instruction<0xAF>(0xC4F70C, 4); return true;
    // src/audio/initialize_music_subsystem.asm:12 AND #$00FF
    case 0xC4FB6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/initialize_music_subsystem.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC4FB6D.
    case 0xC4FB6F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/audio/initialize_music_subsystem.asm:13 STA @LOCAL01
    case 0xC4FB70: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/audio/initialize_music_subsystem.asm:14 STA UNKNOWN_7EB543
    case 0xC4FB72: cpu.execute_instruction<0x8D>(0x00B543, 3); return true;
    // src/audio/initialize_music_subsystem.asm:15 STA CURRENT_SECONDARY_SAMPLE_PACK
    case 0xC4FB75: cpu.execute_instruction<0x8D>(0x00B53F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FB78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x00F947, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4FB78.
    case 0xC4FB7A: cpu.execute_instruction<0xF9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FB7B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FB7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4FB7D.
    case 0xC4FB7F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4FB80: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/audio/initialize_music_subsystem.asm:17 LDA @LOCAL01
    case 0xC4FB82: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/initialize_music_subsystem.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FB84: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/initialize_music_subsystem.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FB86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/initialize_music_subsystem.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4FB87: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/initialize_music_subsystem.asm:19 TAY
    case 0xC4FB89: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:20 STY @LOCAL00
    case 0xC4FB8A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/audio/initialize_music_subsystem.asm:21 TYA
    case 0xC4FB8C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/audio/initialize_music_subsystem.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FB8D: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/audio/initialize_music_subsystem.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FB8F: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/audio/initialize_music_subsystem.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FB91: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/audio/initialize_music_subsystem.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4FB93: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/audio/initialize_music_subsystem.asm:23 CLC
    case 0xC4FB95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:24 ADC @VIRTUAL0A
    case 0xC4FB96: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/audio/initialize_music_subsystem.asm:25 STA @VIRTUAL0A
    case 0xC4FB98: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/audio/initialize_music_subsystem.asm:26 LDA [@VIRTUAL0A] ;music_pack_pointer::bank
    case 0xC4FB9A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/audio/initialize_music_subsystem.asm:27 AND #$00FF
    case 0xC4FB9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/initialize_music_subsystem.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC4FB9C.
    case 0xC4FB9E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/audio/initialize_music_subsystem.asm:28 JSR GET_AUDIO_BANK
    case 0xC4FB9F: cpu.execute_instruction<0x20>(0x00FB42, 3); return true;
    // src/audio/initialize_music_subsystem.asm:29 TAX
    case 0xC4FBA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:30 LDY @LOCAL00
    case 0xC4FBA3: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/audio/initialize_music_subsystem.asm:31 TYA
    case 0xC4FBA5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:32 INC
    case 0xC4FBA6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:33 CLC
    case 0xC4FBA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:34 ADC @VIRTUAL06
    case 0xC4FBA8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/audio/initialize_music_subsystem.asm:34 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC477CD.
    case 0xC4FBA9: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/audio/initialize_music_subsystem.asm:35 STA @VIRTUAL06
    case 0xC4FBAA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/audio/initialize_music_subsystem.asm:35 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC4FBA9.
    case 0xC4FBAB: cpu.execute_instruction<0x06>(0x0000A7, 2); return true;
    // src/audio/initialize_music_subsystem.asm:36 LDA [@VIRTUAL06] ;music_pack_pointer::addr
    case 0xC4FBAC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/audio/initialize_music_subsystem.asm:36 LDA [@VIRTUAL06] ;music_pack_pointer::addr
    // Overlapping static entry reached from 0xC4FBAB.
    case 0xC4FBAD: cpu.execute_instruction<0x06>(0x00002D, 2); return true;
    // src/audio/initialize_music_subsystem.asm:37 AND SEQUENCE_PACK_MASK
    case 0xC4FBAE: cpu.execute_instruction<0x2D>(0x00B547, 3); return true;
    // src/audio/initialize_music_subsystem.asm:37 AND SEQUENCE_PACK_MASK
    // Overlapping static entry reached from 0xC4FBAD.
    case 0xC4FBAF: cpu.execute_instruction<0x47>(0x0000B5, 2); return true;
    // src/audio/initialize_music_subsystem.asm:38 JSL LOAD_SPC700_DATA
    case 0xC4FBB1: cpu.execute_instruction<0x22>(0xC0AB06, 4); return true;
    // src/audio/initialize_music_subsystem.asm:39 LDA #$0001
    case 0xC4FBB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/audio/initialize_music_subsystem.asm:39 LDA #$0001
    // Overlapping static entry reached from 0xC4FBB5.
    case 0xC4FBB7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/audio/initialize_music_subsystem.asm:40 STA ENABLE_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC4FBB8: cpu.execute_instruction<0x8D>(0x00B549, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/audio/initialize_music_subsystem.asm:41 END_C_FUNCTION
    case 0xC4FBBB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/audio/initialize_music_subsystem.asm:41 END_C_FUNCTION
    case 0xC4FBBC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/load_spc700_data.asm (source_named).
bool execute_audio_load_spc700_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/load_spc700_data.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AB06: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/audio/load_spc700_data.asm:4 STA SPC_DATA_PTR
    case 0xC0AB08: cpu.execute_instruction<0x8D>(0x0000C6, 3); return true;
    // src/audio/load_spc700_data.asm:5 STX SPC_DATA_PTR+2
    case 0xC0AB0B: cpu.execute_instruction<0x8E>(0x0000C8, 3); return true;
    // src/audio/load_spc700_data.asm:6 PHB
    case 0xC0AB0E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:7 PEA $0000
    case 0xC0AB0F: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/audio/load_spc700_data.asm:8 PLB
    case 0xC0AB12: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:9 PLB
    case 0xC0AB13: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:10 PHD
    case 0xC0AB14: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:11 PEA $0000
    case 0xC0AB15: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/audio/load_spc700_data.asm:12 PLD
    case 0xC0AB18: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:13 LDY #$0000
    case 0xC0AB19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/audio/load_spc700_data.asm:13 LDY #$0000
    // Overlapping static entry reached from 0xC0AB19.
    case 0xC0AB1B: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/audio/load_spc700_data.asm:14 LDA APUIO0
    case 0xC0AB1C: cpu.execute_instruction<0xAD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:15 CMP #$BBAA
    case 0xC0AB1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000AA, 2); else cpu.execute_instruction<0xC9>(0x00BBAA, 3); return true;
    // src/audio/load_spc700_data.asm:15 CMP #$BBAA
    // Overlapping static entry reached from 0xC0AB1F.
    case 0xC0AB21: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:16 BEQ @UNKNOWN0
    case 0xC0AB22: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/audio/load_spc700_data.asm:17 JSR WAIT_FOR_SPC700
    case 0xC0AB24: cpu.execute_instruction<0x20>(0x00ABA8, 3); return true;
    // src/audio/load_spc700_data.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AB27: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:20 LDA NMITIMEN_MIRROR
    case 0xC0AB29: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/audio/load_spc700_data.asm:21 AND #$007F
    case 0xC0AB2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x008D7F, 3); return true;
    // src/audio/load_spc700_data.asm:22 STA NMITIMEN_MIRROR
    case 0xC0AB2E: cpu.execute_instruction<0x8D>(0x00001E, 3); return true;
    // src/audio/load_spc700_data.asm:22 STA NMITIMEN_MIRROR
    // Overlapping static entry reached from 0xC0AB2C.
    case 0xC0AB2F: cpu.execute_instruction<0x1E>(0x008F00, 3); return true;
    // src/audio/load_spc700_data.asm:23 STA f:NMITIMEN
    case 0xC0AB31: cpu.execute_instruction<0x8F>(0x004200, 4); return true;
    // src/audio/load_spc700_data.asm:23 STA f:NMITIMEN
    // Overlapping static entry reached from 0xC0AB2F.
    case 0xC0AB32: cpu.execute_instruction<0x00>(0x000042, 2); return true;
    // src/audio/load_spc700_data.asm:24 LDA #$00CC
    case 0xC0AB35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0080CC, 3); return true;
    // src/audio/load_spc700_data.asm:25 BRA @UNKNOWN7
    case 0xC0AB37: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/audio/load_spc700_data.asm:25 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC0AB35.
    case 0xC0AB38: cpu.execute_instruction<0x26>(0x0000B7, 2); return true;
    // src/audio/load_spc700_data.asm:27 LDA [<SPC_DATA_PTR],Y
    case 0xC0AB39: cpu.execute_instruction<0xB7>(0x0000C6, 2); return true;
    // src/audio/load_spc700_data.asm:27 LDA [<SPC_DATA_PTR],Y
    // Overlapping static entry reached from 0xC0AB38.
    case 0xC0AB3A: cpu.execute_instruction<0xC6>(0x0000C8, 2); return true;
    // src/audio/load_spc700_data.asm:28 INY
    case 0xC0AB3B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:29 XBA
    case 0xC0AB3C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:30 LDA #$0000
    case 0xC0AB3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/audio/load_spc700_data.asm:31 BRA @UNKNOWN4
    case 0xC0AB3F: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/audio/load_spc700_data.asm:31 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC0AB3D.
    case 0xC0AB40: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:33 XBA
    case 0xC0AB41: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:34 LDA [<SPC_DATA_PTR],Y
    case 0xC0AB42: cpu.execute_instruction<0xB7>(0x0000C6, 2); return true;
    // src/audio/load_spc700_data.asm:35 INY
    case 0xC0AB44: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:36 XBA
    case 0xC0AB45: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:38 CMP APUIO0
    case 0xC0AB46: cpu.execute_instruction<0xCD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:39 BNE @UNKNOWN3
    case 0xC0AB49: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/audio/load_spc700_data.asm:40 INC
    case 0xC0AB4B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC0AB4C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:43 STA APUIO0
    case 0xC0AB4E: cpu.execute_instruction<0x8D>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AB51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:45 DEX
    case 0xC0AB53: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:46 BNE @UNKNOWN2
    case 0xC0AB54: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/audio/load_spc700_data.asm:48 CMP APUIO0
    case 0xC0AB56: cpu.execute_instruction<0xCD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:49 BNE @UNKNOWN5
    case 0xC0AB59: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/audio/load_spc700_data.asm:51 ADC #$0003
    case 0xC0AB5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000003, 2); else cpu.execute_instruction<0x69>(0x00F003, 3); return true;
    // src/audio/load_spc700_data.asm:52 BEQ @UNKNOWN6
    case 0xC0AB5D: cpu.execute_instruction<0xF0>(0x0000FC, 2); return true;
    // src/audio/load_spc700_data.asm:52 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC0AB5B.
    case 0xC0AB5E: cpu.execute_instruction<0xFC>(0x00C248, 3); return true;
    // src/audio/load_spc700_data.asm:54 PHA
    case 0xC0AB5F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC0AB60: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:55 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0AB5E.
    case 0xC0AB61: cpu.execute_instruction<0x20>(0x00C6B7, 3); return true;
    // src/audio/load_spc700_data.asm:56 LDA [<SPC_DATA_PTR],Y
    case 0xC0AB62: cpu.execute_instruction<0xB7>(0x0000C6, 2); return true;
    // src/audio/load_spc700_data.asm:57 BNE @UNKNOWN8
    case 0xC0AB64: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/audio/load_spc700_data.asm:58 TAX
    case 0xC0AB66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:59 LDA #$0500
    case 0xC0AB67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000500, 3); return true;
    // src/audio/load_spc700_data.asm:59 LDA #$0500
    // Overlapping static entry reached from 0xC0AB67.
    case 0xC0AB69: cpu.execute_instruction<0x05>(0x000080, 2); return true;
    // src/audio/load_spc700_data.asm:60 BRA @UNKNOWN9
    case 0xC0AB6A: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/audio/load_spc700_data.asm:60 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC0AB69.
    case 0xC0AB6B: cpu.execute_instruction<0x07>(0x0000AA, 2); return true;
    // src/audio/load_spc700_data.asm:62 TAX
    case 0xC0AB6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:63 INY
    case 0xC0AB6D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:64 INY
    case 0xC0AB6E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:65 LDA [<SPC_DATA_PTR],Y
    case 0xC0AB6F: cpu.execute_instruction<0xB7>(0x0000C6, 2); return true;
    // src/audio/load_spc700_data.asm:66 INY
    case 0xC0AB71: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:67 INY
    case 0xC0AB72: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:69 STA APUIO2
    case 0xC0AB73: cpu.execute_instruction<0x8D>(0x002142, 3); return true;
    // src/audio/load_spc700_data.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AB76: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:71 CPX #$0001
    case 0xC0AB78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/audio/load_spc700_data.asm:71 CPX #$0001
    // Overlapping static entry reached from 0xC0AB78.
    case 0xC0AB7A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/audio/load_spc700_data.asm:72 LDA #$0000
    case 0xC0AB7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002A00, 3); return true;
    // src/audio/load_spc700_data.asm:73 ROL
    case 0xC0AB7D: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:74 STA APUIO1
    case 0xC0AB7E: cpu.execute_instruction<0x8D>(0x002141, 3); return true;
    // src/audio/load_spc700_data.asm:75 ADC #$007F
    case 0xC0AB81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00687F, 3); return true;
    // src/audio/load_spc700_data.asm:76 PLA
    case 0xC0AB83: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:77 STA APUIO0
    case 0xC0AB84: cpu.execute_instruction<0x8D>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:79 CMP APUIO0
    case 0xC0AB87: cpu.execute_instruction<0xCD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:80 BNE @UNKNOWN10
    case 0xC0AB8A: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/audio/load_spc700_data.asm:81 BVS @UNKNOWN1
    case 0xC0AB8C: cpu.execute_instruction<0x70>(0x0000AB, 2); return true;
    // src/audio/load_spc700_data.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC0AB8E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:84 LDA APUIO0
    case 0xC0AB90: cpu.execute_instruction<0xAD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:85 BNE @UNKNOWN11
    case 0xC0AB93: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/audio/load_spc700_data.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AB95: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:87 LDA NMITIMEN_MIRROR
    case 0xC0AB97: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/audio/load_spc700_data.asm:88 ORA #$0080
    case 0xC0AB9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x008D80, 3); return true;
    // src/audio/load_spc700_data.asm:89 STA NMITIMEN_MIRROR
    case 0xC0AB9C: cpu.execute_instruction<0x8D>(0x00001E, 3); return true;
    // src/audio/load_spc700_data.asm:89 STA NMITIMEN_MIRROR
    // Overlapping static entry reached from 0xC0AB9A.
    case 0xC0AB9D: cpu.execute_instruction<0x1E>(0x008F00, 3); return true;
    // src/audio/load_spc700_data.asm:90 STA f:NMITIMEN
    case 0xC0AB9F: cpu.execute_instruction<0x8F>(0x004200, 4); return true;
    // src/audio/load_spc700_data.asm:90 STA f:NMITIMEN
    // Overlapping static entry reached from 0xC0AB9D.
    case 0xC0ABA0: cpu.execute_instruction<0x00>(0x000042, 2); return true;
    // src/audio/load_spc700_data.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC0ABA3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:92 PLD
    case 0xC0ABA5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:93 PLB
    case 0xC0ABA6: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:94 RTL
    case 0xC0ABA7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/pause_music.asm (source_named).
bool execute_audio_pause_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/pause_music.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEF0256: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/audio/pause_music.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0258: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/pause_music.asm:5 LDA #$0001
    case 0xEF025A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/audio/pause_music.asm:6 STA DISABLE_HPPP_ROLLING
    case 0xEF025C: cpu.execute_instruction<0x8D>(0x009697, 3); return true;
    // src/audio/pause_music.asm:6 STA DISABLE_HPPP_ROLLING
    // Overlapping static entry reached from 0xEF025A.
    case 0xEF025D: cpu.execute_instruction<0x97>(0x000096, 2); return true;
    // src/audio/pause_music.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xEF025F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/pause_music.asm:8 RTL
    case 0xEF0261: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/play_sound.asm (source_named).
bool execute_audio_play_sound_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/play_sound.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABE0: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/audio/play_sound.asm:4 CMP #$0000
    case 0xC0ABE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00F000, 3); return true;
    // src/audio/play_sound.asm:5 BEQ PLAY_SOUND_UNKNOWN0
    case 0xC0ABE4: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/audio/play_sound.asm:5 BEQ PLAY_SOUND_UNKNOWN0
    // Overlapping static entry reached from 0xC0ABE2.
    case 0xC0ABE5: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/audio/play_sound.asm:6 LDX SOUND_EFFECT_QUEUE_END_INDEX
    case 0xC0ABE6: cpu.execute_instruction<0xAE>(0x0000CA, 3); return true;
    // src/audio/play_sound.asm:7 ORA SOUND_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0ABE9: cpu.execute_instruction<0x0D>(0x001ACA, 3); return true;
    // src/audio/play_sound.asm:8 STA SOUND_EFFECT_QUEUE,X
    case 0xC0ABEC: cpu.execute_instruction<0x9D>(0x001AC2, 3); return true;
    // src/audio/play_sound.asm:9 TXA
    case 0xC0ABEF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/audio/play_sound.asm:10 INC
    case 0xC0ABF0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/play_sound.asm:11 AND #$0007
    case 0xC0ABF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x008D07, 3); return true;
    // src/audio/play_sound.asm:12 STA SOUND_EFFECT_QUEUE_END_INDEX
    case 0xC0ABF3: cpu.execute_instruction<0x8D>(0x0000CA, 3); return true;
    // src/audio/play_sound.asm:12 STA SOUND_EFFECT_QUEUE_END_INDEX
    // Overlapping static entry reached from 0xC0ABF1.
    case 0xC0ABF4: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/audio/play_sound.asm:12 STA SOUND_EFFECT_QUEUE_END_INDEX
    // Overlapping static entry reached from 0xC0ABF4.
    case 0xC0ABF5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/audio/play_sound.asm:13 LDA #$0080
    case 0xC0ABF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x004D80, 3); return true;
    // src/audio/play_sound.asm:14 EOR SOUND_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0ABF8: cpu.execute_instruction<0x4D>(0x001ACA, 3); return true;
    // src/audio/play_sound.asm:14 EOR SOUND_EFFECT_UPPER_BIT_FLIPPER
    // Overlapping static entry reached from 0xC0ABF6.
    case 0xC0ABF9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/audio/play_sound.asm:14 EOR SOUND_EFFECT_UPPER_BIT_FLIPPER
    // Overlapping static entry reached from 0xC0ABF9.
    case 0xC0ABFA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/play_sound.asm:15 STA SOUND_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0ABFB: cpu.execute_instruction<0x8D>(0x001ACA, 3); return true;
    // src/audio/play_sound.asm:16 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABFE: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/audio/play_sound.asm:17 RTL
    case 0xC0AC00: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/audio/play_sound.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AC01: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/play_sound.asm:20 LDA #$0057
    case 0xC0AC03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000057, 2); else cpu.execute_instruction<0xA9>(0x008F57, 3); return true;
    // src/audio/play_sound.asm:21 STA f:APUIO3
    case 0xC0AC05: cpu.execute_instruction<0x8F>(0x002143, 4); return true;
    // src/audio/play_sound.asm:21 STA f:APUIO3
    // Overlapping static entry reached from 0xC0AC03.
    case 0xC0AC06: cpu.execute_instruction<0x43>(0x000021, 2); return true;
    // src/audio/play_sound.asm:21 STA f:APUIO3
    // Overlapping static entry reached from 0xC0AC06.
    case 0xC0AC08: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/audio/play_sound.asm:22 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AC09: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/audio/play_sound.asm:23 RTL
    case 0xC0AC0B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/play_sound_and_unknown.asm (source_named).
bool execute_audio_play_sound_and_unknown_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/play_sound_and_unknown.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC216D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/audio/play_sound_and_unknown.asm:4 JSL PLAY_SOUND
    case 0xC216D2: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/audio/play_sound_and_unknown.asm:5 JSL UNKNOWN_C12E42
    case 0xC216D6: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/audio/play_sound_and_unknown.asm:6 RTL
    case 0xC216DA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/resume_music.asm (source_named).
bool execute_audio_resume_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/resume_music.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEF026E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/audio/resume_music.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0270: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/resume_music.asm:5 LDA #$0000
    case 0xEF0272: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/audio/resume_music.asm:6 STA HALF_HPPP_METER_SPEED
    case 0xEF0274: cpu.execute_instruction<0x8D>(0x009695, 3); return true;
    // src/audio/resume_music.asm:6 STA HALF_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xEF0272.
    case 0xEF0275: cpu.execute_instruction<0x95>(0x000096, 2); return true;
    // src/audio/resume_music.asm:7 STA DISABLE_HPPP_ROLLING
    case 0xEF0277: cpu.execute_instruction<0x8D>(0x009697, 3); return true;
    // src/audio/resume_music.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xEF027A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/resume_music.asm:9 RTL
    case 0xEF027C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/set_num_channels.asm (source_named).
bool execute_audio_set_num_channels_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/audio/set_num_channels.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4FD18: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4FD1A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4FD1B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4FD1C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4FD1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4FD1D.
    case 0xC4FD1F: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4FD20: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4FD21: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/audio/set_num_channels.asm:8 TAX
    case 0xC4FD22: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/set_num_channels.asm:9 BEQ @MONO
    case 0xC4FD23: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    case 0xC4FD25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x00AC33, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    // Overlapping static entry reached from 0xC4FD25.
    case 0xC4FD27: cpu.execute_instruction<0xAC>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    case 0xC4FD28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    case 0xC4FD2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    // Overlapping static entry reached from 0xC4FD2A.
    case 0xC4FD2C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    case 0xC4FD2D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/audio/set_num_channels.asm:11 BRA @LOAD
    case 0xC4FD2F: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    case 0xC4FD31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00AC2C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    // Overlapping static entry reached from 0xC4FD31.
    case 0xC4FD33: cpu.execute_instruction<0xAC>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    case 0xC4FD34: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    case 0xC4FD36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    // Overlapping static entry reached from 0xC4FD36.
    case 0xC4FD38: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    case 0xC4FD39: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/audio/set_num_channels.asm:15 LDX @LOCAL00+2
    case 0xC4FD3B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/audio/set_num_channels.asm:16 LDA @LOCAL00
    case 0xC4FD3D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/audio/set_num_channels.asm:17 JSL LOAD_SPC700_DATA
    case 0xC4FD3F: cpu.execute_instruction<0x22>(0xC0AB06, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/audio/set_num_channels.asm:18 END_C_FUNCTION
    case 0xC4FD43: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/audio/set_num_channels.asm:18 END_C_FUNCTION
    case 0xC4FD44: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/stop_music.asm (source_named).
bool execute_audio_stop_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/stop_music.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ABC6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/stop_music.asm:4 LDA #$0000
    case 0xC0ABC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/audio/stop_music.asm:5 STA f:APUIO0
    case 0xC0ABCA: cpu.execute_instruction<0x8F>(0x002140, 4); return true;
    // src/audio/stop_music.asm:5 STA f:APUIO0
    // Overlapping static entry reached from 0xC0ABC8.
    case 0xC0ABCB: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/audio/stop_music.asm:6 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABCE: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/audio/stop_music.asm:8 JSL UNKNOWN_C0AC20
    case 0xC0ABD0: cpu.execute_instruction<0x22>(0xC0AC20, 4); return true;
    // src/audio/stop_music.asm:9 CMP #$0000
    case 0xC0ABD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/audio/stop_music.asm:9 CMP #$0000
    // Overlapping static entry reached from 0xC0ABD4.
    case 0xC0ABD6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/audio/stop_music.asm:10 BNE @UNKNOWN0
    case 0xC0ABD7: cpu.execute_instruction<0xD0>(0x0000F7, 2); return true;
    // src/audio/stop_music.asm:11 LDA #$FFFF
    case 0xC0ABD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/audio/stop_music.asm:11 LDA #$FFFF
    // Overlapping static entry reached from 0xC0ABD9.
    case 0xC0ABDB: cpu.execute_instruction<0xFF>(0xB53B8D, 4); return true;
    // src/audio/stop_music.asm:12 STA CURRENT_MUSIC_TRACK
    case 0xC0ABDC: cpu.execute_instruction<0x8D>(0x00B53B, 3); return true;
    // src/audio/stop_music.asm:13 RTL
    case 0xC0ABDF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/stop_music_redirect.asm (source_named).
bool execute_audio_stop_music_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/stop_music_redirect.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC216C9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/audio/stop_music_redirect.asm:4 JSL STOP_MUSIC
    case 0xC216CB: cpu.execute_instruction<0x22>(0xC0ABC6, 4); return true;
    // src/audio/stop_music_redirect.asm:5 RTL
    case 0xC216CF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/wait_for_spc700.asm (source_named).
bool execute_audio_wait_for_spc700_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/wait_for_spc700.asm:4 STZ APUIO2
    case 0xC0ABA8: cpu.execute_instruction<0x9C>(0x002142, 3); return true;
    // src/audio/wait_for_spc700.asm:5 STZ APUIO0
    case 0xC0ABAB: cpu.execute_instruction<0x9C>(0x002140, 3); return true;
    // src/audio/wait_for_spc700.asm:7 LDA #$00FF
    case 0xC0ABAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/audio/wait_for_spc700.asm:7 LDA #$00FF
    // Overlapping static entry reached from 0xC0ABAE.
    case 0xC0ABB0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/audio/wait_for_spc700.asm:8 STA APUIO0
    case 0xC0ABB1: cpu.execute_instruction<0x8D>(0x002140, 3); return true;
    // src/audio/wait_for_spc700.asm:9 LDA APUIO0
    case 0xC0ABB4: cpu.execute_instruction<0xAD>(0x002140, 3); return true;
    // src/audio/wait_for_spc700.asm:10 CMP #$BBAA
    case 0xC0ABB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000AA, 2); else cpu.execute_instruction<0xC9>(0x00BBAA, 3); return true;
    // src/audio/wait_for_spc700.asm:10 CMP #$BBAA
    // Overlapping static entry reached from 0xC0ABB7.
    case 0xC0ABB9: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/audio/wait_for_spc700.asm:11 BNE @NOT_READY
    case 0xC0ABBA: cpu.execute_instruction<0xD0>(0x0000F2, 2); return true;
    // src/audio/wait_for_spc700.asm:12 RTS
    case 0xC0ABBC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
