// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/audio/change_music.asm (source_named).
bool execute_audio_change_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/audio/change_music.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CF5C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4CF5E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4CF5F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4CF60: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4CF61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CF61.
    case 0xC4CF63: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4CF64: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/audio/change_music.asm:9 END_STACK_VARS
    case 0xC4CF65: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/audio/change_music.asm:10 TAX
    case 0xC4CF66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:11 STX @LOCAL02
    case 0xC4CF67: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/audio/change_music.asm:12 CPX CURRENT_MUSIC_TRACK
    case 0xC4CF69: cpu.execute_instruction<0xEC>(0x00B6EC, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/audio/change_music.asm:13 BEQL @RETURN
    case 0xC4CF6C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/audio/change_music.asm:13 BEQL @RETURN
    case 0xC4CF6E: cpu.execute_instruction<0x4C>(0x00D0B5, 3); return true;
    // src/audio/change_music.asm:14 LDA DISABLED_TRANSITIONS
    case 0xC4CF71: cpu.execute_instruction<0xAD>(0x00B68A, 3); return true;
    // src/audio/change_music.asm:15 BNE @UNKNOWN1
    case 0xC4CF74: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/audio/change_music.asm:16 JSL PLAY_SOUND_UNKNOWN0
    case 0xC4CF76: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/audio/change_music.asm:18 LDX @LOCAL02
    case 0xC4CF7A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/audio/change_music.asm:20 CPX #MUSIC::SOUNDSTONE_RECORDING_GIANT_STEP
    case 0xC4CF7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A0, 2); else cpu.execute_instruction<0xE0>(0x0000A0, 3); return true;
    // src/audio/change_music.asm:20 CPX #MUSIC::SOUNDSTONE_RECORDING_GIANT_STEP
    // Overlapping static entry reached from 0xC4CF7C.
    case 0xC4CF7E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/audio/change_music.asm:21 BCC @STOP_MUSIC
    case 0xC4CF7F: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/audio/change_music.asm:22 CPX #MUSIC::SOUNDSTONE_RECORDING_FIRE_SPRING
    case 0xC4CF81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A7, 2); else cpu.execute_instruction<0xE0>(0x0000A7, 3); return true;
    // src/audio/change_music.asm:22 CPX #MUSIC::SOUNDSTONE_RECORDING_FIRE_SPRING
    // Overlapping static entry reached from 0xC4CF81.
    case 0xC4CF83: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/audio/change_music.asm:23 BLTEQ @DONT_STOP_MUSIC
    case 0xC4CF84: cpu.execute_instruction<0x90>(0x00000D, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/audio/change_music.asm:23 BLTEQ @DONT_STOP_MUSIC
    case 0xC4CF86: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/audio/change_music.asm:25 LDA #$0001
    case 0xC4CF88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/audio/change_music.asm:25 LDA #$0001
    // Overlapping static entry reached from 0xC4CF88.
    case 0xC4CF8A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/audio/change_music.asm:26 JSL UNKNOWN_C0AC0C
    case 0xC4CF8B: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/audio/change_music.asm:27 JSL STOP_MUSIC
    case 0xC4CF8F: cpu.execute_instruction<0x22>(0xC0ABA5, 4); return true;
    // src/audio/change_music.asm:29 LDX @LOCAL02
    case 0xC4CF93: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/audio/change_music.asm:30 STX CURRENT_MUSIC_TRACK
    case 0xC4CF95: cpu.execute_instruction<0x8E>(0x00B6EC, 3); return true;
    // src/audio/change_music.asm:31 TXY
    case 0xC4CF98: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/audio/change_music.asm:32 DEY
    case 0xC4CF99: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/audio/change_music.asm:33 STY @LOCAL01
    case 0xC4CF9A: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/audio/change_music.asm:34 TYA
    case 0xC4CF9C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4CF9D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4CF9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4CFA0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:36 TAX
    case 0xC4CFA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:37 LDA f:MUSIC_DATASET_TABLE,X ;pack_table_entry::primary_sample_pack
    case 0xC4CFA3: cpu.execute_instruction<0xBF>(0xC4CAA5, 4); return true;
    // src/audio/change_music.asm:38 AND #$00FF
    case 0xC4CFA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC4CFA7.
    case 0xC4CFA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/audio/change_music.asm:39 STA @LOCAL00
    case 0xC4CFAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/audio/change_music.asm:40 CMP CURRENT_PRIMARY_SAMPLE_PACK
    case 0xC4CFAC: cpu.execute_instruction<0xCD>(0x00B6EE, 3); return true;
    // src/audio/change_music.asm:41 BEQ @SKIP_DATA_LOAD_1
    case 0xC4CFAF: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/audio/change_music.asm:42 CMP #$00FF
    case 0xC4CFB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:42 CMP #$00FF
    // Overlapping static entry reached from 0xC4CFB1.
    case 0xC4CFB3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/audio/change_music.asm:43 BEQ @SKIP_DATA_LOAD_1
    case 0xC4CFB4: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/audio/change_music.asm:44 STA CURRENT_PRIMARY_SAMPLE_PACK
    case 0xC4CFB6: cpu.execute_instruction<0x8D>(0x00B6EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4CFB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x00CCE2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CFB9.
    case 0xC4CFBB: cpu.execute_instruction<0xCC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4CFBC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4CFBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CFBE.
    case 0xC4CFC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/change_music.asm:45 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4CFC1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/audio/change_music.asm:46 LDA @LOCAL00
    case 0xC4CFC3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4CFC5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4CFC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4CFC8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:48 STA @VIRTUAL02
    case 0xC4CFCA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/audio/change_music.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4CFCC: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/audio/change_music.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4CFCE: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/audio/change_music.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4CFD0: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/audio/change_music.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4CFD2: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/audio/change_music.asm:50 CLC
    case 0xC4CFD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:51 ADC @VIRTUAL0A
    case 0xC4CFD5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/audio/change_music.asm:52 STA @VIRTUAL0A
    case 0xC4CFD7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/audio/change_music.asm:53 LDA [@VIRTUAL0A] ;music_pack_pointer::bank
    case 0xC4CFD9: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/audio/change_music.asm:54 AND #$00FF
    case 0xC4CFDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC4CFDB.
    case 0xC4CFDD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/audio/change_music.asm:55 JSR GET_AUDIO_BANK
    case 0xC4CFDE: cpu.execute_instruction<0x20>(0x00CEDD, 3); return true;
    // src/audio/change_music.asm:56 TAX
    case 0xC4CFE1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:57 LDA @VIRTUAL02
    case 0xC4CFE2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/audio/change_music.asm:58 INC
    case 0xC4CFE4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/change_music.asm:59 CLC
    case 0xC4CFE5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:60 ADC @VIRTUAL06
    case 0xC4CFE6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/audio/change_music.asm:61 STA @VIRTUAL06
    case 0xC4CFE8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/audio/change_music.asm:62 LDA [@VIRTUAL06] ;music_pack_pointer::addr
    case 0xC4CFEA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/audio/change_music.asm:63 AND SEQUENCE_PACK_MASK
    case 0xC4CFEC: cpu.execute_instruction<0x2D>(0x00B6F8, 3); return true;
    // src/audio/change_music.asm:64 JSL LOAD_SPC700_DATA
    case 0xC4CFEF: cpu.execute_instruction<0x22>(0xC0AAE5, 4); return true;
    // src/audio/change_music.asm:66 LDY @LOCAL01
    case 0xC4CFF3: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/audio/change_music.asm:67 TYA
    case 0xC4CFF5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4CFF6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4CFF8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4CFF9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:69 TAX
    case 0xC4CFFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:70 INX
    case 0xC4CFFC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/audio/change_music.asm:71 LDA f:MUSIC_DATASET_TABLE,X ;pack_table_entry::secondary_sample_pack
    case 0xC4CFFD: cpu.execute_instruction<0xBF>(0xC4CAA5, 4); return true;
    // src/audio/change_music.asm:71 LDA f:MUSIC_DATASET_TABLE,X ;pack_table_entry::secondary_sample_pack
    // Overlapping static entry reached from 0xC4A9AB.
    case 0xC4D000: cpu.execute_instruction<0xC4>(0x000029, 2); return true;
    // src/audio/change_music.asm:72 AND #$00FF
    case 0xC4D001: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC4D000.
    case 0xC4D002: cpu.execute_instruction<0xFF>(0x0E8500, 4); return true;
    // src/audio/change_music.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC4D001.
    case 0xC4D003: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/audio/change_music.asm:73 STA @LOCAL00
    case 0xC4D004: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/audio/change_music.asm:74 CMP CURRENT_SECONDARY_SAMPLE_PACK
    case 0xC4D006: cpu.execute_instruction<0xCD>(0x00B6F0, 3); return true;
    // src/audio/change_music.asm:75 BEQ @SKIP_DATA_LOAD_2
    case 0xC4D009: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/audio/change_music.asm:76 CMP #$00FF
    case 0xC4D00B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:76 CMP #$00FF
    // Overlapping static entry reached from 0xC4D00B.
    case 0xC4D00D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/audio/change_music.asm:77 BEQ @SKIP_DATA_LOAD_2
    case 0xC4D00E: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/audio/change_music.asm:78 CMP UNKNOWN_7EB543
    case 0xC4D010: cpu.execute_instruction<0xCD>(0x00B6F4, 3); return true;
    // src/audio/change_music.asm:79 BEQ @SKIP_DATA_LOAD_2
    case 0xC4D013: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/audio/change_music.asm:80 STA CURRENT_SECONDARY_SAMPLE_PACK
    case 0xC4D015: cpu.execute_instruction<0x8D>(0x00B6F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4D018: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x00CCE2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D018.
    case 0xC4D01A: cpu.execute_instruction<0xCC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4D01B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4D01D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D01D.
    case 0xC4D01F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/change_music.asm:81 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4D020: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/audio/change_music.asm:82 LDA @LOCAL00
    case 0xC4D022: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:83 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4D024: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:83 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4D026: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:83 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4D027: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:84 STA @VIRTUAL02
    case 0xC4D029: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/audio/change_music.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D02B: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/audio/change_music.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D02D: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/audio/change_music.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D02F: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/audio/change_music.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D031: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/audio/change_music.asm:86 CLC
    case 0xC4D033: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:87 ADC @VIRTUAL0A
    case 0xC4D034: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/audio/change_music.asm:88 STA @VIRTUAL0A
    case 0xC4D036: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/audio/change_music.asm:89 LDA [@VIRTUAL0A] ;music_pack_pointer::bank
    case 0xC4D038: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/audio/change_music.asm:90 AND #$00FF
    case 0xC4D03A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC4D03A.
    case 0xC4D03C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/audio/change_music.asm:91 JSR GET_AUDIO_BANK
    case 0xC4D03D: cpu.execute_instruction<0x20>(0x00CEDD, 3); return true;
    // src/audio/change_music.asm:92 TAX
    case 0xC4D040: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:93 LDA @VIRTUAL02
    case 0xC4D041: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/audio/change_music.asm:94 INC
    case 0xC4D043: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/change_music.asm:95 CLC
    case 0xC4D044: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:96 ADC @VIRTUAL06
    case 0xC4D045: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/audio/change_music.asm:97 STA @VIRTUAL06
    case 0xC4D047: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/audio/change_music.asm:98 LDA [@VIRTUAL06] ;music_pack_pointer::addr
    case 0xC4D049: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/audio/change_music.asm:99 AND SEQUENCE_PACK_MASK
    case 0xC4D04B: cpu.execute_instruction<0x2D>(0x00B6F8, 3); return true;
    // src/audio/change_music.asm:100 JSL LOAD_SPC700_DATA
    case 0xC4D04E: cpu.execute_instruction<0x22>(0xC0AAE5, 4); return true;
    // src/audio/change_music.asm:102 LDY @LOCAL01
    case 0xC4D052: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/audio/change_music.asm:103 TYA
    case 0xC4D054: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4D055: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4D057: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(pack_table_entry)
    case 0xC4D058: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:105 TAX
    case 0xC4D05A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:106 INX
    case 0xC4D05B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/audio/change_music.asm:107 INX
    case 0xC4D05C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/audio/change_music.asm:108 LDA f:MUSIC_DATASET_TABLE,X ;pack_table_entry::sequence_pack
    case 0xC4D05D: cpu.execute_instruction<0xBF>(0xC4CAA5, 4); return true;
    // src/audio/change_music.asm:109 AND #$00FF
    case 0xC4D061: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:109 AND #$00FF
    // Overlapping static entry reached from 0xC4D061.
    case 0xC4D063: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/audio/change_music.asm:110 STA @LOCAL00
    case 0xC4D064: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/audio/change_music.asm:111 CMP CURRENT_SEQUENCE_PACK
    case 0xC4D066: cpu.execute_instruction<0xCD>(0x00B6F2, 3); return true;
    // src/audio/change_music.asm:112 BEQ @SKIP_DATA_LOAD_3
    case 0xC4D069: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/audio/change_music.asm:113 CMP #$00FF
    case 0xC4D06B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:113 CMP #$00FF
    // Overlapping static entry reached from 0xC4D06B.
    case 0xC4D06D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/audio/change_music.asm:114 BEQ @SKIP_DATA_LOAD_3
    case 0xC4D06E: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/audio/change_music.asm:115 STA CURRENT_SEQUENCE_PACK
    case 0xC4D070: cpu.execute_instruction<0x8D>(0x00B6F2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4D073: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x00CCE2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D073.
    case 0xC4D075: cpu.execute_instruction<0xCC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4D076: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4D078: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D078.
    case 0xC4D07A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/change_music.asm:116 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4D07B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/audio/change_music.asm:117 LDA @LOCAL00
    case 0xC4D07D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/change_music.asm:118 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4D07F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/change_music.asm:118 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4D081: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/change_music.asm:118 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4D082: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/change_music.asm:119 STA @VIRTUAL02
    case 0xC4D084: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/audio/change_music.asm:120 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D086: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/audio/change_music.asm:120 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D088: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/audio/change_music.asm:120 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D08A: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/audio/change_music.asm:120 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D08C: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/audio/change_music.asm:121 CLC
    case 0xC4D08E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:122 ADC @VIRTUAL0A
    case 0xC4D08F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/audio/change_music.asm:123 STA @VIRTUAL0A
    case 0xC4D091: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/audio/change_music.asm:124 LDA [@VIRTUAL0A] ;music_pack_pointer::bank
    case 0xC4D093: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/audio/change_music.asm:125 AND #$00FF
    case 0xC4D095: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/change_music.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC4D095.
    case 0xC4D097: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/audio/change_music.asm:126 JSR GET_AUDIO_BANK
    case 0xC4D098: cpu.execute_instruction<0x20>(0x00CEDD, 3); return true;
    // src/audio/change_music.asm:127 TAX
    case 0xC4D09B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/change_music.asm:128 LDA @VIRTUAL02
    case 0xC4D09C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/audio/change_music.asm:129 INC
    case 0xC4D09E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/change_music.asm:130 CLC
    case 0xC4D09F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/change_music.asm:131 ADC @VIRTUAL06
    case 0xC4D0A0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/audio/change_music.asm:132 STA @VIRTUAL06
    case 0xC4D0A2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/audio/change_music.asm:133 LDA [@VIRTUAL06] ;music_pack_pointer::addr
    case 0xC4D0A4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/audio/change_music.asm:134 AND SEQUENCE_PACK_MASK
    case 0xC4D0A6: cpu.execute_instruction<0x2D>(0x00B6F8, 3); return true;
    // src/audio/change_music.asm:135 JSL LOAD_SPC700_DATA
    case 0xC4D0A9: cpu.execute_instruction<0x22>(0xC0AAE5, 4); return true;
    // src/audio/change_music.asm:137 LDY @LOCAL01
    case 0xC4D0AD: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/audio/change_music.asm:138 TYA
    case 0xC4D0AF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/audio/change_music.asm:139 INC
    case 0xC4D0B0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/change_music.asm:140 JSL UNKNOWN_C0ABBD
    case 0xC4D0B1: cpu.execute_instruction<0x22>(0xC0AB9C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/audio/change_music.asm:142 END_C_FUNCTION
    case 0xC4D0B5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/audio/change_music.asm:142 END_C_FUNCTION
    case 0xC4D0B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/get_audio_bank.asm (source_named).
bool execute_audio_get_audio_bank_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/audio/get_audio_bank.asm:3 BEGIN_C_FUNCTION
    case 0xC4CEDD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4CEDF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4CEE0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4CEE1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4CEE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CEE2.
    case 0xC4CEE4: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4CEE5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/audio/get_audio_bank.asm:7 END_STACK_VARS
    case 0xC4CEE6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/audio/get_audio_bank.asm:8 STA @LOCAL00
    case 0xC4CEE7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/audio/get_audio_bank.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC4CEE4.
    case 0xC4CEE8: cpu.execute_instruction<0x0E>(0x00FFA9, 3); return true;
    // src/audio/get_audio_bank.asm:9 LDA #.LOWORD(-1)
    case 0xC4CEE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/audio/get_audio_bank.asm:9 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4CEE9.
    case 0xC4CEEB: cpu.execute_instruction<0xFF>(0xB6F88D, 4); return true;
    // src/audio/get_audio_bank.asm:10 STA SEQUENCE_PACK_MASK
    case 0xC4CEEC: cpu.execute_instruction<0x8D>(0x00B6F8, 3); return true;
    // src/audio/get_audio_bank.asm:11 LDA @LOCAL00
    case 0xC4CEEF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/audio/get_audio_bank.asm:13 CLC ;mother 2's audio pack addresses are relative to the first bank audio packs are stored in, for some reason
    case 0xC4CEF1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/get_audio_bank.asm:14 ADC #^AUDIO_PACK_108
    case 0xC4CEF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x0000E2, 3); return true;
    // src/audio/get_audio_bank.asm:14 ADC #^AUDIO_PACK_108
    // Overlapping static entry reached from 0xC4CEF2.
    case 0xC4CEF4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/audio/get_audio_bank.asm:16 END_C_FUNCTION
    case 0xC4CEF5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/audio/get_audio_bank.asm:16 END_C_FUNCTION
    case 0xC4CEF6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/initialize_music_subsystem.asm (source_named).
bool execute_audio_initialize_music_subsystem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/audio/initialize_music_subsystem.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CEF7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    case 0xC4CEF9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    case 0xC4CEFA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    case 0xC4CEFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CEFB.
    case 0xC4CEFD: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/audio/initialize_music_subsystem.asm:7 END_STACK_VARS
    case 0xC4CEFE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:8 LDA #$FFFF
    case 0xC4CEFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/audio/initialize_music_subsystem.asm:8 LDA #$FFFF
    // Overlapping static entry reached from 0xC4CEFF.
    case 0xC4CF01: cpu.execute_instruction<0xFF>(0xB6F28D, 4); return true;
    // src/audio/initialize_music_subsystem.asm:9 STA CURRENT_SEQUENCE_PACK
    case 0xC4CF02: cpu.execute_instruction<0x8D>(0x00B6F2, 3); return true;
    // src/audio/initialize_music_subsystem.asm:10 STA CURRENT_PRIMARY_SAMPLE_PACK
    case 0xC4CF05: cpu.execute_instruction<0x8D>(0x00B6EE, 3); return true;
    // src/audio/initialize_music_subsystem.asm:11 LDA f:MUSIC_DATASET_TABLE + (0 * .SIZEOF(pack_table_entry)) + pack_table_entry::sequence_pack
    case 0xC4CF08: cpu.execute_instruction<0xAF>(0xC4CAA7, 4); return true;
    // src/audio/initialize_music_subsystem.asm:12 AND #$00FF
    case 0xC4CF0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/initialize_music_subsystem.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC4CF0C.
    case 0xC4CF0E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/audio/initialize_music_subsystem.asm:13 STA @LOCAL01
    case 0xC4CF0F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/audio/initialize_music_subsystem.asm:14 STA UNKNOWN_7EB543
    case 0xC4CF11: cpu.execute_instruction<0x8D>(0x00B6F4, 3); return true;
    // src/audio/initialize_music_subsystem.asm:15 STA CURRENT_SECONDARY_SAMPLE_PACK
    case 0xC4CF14: cpu.execute_instruction<0x8D>(0x00B6F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4CF17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x00CCE2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CF17.
    case 0xC4CF19: cpu.execute_instruction<0xCC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4CF1A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4CF1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CF1C.
    case 0xC4CF1E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/initialize_music_subsystem.asm:16 LOADPTR MUSIC_PACK_POINTER_TABLE, @VIRTUAL06
    case 0xC4CF1F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/audio/initialize_music_subsystem.asm:17 LDA @LOCAL01
    case 0xC4CF21: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/audio/initialize_music_subsystem.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4CF23: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/audio/initialize_music_subsystem.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4CF25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/audio/initialize_music_subsystem.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(music_pack_pointer)
    case 0xC4CF26: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/audio/initialize_music_subsystem.asm:19 TAY
    case 0xC4CF28: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:20 STY @LOCAL00
    case 0xC4CF29: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/audio/initialize_music_subsystem.asm:21 TYA
    case 0xC4CF2B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/audio/initialize_music_subsystem.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4CF2C: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/audio/initialize_music_subsystem.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4CF2E: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/audio/initialize_music_subsystem.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4CF30: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/audio/initialize_music_subsystem.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4CF32: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/audio/initialize_music_subsystem.asm:23 CLC
    case 0xC4CF34: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:24 ADC @VIRTUAL0A
    case 0xC4CF35: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/audio/initialize_music_subsystem.asm:25 STA @VIRTUAL0A
    case 0xC4CF37: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/audio/initialize_music_subsystem.asm:26 LDA [@VIRTUAL0A] ;music_pack_pointer::bank
    case 0xC4CF39: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/audio/initialize_music_subsystem.asm:27 AND #$00FF
    case 0xC4CF3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/audio/initialize_music_subsystem.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC4CF3B.
    case 0xC4CF3D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/audio/initialize_music_subsystem.asm:28 JSR GET_AUDIO_BANK
    case 0xC4CF3E: cpu.execute_instruction<0x20>(0x00CEDD, 3); return true;
    // src/audio/initialize_music_subsystem.asm:29 TAX
    case 0xC4CF41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:30 LDY @LOCAL00
    case 0xC4CF42: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/audio/initialize_music_subsystem.asm:31 TYA
    case 0xC4CF44: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:32 INC
    case 0xC4CF45: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:33 CLC
    case 0xC4CF46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/audio/initialize_music_subsystem.asm:34 ADC @VIRTUAL06
    case 0xC4CF47: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/audio/initialize_music_subsystem.asm:35 STA @VIRTUAL06
    case 0xC4CF49: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/audio/initialize_music_subsystem.asm:36 LDA [@VIRTUAL06] ;music_pack_pointer::addr
    case 0xC4CF4B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/audio/initialize_music_subsystem.asm:37 AND SEQUENCE_PACK_MASK
    case 0xC4CF4D: cpu.execute_instruction<0x2D>(0x00B6F8, 3); return true;
    // src/audio/initialize_music_subsystem.asm:38 JSL LOAD_SPC700_DATA
    case 0xC4CF50: cpu.execute_instruction<0x22>(0xC0AAE5, 4); return true;
    // src/audio/initialize_music_subsystem.asm:39 LDA #$0001
    case 0xC4CF54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/audio/initialize_music_subsystem.asm:39 LDA #$0001
    // Overlapping static entry reached from 0xC4CF54.
    case 0xC4CF56: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/audio/initialize_music_subsystem.asm:40 STA ENABLE_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC4CF57: cpu.execute_instruction<0x8D>(0x00B6FA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/audio/initialize_music_subsystem.asm:41 END_C_FUNCTION
    case 0xC4CF5A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/audio/initialize_music_subsystem.asm:41 END_C_FUNCTION
    case 0xC4CF5B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/load_spc700_data.asm (source_named).
bool execute_audio_load_spc700_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/load_spc700_data.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AAE5: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/audio/load_spc700_data.asm:4 STA SPC_DATA_PTR
    case 0xC0AAE7: cpu.execute_instruction<0x8D>(0x0000C4, 3); return true;
    // src/audio/load_spc700_data.asm:5 STX SPC_DATA_PTR+2
    case 0xC0AAEA: cpu.execute_instruction<0x8E>(0x0000C6, 3); return true;
    // src/audio/load_spc700_data.asm:6 PHB
    case 0xC0AAED: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:7 PEA $0000
    case 0xC0AAEE: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/audio/load_spc700_data.asm:8 PLB
    case 0xC0AAF1: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:9 PLB
    case 0xC0AAF2: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:10 PHD
    case 0xC0AAF3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:11 PEA $0000
    case 0xC0AAF4: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/audio/load_spc700_data.asm:12 PLD
    case 0xC0AAF7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:13 LDY #$0000
    case 0xC0AAF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/audio/load_spc700_data.asm:13 LDY #$0000
    // Overlapping static entry reached from 0xC0AAF8.
    case 0xC0AAFA: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/audio/load_spc700_data.asm:14 LDA APUIO0
    case 0xC0AAFB: cpu.execute_instruction<0xAD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:15 CMP #$BBAA
    case 0xC0AAFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000AA, 2); else cpu.execute_instruction<0xC9>(0x00BBAA, 3); return true;
    // src/audio/load_spc700_data.asm:15 CMP #$BBAA
    // Overlapping static entry reached from 0xC0AAFE.
    case 0xC0AB00: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:16 BEQ @UNKNOWN0
    case 0xC0AB01: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/audio/load_spc700_data.asm:17 JSR WAIT_FOR_SPC700
    case 0xC0AB03: cpu.execute_instruction<0x20>(0x00AB87, 3); return true;
    // src/audio/load_spc700_data.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AB06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:20 LDA NMITIMEN_MIRROR
    case 0xC0AB08: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/audio/load_spc700_data.asm:21 AND #$007F
    case 0xC0AB0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x008D7F, 3); return true;
    // src/audio/load_spc700_data.asm:22 STA NMITIMEN_MIRROR
    case 0xC0AB0D: cpu.execute_instruction<0x8D>(0x00001E, 3); return true;
    // src/audio/load_spc700_data.asm:22 STA NMITIMEN_MIRROR
    // Overlapping static entry reached from 0xC0AB0B.
    case 0xC0AB0E: cpu.execute_instruction<0x1E>(0x008F00, 3); return true;
    // src/audio/load_spc700_data.asm:23 STA f:NMITIMEN
    case 0xC0AB10: cpu.execute_instruction<0x8F>(0x004200, 4); return true;
    // src/audio/load_spc700_data.asm:23 STA f:NMITIMEN
    // Overlapping static entry reached from 0xC0AB0E.
    case 0xC0AB11: cpu.execute_instruction<0x00>(0x000042, 2); return true;
    // src/audio/load_spc700_data.asm:24 LDA #$00CC
    case 0xC0AB14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0080CC, 3); return true;
    // src/audio/load_spc700_data.asm:25 BRA @UNKNOWN7
    case 0xC0AB16: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/audio/load_spc700_data.asm:25 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC0AB14.
    case 0xC0AB17: cpu.execute_instruction<0x26>(0x0000B7, 2); return true;
    // src/audio/load_spc700_data.asm:27 LDA [<SPC_DATA_PTR],Y
    case 0xC0AB18: cpu.execute_instruction<0xB7>(0x0000C4, 2); return true;
    // src/audio/load_spc700_data.asm:27 LDA [<SPC_DATA_PTR],Y
    // Overlapping static entry reached from 0xC0AB17.
    case 0xC0AB19: cpu.execute_instruction<0xC4>(0x0000C8, 2); return true;
    // src/audio/load_spc700_data.asm:28 INY
    case 0xC0AB1A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:29 XBA
    case 0xC0AB1B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:30 LDA #$0000
    case 0xC0AB1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/audio/load_spc700_data.asm:31 BRA @UNKNOWN4
    case 0xC0AB1E: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/audio/load_spc700_data.asm:31 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC0AB1C.
    case 0xC0AB1F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:33 XBA
    case 0xC0AB20: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:34 LDA [<SPC_DATA_PTR],Y
    case 0xC0AB21: cpu.execute_instruction<0xB7>(0x0000C4, 2); return true;
    // src/audio/load_spc700_data.asm:35 INY
    case 0xC0AB23: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:36 XBA
    case 0xC0AB24: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:38 CMP APUIO0
    case 0xC0AB25: cpu.execute_instruction<0xCD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:39 BNE @UNKNOWN3
    case 0xC0AB28: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/audio/load_spc700_data.asm:40 INC
    case 0xC0AB2A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC0AB2B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:43 STA APUIO0
    case 0xC0AB2D: cpu.execute_instruction<0x8D>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AB30: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:45 DEX
    case 0xC0AB32: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:46 BNE @UNKNOWN2
    case 0xC0AB33: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/audio/load_spc700_data.asm:48 CMP APUIO0
    case 0xC0AB35: cpu.execute_instruction<0xCD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:49 BNE @UNKNOWN5
    case 0xC0AB38: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/audio/load_spc700_data.asm:51 ADC #$0003
    case 0xC0AB3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000003, 2); else cpu.execute_instruction<0x69>(0x00F003, 3); return true;
    // src/audio/load_spc700_data.asm:52 BEQ @UNKNOWN6
    case 0xC0AB3C: cpu.execute_instruction<0xF0>(0x0000FC, 2); return true;
    // src/audio/load_spc700_data.asm:52 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC0AB3A.
    case 0xC0AB3D: cpu.execute_instruction<0xFC>(0x00C248, 3); return true;
    // src/audio/load_spc700_data.asm:54 PHA
    case 0xC0AB3E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC0AB3F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:55 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0AB3D.
    case 0xC0AB40: cpu.execute_instruction<0x20>(0x00C4B7, 3); return true;
    // src/audio/load_spc700_data.asm:56 LDA [<SPC_DATA_PTR],Y
    case 0xC0AB41: cpu.execute_instruction<0xB7>(0x0000C4, 2); return true;
    // src/audio/load_spc700_data.asm:57 BNE @UNKNOWN8
    case 0xC0AB43: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/audio/load_spc700_data.asm:58 TAX
    case 0xC0AB45: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:59 LDA #$0500
    case 0xC0AB46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000500, 3); return true;
    // src/audio/load_spc700_data.asm:59 LDA #$0500
    // Overlapping static entry reached from 0xC0AB46.
    case 0xC0AB48: cpu.execute_instruction<0x05>(0x000080, 2); return true;
    // src/audio/load_spc700_data.asm:60 BRA @UNKNOWN9
    case 0xC0AB49: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/audio/load_spc700_data.asm:60 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC0AB48.
    case 0xC0AB4A: cpu.execute_instruction<0x07>(0x0000AA, 2); return true;
    // src/audio/load_spc700_data.asm:62 TAX
    case 0xC0AB4B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:63 INY
    case 0xC0AB4C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:64 INY
    case 0xC0AB4D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:65 LDA [<SPC_DATA_PTR],Y
    case 0xC0AB4E: cpu.execute_instruction<0xB7>(0x0000C4, 2); return true;
    // src/audio/load_spc700_data.asm:66 INY
    case 0xC0AB50: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:67 INY
    case 0xC0AB51: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:69 STA APUIO2
    case 0xC0AB52: cpu.execute_instruction<0x8D>(0x002142, 3); return true;
    // src/audio/load_spc700_data.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AB55: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:71 CPX #$0001
    case 0xC0AB57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/audio/load_spc700_data.asm:71 CPX #$0001
    // Overlapping static entry reached from 0xC0AB57.
    case 0xC0AB59: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/audio/load_spc700_data.asm:72 LDA #$0000
    case 0xC0AB5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002A00, 3); return true;
    // src/audio/load_spc700_data.asm:73 ROL
    case 0xC0AB5C: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:74 STA APUIO1
    case 0xC0AB5D: cpu.execute_instruction<0x8D>(0x002141, 3); return true;
    // src/audio/load_spc700_data.asm:75 ADC #$007F
    case 0xC0AB60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00687F, 3); return true;
    // src/audio/load_spc700_data.asm:76 PLA
    case 0xC0AB62: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:77 STA APUIO0
    case 0xC0AB63: cpu.execute_instruction<0x8D>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:79 CMP APUIO0
    case 0xC0AB66: cpu.execute_instruction<0xCD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:80 BNE @UNKNOWN10
    case 0xC0AB69: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/audio/load_spc700_data.asm:81 BVS @UNKNOWN1
    case 0xC0AB6B: cpu.execute_instruction<0x70>(0x0000AB, 2); return true;
    // src/audio/load_spc700_data.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC0AB6D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:84 LDA APUIO0
    case 0xC0AB6F: cpu.execute_instruction<0xAD>(0x002140, 3); return true;
    // src/audio/load_spc700_data.asm:85 BNE @UNKNOWN11
    case 0xC0AB72: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/audio/load_spc700_data.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AB74: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:87 LDA NMITIMEN_MIRROR
    case 0xC0AB76: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/audio/load_spc700_data.asm:88 ORA #$0080
    case 0xC0AB79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x008D80, 3); return true;
    // src/audio/load_spc700_data.asm:89 STA NMITIMEN_MIRROR
    case 0xC0AB7B: cpu.execute_instruction<0x8D>(0x00001E, 3); return true;
    // src/audio/load_spc700_data.asm:89 STA NMITIMEN_MIRROR
    // Overlapping static entry reached from 0xC0AB79.
    case 0xC0AB7C: cpu.execute_instruction<0x1E>(0x008F00, 3); return true;
    // src/audio/load_spc700_data.asm:90 STA f:NMITIMEN
    case 0xC0AB7E: cpu.execute_instruction<0x8F>(0x004200, 4); return true;
    // src/audio/load_spc700_data.asm:90 STA f:NMITIMEN
    // Overlapping static entry reached from 0xC0AB7C.
    case 0xC0AB7F: cpu.execute_instruction<0x00>(0x000042, 2); return true;
    // src/audio/load_spc700_data.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC0AB82: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/load_spc700_data.asm:92 PLD
    case 0xC0AB84: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:93 PLB
    case 0xC0AB85: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/audio/load_spc700_data.asm:94 RTL
    case 0xC0AB86: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/pause_music.asm (source_named).
bool execute_audio_pause_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/pause_music.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1341D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/audio/pause_music.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC1341F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/pause_music.asm:5 LDA #$0001
    case 0xC13421: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/audio/pause_music.asm:6 STA DISABLE_HPPP_ROLLING
    case 0xC13423: cpu.execute_instruction<0x8D>(0x00994B, 3); return true;
    // src/audio/pause_music.asm:6 STA DISABLE_HPPP_ROLLING
    // Overlapping static entry reached from 0xC13421.
    case 0xC13424: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/audio/pause_music.asm:6 STA DISABLE_HPPP_ROLLING
    // Overlapping static entry reached from 0xC13424.
    case 0xC13425: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/audio/pause_music.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC13426: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/pause_music.asm:8 RTL
    case 0xC13428: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/play_sound.asm (source_named).
bool execute_audio_play_sound_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/play_sound.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABBF: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/audio/play_sound.asm:4 CMP #$0000
    case 0xC0ABC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00F000, 3); return true;
    // src/audio/play_sound.asm:5 BEQ PLAY_SOUND_UNKNOWN0
    case 0xC0ABC3: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/audio/play_sound.asm:5 BEQ PLAY_SOUND_UNKNOWN0
    // Overlapping static entry reached from 0xC0ABC1.
    case 0xC0ABC4: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/audio/play_sound.asm:6 LDX SOUND_EFFECT_QUEUE_END_INDEX
    case 0xC0ABC5: cpu.execute_instruction<0xAE>(0x0000C8, 3); return true;
    // src/audio/play_sound.asm:7 ORA SOUND_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0ABC8: cpu.execute_instruction<0x0D>(0x001B38, 3); return true;
    // src/audio/play_sound.asm:8 STA SOUND_EFFECT_QUEUE,X
    case 0xC0ABCB: cpu.execute_instruction<0x9D>(0x001B30, 3); return true;
    // src/audio/play_sound.asm:9 TXA
    case 0xC0ABCE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/audio/play_sound.asm:10 INC
    case 0xC0ABCF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/audio/play_sound.asm:11 AND #$0007
    case 0xC0ABD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x008D07, 3); return true;
    // src/audio/play_sound.asm:12 STA SOUND_EFFECT_QUEUE_END_INDEX
    case 0xC0ABD2: cpu.execute_instruction<0x8D>(0x0000C8, 3); return true;
    // src/audio/play_sound.asm:12 STA SOUND_EFFECT_QUEUE_END_INDEX
    // Overlapping static entry reached from 0xC0ABD0.
    case 0xC0ABD3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/audio/play_sound.asm:12 STA SOUND_EFFECT_QUEUE_END_INDEX
    // Overlapping static entry reached from 0xC0ABD3.
    case 0xC0ABD4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/audio/play_sound.asm:13 LDA #$0080
    case 0xC0ABD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x004D80, 3); return true;
    // src/audio/play_sound.asm:14 EOR SOUND_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0ABD7: cpu.execute_instruction<0x4D>(0x001B38, 3); return true;
    // src/audio/play_sound.asm:14 EOR SOUND_EFFECT_UPPER_BIT_FLIPPER
    // Overlapping static entry reached from 0xC0ABD5.
    case 0xC0ABD8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/audio/play_sound.asm:14 EOR SOUND_EFFECT_UPPER_BIT_FLIPPER
    // Overlapping static entry reached from 0xC0ABD8.
    case 0xC0ABD9: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/audio/play_sound.asm:15 STA SOUND_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0ABDA: cpu.execute_instruction<0x8D>(0x001B38, 3); return true;
    // src/audio/play_sound.asm:16 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABDD: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/audio/play_sound.asm:17 RTL
    case 0xC0ABDF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/audio/play_sound.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ABE0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/play_sound.asm:20 LDA #$0057
    case 0xC0ABE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000057, 2); else cpu.execute_instruction<0xA9>(0x008F57, 3); return true;
    // src/audio/play_sound.asm:21 STA f:APUIO3
    case 0xC0ABE4: cpu.execute_instruction<0x8F>(0x002143, 4); return true;
    // src/audio/play_sound.asm:21 STA f:APUIO3
    // Overlapping static entry reached from 0xC0ABE2.
    case 0xC0ABE5: cpu.execute_instruction<0x43>(0x000021, 2); return true;
    // src/audio/play_sound.asm:21 STA f:APUIO3
    // Overlapping static entry reached from 0xC0ABE5.
    case 0xC0ABE7: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/audio/play_sound.asm:22 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABE8: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/audio/play_sound.asm:23 RTL
    case 0xC0ABEA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/play_sound_and_unknown.asm (source_named).
bool execute_audio_play_sound_and_unknown_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/play_sound_and_unknown.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC21578: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/audio/play_sound_and_unknown.asm:4 JSL PLAY_SOUND
    case 0xC2157A: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/audio/play_sound_and_unknown.asm:5 JSL UNKNOWN_C12E42
    case 0xC2157E: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/audio/play_sound_and_unknown.asm:6 RTL
    case 0xC21582: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/resume_music.asm (source_named).
bool execute_audio_resume_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/resume_music.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC13435: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/audio/resume_music.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xC13433.
    case 0xC13436: cpu.execute_instruction<0x31>(0x0000E2, 2); return true;
    // src/audio/resume_music.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC13437: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/resume_music.asm:4 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC13436.
    case 0xC13438: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/audio/resume_music.asm:5 LDA #$0000
    case 0xC13439: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/audio/resume_music.asm:6 STA HALF_HPPP_METER_SPEED
    case 0xC1343B: cpu.execute_instruction<0x8D>(0x009949, 3); return true;
    // src/audio/resume_music.asm:6 STA HALF_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xC13439.
    case 0xC1343C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000099, 2); else cpu.execute_instruction<0x49>(0x008D99, 3); return true;
    // src/audio/resume_music.asm:7 STA DISABLE_HPPP_ROLLING
    case 0xC1343E: cpu.execute_instruction<0x8D>(0x00994B, 3); return true;
    // src/audio/resume_music.asm:7 STA DISABLE_HPPP_ROLLING
    // Overlapping static entry reached from 0xC1343C.
    case 0xC1343F: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/audio/resume_music.asm:7 STA DISABLE_HPPP_ROLLING
    // Overlapping static entry reached from 0xC1343F.
    case 0xC13440: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/audio/resume_music.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC13441: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/audio/resume_music.asm:9 RTL
    case 0xC13443: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/set_num_channels.asm (source_named).
bool execute_audio_set_num_channels_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/audio/set_num_channels.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D0B7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4D0B9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4D0BA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4D0BB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4D0BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D0BC.
    case 0xC4D0BE: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4D0BF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/audio/set_num_channels.asm:7 END_STACK_VARS
    case 0xC4D0C0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/audio/set_num_channels.asm:8 TAX
    case 0xC4D0C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/audio/set_num_channels.asm:9 BEQ @MONO
    case 0xC4D0C2: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    case 0xC4D0C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00AC12, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    // Overlapping static entry reached from 0xC4D0C4.
    case 0xC4D0C6: cpu.execute_instruction<0xAC>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    case 0xC4D0C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    case 0xC4D0C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    // Overlapping static entry reached from 0xC4D0C9.
    case 0xC4D0CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/set_num_channels.asm:10 LOADPTR STEREO_MONO_DATA+7, @LOCAL00
    case 0xC4D0CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/audio/set_num_channels.asm:11 BRA @LOAD
    case 0xC4D0CE: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    case 0xC4D0D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00AC0B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    // Overlapping static entry reached from 0xC4D0D0.
    case 0xC4D0D2: cpu.execute_instruction<0xAC>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    case 0xC4D0D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    case 0xC4D0D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    // Overlapping static entry reached from 0xC4D0D5.
    case 0xC4D0D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/audio/set_num_channels.asm:13 LOADPTR STEREO_MONO_DATA, @LOCAL00
    case 0xC4D0D8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/audio/set_num_channels.asm:15 LDX @LOCAL00+2
    case 0xC4D0DA: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/audio/set_num_channels.asm:16 LDA @LOCAL00
    case 0xC4D0DC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/audio/set_num_channels.asm:17 JSL LOAD_SPC700_DATA
    case 0xC4D0DE: cpu.execute_instruction<0x22>(0xC0AAE5, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/audio/set_num_channels.asm:18 END_C_FUNCTION
    case 0xC4D0E2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/audio/set_num_channels.asm:18 END_C_FUNCTION
    case 0xC4D0E3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/stop_music.asm (source_named).
bool execute_audio_stop_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/stop_music.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ABA5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/audio/stop_music.asm:4 LDA #$0000
    case 0xC0ABA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/audio/stop_music.asm:5 STA f:APUIO0
    case 0xC0ABA9: cpu.execute_instruction<0x8F>(0x002140, 4); return true;
    // src/audio/stop_music.asm:5 STA f:APUIO0
    // Overlapping static entry reached from 0xC0ABA7.
    case 0xC0ABAA: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/audio/stop_music.asm:6 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABAD: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/audio/stop_music.asm:8 JSL UNKNOWN_C0AC20
    case 0xC0ABAF: cpu.execute_instruction<0x22>(0xC0ABFF, 4); return true;
    // src/audio/stop_music.asm:9 CMP #$0000
    case 0xC0ABB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/audio/stop_music.asm:9 CMP #$0000
    // Overlapping static entry reached from 0xC0ABB3.
    case 0xC0ABB5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/audio/stop_music.asm:10 BNE @UNKNOWN0
    case 0xC0ABB6: cpu.execute_instruction<0xD0>(0x0000F7, 2); return true;
    // src/audio/stop_music.asm:11 LDA #$FFFF
    case 0xC0ABB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/audio/stop_music.asm:11 LDA #$FFFF
    // Overlapping static entry reached from 0xC0ABB8.
    case 0xC0ABBA: cpu.execute_instruction<0xFF>(0xB6EC8D, 4); return true;
    // src/audio/stop_music.asm:12 STA CURRENT_MUSIC_TRACK
    case 0xC0ABBB: cpu.execute_instruction<0x8D>(0x00B6EC, 3); return true;
    // src/audio/stop_music.asm:13 RTL
    case 0xC0ABBE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/stop_music_redirect.asm (source_named).
bool execute_audio_stop_music_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/stop_music_redirect.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC21571: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/audio/stop_music_redirect.asm:4 JSL STOP_MUSIC
    case 0xC21573: cpu.execute_instruction<0x22>(0xC0ABA5, 4); return true;
    // src/audio/stop_music_redirect.asm:5 RTL
    case 0xC21577: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/audio/wait_for_spc700.asm (source_named).
bool execute_audio_wait_for_spc700_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/audio/wait_for_spc700.asm:4 STZ APUIO2
    case 0xC0AB87: cpu.execute_instruction<0x9C>(0x002142, 3); return true;
    // src/audio/wait_for_spc700.asm:5 STZ APUIO0
    case 0xC0AB8A: cpu.execute_instruction<0x9C>(0x002140, 3); return true;
    // src/audio/wait_for_spc700.asm:7 LDA #$00FF
    case 0xC0AB8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/audio/wait_for_spc700.asm:7 LDA #$00FF
    // Overlapping static entry reached from 0xC0AB8D.
    case 0xC0AB8F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/audio/wait_for_spc700.asm:8 STA APUIO0
    case 0xC0AB90: cpu.execute_instruction<0x8D>(0x002140, 3); return true;
    // src/audio/wait_for_spc700.asm:9 LDA APUIO0
    case 0xC0AB93: cpu.execute_instruction<0xAD>(0x002140, 3); return true;
    // src/audio/wait_for_spc700.asm:10 CMP #$BBAA
    case 0xC0AB96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000AA, 2); else cpu.execute_instruction<0xC9>(0x00BBAA, 3); return true;
    // src/audio/wait_for_spc700.asm:10 CMP #$BBAA
    // Overlapping static entry reached from 0xC0AB96.
    case 0xC0AB98: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/audio/wait_for_spc700.asm:11 BNE @NOT_READY
    case 0xC0AB99: cpu.execute_instruction<0xD0>(0x0000F2, 2); return true;
    // src/audio/wait_for_spc700.asm:12 RTS
    case 0xC0AB9B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
